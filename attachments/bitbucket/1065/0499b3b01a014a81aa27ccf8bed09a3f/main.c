#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* The Fortran compiler mangles routine names */
#define sub sub_

void
sub(uintptr_t const* restrict pointers, int const* restrict n);

int
main(int argc, char* argv[])
{
  /* Set the array size */
  int const n = 10;
  
  /* Allocate memory */
  double* restrict const a = malloc(n * n * sizeof *a);
  double* restrict const b = malloc(n * n * sizeof *b);
  double* restrict const c = malloc(n * n * sizeof *c);
  
  /* Initialise the arrays */
  for (ptrdiff_t i=0; i<n; ++i) {
    for (ptrdiff_t j=0; j<n; ++j) {
      b[i+n*j] = 1.0;
      c[i+n*j] = 1.0;
    }
  }
  
  /* Put the arrays into a pointer array */
  uintptr_t const pointers[3] = {a, b, c};
  
  /* Call the Fortran subroutine */
  sub(pointers, &n);
  
  /* Print the result */
  for (ptrdiff_t i=0; i<n; ++i) {
    printf("%2d:", i);
    for (ptrdiff_t j=0; j<n; ++j) {
      printf(" %6.3f", a[i+n*j]);
    }
    printf("\n");
  }
  
  /* Done */
  return 0;
}
