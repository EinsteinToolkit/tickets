#include <stdio.h>
#include <assert.h>
using namespace std;

static void extrap_kernel (int const* __restrict__ const bmin,
                    int const* __restrict__ const bmax,
                    int const* __restrict__ const dir,
                    double* __restrict__ const var)
{
  int const dind = -dir[0] -dir[1]*20 -dir[2]*20*20;

  int imin[3], imax[3];
  for (int d=0; d<3; ++d) {
    imin[d] = bmin[d];
    imax[d] = bmax[d];
  }

  printf("%d %d\n", bmin[0], imin[0]);

  for (int i=imin[0]; i!=20; i+=1) {
    var[0] = var[dind];
  }
}

void newrad_extrap_loop(double* __restrict__ const var)
{
  int is_physbnd[6]={1,1,1,1,1,1};

  for (int ifec=1; ifec<=3; ++ifec) {
    int const dir[3] = { 0, 0, -1 };

    bool all_physbnd = true;
    bool any_physbnd = false;

    int bmin[3];
    int bmax[3];
    for (int d=0; d<3; ++d) {
      switch (dir[d]) {
      case -1:
        bmin[d] = 0;
        bmax[d] = 2;
        all_physbnd = all_physbnd and is_physbnd[2*d+0];
        any_physbnd = any_physbnd or is_physbnd[2*d+0];
        break;
      case 0:
        bmin[d] = 2;
        bmax[d] = 20;
        break;
      case +1:
        bmin[d] = 20;
        bmax[d] = 40;
        all_physbnd = all_physbnd and true;
        any_physbnd = any_physbnd or true;
        break;
      }
    }

    if (any_physbnd and all_physbnd) {
//       printf("XXXXX %d %d\n", bmin[0], bmax[0]);
     extrap_kernel (bmin, bmax, dir, var);
    }
  }
}

int main()
{
  double bla;
  newrad_extrap_loop(&bla);

}

