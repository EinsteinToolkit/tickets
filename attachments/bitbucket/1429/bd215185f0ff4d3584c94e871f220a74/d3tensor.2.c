#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#define CCTK_REAL double
CCTK_REAL ***
d3tensor (long nrl, long nrh, long ncl, long nch, long ndl, long ndh);
void
free_d3tensor (CCTK_REAL ***t, long nrl, long nrh, long ncl, long nch,
	       long ndl, long ndh);

int main() {
  int NA=36,NB=36,NC=18;
  CCTK_REAL ***a = d3tensor(0,NA,0,NB,0,NC);
  for(int i=0;i<=NA;i++)
    for(int j=0;j<=NB;j++)
      for(int k=0;k<=NC;k++)
        a[i][j][k]=12.;
  free_d3tensor(a,0,NA,0,NB,0,NC);
  return 0;
}

CCTK_REAL ***
d3tensor (long nrl, long nrh, long ncl, long nch, long ndl, long ndh)
/* allocate a CCTK_REAL 3tensor with range t[nrl..nrh][ncl..nch][ndl..ndh] */
{
  CCTK_REAL ***retval;
  void ***a, **b;

  printf("d3tensor: %ld %ld %ld\n",nrh,nch,ndh);
  /* get memory for index structures */
  retval = calloc(nrh-nrl+1,sizeof(CCTK_REAL **));
  a = retval;
  assert(retval != NULL);

  retval[0] = calloc((nrh-nrl+1)*(nch-ncl+1), sizeof(CCTK_REAL *));
  b = retval[0];
  assert(retval[0] != NULL);

  /* get all memory for the tensor in on chunk */
  retval[0][0] = calloc((nrh-nrl+1)*(nch-ncl+1)*(ndh-ndl+1), sizeof(CCTK_REAL));
  assert(retval[0][0] != NULL);

  /* apply all offsets */
  retval[0][0] -= ndl;
  retval[0] -= ncl;
  retval -= nrl;

  /* slice chunk into rows and columns */
  long width = (nch-ncl+1);
  long depth = (ndh-ndl+1);
  for(long j = ncl+1 ; j <= nch ; j++) { /* first row of columns */
    assert(retval[nrl][j-1]);
    assert(!retval[nrl][j]);
    retval[nrl][j] = retval[nrl][j-1] + depth;
  }
  assert(retval[nrl][nch]-retval[nrl][ncl] == (nch-ncl)*depth);
  for(long i = nrl+1 ; i <= nrh ; i++) {
    assert(retval[i-1]);
    assert(!retval[i]);
    retval[i] = retval[i-1] + width;
    assert(retval[i-1][ncl]);
    assert(!retval[i][ncl]);
    retval[i][ncl] = retval[i-1][ncl] + width*depth; /* first cell in column */
    for(long j = ncl+1 ; j <= nch ; j++) {
      assert(retval[i][j-1]);
      assert(!retval[i][j]);
      retval[i][j] = retval[i][j-1] + depth;
    }
    assert(retval[i][nch]-retval[i][ncl] == (nch-ncl)*depth);
  }
  assert(retval[nrh]-retval[nrl] == (nrh-nrl)*width);
  assert(&retval[nrh][nch][ndh]-&retval[nrl][ncl][ndl] == (nrh-nrl+1)*(nch-ncl+1)*(ndh-ndl+1)-1);

  // check all pointers...
  for(int i = 0 ; i < nrh-nrl+1 ; i++) {
    if(a[i] == NULL) {
      printf("NULL pointer in row %d\n", i);
    } else {
      //printf("a[%d] = 0x%p\n",i,a[i]);
    }
  }
  for(int i = 0 ; i < (nrh-nrl+1)*(nch-ncl+1) ; i++) {
    if(b[i] == NULL) {
      printf("NULL pointer in row*col %d corresponding to row = %ld col = %ld\n",
             i, i/(nch-ncl+1), i%(nch-ncl+1));
    } else {
      //printf("b[%d][%d] = 0x%p\n", i/(nch-ncl+1), i%(nch-ncl+1),b[i]);
    }
  }


  return retval;
}

void
free_d3tensor (CCTK_REAL ***t, long nrl, long nrh, long ncl, long nch,
	       long ndl, long ndh)
/* free a CCTK_REAL f3tensor allocated by f3tensor() */
{
  free(t[nrl][ncl]+ndl);
  free(t[nrl]+ncl);
  free(t+nrl);
}
