#include <cstdlib>
#include <cstdio>
#include <immintrin.h>

#define CCTK_ATTRIBUTE_ALWAYS_INLINE __attribute__((always_inline))
#define CCTK_REAL8 double
#define CCTK_INT8 long
typedef bool CCTK_BOOLEAN8;

#define vec8_architecture "AVX512 (64-bit precision)"

// Vector type corresponding to CCTK_REAL
typedef __m512d CCTK_REAL8_VEC;
typedef __m512i CCTK_INTEGER8_VEC;
typedef __mmask8 CCTK_BOOLEAN8_VEC;

// Number of vector elements in a CCTK_REAL_VEC
#define CCTK_REAL8_VEC_SIZE 8

static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
vec8_set1(CCTK_REAL8 const a) {
  return _mm512_set1_pd(a);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_INTEGER8_VEC
vec8_set1i(CCTK_INT8 const a) {
  return _mm512_set1_epi64(a);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_BOOLEAN8_VEC
vec8_set1b(CCTK_BOOLEAN8 const a) {                                                                       return a ? 0xff : 0x00;
}                                                                                                       static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
vec8_set(CCTK_REAL8 const a0, CCTK_REAL8 const a1, CCTK_REAL8 const a2,                                          CCTK_REAL8 const a3, CCTK_REAL8 const a4, CCTK_REAL8 const a5,
         CCTK_REAL8 const a6, CCTK_REAL8 const a7) {
  return _mm512_set_pd(a7, a6, a5, a4, a3, a2, a1,
                       a0); // note reversed arguments
}

static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8sqrt(CCTK_REAL8_VEC const x) {
#if 0
  // This is accurate, but slow; it is internally evaluated unvectorized
  return _mm512_sqrt_pd(x);
#endif
#if defined __knl__
  // We start with an approximate result, then perform Goldschmidt iterations
  // <https://en.wikipedia.org/wiki/Methods_of_computing_square_roots>.
  // Theoretically the result should be exact.
  // Initialisation
  CCTK_REAL8_VEC const y0 = _mm512_rsqrt28_pd(x);
  CCTK_REAL8_VEC const x0 = _mm512_mul_pd(x, y0);
  CCTK_REAL8_VEC const h0 = _mm512_mul_pd(vec8_set1(0.5), y0);
  // Step
  CCTK_REAL8_VEC const r0 = _mm512_fnmadd_pd(x0, h0, vec8_set1(0.5));
  CCTK_REAL8_VEC const x1 = _mm512_fmadd_pd(x0, r0, x0);
  return x1;
#else
  // We start with an approximate result, then perform Goldschmidt iterations
  // <https://en.wikipedia.org/wiki/Methods_of_computing_square_roots>.
  // Theoretically the result should be exact.
  // Initialisation
  CCTK_REAL8_VEC const y0 = _mm512_rsqrt14_pd(x);
  CCTK_REAL8_VEC const x0 = _mm512_mul_pd(x, y0);
  CCTK_REAL8_VEC const h0 = _mm512_mul_pd(vec8_set1(0.5), y0);
  // Step
  CCTK_REAL8_VEC const r0 = _mm512_fnmadd_pd(x0, h0, vec8_set1(0.5));
  CCTK_REAL8_VEC const x1 = _mm512_fmadd_pd(x0, r0, x0);
  CCTK_REAL8_VEC const h1 = _mm512_fmadd_pd(h0, r0, h0);
  // Step
  CCTK_REAL8_VEC const r1 = _mm512_fnmadd_pd(x1, h1, vec8_set1(0.5));
  CCTK_REAL8_VEC const x2 = _mm512_fmadd_pd(x1, r1, x1);
  return x2;
#endif
}

int main(int argc, char **argv) {
  double a = atof(argv[1]);
  CCTK_REAL8_VEC b = vec8_set1(a);

  CCTK_REAL8_VEC root = k8sqrt(b);
  double root0 = root[0];
  printf("root: %g\n", root0);
  
  return 0;
}
