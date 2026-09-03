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

#ifdef __AVX512ER__
#define __knl__
#endif

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

static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_BOOLEAN8_VEC
k8cmpeq(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y) {
  return _mm512_cmp_pd_mask(x, y, _MM_CMPINT_EQ);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC k8ifthen(
    CCTK_BOOLEAN8_VEC const x, CCTK_REAL8_VEC const y, CCTK_REAL8_VEC const z) {
// This leads to an ICE
// return _mm512_mask_blend_pd(x, z, y);
#if 1
  // This works:
  return _mm512_mask_mov_pd(z, x, y);
#else
  // Intel suggests this:
  return x == 0 ? z : _mm512_mask_blend_pd(x, z, y);
#endif
}

// Operators
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8neg(CCTK_REAL8_VEC const x) {
  // Could also multiply by -1
  // Could also invert sign bit
  return _mm512_sub_pd(_mm512_set1_pd(0.0), x);
}

static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8add(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y) {
  return _mm512_add_pd(x, y);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8sub(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y) {
  return _mm512_sub_pd(x, y);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8mul(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y) {
  return _mm512_mul_pd(x, y);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8div(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y) {
#if 0
  // This is accurate, but slow; it is internally evaluated unvectorized
  return _mm512_div_pd(x, y);
#endif
#if 0
  // Starting from a reciprocal is facter, but leads to some round-off error
  // Approximate solution
  CCTK_REAL8_VEC const r0 = _mm512_mul_pd(x, _mm512_rcp28_pd(y));
  // One Newton iteration
  // Note: Don't rewrite this expression, this may introduce
  // cancellation errors
  // r += r * (x - y * r)
  CCTK_REAL8_VEC const r1 = _mm512_fmadd_pd(r0, _mm512_fnmadd_pd(y, r0, x), r0);
  return r1;
#endif
#if defined __knl__
  // Best algorithm: Start with an approximate result, then perform Newton
  // iteration until convergence. Theoretically the result should be exact.
  // Approximate solution
  CCTK_REAL8_VEC const r0 = _mm512_rcp28_pd(y);
  // One Newton iteration
  // Note: Don't rewrite this expression, this may introduce
  // cancellation errors
  // r += r * (1 - y * r)
  CCTK_REAL8_VEC const r1 =
      _mm512_fmadd_pd(r0, _mm512_fnmadd_pd(y, r0, vec8_set1(1.0)), r0);
  return _mm512_mul_pd(x, r1);
#else
  // Best algorithm: Start with an approximate result, then perform Newton
  // iteration until convergence. Theoretically the result should be exact.
  // Approximate solution
  CCTK_REAL8_VEC const r0 = _mm512_rcp14_pd(y);
  // Two Newton iterations
  CCTK_REAL8_VEC const r1 =
      _mm512_fmadd_pd(r0, _mm512_fnmadd_pd(y, r0, vec8_set1(1.0)), r0);
  CCTK_REAL8_VEC const r2 =
      _mm512_fmadd_pd(r1, _mm512_fnmadd_pd(y, r1, vec8_set1(1.0)), r1);
  return _mm512_mul_pd(x, r2);
#endif
}

static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8madd(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y, CCTK_REAL8_VEC const z) {
  return _mm512_fmadd_pd(x, y, z);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC
k8msub(CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y, CCTK_REAL8_VEC const z) {
  return _mm512_fmsub_pd(x, y, z);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC k8nmadd(
    CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y, CCTK_REAL8_VEC const z) {
  return _mm512_fnmsub_pd(x, y, z);
}
static inline CCTK_ATTRIBUTE_ALWAYS_INLINE CCTK_REAL8_VEC k8nmsub(
    CCTK_REAL8_VEC const x, CCTK_REAL8_VEC const y, CCTK_REAL8_VEC const z) {
  return _mm512_fnmadd_pd(x, y, z);
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
  CCTK_REAL8_VEC const x0 = k8mul(x, y0);
  CCTK_REAL8_VEC const h0 = k8mul(vec8_set1(0.5), y0);
  // Step
  CCTK_REAL8_VEC const r0 = k8nmsub(x0, h0, vec8_set1(0.5));
  CCTK_REAL8_VEC const x1 = k8madd(x0, r0, x0);
  return k8ifthen(k8cmpeq(x, vec8_set1(0.0)), x, x1);
#else
  // We start with an approximate result, then perform Goldschmidt iterations
  // <https://en.wikipedia.org/wiki/Methods_of_computing_square_roots>.
  // Theoretically the result should be exact.
  // Initialisation
  CCTK_REAL8_VEC const y0 = _mm512_rsqrt14_pd(x);
  CCTK_REAL8_VEC const x0 = k8mul(x, y0);
  CCTK_REAL8_VEC const h0 = k8mul(vec8_set1(0.5), y0);
  // Step
  CCTK_REAL8_VEC const r0 = k8nmsub(x0, h0, vec8_set1(0.5));
  CCTK_REAL8_VEC const x1 = k8madd(x0, r0, x0);
  CCTK_REAL8_VEC const h1 = k8madd(h0, r0, h0);
  // Step
  CCTK_REAL8_VEC const r1 = k8nmsub(x1, h1, vec8_set1(0.5));
  CCTK_REAL8_VEC const x2 = k8madd(x1, r1, x1);
  return k8ifthen(k8cmpeq(x, vec8_set1(0.0)), x, x2);
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
