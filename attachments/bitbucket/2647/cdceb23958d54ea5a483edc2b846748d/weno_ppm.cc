#if 0
g++ -Wall -o weno -std=gnu++11 weno.cc
exit
#endif

#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

#define Ni 10
#define Nj 10
#define Nk 10

#define dxyz 0.1
// avoid any extrema in our test monomials
#define x0 1.
#define y0 1.
#define z0 1.

#define CCTK_GFINDEX3D(cctkGH, i, j, k) ((i) + (j) * Ni + (k) * (Ni*Nj))
#define DECLARE_CCTK_PARAMETERS do {} while(0)
#define CCTK_REAL double
#define cGH void
#define restrict /**/

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MAX3(a,b,c) MAX(MAX((a), (b)), (c))

const int GRHydro_stencil = 3;
const double weno_eps = 1e-10;

template <typename T> static inline T SQR (T const & x) { return x*x; }
template <typename T> static inline T CUBE (T const & x) { return x*x*x; }

/**
 * PPM reconstruction from GRHydro's PPM.cc file.
 */

/*
  Cases that must be considered:
  * basic hydro
  * hydro + temperature + ye
  * hydro + ye
  * basic mhd
  * mhd + temperature + ye 
  * mhd + ye 
  * mppm (not supported right now)
  * not supporting trivial_rp
  * with or without divergence cleaning
 */


static inline void steep(const double * const restrict x, 
			 const double * const restrict dx, 
			 double * const restrict dmx, 
			 const int i) {
  if ( (x[i+1] - x[i]) * (x[i]-x[i-1]) > 0.0 ) {
    dmx[i] = copysign(1.0,dx[i]) * MIN(fabs(dx[i]),
					MIN(2.0*fabs(x[i]-x[i-1]),
					     2.0*fabs(x[i+1]-x[i])));
  } else {
    dmx[i] = 0.0;
  }
}


static inline void monotonize(double* const restrict xminus,
			      const double* const restrict x,
			      double* const restrict xplus,
			      const int i) {

  if (  !(xplus[i]==x[i] && x[i]==xminus[i]) 
	&& ( (xplus[i]-x[i])*(x[i]-xminus[i]) <= 0.0 ) ) 
    {
      xminus[i] = x[i];
      xplus[i] = x[i];
    }  else if( 6.0 * (xplus[i]-xminus[i]) * 
		(x[i]-0.5*(xplus[i]+xminus[i])) >
		(xplus[i]-xminus[i])*(xplus[i]-xminus[i]) )
    {
      xminus[i] = 3.0*x[i]-2.0*xplus[i]; 
    } else if( 6.0 * (xplus[i]-xminus[i]) * 
	       (x[i]-0.5*(xplus[i]+xminus[i])) <
	       -(xplus[i]-xminus[i])*(xplus[i]-xminus[i]) ) 
    {
      xplus[i] = 3.0*x[i]-2.0*xminus[i]; 
    }
  
  return;
}



// kept only rho variable
template<bool do_temp, bool do_ye, bool do_mhd, 
	 bool dc_flag, bool do_ppm_detect>
void GRHydro_ppm1d_cxx(const int nx, 
		      const double dx, 
		      const double* const restrict rho, 
		      double* const restrict rhominus, 
		      double* const restrict rhoplus)
{
  DECLARE_CCTK_PARAMETERS;

  double drho[nx], d2rho[nx];
  double dmrho[nx];
  double tilde_flatten[nx];
  
  const double onesixth = 1.0/6.0;

  //  Average slopes delta_m(a). See (1.7) of Colella and Woodward, p.178
  //  This is the expression for an even grid.
  for(int i=1; i < nx-1; ++i) {
    drho[i]   = 0.5 * (rho[i+1]-rho[i-1]);
    d2rho[i]  = rho[i+1] - 2.0 * rho[i] + rho[i-1];
  }

  //  Steepened slope. See (1.8) of Colella and Woodward, p.178
  for(int i=1; i<nx-1; ++i) {
    steep(rho,drho,dmrho,i);
  }

  // Initial boundary states. See (1.9) of Colella and Woodward, p.178
  for(int i=1; i<nx-2; ++i) {
    rhoplus[i] = 0.5 * (rho[i] + rho[i+1]) + 
      (dmrho[i] - dmrho[i+1]) * onesixth;
  }

  // fill minus states
  for(int i=1; i<nx-2; ++i) {
    rhominus[i+1] = rhoplus[i];
  }

  /*
    Discontinuity steepening. See (1.14-17) of C&W.
    This is the detect routine which mat be 
    activated with the ppm_detect parameter
    Note that this part really also depends on the grid being even. 
    Note also that we don''t have access to the gas constant gamma.
    So this is just dropped from eq. (3.2) of C&W.
    We can get around this by just rescaling the constant k0 (ppm_k0 here).
  */

# if 0
  if(do_ppm_detect) {
    for(int i=2; i<nx-2; ++i) {
      double etatilde = 0.0;
      if ( d2rho[i+1]*d2rho[i-1] < 0.0 
	   && ( fabs(rho[i+1]-rho[i-1]) - ppm_epsilon_shock 
		* MIN(fabs(rho[i+1]), 
		      fabs(rho[i-1])) > 0.0) )
	{
	  etatilde = (rho[i-2] - rho[i+2] + 4.0 * drho[i]) / (drho[i] * 12.0);
	}
      double eta = MAX(0.0, MIN(1.0, ppm_eta1 * (etatilde - ppm_eta2)));
      if (ppm_k0 * fabs(drho[i]) * MIN(press[i-1],press[i+1]) 
	  < fabs(dpress[i]) * MIN(rho[i-1], rho[i+1])) 
	{
	  eta = 0.0;
	}
      rhominus[i] = rhominus[i] * (1.0 - eta) + 
	(rho[i-1] + 0.5 * dmrho[i-1]) * eta;
      rhoplus[i] = rhoplus[i] * (1.0 - eta) + 
	(rho[i+1] - 0.5 * dmrho[i+1]) * eta;
    }
  } 
  
  // flattening
  for(int i=2; i<nx-2; ++i) {
    const double dpress2 = press[i+2] - press[i-2];
    const double dvel = velx[i+1] - velx[i-1];
    double w=0.0;
    if ( (fabs(dpress[i]) >  ppm_epsilon * MIN(press[i-1],press[i+1])) 
	 && (dvel < 0.0) ) 
      {
	w = 1.0;
      } 
    if (fabs(dpress2) < ppm_small) 
      {
	tilde_flatten[i] = 1.0;
      } 
    else
      {
	tilde_flatten[i] = MAX(0.0, 1.0 - w * MAX(0.0, 
			   ppm_omega2 * (dpress[i] / dpress2 - ppm_omega1)));
      }
  } 
  
  for(int i=2; i<nx-2; ++i) {
    const double flatten = tilde_flatten[i];
    rhoplus[i] = flatten * rhoplus[i] + (1.0 - flatten) * rho[i];
    rhominus[i] = flatten * rhominus[i] + (1.0 - flatten) * rho[i];
  } // flattening
#endif // equiv to flatten = 1.0 (no flattening aparently)

  for(int i=GRHydro_stencil-1; i<nx-GRHydro_stencil+1; ++i) {
    monotonize(rhominus,rho,rhoplus,i);
  }

  return;
}


/**
   WENO5 reconstruction operator.
   Supports standard WENO5 (with and without adaptive epsilon), and WENO-z.
*/
template <bool do_wenoz, bool do_wham, bool do_adaptive_epsilon, int dir>
void apply(const int nx, const CCTK_REAL* const restrict a,
      CCTK_REAL* const restrict aminus, CCTK_REAL* const restrict aplus,
      const cGH* const cctkGH, const int j, const int k)
{
   DECLARE_CCTK_PARAMETERS;
   
#define A(i_) (a[ijk[i_]])
#define Aplus(i_) (aplus[ijk[i_]])
#define Aminus(i_) (aminus[ijk[i_]])
   
   for (int i=GRHydro_stencil-1; i < nx-GRHydro_stencil+1; ++i)
   {
      const int ijk[5] = {
                            dir ==0 ? (int)CCTK_GFINDEX3D(cctkGH, i-2, j, k) : dir ==1 ? (int)CCTK_GFINDEX3D(cctkGH, j, i-2, k) : (int)CCTK_GFINDEX3D(cctkGH, j, k, i-2), 
                            dir ==0 ? (int)CCTK_GFINDEX3D(cctkGH, i-1, j, k) : dir ==1 ? (int)CCTK_GFINDEX3D(cctkGH, j, i-1, k) : (int)CCTK_GFINDEX3D(cctkGH, j, k, i-1),
                            dir ==0 ? (int)CCTK_GFINDEX3D(cctkGH, i  , j, k) : dir ==1 ? (int)CCTK_GFINDEX3D(cctkGH, j, i  , k) : (int)CCTK_GFINDEX3D(cctkGH, j, k, i  ),
                            dir ==0 ? (int)CCTK_GFINDEX3D(cctkGH, i+1, j, k) : dir ==1 ? (int)CCTK_GFINDEX3D(cctkGH, j, i+1, k) : (int)CCTK_GFINDEX3D(cctkGH, j, k, i+1),
                            dir ==0 ? (int)CCTK_GFINDEX3D(cctkGH, i+2, j, k) : dir ==1 ? (int)CCTK_GFINDEX3D(cctkGH, j, i+2, k) : (int)CCTK_GFINDEX3D(cctkGH, j, k, i+2)
                         };
                       
   
         
   
      static_assert (! (do_wenoz && do_adaptive_epsilon), "Adaptive_epsilon not supported for WENO-Z");

      if (do_wenoz)
      {
         static const CCTK_REAL 
                         weno_coeffs[3][5] = { { 2.0/6.0, -7.0/6.0, 11.0/6.0, 0,        0 }, 
                                               { 0,       -1.0/6.0, 5.0/6.0,  2.0/6.0,  0 },
                                               { 0,        0,       2.0/6.0,  5.0/6.0, -1.0/6.0 } };
      
         const CCTK_REAL beta1 = 13.0/12.0*SQR(A(0)-2.0*A(1)+A(2)) + 1.0/4.0*SQR(A(0)-4.0*A(1)+3.0*A(2));
         const CCTK_REAL beta2 = 13.0/12.0*SQR(A(1)-2.0*A(2)+A(3)) + 1.0/4.0*SQR(A(1)-A(3));
         const CCTK_REAL beta3 = 13.0/12.0*SQR(A(2)-2.0*A(3)+A(4)) + 1.0/4.0*SQR(3.0*A(2)-4.0*A(3)+A(4));
            
            
         //    Compute weights according to weno-z alorithm
         const CCTK_REAL wbarplus1 = 1.0/10.0 * (1.0 + abs(beta1-beta3) / (weno_eps + beta1));
         const CCTK_REAL wbarplus2 = 3.0/5.0 * (1.0 + abs(beta1-beta3) / (weno_eps + beta2));
         const CCTK_REAL wbarplus3 = 3.0/10.0 * (1.0 + abs(beta1-beta3) / (weno_eps + beta3));

         const CCTK_REAL wbarminus1 = 3.0/10.0 * (1.0 + abs(beta1-beta3) / (weno_eps + beta1));
         const CCTK_REAL wbarminus2 = 3.0/5.0 * (1.0 + abs(beta1-beta3) / (weno_eps + beta2));
         const CCTK_REAL wbarminus3 = 1.0/10.0 * (1.0 + abs(beta1-beta3) / (weno_eps + beta3));
         
         const CCTK_REAL iwbarplussum = 1.0 / (wbarplus1 + wbarplus2 + wbarplus3);
         
         const CCTK_REAL wplus1 = wbarplus1 * iwbarplussum;
         const CCTK_REAL wplus2 = wbarplus2 * iwbarplussum;
         const CCTK_REAL wplus3 = wbarplus3 * iwbarplussum;
         
         const CCTK_REAL iwbarminussum = 1.0 / (wbarminus1 + wbarminus2 + wbarminus3);
         
         const CCTK_REAL wminus1 = wbarminus1 * iwbarminussum;
         const CCTK_REAL wminus2 = wbarminus2 * iwbarminussum;
         const CCTK_REAL wminus3 = wbarminus3 * iwbarminussum;
         
         //    Calculate the reconstruction
         Aplus(2) = 0;
         Aminus(2) = 0;
         for (int n=0; n < 5; ++n) {
               Aplus(2) += (wplus1 * weno_coeffs[0][n]
                          + wplus2 * weno_coeffs[1][n]
                          + wplus3 * weno_coeffs[2][n]) * A(n);
               Aminus(2) += (wminus1 * weno_coeffs[2][4-n]
                           + wminus2 * weno_coeffs[1][4-n]
                           + wminus3 * weno_coeffs[0][4-n]) * A(n);
         }
      } else if(do_wham) {
         
         // equ. of https://arxiv.org/abs/0704.2608 (WHAM paper) beta same for
         // center to interface, average to center and center to average
         // reconstruction (appendix A3 before equ A18)
         static const CCTK_REAL beta_shu[3][6] = { { 4.0/3.0,  -19.0/3.0, 25.0/3.0, 11.0/3.0, -31.0/3.0, 10.0/3.0 },
                                      { 4.0/3.0,  -13.0/3.0, 13.0/3.0, 5.0/3.0,  -13.0/3.0, 4.0/3.0 },
                                      { 10.0/3.0, -31.0/3.0, 25.0/3.0, 11.0/3.0, -19.0/3.0, 4.0/3.0 } };

         // these are from equ. (18) and (19) when substituting into each other
         // and sorting by the index i-r+j         
         static const CCTK_REAL weno_coeffs[3][5] = { { 1.0/3.0, -7.0/6.0, 11.0/6.0, 0,        0 },
                                                    {   0,       -1.0/6.0,  5.0/6.0, 1.0/3.0 , 0 },
                                                    {   0,       0,         1.0/3.0, 5.0/6.0, -1.0/6.0 } };
                                      
         //    Compute smoothness indicators
         //    This is from Tchekhovskoy et al 2007 (WHAM code paper).
         CCTK_REAL beta1  = beta_shu[0][0]*SQR(A(0))
                  + beta_shu[0][1]*A(0)*A(1)
                  + beta_shu[0][2]*SQR(A(1))
                  + beta_shu[0][3]*A(0)*A(2)
                  + beta_shu[0][4]*A(1)*A(2)
                  + beta_shu[0][5]*SQR(A(2));
         
         CCTK_REAL beta2  = beta_shu[1][0]*SQR(A(1))
                  + beta_shu[1][1]*A(1)*A(2)
                  + beta_shu[1][2]*SQR(A(2))
                  + beta_shu[1][3]*A(1)*A(3)
                  + beta_shu[1][4]*A(2)*A(3)
                  + beta_shu[1][5]*SQR(A(3));
         
         CCTK_REAL beta3  = beta_shu[2][0]*SQR(A(2))
                  + beta_shu[2][1]*A(2)*A(3)
                  + beta_shu[2][2]*SQR(A(3))
                  + beta_shu[2][3]*A(2)*A(4)
                  + beta_shu[2][4]*A(3)*A(4)
                  + beta_shu[2][5]*SQR(A(4));
         
         
         if (do_adaptive_epsilon) {
            const CCTK_REAL vnorm = (SQR(A(0)) + SQR(A(1)) + SQR(A(2)) + SQR(A(3)) + SQR(A(4)));
               
            beta1 += 100.0*weno_eps*(vnorm + 1.0);
            beta2 += 100.0*weno_eps*(vnorm + 1.0);
            beta3 += 100.0*weno_eps*(vnorm + 1.0);
               
            const CCTK_REAL ibetanorm = 1.0 / (beta1 + beta2 + beta3);
               
            beta1 *= ibetanorm;
            beta2 *= ibetanorm;
            beta3 *= ibetanorm;
         }
         
         const CCTK_REAL wbarplus1 = 1.0/16.0 / SQR(weno_eps + beta1);
         const CCTK_REAL wbarplus2 = 5.0/8.0 / SQR(weno_eps + beta2);
         const CCTK_REAL wbarplus3 = 5.0/16.0 / SQR(weno_eps + beta3);
         
         const CCTK_REAL iwbarplussum = 1.0 / (wbarplus1 + wbarplus2 + wbarplus3);
         
         const CCTK_REAL wplus1 = wbarplus1 * iwbarplussum;
         const CCTK_REAL wplus2 = wbarplus2 * iwbarplussum;
         const CCTK_REAL wplus3 = wbarplus3 * iwbarplussum;

         const CCTK_REAL wbarminus1 = 5.0/16.0 / SQR(weno_eps + beta1);
         const CCTK_REAL wbarminus2 = 5.0/8.0 / SQR(weno_eps + beta2);
         const CCTK_REAL wbarminus3 = 1.0/16.0 / SQR(weno_eps + beta3);
         
         const CCTK_REAL iwbarminussum = 1.0 / (wbarminus1 + wbarminus2 + wbarminus3);
         
         const CCTK_REAL wminus1 = wbarminus1 * iwbarminussum;
         const CCTK_REAL wminus2 = wbarminus2 * iwbarminussum;
         const CCTK_REAL wminus3 = wbarminus3 * iwbarminussum;
                                         
         //    Calculate the reconstruction
         Aplus(2) = 0;
         Aminus(2) = 0;
         for (int n=0; n < 5; ++n) {
               Aplus(2) += (wplus1 * weno_coeffs[0][n]
                          + wplus2 * weno_coeffs[1][n]
                          + wplus3 * weno_coeffs[2][n]) * A(n);
               Aminus(2) += (wminus1 * weno_coeffs[2][4-n]
                           + wminus2 * weno_coeffs[1][4-n]
                           + wminus3 * weno_coeffs[0][4-n]) * A(n);
         }
      } else {
         
         static const CCTK_REAL beta_shu[3][6] = { { 4.0/3.0,  -19.0/3.0, 25.0/3.0, 11.0/3.0, -31.0/3.0, 10.0/3.0 },
                                      { 4.0/3.0,  -13.0/3.0, 13.0/3.0, 5.0/3.0,  -13.0/3.0, 4.0/3.0 },
                                      { 10.0/3.0, -31.0/3.0, 25.0/3.0, 11.0/3.0, -19.0/3.0, 4.0/3.0 } };
         static const CCTK_REAL weno_coeffs[3][5] = { { 3.0/8.0, -5.0/4.0, 15.0/8.0, 0,      0 },
                                         { 0,       -1.0/8.0, 3.0/4.0,  3.0/8.0, 0 },
                                         { 0,       0,        3.0/8.0,  3.0/4.0, -1.0/8.0 } };
                                      
         //    Compute smoothness indicators
         //    This is from Tchekhovskoy et al 2007 (WHAM code paper).
         CCTK_REAL beta1  = beta_shu[0][0]*SQR(A(0))
                  + beta_shu[0][1]*A(0)*A(1)
                  + beta_shu[0][2]*SQR(A(1))
                  + beta_shu[0][3]*A(0)*A(2)
                  + beta_shu[0][4]*A(1)*A(2)
                  + beta_shu[0][5]*SQR(A(2));
         
         CCTK_REAL beta2  = beta_shu[1][0]*SQR(A(1))
                  + beta_shu[1][1]*A(1)*A(2)
                  + beta_shu[1][2]*SQR(A(2))
                  + beta_shu[1][3]*A(1)*A(3)
                  + beta_shu[1][4]*A(2)*A(3)
                  + beta_shu[1][5]*SQR(A(3));
         
         CCTK_REAL beta3  = beta_shu[2][0]*SQR(A(2))
                  + beta_shu[2][1]*A(2)*A(3)
                  + beta_shu[2][2]*SQR(A(3))
                  + beta_shu[2][3]*A(2)*A(4)
                  + beta_shu[2][4]*A(3)*A(4)
                  + beta_shu[2][5]*SQR(A(4));
         
         
         if (do_adaptive_epsilon) {
            const CCTK_REAL vnorm = (SQR(A(0)) + SQR(A(1)) + SQR(A(2)) + SQR(A(3)) + SQR(A(4)));
               
            beta1 += 100.0*weno_eps*(vnorm + 1.0);
            beta2 += 100.0*weno_eps*(vnorm + 1.0);
            beta3 += 100.0*weno_eps*(vnorm + 1.0);
               
            const CCTK_REAL ibetanorm = 1.0 / (beta1 + beta2 + beta3);
               
            beta1 *= ibetanorm;
            beta2 *= ibetanorm;
            beta3 *= ibetanorm;
         }
         
         const CCTK_REAL wbarplus1 = 1.0/16.0 / SQR(weno_eps + beta1);
         const CCTK_REAL wbarplus2 = 5.0/8.0 / SQR(weno_eps + beta2);
         const CCTK_REAL wbarplus3 = 5.0/16.0 / SQR(weno_eps + beta3);
         
         const CCTK_REAL iwbarplussum = 1.0 / (wbarplus1 + wbarplus2 + wbarplus3);
         
         const CCTK_REAL wplus1 = wbarplus1 * iwbarplussum;
         const CCTK_REAL wplus2 = wbarplus2 * iwbarplussum;
         const CCTK_REAL wplus3 = wbarplus3 * iwbarplussum;

         const CCTK_REAL wbarminus1 = 5.0/16.0 / SQR(weno_eps + beta1);
         const CCTK_REAL wbarminus2 = 5.0/8.0 / SQR(weno_eps + beta2);
         const CCTK_REAL wbarminus3 = 1.0/16.0 / SQR(weno_eps + beta3);
         
         const CCTK_REAL iwbarminussum = 1.0 / (wbarminus1 + wbarminus2 + wbarminus3);
         
         const CCTK_REAL wminus1 = wbarminus1 * iwbarminussum;
         const CCTK_REAL wminus2 = wbarminus2 * iwbarminussum;
         const CCTK_REAL wminus3 = wbarminus3 * iwbarminussum;
                                         
         //    Calculate the reconstruction
         Aplus(2) = 0;
         Aminus(2) = 0;
         for (int n=0; n < 5; ++n) {
               Aplus(2) += (wplus1 * weno_coeffs[0][n]
                          + wplus2 * weno_coeffs[1][n]
                          + wplus3 * weno_coeffs[2][n]) * A(n);
               Aminus(2) += (wminus1 * weno_coeffs[2][4-n]
                           + wminus2 * weno_coeffs[1][4-n]
                           + wminus3 * weno_coeffs[0][4-n]) * A(n);
         }
      }
   }
}

CCTK_REAL data[Nk][Nj][Ni];
CCTK_REAL data_plus_weno[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_minus_weno[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_plus_wenoz[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_minus_wenoz[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_plus_wham[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_minus_wham[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_plus_ppm[MAX3(Nk,Nj,Ni)];
CCTK_REAL data_minus_ppm[MAX3(Nk,Nj,Ni)];

#define ORDER 2

#if (ORDER == 1)
CCTK_REAL fun(double x, double y, double z) {
  return 2.*x;
}
CCTK_REAL Fun(double x, double y, double z) {
  return (SQR(x+0.5*dxyz) - SQR(x-0.5*dxyz)) / dxyz;
}
#elif (ORDER == 2)
CCTK_REAL fun(double x, double y, double z) {
  return 3.*SQR(x);
}
CCTK_REAL Fun(double x, double y, double z) {
  return (CUBE(x+0.5*dxyz) - CUBE(x-0.5*dxyz)) / dxyz;
}
#endif

void test(CCTK_REAL (*f)(double x, double y, double z), const char *label) {
  printf("Testing %d order %s\n", ORDER, label);

  // make up some dummy data
  for(int k = 0 ; k < Nk ; k++) {
    for(int j = 0 ; j < Nj ; j++) {
      for(int i = 0 ; i < Ni ; i++) {
        // coords of centers of cells
        double x = x0 + i * dxyz;
        double y = y0 + j * dxyz;
        double z = z0 + k * dxyz;
        // should be Fun for reconstruction and fun for interpolation
        data[k][j][i] = f(x, y, z);
      }
    }
  }

  // reconstruct along x
  apply<false, false, false, 0>(Ni, &data[0][0][0], data_minus_weno, data_plus_weno, NULL, 0, 0); // WENO as in GRHydro
  apply<true,  false, false, 0>(Ni, &data[0][0][0], data_minus_wenoz, data_plus_wenoz, NULL, 0, 0); // WENOZ as in GRHydro
  apply<false, true,  false, 0>(Ni, &data[0][0][0], data_minus_wham, data_plus_wham, NULL, 0, 0); // WENNO as in WHAM paper
  GRHydro_ppm1d_cxx<false,false,false,false,false>(Ni,dxyz,&data[0][0][0], data_minus_ppm, data_plus_ppm); // PPM from GRHydro

  // some output
  printf("GRhydro-WENO:\n");
  for(int i = 0 ; i < Ni ; i++) {
    double x = x0 + i * dxyz;
    printf("%d %g %g : %g =?= %g  %g =?= %g\n", i, x, data[0][0][i], data_minus_weno[i], fun(x-0.5*dxyz, 0., 0.), data_plus_weno[i], fun(x+0.5*dxyz, 0., 0.));
  }
  printf("GRhydro-WENOZ:\n");
  for(int i = 0 ; i < Ni ; i++) {
    double x = x0 + i * dxyz;
    printf("%d %g %g : %g =?= %g  %g =?= %g\n", i, x, data[0][0][i], data_minus_wenoz[i], fun(x-0.5*dxyz, 0., 0.), data_plus_wenoz[i], fun(x+0.5*dxyz, 0., 0.));
  }
  printf("WHAM-WENO:\n");
  for(int i = 0 ; i < Ni ; i++) {
    double x = x0 + i * dxyz;
    printf("%d %g %g : %g =?= %g  %g =?= %g\n", i, x, data[0][0][i], data_minus_wham[i], fun(x-0.5*dxyz, 0., 0.), data_plus_wham[i], fun(x+0.5*dxyz, 0., 0.));
  }
  printf("PPM:\n");
  for(int i = 0 ; i < Ni ; i++) {
    double x = x0 + i * dxyz;
    printf("%d %g %g : %g =?= %g  %g =?= %g\n", i, x, data[0][0][i], data_minus_ppm[i], fun(x-0.5*dxyz, 0., 0.), data_plus_ppm[i], fun(x+0.5*dxyz, 0., 0.));
  }

  puts("");
}

int main(void) {

  test(fun, "interpolation");
  test(Fun, "reconstruction");

  return 0;
}
