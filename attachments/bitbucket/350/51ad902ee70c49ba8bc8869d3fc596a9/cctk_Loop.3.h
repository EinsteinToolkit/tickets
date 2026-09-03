#ifndef _CCTK_LOOP_H_
#define _CCTK_LOOP_H_

/* WARNING: This file is auto-generated. Do not edit. */
/* Edit cctk_Loop.h.pl instead, and then re-generate this file via */
/*    perl cctk_Loop.h.pl > cctk_Loop.h.pl */
/* Documentation can also be found in "cctk_Loop.h.pl". */

#ifdef CCODE
#include <cctk_Config.h>
#include <cctk_WarnLevel.h>
#include <cGH.h>
#endif /* #ifdef CCODE */



/* 1D */

#ifdef CCODE

/* LOOP */

#define CCTK_LOOP1(name, \
                   i, \
                   imin, \
                   imax, \
                   ilsh) \
  CCTK_LOOP1STR(name, \
                i, \
                (imin), \
                (imax), \
                (ilsh), \
                1) \

#define CCTK_LOOP1STR(name, \
                      i, \
                      imin, \
                      imax, \
                      ilsh, \
                      istr) \
  do { \
    typedef int lc0_loop1_basic_##name; \
    int const lc0_imin = (imin); \
    int const lc0_imax = (imax); \
    int const lc0_istr CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int i=lc0_imin; i<lc0_imax; ++i) { \

#define CCTK_ENDLOOP1(name) \
  CCTK_ENDLOOP1STR(name) \

#define CCTK_ENDLOOP1STR(name) \
    } \
    typedef lc0_loop1_basic_##name lc0_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTERIOR */

#define CCTK_LOOP1_INTERIOR(name, cctkGH, \
                            i, \
                            iblo, \
                            ibhi) \
  CCTK_LOOP1STR_INTERIOR(name, (cctkGH), \
                         i, \
                         (iblo), \
                         (ibhi), \
                         1) \

#define CCTK_LOOP1STR_INTERIOR(name, cctkGH, \
                               i, \
                               iblo, \
                               ibhi, \
                               istr) \
  do { \
    typedef int lc1_loop1_interior_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_INTERIOR can only be used in 1 dimensions"); \
    } \
    CCTK_LOOP1STR(name##_interior, \
                  i, \
                  (iblo), \
                  lc1_cctkGH->CCTK_LSSH(0,0)-(ibhi), \
                  lc1_cctkGH->cctk_lsh[0], \
                  (istr)) { \

#define CCTK_ENDLOOP1_INTERIOR(name) \
  CCTK_ENDLOOP1STR_INTERIOR(name) \

#define CCTK_ENDLOOP1STR_INTERIOR(name) \
    } CCTK_ENDLOOP1STR(name##_interior); \
    typedef lc1_loop1_interior_##name lc1_ensure_proper_nesting; \
  } while(0) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP1_BOUNDARIES(name, cctkGH, \
                              i, \
                              iblo, \
                              ibhi, \
                              ibboxlo, \
                              ibboxhi) \
  CCTK_LOOP1STR_BOUNDARIES(name, (cctkGH), \
                           i, \
                           (iblo), \
                           (ibhi), \
                           (ibboxlo), \
                           (ibboxhi), \
                           1) \

#define CCTK_LOOP1STR_BOUNDARIES(name, cctkGH, \
                                 i, \
                                 iblo, \
                                 ibhi, \
                                 ibboxlo, \
                                 ibboxhi, \
                                 istr) \
  do { \
    typedef int lc1_loop1_boundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_BOUNDARIES can only be used in 1 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo) }; \
    int const lc1_bhi[] = { (ibhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int lc1_dir=0; lc1_dir<1; ++lc1_dir) { \
      for (int lc1_face=0; lc1_face<2; ++lc1_face) { \
        if (lc1_bbox[2*lc1_dir+lc1_face]) { \
          int lc1_bmin[1], lc1_bmax[1]; \
          for (int lc1_d=0; lc1_d<1; ++lc1_d) { \
            lc1_bmin[lc1_d] = 0; \
            lc1_bmax[lc1_d] = lc1_cctkGH->CCTK_LSSH(0,lc1_d); \
            if (lc1_d<lc1_dir) { \
              if (lc1_bbox[2*lc1_d]) { \
                lc1_bmin[lc1_d] += lc1_blo[lc1_d]; \
              } \
              if (lc1_bbox[2*lc1_d+1]) { \
                lc1_bmax[lc1_d] -= lc1_bhi[lc1_d]; \
              } \
            } \
          } \
          if (lc1_face==0) { \
            lc1_bmax[lc1_dir] = lc1_bmin[lc1_dir]+lc1_blo[lc1_dir]; \
          } else { \
            lc1_bmin[lc1_dir] = lc1_bmax[lc1_dir]-lc1_bhi[lc1_dir]; \
          } \
          CCTK_LOOP1STR(name##_boundaries, \
                        i, \
                        lc1_bmin[0], \
                        lc1_bmax[0], \
                        lc1_cctkGH->cctk_lsh[0], \
                        lc1_istr1) { \

#define CCTK_ENDLOOP1_BOUNDARIES(name) \
  CCTK_ENDLOOP1STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP1STR_BOUNDARIES(name) \
          } CCTK_ENDLOOP1STR(name##_boundaries); \
        } /* if bbox */ \
      } /* for face */ \
    }  /* for dir */ \
    typedef lc1_loop1_boundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBOUNDARIES */

#define CCTK_LOOP1_INTBOUNDARIES(name, cctkGH, \
                                 i, \
                                 ni, \
                                 iblo, \
                                 ibhi, \
                                 ibboxlo, \
                                 ibboxhi) \
  CCTK_LOOP1STR_INTBOUNDARIES(name, (cctkGH), \
                              i, \
                              ni, \
                              (iblo), \
                              (ibhi), \
                              (ibboxlo), \
                              (ibboxhi), \
                              1) \

#define CCTK_LOOP1STR_INTBOUNDARIES(name, cctkGH, \
                                    i, \
                                    ni, \
                                    iblo, \
                                    ibhi, \
                                    ibboxlo, \
                                    ibboxhi, \
                                    istr) \
  do { \
    typedef int lc1_loop1_intboundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_BOUNDARIES can only be used in 1 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo) }; \
    int const lc1_bhi[] = { (ibhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi) }; \
    int const lc1_lssh[] = { lc1_cctkGH->CCTK_LSSH(0,0) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    /* Loop over all faces, edges, and corners */ \
    for (int ni=-1; ni<=+1; ++ni) { \
      int lc1_any_bbox = \
        (ni==-1 ? lc1_bbox[0] : 0) || (ni==+1 ? lc1_bbox[1] : 0); \
      int lc1_all_bbox = \
        (ni==-1 ? lc1_bbox[0] : 1) && (ni==+1 ? lc1_bbox[1] : 1); \
      if (lc1_all_bbox && lc1_any_bbox) { \
        int const lc1_bmin[] = { \
          ni==-1 ? 0 : ni==0 ? lc1_blo[0] : lc1_lssh[0] - lc1_bhi[0], \
        }; \
        int const lc1_bmax[] = { \
          ni==-1 ? lc1_blo[0] : ni==0 ? lc1_lssh[0] - lc1_bhi[0] : lc1_lssh[0], \
        }; \
        CCTK_LOOP1STR(name##_boundaries, \
                      i, \
                      lc1_bmin[0], \
                      lc1_bmax[0], \
                      lc1_cctkGH->cctk_lsh[0], \
                      lc1_istr1) { \

#define CCTK_ENDLOOP1_INTBOUNDARIES(name) \
  CCTK_ENDLOOP1STR_INTBOUNDARIES(name) \

#define CCTK_ENDLOOP1STR_INTBOUNDARIES(name) \
        } CCTK_ENDLOOP1STR(name##_boundaries); \
      } /* if bbox */ \
    }   /* for dir */ \
    typedef lc1_loop1_intboundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_ALL */

#define CCTK_LOOP1_ALL(name, cctkGH, \
                       i) \
  CCTK_LOOP1STR_ALL(name, (cctkGH), \
                    i, \
                    1) \

#define CCTK_LOOP1STR_ALL(name, cctkGH, \
                          i, \
                          istr) \
  do { \
    typedef int lc2_loop1_all_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_ALL can only be used in 1 dimensions"); \
    } \
    CCTK_LOOP1STR(name##_all, \
                  i, \
                  0, \
                  lc2_cctkGH->CCTK_LSSH(0,0), \
                  lc2_cctkGH->cctk_lsh[0], \
                  (istr)) { \

#define CCTK_ENDLOOP1_ALL(name) \
  CCTK_ENDLOOP1STR_ALL(name) \

#define CCTK_ENDLOOP1STR_ALL(name) \
    } CCTK_ENDLOOP1STR(name##_all); \
    typedef lc2_loop1_all_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INT */

#define CCTK_LOOP1_INT(name, cctkGH, \
                       i) \
  CCTK_LOOP1STR_INT(name, (cctkGH), \
                    i, \
                    1) \

#define CCTK_LOOP1STR_INT(name, cctkGH, \
                          i, \
                          istr) \
  do { \
    typedef int lc2_loop1_int_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_INT can only be used in 1 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [2]; \
    CCTK_INT lc2_is_ghostbnd[2]; \
    CCTK_INT lc2_is_symbnd  [2]; \
    CCTK_INT lc2_is_physbnd [2]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 2, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP1STR_INTERIOR(name##_int, \
                           lc2_cctkGH, \
                           i, \
                           lc2_bndsize[0], \
                           lc2_bndsize[1], \
                           (istr)) { \

#define CCTK_ENDLOOP1_INT(name) \
  CCTK_ENDLOOP1STR_INT(name) \

#define CCTK_ENDLOOP1STR_INT(name) \
    } CCTK_ENDLOOP1STR_INTERIOR(name##_int); \
    typedef lc2_loop1_int_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_BND */

#define CCTK_LOOP1_BND(name, cctkGH, \
                       i) \
  CCTK_LOOP1STR_BND(name, (cctkGH), \
                    i, \
                    1) \

#define CCTK_LOOP1STR_BND(name, cctkGH, \
                          i, \
                          istr) \
  do { \
    typedef int lc2_loop1_bnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_BND can only be used in 1 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [2]; \
    CCTK_INT lc2_is_ghostbnd[2]; \
    CCTK_INT lc2_is_symbnd  [2]; \
    CCTK_INT lc2_is_physbnd [2]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 2, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP1STR_BOUNDARIES(name##_bnd, \
                             lc2_cctkGH, \
                             i, \
                             lc2_bndsize[0], \
                             lc2_bndsize[1], \
                             lc2_is_physbnd[0], \
                             lc2_is_physbnd[1], \
                             (istr)) { \

#define CCTK_ENDLOOP1_BND(name) \
  CCTK_ENDLOOP1STR_BND(name) \

#define CCTK_ENDLOOP1STR_BND(name) \
    } CCTK_ENDLOOP1STR_BOUNDARIES(name##_bnd); \
    typedef lc2_loop1_bnd_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBND */

#define CCTK_LOOP1_INTBND(name, cctkGH, \
                           i, \
                           ni) \
  CCTK_LOOP1STR_INTBND(name, (cctkGH), \
                        i, \
                        ni, \
                        1) \

#define CCTK_LOOP1STR_INTBND(name, cctkGH, \
                              i, \
                              ni, \
                              istr) \
  do { \
    typedef int lc2_loop1_intbnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 1) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP1_INTBND can only be used in 1 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [2]; \
    CCTK_INT lc2_is_ghostbnd[2]; \
    CCTK_INT lc2_is_symbnd  [2]; \
    CCTK_INT lc2_is_physbnd [2]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 2, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP1STR_INTBOUNDARIES(name##_intbnd, \
                                lc2_cctkGH, \
                                i, \
                                ni, \
                                lc2_bndsize[0], \
                                lc2_bndsize[1], \
                                lc2_is_physbnd[0], \
                                lc2_is_physbnd[1], \
                                (istr)) { \

#define CCTK_ENDLOOP1_INTBND(name) \
  CCTK_ENDLOOP1STR_INTBND(name) \

#define CCTK_ENDLOOP1STR_INTBND(name) \
    } CCTK_ENDLOOP1STR_INTBOUNDARIES(name##_intbnd); \
    typedef lc2_loop1_intbnd_##name lc2_ensure_proper_nesting; \
  } while (0) \

#endif /* #ifdef CCODE */



#ifdef FCODE

/* LOOP */

#define CCTK_LOOP1_DECLARE(name) \
   && integer :: name/**/_imin \
   && integer :: name/**/_imax \
   && integer :: name/**/_istr \

#define CCTK_LOOP1_OMP_PRIVATE(name) \

#define CCTK_LOOP1(name, \
                   i, \
                   imin, \
                   imax, \
                   ilsh) \
  CCTK_LOOP1STR(name, \
             i, \
             imin, \
             imax, \
             ilsh, \
             1) \

#define CCTK_LOOP1STR(name, \
                      i, \
                      imin, \
                      imax, \
                      ilsh, \
                      istr) \
   && name/**/_imin = imin \
   && name/**/_imax = imax \
   && name/**/_istr = istr \
   && do i = name/**/_imin, name/**/_imax \

#define CCTK_ENDLOOP1(name) \
  CCTK_ENDLOOP1STR(name) \

#define CCTK_ENDLOOP1STR(name) \
   && end do \



/* LOOP_ALL */

#define CCTK_LOOP1_ALL_DECLARE(name) \
   CCTK_LOOP1_DECLARE(name) \

#define CCTK_LOOP1_ALL_OMP_PRIVATE(name) \
   CCTK_LOOP1_OMP_PRIVATE(name) \

#define CCTK_LOOP1_ALL(name, \
                       i) \
  CCTK_LOOP1STR_ALL(name, \
                 i, \
                 1) \

#define CCTK_LOOP1STR_ALL(name, \
                          i, \
                          istr) \
   CCTK_LOOP1STR(name, \
                 i, \
                 1, \
                 CCTK_LSSH(0,1), \
                 cctk_lsh(1), \
                 istr) \

#define CCTK_ENDLOOP1_ALL(name) \
  CCTK_ENDLOOP1STR_ALL(name) \

#define CCTK_ENDLOOP1STR_ALL(name) \
   CCTK_ENDLOOP1(name) \



/* LOOP_INTERIOR */

#define CCTK_LOOP1_INTERIOR_DECLARE(name) \
   CCTK_LOOP1_DECLARE(name) \

#define CCTK_LOOP1_INTERIOR_OMP_PRIVATE(name) \
   CCTK_LOOP1_OMP_PRIVATE(name) \

#define CCTK_LOOP1_INTERIOR(name, \
                            i, \
                            iblo, \
                            ibhi) \
  CCTK_LOOP1STR_INTERIOR(name, \
                      i, \
                      iblo, \
                      ibhi, \
                      1) \

#define CCTK_LOOP1STR_INTERIOR(name, \
                               i, \
                               iblo, \
                               ibhi, \
                               istr) \
   CCTK_LOOP1STR(name, \
                 i, \
                 (iblo), \
                 CCTK_LSSH(0,1)-(ibhi), \
                 cctk_lsh(1), \
                 istr) \

#define CCTK_ENDLOOP1_INTERIOR(name) \
  CCTK_ENDLOOP1STR_INTERIOR(name) \

#define CCTK_ENDLOOP1STR_INTERIOR(name) \
   CCTK_ENDLOOP1(name) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP1_BOUNDARIES_DECLARE(name) \
   CCTK_LOOP1_DECLARE(name) \
   && integer :: lc_bmin(1), lc_bmax(1) \
   && integer :: lc_blo(1), lc_bhi(1) \
   && integer :: lc_istr \
   && integer :: lc_dir, lc_face \
   && integer :: lc_d \

#define CCTK_LOOP1_BOUNDARIES_OMP_PRIVATE(name) \
   CCTK_LOOP1_OMP_PRIVATE(name) \

#define CCTK_LOOP1_BOUNDARIES(name, \
                              i, \
                              iblo, \
                              ibhi) \
  CCTK_LOOP1STR_BOUNDARIES(name, \
                        i, \
                        iblo, \
                        ibhi, \
                        1) \

#define CCTK_LOOP1STR_BOUNDARIES(name, \
                                 i, \
                                 iblo, \
                                 ibhi, \
                                 istr) \
   && lc_blo = (/ iblo /) \
   && lc_bhi = (/ ibhi /) \
   && lc_istr = istr \
   && do lc_dir=1,1 \
   &&    do lc_face=1,2 \
   &&       do lc_d=1,1 \
   &&          lc_bmin(lc_d) = 1 \
   &&          lc_bmax(lc_d) = CCTK_LSSH(0,lc_d) \
   &&          if (lc_d<lc_dir) then \
   &&             lc_bmin(lc_d) = lc_bmin(lc_d)+lc_blo(lc_d) \
   &&             lc_bmax(lc_d) = lc_bmax(lc_d)-lc_bhi(lc_d) \
   &&          end if \
   &&       end do \
   &&       if (lc_face==1) then \
   &&          lc_bmax(lc_dir) = lc_bmin(lc_dir)+lc_blo(lc_dir) \
   &&       else \
   &&          lc_bmin(lc_dir) = lc_bmax(lc_dir)-lc_bhi(lc_dir) \
   &&       end if \
            CCTK_LOOP1STR(name, \
                          i, \
                          lc_bmin(1), \
                          lc_bmax(1), \
                          cctk_lsh(1), \
                          lc_istr) \

#define CCTK_ENDLOOP1_BOUNDARIES(name) \
  CCTK_ENDLOOP1STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP1STR_BOUNDARIES(name) \
            CCTK_ENDLOOP1(name) \
   &&    end do /* face */ \
   && end do /* dir */ \

#endif /* #ifdef FCODE */



/* 2D */

#ifdef CCODE

/* LOOP */

#define CCTK_LOOP2(name, \
                   i,j, \
                   imin,jmin, \
                   imax,jmax, \
                   ilsh,jlsh) \
  CCTK_LOOP2STR(name, \
                i,j, \
                (imin),(jmin), \
                (imax),(jmax), \
                (ilsh),(jlsh), \
                1) \

#define CCTK_LOOP2STR(name, \
                      i,j, \
                      imin,jmin, \
                      imax,jmax, \
                      ilsh,jlsh, \
                      istr) \
  do { \
    typedef int lc0_loop2_basic_##name; \
    int const lc0_imin = (imin); \
    int const lc0_jmin = (jmin); \
    int const lc0_imax = (imax); \
    int const lc0_jmax = (jmax); \
    int const lc0_istr CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int j=lc0_jmin; j<lc0_jmax; ++j) { \
    for (int i=lc0_imin; i<lc0_imax; ++i) { \

#define CCTK_ENDLOOP2(name) \
  CCTK_ENDLOOP2STR(name) \

#define CCTK_ENDLOOP2STR(name) \
    } \
    } \
    typedef lc0_loop2_basic_##name lc0_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTERIOR */

#define CCTK_LOOP2_INTERIOR(name, cctkGH, \
                            i,j, \
                            iblo,jblo, \
                            ibhi,jbhi) \
  CCTK_LOOP2STR_INTERIOR(name, (cctkGH), \
                         i,j, \
                         (iblo),(jblo), \
                         (ibhi),(jbhi), \
                         1) \

#define CCTK_LOOP2STR_INTERIOR(name, cctkGH, \
                               i,j, \
                               iblo,jblo, \
                               ibhi,jbhi, \
                               istr) \
  do { \
    typedef int lc1_loop2_interior_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_INTERIOR can only be used in 2 dimensions"); \
    } \
    CCTK_LOOP2STR(name##_interior, \
                  i,j, \
                  (iblo),(jblo), \
                  lc1_cctkGH->CCTK_LSSH(0,0)-(ibhi), \
                  lc1_cctkGH->CCTK_LSSH(0,1)-(jbhi), \
                  lc1_cctkGH->cctk_lsh[0], \
                  lc1_cctkGH->cctk_lsh[1], \
                  (istr)) { \

#define CCTK_ENDLOOP2_INTERIOR(name) \
  CCTK_ENDLOOP2STR_INTERIOR(name) \

#define CCTK_ENDLOOP2STR_INTERIOR(name) \
    } CCTK_ENDLOOP2STR(name##_interior); \
    typedef lc1_loop2_interior_##name lc1_ensure_proper_nesting; \
  } while(0) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP2_BOUNDARIES(name, cctkGH, \
                              i,j, \
                              iblo,jblo, \
                              ibhi,jbhi, \
                              ibboxlo,jbboxlo, \
                              ibboxhi,jbboxhi) \
  CCTK_LOOP2STR_BOUNDARIES(name, (cctkGH), \
                           i,j, \
                           (iblo),(jblo), \
                           (ibhi),(jbhi), \
                           (ibboxlo),(jbboxlo), \
                           (ibboxhi),(jbboxhi), \
                           1) \

#define CCTK_LOOP2STR_BOUNDARIES(name, cctkGH, \
                                 i,j, \
                                 iblo,jblo, \
                                 ibhi,jbhi, \
                                 ibboxlo,jbboxlo, \
                                 ibboxhi,jbboxhi, \
                                 istr) \
  do { \
    typedef int lc1_loop2_boundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_BOUNDARIES can only be used in 2 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo),(jblo) }; \
    int const lc1_bhi[] = { (ibhi),(jbhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi),(jbboxlo), (jbboxhi) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int lc1_dir=0; lc1_dir<2; ++lc1_dir) { \
      for (int lc1_face=0; lc1_face<2; ++lc1_face) { \
        if (lc1_bbox[2*lc1_dir+lc1_face]) { \
          int lc1_bmin[2], lc1_bmax[2]; \
          for (int lc1_d=0; lc1_d<2; ++lc1_d) { \
            lc1_bmin[lc1_d] = 0; \
            lc1_bmax[lc1_d] = lc1_cctkGH->CCTK_LSSH(0,lc1_d); \
            if (lc1_d<lc1_dir) { \
              if (lc1_bbox[2*lc1_d]) { \
                lc1_bmin[lc1_d] += lc1_blo[lc1_d]; \
              } \
              if (lc1_bbox[2*lc1_d+1]) { \
                lc1_bmax[lc1_d] -= lc1_bhi[lc1_d]; \
              } \
            } \
          } \
          if (lc1_face==0) { \
            lc1_bmax[lc1_dir] = lc1_bmin[lc1_dir]+lc1_blo[lc1_dir]; \
          } else { \
            lc1_bmin[lc1_dir] = lc1_bmax[lc1_dir]-lc1_bhi[lc1_dir]; \
          } \
          CCTK_LOOP2STR(name##_boundaries, \
                        i,j, \
                        lc1_bmin[0],lc1_bmin[1], \
                        lc1_bmax[0],lc1_bmax[1], \
                        lc1_cctkGH->cctk_lsh[0], \
                        lc1_cctkGH->cctk_lsh[1], \
                        lc1_istr1) { \

#define CCTK_ENDLOOP2_BOUNDARIES(name) \
  CCTK_ENDLOOP2STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP2STR_BOUNDARIES(name) \
          } CCTK_ENDLOOP2STR(name##_boundaries); \
        } /* if bbox */ \
      } /* for face */ \
    }  /* for dir */ \
    typedef lc1_loop2_boundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBOUNDARIES */

#define CCTK_LOOP2_INTBOUNDARIES(name, cctkGH, \
                                 i,j, \
                                 ni,nj, \
                                 iblo,jblo, \
                                 ibhi,jbhi, \
                                 ibboxlo,jbboxlo, \
                                 ibboxhi,jbboxhi) \
  CCTK_LOOP2STR_INTBOUNDARIES(name, (cctkGH), \
                              i,j, \
                              ni,nj, \
                              (iblo),(jblo), \
                              (ibhi),(jbhi), \
                              (ibboxlo),(jbboxlo), \
                              (ibboxhi),(jbboxhi), \
                              1) \

#define CCTK_LOOP2STR_INTBOUNDARIES(name, cctkGH, \
                                    i,j, \
                                    ni,nj, \
                                    iblo,jblo, \
                                    ibhi,jbhi, \
                                    ibboxlo,jbboxlo, \
                                    ibboxhi,jbboxhi, \
                                    istr) \
  do { \
    typedef int lc1_loop2_intboundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_BOUNDARIES can only be used in 2 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo),(jblo) }; \
    int const lc1_bhi[] = { (ibhi),(jbhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi),(jbboxlo), (jbboxhi) }; \
    int const lc1_lssh[] = { lc1_cctkGH->CCTK_LSSH(0,0),lc1_cctkGH->CCTK_LSSH(0,1) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    /* Loop over all faces, edges, and corners */ \
    for (int nj=-1; nj<=+1; ++nj) { \
    for (int ni=-1; ni<=+1; ++ni) { \
      int lc1_any_bbox = \
        (ni==-1 ? lc1_bbox[0] : 0) || (ni==+1 ? lc1_bbox[1] : 0)|| \
        (nj==-1 ? lc1_bbox[2] : 0) || (nj==+1 ? lc1_bbox[3] : 0); \
      int lc1_all_bbox = \
        (ni==-1 ? lc1_bbox[0] : 1) && (ni==+1 ? lc1_bbox[1] : 1)&& \
        (nj==-1 ? lc1_bbox[2] : 1) && (nj==+1 ? lc1_bbox[3] : 1); \
      if (lc1_all_bbox && lc1_any_bbox) { \
        int const lc1_bmin[] = { \
          ni==-1 ? 0 : ni==0 ? lc1_blo[0] : lc1_lssh[0] - lc1_bhi[0], \
          nj==-1 ? 0 : nj==0 ? lc1_blo[1] : lc1_lssh[1] - lc1_bhi[1], \
        }; \
        int const lc1_bmax[] = { \
          ni==-1 ? lc1_blo[0] : ni==0 ? lc1_lssh[0] - lc1_bhi[0] : lc1_lssh[0], \
          nj==-1 ? lc1_blo[1] : nj==0 ? lc1_lssh[1] - lc1_bhi[1] : lc1_lssh[1], \
        }; \
        CCTK_LOOP2STR(name##_boundaries, \
                      i,j, \
                      lc1_bmin[0],lc1_bmin[1], \
                      lc1_bmax[0],lc1_bmax[1], \
                      lc1_cctkGH->cctk_lsh[0], \
                      lc1_cctkGH->cctk_lsh[1], \
                      lc1_istr1) { \

#define CCTK_ENDLOOP2_INTBOUNDARIES(name) \
  CCTK_ENDLOOP2STR_INTBOUNDARIES(name) \

#define CCTK_ENDLOOP2STR_INTBOUNDARIES(name) \
        } CCTK_ENDLOOP2STR(name##_boundaries); \
      } /* if bbox */ \
    }   /* for dir */ \
    }   /* for dir */ \
    typedef lc1_loop2_intboundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_ALL */

#define CCTK_LOOP2_ALL(name, cctkGH, \
                       i,j) \
  CCTK_LOOP2STR_ALL(name, (cctkGH), \
                    i,j, \
                    1) \

#define CCTK_LOOP2STR_ALL(name, cctkGH, \
                          i,j, \
                          istr) \
  do { \
    typedef int lc2_loop2_all_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_ALL can only be used in 2 dimensions"); \
    } \
    CCTK_LOOP2STR(name##_all, \
                  i,j, \
                  0,0, \
                  lc2_cctkGH->CCTK_LSSH(0,0), \
                  lc2_cctkGH->CCTK_LSSH(0,1), \
                  lc2_cctkGH->cctk_lsh[0], \
                  lc2_cctkGH->cctk_lsh[1], \
                  (istr)) { \

#define CCTK_ENDLOOP2_ALL(name) \
  CCTK_ENDLOOP2STR_ALL(name) \

#define CCTK_ENDLOOP2STR_ALL(name) \
    } CCTK_ENDLOOP2STR(name##_all); \
    typedef lc2_loop2_all_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INT */

#define CCTK_LOOP2_INT(name, cctkGH, \
                       i,j) \
  CCTK_LOOP2STR_INT(name, (cctkGH), \
                    i,j, \
                    1) \

#define CCTK_LOOP2STR_INT(name, cctkGH, \
                          i,j, \
                          istr) \
  do { \
    typedef int lc2_loop2_int_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_INT can only be used in 2 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [4]; \
    CCTK_INT lc2_is_ghostbnd[4]; \
    CCTK_INT lc2_is_symbnd  [4]; \
    CCTK_INT lc2_is_physbnd [4]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 4, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP2STR_INTERIOR(name##_int, \
                           lc2_cctkGH, \
                           i,j, \
                           lc2_bndsize[0],lc2_bndsize[2], \
                           lc2_bndsize[1],lc2_bndsize[3], \
                           (istr)) { \

#define CCTK_ENDLOOP2_INT(name) \
  CCTK_ENDLOOP2STR_INT(name) \

#define CCTK_ENDLOOP2STR_INT(name) \
    } CCTK_ENDLOOP2STR_INTERIOR(name##_int); \
    typedef lc2_loop2_int_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_BND */

#define CCTK_LOOP2_BND(name, cctkGH, \
                       i,j) \
  CCTK_LOOP2STR_BND(name, (cctkGH), \
                    i,j, \
                    1) \

#define CCTK_LOOP2STR_BND(name, cctkGH, \
                          i,j, \
                          istr) \
  do { \
    typedef int lc2_loop2_bnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_BND can only be used in 2 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [4]; \
    CCTK_INT lc2_is_ghostbnd[4]; \
    CCTK_INT lc2_is_symbnd  [4]; \
    CCTK_INT lc2_is_physbnd [4]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 4, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP2STR_BOUNDARIES(name##_bnd, \
                             lc2_cctkGH, \
                             i,j, \
                             lc2_bndsize[0],lc2_bndsize[2], \
                             lc2_bndsize[1],lc2_bndsize[3], \
                             lc2_is_physbnd[0],lc2_is_physbnd[2], \
                             lc2_is_physbnd[1],lc2_is_physbnd[3], \
                             (istr)) { \

#define CCTK_ENDLOOP2_BND(name) \
  CCTK_ENDLOOP2STR_BND(name) \

#define CCTK_ENDLOOP2STR_BND(name) \
    } CCTK_ENDLOOP2STR_BOUNDARIES(name##_bnd); \
    typedef lc2_loop2_bnd_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBND */

#define CCTK_LOOP2_INTBND(name, cctkGH, \
                           i,j, \
                           ni,nj) \
  CCTK_LOOP2STR_INTBND(name, (cctkGH), \
                        i,j, \
                        ni,nj, \
                        1) \

#define CCTK_LOOP2STR_INTBND(name, cctkGH, \
                              i,j, \
                              ni,nj, \
                              istr) \
  do { \
    typedef int lc2_loop2_intbnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 2) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP2_INTBND can only be used in 2 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [4]; \
    CCTK_INT lc2_is_ghostbnd[4]; \
    CCTK_INT lc2_is_symbnd  [4]; \
    CCTK_INT lc2_is_physbnd [4]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 4, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP2STR_INTBOUNDARIES(name##_intbnd, \
                                lc2_cctkGH, \
                                i,j, \
                                ni,nj, \
                                lc2_bndsize[0],lc2_bndsize[2], \
                                lc2_bndsize[1],lc2_bndsize[3], \
                                lc2_is_physbnd[0],lc2_is_physbnd[2], \
                                lc2_is_physbnd[1],lc2_is_physbnd[3], \
                                (istr)) { \

#define CCTK_ENDLOOP2_INTBND(name) \
  CCTK_ENDLOOP2STR_INTBND(name) \

#define CCTK_ENDLOOP2STR_INTBND(name) \
    } CCTK_ENDLOOP2STR_INTBOUNDARIES(name##_intbnd); \
    typedef lc2_loop2_intbnd_##name lc2_ensure_proper_nesting; \
  } while (0) \

#endif /* #ifdef CCODE */



#ifdef FCODE

/* LOOP */

#define CCTK_LOOP2_DECLARE(name) \
   && integer :: name/**/_imin,name/**/_jmin \
   && integer :: name/**/_imax,name/**/_jmax \
   && integer :: name/**/_istr \

#define CCTK_LOOP2_OMP_PRIVATE(name) \

#define CCTK_LOOP2(name, \
                   i,j, \
                   imin,jmin, \
                   imax,jmax, \
                   ilsh,jlsh) \
  CCTK_LOOP2STR(name, \
             i,j, \
             imin,jmin, \
             imax,jmax, \
             ilsh,jlsh, \
             1) \

#define CCTK_LOOP2STR(name, \
                      i,j, \
                      imin,jmin, \
                      imax,jmax, \
                      ilsh,jlsh, \
                      istr) \
   && name/**/_imin = imin \
   && name/**/_jmin = jmin \
   && name/**/_imax = imax \
   && name/**/_jmax = jmax \
   && name/**/_istr = istr \
   && do j = name/**/_jmin, name/**/_jmax \
   && do i = name/**/_imin, name/**/_imax \

#define CCTK_ENDLOOP2(name) \
  CCTK_ENDLOOP2STR(name) \

#define CCTK_ENDLOOP2STR(name) \
   && end do \
   && end do \



/* LOOP_ALL */

#define CCTK_LOOP2_ALL_DECLARE(name) \
   CCTK_LOOP2_DECLARE(name) \

#define CCTK_LOOP2_ALL_OMP_PRIVATE(name) \
   CCTK_LOOP2_OMP_PRIVATE(name) \

#define CCTK_LOOP2_ALL(name, \
                       i,j) \
  CCTK_LOOP2STR_ALL(name, \
                 i,j, \
                 1) \

#define CCTK_LOOP2STR_ALL(name, \
                          i,j, \
                          istr) \
   CCTK_LOOP2STR(name, \
                 i,j, \
                 1,1, \
                 CCTK_LSSH(0,1),CCTK_LSSH(0,2), \
                 cctk_lsh(1),cctk_lsh(2), \
                 istr) \

#define CCTK_ENDLOOP2_ALL(name) \
  CCTK_ENDLOOP2STR_ALL(name) \

#define CCTK_ENDLOOP2STR_ALL(name) \
   CCTK_ENDLOOP2(name) \



/* LOOP_INTERIOR */

#define CCTK_LOOP2_INTERIOR_DECLARE(name) \
   CCTK_LOOP2_DECLARE(name) \

#define CCTK_LOOP2_INTERIOR_OMP_PRIVATE(name) \
   CCTK_LOOP2_OMP_PRIVATE(name) \

#define CCTK_LOOP2_INTERIOR(name, \
                            i,j, \
                            iblo,jblo, \
                            ibhi,jbhi) \
  CCTK_LOOP2STR_INTERIOR(name, \
                      i,j, \
                      iblo,jblo, \
                      ibhi,jbhi, \
                      1) \

#define CCTK_LOOP2STR_INTERIOR(name, \
                               i,j, \
                               iblo,jblo, \
                               ibhi,jbhi, \
                               istr) \
   CCTK_LOOP2STR(name, \
                 i,j, \
                 (iblo),(jblo), \
                 CCTK_LSSH(0,1)-(ibhi), \
                 CCTK_LSSH(0,2)-(jbhi), \
                 cctk_lsh(1),cctk_lsh(2), \
                 istr) \

#define CCTK_ENDLOOP2_INTERIOR(name) \
  CCTK_ENDLOOP2STR_INTERIOR(name) \

#define CCTK_ENDLOOP2STR_INTERIOR(name) \
   CCTK_ENDLOOP2(name) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP2_BOUNDARIES_DECLARE(name) \
   CCTK_LOOP2_DECLARE(name) \
   && integer :: lc_bmin(2), lc_bmax(2) \
   && integer :: lc_blo(2), lc_bhi(2) \
   && integer :: lc_istr \
   && integer :: lc_dir, lc_face \
   && integer :: lc_d \

#define CCTK_LOOP2_BOUNDARIES_OMP_PRIVATE(name) \
   CCTK_LOOP2_OMP_PRIVATE(name) \

#define CCTK_LOOP2_BOUNDARIES(name, \
                              i,j, \
                              iblo,jblo, \
                              ibhi,jbhi) \
  CCTK_LOOP2STR_BOUNDARIES(name, \
                        i,j, \
                        iblo,jblo, \
                        ibhi,jbhi, \
                        1) \

#define CCTK_LOOP2STR_BOUNDARIES(name, \
                                 i,j, \
                                 iblo,jblo, \
                                 ibhi,jbhi, \
                                 istr) \
   && lc_blo = (/ iblo,jblo /) \
   && lc_bhi = (/ ibhi,jbhi /) \
   && lc_istr = istr \
   && do lc_dir=1,2 \
   &&    do lc_face=1,2 \
   &&       do lc_d=1,2 \
   &&          lc_bmin(lc_d) = 1 \
   &&          lc_bmax(lc_d) = CCTK_LSSH(0,lc_d) \
   &&          if (lc_d<lc_dir) then \
   &&             lc_bmin(lc_d) = lc_bmin(lc_d)+lc_blo(lc_d) \
   &&             lc_bmax(lc_d) = lc_bmax(lc_d)-lc_bhi(lc_d) \
   &&          end if \
   &&       end do \
   &&       if (lc_face==1) then \
   &&          lc_bmax(lc_dir) = lc_bmin(lc_dir)+lc_blo(lc_dir) \
   &&       else \
   &&          lc_bmin(lc_dir) = lc_bmax(lc_dir)-lc_bhi(lc_dir) \
   &&       end if \
            CCTK_LOOP2STR(name, \
                          i,j, \
                          lc_bmin(1),lc_bmin(2), \
                          lc_bmax(1),lc_bmax(2), \
                          cctk_lsh(1),cctk_lsh(2), \
                          lc_istr) \

#define CCTK_ENDLOOP2_BOUNDARIES(name) \
  CCTK_ENDLOOP2STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP2STR_BOUNDARIES(name) \
            CCTK_ENDLOOP2(name) \
   &&    end do /* face */ \
   && end do /* dir */ \

#endif /* #ifdef FCODE */



/* 3D */

#ifdef CCODE

/* LOOP */

#define CCTK_LOOP3(name, \
                   i,j,k, \
                   imin,jmin,kmin, \
                   imax,jmax,kmax, \
                   ilsh,jlsh,klsh) \
  CCTK_LOOP3STR(name, \
                i,j,k, \
                (imin),(jmin),(kmin), \
                (imax),(jmax),(kmax), \
                (ilsh),(jlsh),(klsh), \
                1) \

#define CCTK_LOOP3STR(name, \
                      i,j,k, \
                      imin,jmin,kmin, \
                      imax,jmax,kmax, \
                      ilsh,jlsh,klsh, \
                      istr) \
  do { \
    typedef int lc0_loop3_basic_##name; \
    int const lc0_imin = (imin); \
    int const lc0_jmin = (jmin); \
    int const lc0_kmin = (kmin); \
    int const lc0_imax = (imax); \
    int const lc0_jmax = (jmax); \
    int const lc0_kmax = (kmax); \
    int const lc0_istr CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int k=lc0_kmin; k<lc0_kmax; ++k) { \
    for (int j=lc0_jmin; j<lc0_jmax; ++j) { \
    for (int i=lc0_imin; i<lc0_imax; ++i) { \

#define CCTK_ENDLOOP3(name) \
  CCTK_ENDLOOP3STR(name) \

#define CCTK_ENDLOOP3STR(name) \
    } \
    } \
    } \
    typedef lc0_loop3_basic_##name lc0_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTERIOR */

#define CCTK_LOOP3_INTERIOR(name, cctkGH, \
                            i,j,k, \
                            iblo,jblo,kblo, \
                            ibhi,jbhi,kbhi) \
  CCTK_LOOP3STR_INTERIOR(name, (cctkGH), \
                         i,j,k, \
                         (iblo),(jblo),(kblo), \
                         (ibhi),(jbhi),(kbhi), \
                         1) \

#define CCTK_LOOP3STR_INTERIOR(name, cctkGH, \
                               i,j,k, \
                               iblo,jblo,kblo, \
                               ibhi,jbhi,kbhi, \
                               istr) \
  do { \
    typedef int lc1_loop3_interior_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_INTERIOR can only be used in 3 dimensions"); \
    } \
    CCTK_LOOP3STR(name##_interior, \
                  i,j,k, \
                  (iblo),(jblo),(kblo), \
                  lc1_cctkGH->CCTK_LSSH(0,0)-(ibhi), \
                  lc1_cctkGH->CCTK_LSSH(0,1)-(jbhi), \
                  lc1_cctkGH->CCTK_LSSH(0,2)-(kbhi), \
                  lc1_cctkGH->cctk_lsh[0], \
                  lc1_cctkGH->cctk_lsh[1], \
                  lc1_cctkGH->cctk_lsh[2], \
                  (istr)) { \

#define CCTK_ENDLOOP3_INTERIOR(name) \
  CCTK_ENDLOOP3STR_INTERIOR(name) \

#define CCTK_ENDLOOP3STR_INTERIOR(name) \
    } CCTK_ENDLOOP3STR(name##_interior); \
    typedef lc1_loop3_interior_##name lc1_ensure_proper_nesting; \
  } while(0) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP3_BOUNDARIES(name, cctkGH, \
                              i,j,k, \
                              iblo,jblo,kblo, \
                              ibhi,jbhi,kbhi, \
                              ibboxlo,jbboxlo,kbboxlo, \
                              ibboxhi,jbboxhi,kbboxhi) \
  CCTK_LOOP3STR_BOUNDARIES(name, (cctkGH), \
                           i,j,k, \
                           (iblo),(jblo),(kblo), \
                           (ibhi),(jbhi),(kbhi), \
                           (ibboxlo),(jbboxlo),(kbboxlo), \
                           (ibboxhi),(jbboxhi),(kbboxhi), \
                           1) \

#define CCTK_LOOP3STR_BOUNDARIES(name, cctkGH, \
                                 i,j,k, \
                                 iblo,jblo,kblo, \
                                 ibhi,jbhi,kbhi, \
                                 ibboxlo,jbboxlo,kbboxlo, \
                                 ibboxhi,jbboxhi,kbboxhi, \
                                 istr) \
  do { \
    typedef int lc1_loop3_boundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_BOUNDARIES can only be used in 3 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo),(jblo),(kblo) }; \
    int const lc1_bhi[] = { (ibhi),(jbhi),(kbhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi),(jbboxlo), (jbboxhi),(kbboxlo), (kbboxhi) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int lc1_dir=0; lc1_dir<3; ++lc1_dir) { \
      for (int lc1_face=0; lc1_face<2; ++lc1_face) { \
        if (lc1_bbox[2*lc1_dir+lc1_face]) { \
          int lc1_bmin[3], lc1_bmax[3]; \
          for (int lc1_d=0; lc1_d<3; ++lc1_d) { \
            lc1_bmin[lc1_d] = 0; \
            lc1_bmax[lc1_d] = lc1_cctkGH->CCTK_LSSH(0,lc1_d); \
            if (lc1_d<lc1_dir) { \
              if (lc1_bbox[2*lc1_d]) { \
                lc1_bmin[lc1_d] += lc1_blo[lc1_d]; \
              } \
              if (lc1_bbox[2*lc1_d+1]) { \
                lc1_bmax[lc1_d] -= lc1_bhi[lc1_d]; \
              } \
            } \
          } \
          if (lc1_face==0) { \
            lc1_bmax[lc1_dir] = lc1_bmin[lc1_dir]+lc1_blo[lc1_dir]; \
          } else { \
            lc1_bmin[lc1_dir] = lc1_bmax[lc1_dir]-lc1_bhi[lc1_dir]; \
          } \
          CCTK_LOOP3STR(name##_boundaries, \
                        i,j,k, \
                        lc1_bmin[0],lc1_bmin[1],lc1_bmin[2], \
                        lc1_bmax[0],lc1_bmax[1],lc1_bmax[2], \
                        lc1_cctkGH->cctk_lsh[0], \
                        lc1_cctkGH->cctk_lsh[1], \
                        lc1_cctkGH->cctk_lsh[2], \
                        lc1_istr1) { \

#define CCTK_ENDLOOP3_BOUNDARIES(name) \
  CCTK_ENDLOOP3STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP3STR_BOUNDARIES(name) \
          } CCTK_ENDLOOP3STR(name##_boundaries); \
        } /* if bbox */ \
      } /* for face */ \
    }  /* for dir */ \
    typedef lc1_loop3_boundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBOUNDARIES */

#define CCTK_LOOP3_INTBOUNDARIES(name, cctkGH, \
                                 i,j,k, \
                                 ni,nj,nk, \
                                 iblo,jblo,kblo, \
                                 ibhi,jbhi,kbhi, \
                                 ibboxlo,jbboxlo,kbboxlo, \
                                 ibboxhi,jbboxhi,kbboxhi) \
  CCTK_LOOP3STR_INTBOUNDARIES(name, (cctkGH), \
                              i,j,k, \
                              ni,nj,nk, \
                              (iblo),(jblo),(kblo), \
                              (ibhi),(jbhi),(kbhi), \
                              (ibboxlo),(jbboxlo),(kbboxlo), \
                              (ibboxhi),(jbboxhi),(kbboxhi), \
                              1) \

#define CCTK_LOOP3STR_INTBOUNDARIES(name, cctkGH, \
                                    i,j,k, \
                                    ni,nj,nk, \
                                    iblo,jblo,kblo, \
                                    ibhi,jbhi,kbhi, \
                                    ibboxlo,jbboxlo,kbboxlo, \
                                    ibboxhi,jbboxhi,kbboxhi, \
                                    istr) \
  do { \
    typedef int lc1_loop3_intboundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_BOUNDARIES can only be used in 3 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo),(jblo),(kblo) }; \
    int const lc1_bhi[] = { (ibhi),(jbhi),(kbhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi),(jbboxlo), (jbboxhi),(kbboxlo), (kbboxhi) }; \
    int const lc1_lssh[] = { lc1_cctkGH->CCTK_LSSH(0,0),lc1_cctkGH->CCTK_LSSH(0,1),lc1_cctkGH->CCTK_LSSH(0,2) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    /* Loop over all faces, edges, and corners */ \
    for (int nk=-1; nk<=+1; ++nk) { \
    for (int nj=-1; nj<=+1; ++nj) { \
    for (int ni=-1; ni<=+1; ++ni) { \
      int lc1_any_bbox = \
        (ni==-1 ? lc1_bbox[0] : 0) || (ni==+1 ? lc1_bbox[1] : 0)|| \
        (nj==-1 ? lc1_bbox[2] : 0) || (nj==+1 ? lc1_bbox[3] : 0)|| \
        (nk==-1 ? lc1_bbox[4] : 0) || (nk==+1 ? lc1_bbox[5] : 0); \
      int lc1_all_bbox = \
        (ni==-1 ? lc1_bbox[0] : 1) && (ni==+1 ? lc1_bbox[1] : 1)&& \
        (nj==-1 ? lc1_bbox[2] : 1) && (nj==+1 ? lc1_bbox[3] : 1)&& \
        (nk==-1 ? lc1_bbox[4] : 1) && (nk==+1 ? lc1_bbox[5] : 1); \
      if (lc1_all_bbox && lc1_any_bbox) { \
        int const lc1_bmin[] = { \
          ni==-1 ? 0 : ni==0 ? lc1_blo[0] : lc1_lssh[0] - lc1_bhi[0], \
          nj==-1 ? 0 : nj==0 ? lc1_blo[1] : lc1_lssh[1] - lc1_bhi[1], \
          nk==-1 ? 0 : nk==0 ? lc1_blo[2] : lc1_lssh[2] - lc1_bhi[2], \
        }; \
        int const lc1_bmax[] = { \
          ni==-1 ? lc1_blo[0] : ni==0 ? lc1_lssh[0] - lc1_bhi[0] : lc1_lssh[0], \
          nj==-1 ? lc1_blo[1] : nj==0 ? lc1_lssh[1] - lc1_bhi[1] : lc1_lssh[1], \
          nk==-1 ? lc1_blo[2] : nk==0 ? lc1_lssh[2] - lc1_bhi[2] : lc1_lssh[2], \
        }; \
        CCTK_LOOP3STR(name##_boundaries, \
                      i,j,k, \
                      lc1_bmin[0],lc1_bmin[1],lc1_bmin[2], \
                      lc1_bmax[0],lc1_bmax[1],lc1_bmax[2], \
                      lc1_cctkGH->cctk_lsh[0], \
                      lc1_cctkGH->cctk_lsh[1], \
                      lc1_cctkGH->cctk_lsh[2], \
                      lc1_istr1) { \

#define CCTK_ENDLOOP3_INTBOUNDARIES(name) \
  CCTK_ENDLOOP3STR_INTBOUNDARIES(name) \

#define CCTK_ENDLOOP3STR_INTBOUNDARIES(name) \
        } CCTK_ENDLOOP3STR(name##_boundaries); \
      } /* if bbox */ \
    }   /* for dir */ \
    }   /* for dir */ \
    }   /* for dir */ \
    typedef lc1_loop3_intboundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_ALL */

#define CCTK_LOOP3_ALL(name, cctkGH, \
                       i,j,k) \
  CCTK_LOOP3STR_ALL(name, (cctkGH), \
                    i,j,k, \
                    1) \

#define CCTK_LOOP3STR_ALL(name, cctkGH, \
                          i,j,k, \
                          istr) \
  do { \
    typedef int lc2_loop3_all_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_ALL can only be used in 3 dimensions"); \
    } \
    CCTK_LOOP3STR(name##_all, \
                  i,j,k, \
                  0,0,0, \
                  lc2_cctkGH->CCTK_LSSH(0,0), \
                  lc2_cctkGH->CCTK_LSSH(0,1), \
                  lc2_cctkGH->CCTK_LSSH(0,2), \
                  lc2_cctkGH->cctk_lsh[0], \
                  lc2_cctkGH->cctk_lsh[1], \
                  lc2_cctkGH->cctk_lsh[2], \
                  (istr)) { \

#define CCTK_ENDLOOP3_ALL(name) \
  CCTK_ENDLOOP3STR_ALL(name) \

#define CCTK_ENDLOOP3STR_ALL(name) \
    } CCTK_ENDLOOP3STR(name##_all); \
    typedef lc2_loop3_all_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INT */

#define CCTK_LOOP3_INT(name, cctkGH, \
                       i,j,k) \
  CCTK_LOOP3STR_INT(name, (cctkGH), \
                    i,j,k, \
                    1) \

#define CCTK_LOOP3STR_INT(name, cctkGH, \
                          i,j,k, \
                          istr) \
  do { \
    typedef int lc2_loop3_int_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_INT can only be used in 3 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [6]; \
    CCTK_INT lc2_is_ghostbnd[6]; \
    CCTK_INT lc2_is_symbnd  [6]; \
    CCTK_INT lc2_is_physbnd [6]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 6, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP3STR_INTERIOR(name##_int, \
                           lc2_cctkGH, \
                           i,j,k, \
                           lc2_bndsize[0],lc2_bndsize[2],lc2_bndsize[4], \
                           lc2_bndsize[1],lc2_bndsize[3],lc2_bndsize[5], \
                           (istr)) { \

#define CCTK_ENDLOOP3_INT(name) \
  CCTK_ENDLOOP3STR_INT(name) \

#define CCTK_ENDLOOP3STR_INT(name) \
    } CCTK_ENDLOOP3STR_INTERIOR(name##_int); \
    typedef lc2_loop3_int_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_BND */

#define CCTK_LOOP3_BND(name, cctkGH, \
                       i,j,k) \
  CCTK_LOOP3STR_BND(name, (cctkGH), \
                    i,j,k, \
                    1) \

#define CCTK_LOOP3STR_BND(name, cctkGH, \
                          i,j,k, \
                          istr) \
  do { \
    typedef int lc2_loop3_bnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_BND can only be used in 3 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [6]; \
    CCTK_INT lc2_is_ghostbnd[6]; \
    CCTK_INT lc2_is_symbnd  [6]; \
    CCTK_INT lc2_is_physbnd [6]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 6, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP3STR_BOUNDARIES(name##_bnd, \
                             lc2_cctkGH, \
                             i,j,k, \
                             lc2_bndsize[0],lc2_bndsize[2],lc2_bndsize[4], \
                             lc2_bndsize[1],lc2_bndsize[3],lc2_bndsize[5], \
                             lc2_is_physbnd[0],lc2_is_physbnd[2],lc2_is_physbnd[4], \
                             lc2_is_physbnd[1],lc2_is_physbnd[3],lc2_is_physbnd[5], \
                             (istr)) { \

#define CCTK_ENDLOOP3_BND(name) \
  CCTK_ENDLOOP3STR_BND(name) \

#define CCTK_ENDLOOP3STR_BND(name) \
    } CCTK_ENDLOOP3STR_BOUNDARIES(name##_bnd); \
    typedef lc2_loop3_bnd_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBND */

#define CCTK_LOOP3_INTBND(name, cctkGH, \
                           i,j,k, \
                           ni,nj,nk) \
  CCTK_LOOP3STR_INTBND(name, (cctkGH), \
                        i,j,k, \
                        ni,nj,nk, \
                        1) \

#define CCTK_LOOP3STR_INTBND(name, cctkGH, \
                              i,j,k, \
                              ni,nj,nk, \
                              istr) \
  do { \
    typedef int lc2_loop3_intbnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 3) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP3_INTBND can only be used in 3 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [6]; \
    CCTK_INT lc2_is_ghostbnd[6]; \
    CCTK_INT lc2_is_symbnd  [6]; \
    CCTK_INT lc2_is_physbnd [6]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 6, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP3STR_INTBOUNDARIES(name##_intbnd, \
                                lc2_cctkGH, \
                                i,j,k, \
                                ni,nj,nk, \
                                lc2_bndsize[0],lc2_bndsize[2],lc2_bndsize[4], \
                                lc2_bndsize[1],lc2_bndsize[3],lc2_bndsize[5], \
                                lc2_is_physbnd[0],lc2_is_physbnd[2],lc2_is_physbnd[4], \
                                lc2_is_physbnd[1],lc2_is_physbnd[3],lc2_is_physbnd[5], \
                                (istr)) { \

#define CCTK_ENDLOOP3_INTBND(name) \
  CCTK_ENDLOOP3STR_INTBND(name) \

#define CCTK_ENDLOOP3STR_INTBND(name) \
    } CCTK_ENDLOOP3STR_INTBOUNDARIES(name##_intbnd); \
    typedef lc2_loop3_intbnd_##name lc2_ensure_proper_nesting; \
  } while (0) \

#endif /* #ifdef CCODE */



#ifdef FCODE

/* LOOP */

#define CCTK_LOOP3_DECLARE(name) \
   && integer :: name/**/_imin,name/**/_jmin,name/**/_kmin \
   && integer :: name/**/_imax,name/**/_jmax,name/**/_kmax \
   && integer :: name/**/_istr \

#define CCTK_LOOP3_OMP_PRIVATE(name) \

#define CCTK_LOOP3(name, \
                   i,j,k, \
                   imin,jmin,kmin, \
                   imax,jmax,kmax, \
                   ilsh,jlsh,klsh) \
  CCTK_LOOP3STR(name, \
             i,j,k, \
             imin,jmin,kmin, \
             imax,jmax,kmax, \
             ilsh,jlsh,klsh, \
             1) \

#define CCTK_LOOP3STR(name, \
                      i,j,k, \
                      imin,jmin,kmin, \
                      imax,jmax,kmax, \
                      ilsh,jlsh,klsh, \
                      istr) \
   && name/**/_imin = imin \
   && name/**/_jmin = jmin \
   && name/**/_kmin = kmin \
   && name/**/_imax = imax \
   && name/**/_jmax = jmax \
   && name/**/_kmax = kmax \
   && name/**/_istr = istr \
   && do k = name/**/_kmin, name/**/_kmax \
   && do j = name/**/_jmin, name/**/_jmax \
   && do i = name/**/_imin, name/**/_imax \

#define CCTK_ENDLOOP3(name) \
  CCTK_ENDLOOP3STR(name) \

#define CCTK_ENDLOOP3STR(name) \
   && end do \
   && end do \
   && end do \



/* LOOP_ALL */

#define CCTK_LOOP3_ALL_DECLARE(name) \
   CCTK_LOOP3_DECLARE(name) \

#define CCTK_LOOP3_ALL_OMP_PRIVATE(name) \
   CCTK_LOOP3_OMP_PRIVATE(name) \

#define CCTK_LOOP3_ALL(name, \
                       i,j,k) \
  CCTK_LOOP3STR_ALL(name, \
                 i,j,k, \
                 1) \

#define CCTK_LOOP3STR_ALL(name, \
                          i,j,k, \
                          istr) \
   CCTK_LOOP3STR(name, \
                 i,j,k, \
                 1,1,1, \
                 CCTK_LSSH(0,1),CCTK_LSSH(0,2),CCTK_LSSH(0,3), \
                 cctk_lsh(1),cctk_lsh(2),cctk_lsh(3), \
                 istr) \

#define CCTK_ENDLOOP3_ALL(name) \
  CCTK_ENDLOOP3STR_ALL(name) \

#define CCTK_ENDLOOP3STR_ALL(name) \
   CCTK_ENDLOOP3(name) \



/* LOOP_INTERIOR */

#define CCTK_LOOP3_INTERIOR_DECLARE(name) \
   CCTK_LOOP3_DECLARE(name) \

#define CCTK_LOOP3_INTERIOR_OMP_PRIVATE(name) \
   CCTK_LOOP3_OMP_PRIVATE(name) \

#define CCTK_LOOP3_INTERIOR(name, \
                            i,j,k, \
                            iblo,jblo,kblo, \
                            ibhi,jbhi,kbhi) \
  CCTK_LOOP3STR_INTERIOR(name, \
                      i,j,k, \
                      iblo,jblo,kblo, \
                      ibhi,jbhi,kbhi, \
                      1) \

#define CCTK_LOOP3STR_INTERIOR(name, \
                               i,j,k, \
                               iblo,jblo,kblo, \
                               ibhi,jbhi,kbhi, \
                               istr) \
   CCTK_LOOP3STR(name, \
                 i,j,k, \
                 (iblo),(jblo),(kblo), \
                 CCTK_LSSH(0,1)-(ibhi), \
                 CCTK_LSSH(0,2)-(jbhi), \
                 CCTK_LSSH(0,3)-(kbhi), \
                 cctk_lsh(1),cctk_lsh(2),cctk_lsh(3), \
                 istr) \

#define CCTK_ENDLOOP3_INTERIOR(name) \
  CCTK_ENDLOOP3STR_INTERIOR(name) \

#define CCTK_ENDLOOP3STR_INTERIOR(name) \
   CCTK_ENDLOOP3(name) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP3_BOUNDARIES_DECLARE(name) \
   CCTK_LOOP3_DECLARE(name) \
   && integer :: lc_bmin(3), lc_bmax(3) \
   && integer :: lc_blo(3), lc_bhi(3) \
   && integer :: lc_istr \
   && integer :: lc_dir, lc_face \
   && integer :: lc_d \

#define CCTK_LOOP3_BOUNDARIES_OMP_PRIVATE(name) \
   CCTK_LOOP3_OMP_PRIVATE(name) \

#define CCTK_LOOP3_BOUNDARIES(name, \
                              i,j,k, \
                              iblo,jblo,kblo, \
                              ibhi,jbhi,kbhi) \
  CCTK_LOOP3STR_BOUNDARIES(name, \
                        i,j,k, \
                        iblo,jblo,kblo, \
                        ibhi,jbhi,kbhi, \
                        1) \

#define CCTK_LOOP3STR_BOUNDARIES(name, \
                                 i,j,k, \
                                 iblo,jblo,kblo, \
                                 ibhi,jbhi,kbhi, \
                                 istr) \
   && lc_blo = (/ iblo,jblo,kblo /) \
   && lc_bhi = (/ ibhi,jbhi,kbhi /) \
   && lc_istr = istr \
   && do lc_dir=1,3 \
   &&    do lc_face=1,2 \
   &&       do lc_d=1,3 \
   &&          lc_bmin(lc_d) = 1 \
   &&          lc_bmax(lc_d) = CCTK_LSSH(0,lc_d) \
   &&          if (lc_d<lc_dir) then \
   &&             lc_bmin(lc_d) = lc_bmin(lc_d)+lc_blo(lc_d) \
   &&             lc_bmax(lc_d) = lc_bmax(lc_d)-lc_bhi(lc_d) \
   &&          end if \
   &&       end do \
   &&       if (lc_face==1) then \
   &&          lc_bmax(lc_dir) = lc_bmin(lc_dir)+lc_blo(lc_dir) \
   &&       else \
   &&          lc_bmin(lc_dir) = lc_bmax(lc_dir)-lc_bhi(lc_dir) \
   &&       end if \
            CCTK_LOOP3STR(name, \
                          i,j,k, \
                          lc_bmin(1),lc_bmin(2),lc_bmin(3), \
                          lc_bmax(1),lc_bmax(2),lc_bmax(3), \
                          cctk_lsh(1),cctk_lsh(2),cctk_lsh(3), \
                          lc_istr) \

#define CCTK_ENDLOOP3_BOUNDARIES(name) \
  CCTK_ENDLOOP3STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP3STR_BOUNDARIES(name) \
            CCTK_ENDLOOP3(name) \
   &&    end do /* face */ \
   && end do /* dir */ \

#endif /* #ifdef FCODE */



/* 4D */

#ifdef CCODE

/* LOOP */

#define CCTK_LOOP4(name, \
                   i,j,k,l, \
                   imin,jmin,kmin,lmin, \
                   imax,jmax,kmax,lmax, \
                   ilsh,jlsh,klsh,llsh) \
  CCTK_LOOP4STR(name, \
                i,j,k,l, \
                (imin),(jmin),(kmin),(lmin), \
                (imax),(jmax),(kmax),(lmax), \
                (ilsh),(jlsh),(klsh),(llsh), \
                1) \

#define CCTK_LOOP4STR(name, \
                      i,j,k,l, \
                      imin,jmin,kmin,lmin, \
                      imax,jmax,kmax,lmax, \
                      ilsh,jlsh,klsh,llsh, \
                      istr) \
  do { \
    typedef int lc0_loop4_basic_##name; \
    int const lc0_imin = (imin); \
    int const lc0_jmin = (jmin); \
    int const lc0_kmin = (kmin); \
    int const lc0_lmin = (lmin); \
    int const lc0_imax = (imax); \
    int const lc0_jmax = (jmax); \
    int const lc0_kmax = (kmax); \
    int const lc0_lmax = (lmax); \
    int const lc0_istr CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int l=lc0_lmin; l<lc0_lmax; ++l) { \
    for (int k=lc0_kmin; k<lc0_kmax; ++k) { \
    for (int j=lc0_jmin; j<lc0_jmax; ++j) { \
    for (int i=lc0_imin; i<lc0_imax; ++i) { \

#define CCTK_ENDLOOP4(name) \
  CCTK_ENDLOOP4STR(name) \

#define CCTK_ENDLOOP4STR(name) \
    } \
    } \
    } \
    } \
    typedef lc0_loop4_basic_##name lc0_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTERIOR */

#define CCTK_LOOP4_INTERIOR(name, cctkGH, \
                            i,j,k,l, \
                            iblo,jblo,kblo,lblo, \
                            ibhi,jbhi,kbhi,lbhi) \
  CCTK_LOOP4STR_INTERIOR(name, (cctkGH), \
                         i,j,k,l, \
                         (iblo),(jblo),(kblo),(lblo), \
                         (ibhi),(jbhi),(kbhi),(lbhi), \
                         1) \

#define CCTK_LOOP4STR_INTERIOR(name, cctkGH, \
                               i,j,k,l, \
                               iblo,jblo,kblo,lblo, \
                               ibhi,jbhi,kbhi,lbhi, \
                               istr) \
  do { \
    typedef int lc1_loop4_interior_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_INTERIOR can only be used in 4 dimensions"); \
    } \
    CCTK_LOOP4STR(name##_interior, \
                  i,j,k,l, \
                  (iblo),(jblo),(kblo),(lblo), \
                  lc1_cctkGH->CCTK_LSSH(0,0)-(ibhi), \
                  lc1_cctkGH->CCTK_LSSH(0,1)-(jbhi), \
                  lc1_cctkGH->CCTK_LSSH(0,2)-(kbhi), \
                  lc1_cctkGH->CCTK_LSSH(0,3)-(lbhi), \
                  lc1_cctkGH->cctk_lsh[0], \
                  lc1_cctkGH->cctk_lsh[1], \
                  lc1_cctkGH->cctk_lsh[2], \
                  lc1_cctkGH->cctk_lsh[3], \
                  (istr)) { \

#define CCTK_ENDLOOP4_INTERIOR(name) \
  CCTK_ENDLOOP4STR_INTERIOR(name) \

#define CCTK_ENDLOOP4STR_INTERIOR(name) \
    } CCTK_ENDLOOP4STR(name##_interior); \
    typedef lc1_loop4_interior_##name lc1_ensure_proper_nesting; \
  } while(0) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP4_BOUNDARIES(name, cctkGH, \
                              i,j,k,l, \
                              iblo,jblo,kblo,lblo, \
                              ibhi,jbhi,kbhi,lbhi, \
                              ibboxlo,jbboxlo,kbboxlo,lbboxlo, \
                              ibboxhi,jbboxhi,kbboxhi,lbboxhi) \
  CCTK_LOOP4STR_BOUNDARIES(name, (cctkGH), \
                           i,j,k,l, \
                           (iblo),(jblo),(kblo),(lblo), \
                           (ibhi),(jbhi),(kbhi),(lbhi), \
                           (ibboxlo),(jbboxlo),(kbboxlo),(lbboxlo), \
                           (ibboxhi),(jbboxhi),(kbboxhi),(lbboxhi), \
                           1) \

#define CCTK_LOOP4STR_BOUNDARIES(name, cctkGH, \
                                 i,j,k,l, \
                                 iblo,jblo,kblo,lblo, \
                                 ibhi,jbhi,kbhi,lbhi, \
                                 ibboxlo,jbboxlo,kbboxlo,lbboxlo, \
                                 ibboxhi,jbboxhi,kbboxhi,lbboxhi, \
                                 istr) \
  do { \
    typedef int lc1_loop4_boundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_BOUNDARIES can only be used in 4 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo),(jblo),(kblo),(lblo) }; \
    int const lc1_bhi[] = { (ibhi),(jbhi),(kbhi),(lbhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi),(jbboxlo), (jbboxhi),(kbboxlo), (kbboxhi),(lbboxlo), (lbboxhi) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    for (int lc1_dir=0; lc1_dir<4; ++lc1_dir) { \
      for (int lc1_face=0; lc1_face<2; ++lc1_face) { \
        if (lc1_bbox[2*lc1_dir+lc1_face]) { \
          int lc1_bmin[4], lc1_bmax[4]; \
          for (int lc1_d=0; lc1_d<4; ++lc1_d) { \
            lc1_bmin[lc1_d] = 0; \
            lc1_bmax[lc1_d] = lc1_cctkGH->CCTK_LSSH(0,lc1_d); \
            if (lc1_d<lc1_dir) { \
              if (lc1_bbox[2*lc1_d]) { \
                lc1_bmin[lc1_d] += lc1_blo[lc1_d]; \
              } \
              if (lc1_bbox[2*lc1_d+1]) { \
                lc1_bmax[lc1_d] -= lc1_bhi[lc1_d]; \
              } \
            } \
          } \
          if (lc1_face==0) { \
            lc1_bmax[lc1_dir] = lc1_bmin[lc1_dir]+lc1_blo[lc1_dir]; \
          } else { \
            lc1_bmin[lc1_dir] = lc1_bmax[lc1_dir]-lc1_bhi[lc1_dir]; \
          } \
          CCTK_LOOP4STR(name##_boundaries, \
                        i,j,k,l, \
                        lc1_bmin[0],lc1_bmin[1],lc1_bmin[2],lc1_bmin[3], \
                        lc1_bmax[0],lc1_bmax[1],lc1_bmax[2],lc1_bmax[3], \
                        lc1_cctkGH->cctk_lsh[0], \
                        lc1_cctkGH->cctk_lsh[1], \
                        lc1_cctkGH->cctk_lsh[2], \
                        lc1_cctkGH->cctk_lsh[3], \
                        lc1_istr1) { \

#define CCTK_ENDLOOP4_BOUNDARIES(name) \
  CCTK_ENDLOOP4STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP4STR_BOUNDARIES(name) \
          } CCTK_ENDLOOP4STR(name##_boundaries); \
        } /* if bbox */ \
      } /* for face */ \
    }  /* for dir */ \
    typedef lc1_loop4_boundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBOUNDARIES */

#define CCTK_LOOP4_INTBOUNDARIES(name, cctkGH, \
                                 i,j,k,l, \
                                 ni,nj,nk,nl, \
                                 iblo,jblo,kblo,lblo, \
                                 ibhi,jbhi,kbhi,lbhi, \
                                 ibboxlo,jbboxlo,kbboxlo,lbboxlo, \
                                 ibboxhi,jbboxhi,kbboxhi,lbboxhi) \
  CCTK_LOOP4STR_INTBOUNDARIES(name, (cctkGH), \
                              i,j,k,l, \
                              ni,nj,nk,nl, \
                              (iblo),(jblo),(kblo),(lblo), \
                              (ibhi),(jbhi),(kbhi),(lbhi), \
                              (ibboxlo),(jbboxlo),(kbboxlo),(lbboxlo), \
                              (ibboxhi),(jbboxhi),(kbboxhi),(lbboxhi), \
                              1) \

#define CCTK_LOOP4STR_INTBOUNDARIES(name, cctkGH, \
                                    i,j,k,l, \
                                    ni,nj,nk,nl, \
                                    iblo,jblo,kblo,lblo, \
                                    ibhi,jbhi,kbhi,lbhi, \
                                    ibboxlo,jbboxlo,kbboxlo,lbboxlo, \
                                    ibboxhi,jbboxhi,kbboxhi,lbboxhi, \
                                    istr) \
  do { \
    typedef int lc1_loop4_intboundaries_##name; \
    cGH const *CCTK_RESTRICT const lc1_cctkGH = (cctkGH); \
    if (lc1_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_BOUNDARIES can only be used in 4 dimensions"); \
    } \
    int const lc1_blo[] = { (iblo),(jblo),(kblo),(lblo) }; \
    int const lc1_bhi[] = { (ibhi),(jbhi),(kbhi),(lbhi) }; \
    int const lc1_bbox[] = { (ibboxlo), (ibboxhi),(jbboxlo), (jbboxhi),(kbboxlo), (kbboxhi),(lbboxlo), (lbboxhi) }; \
    int const lc1_lssh[] = { lc1_cctkGH->CCTK_LSSH(0,0),lc1_cctkGH->CCTK_LSSH(0,1),lc1_cctkGH->CCTK_LSSH(0,2),lc1_cctkGH->CCTK_LSSH(0,3) }; \
    int const lc1_istr1 CCTK_ATTRIBUTE_UNUSED = (istr); \
    /* Loop over all faces, edges, and corners */ \
    for (int nl=-1; nl<=+1; ++nl) { \
    for (int nk=-1; nk<=+1; ++nk) { \
    for (int nj=-1; nj<=+1; ++nj) { \
    for (int ni=-1; ni<=+1; ++ni) { \
      int lc1_any_bbox = \
        (ni==-1 ? lc1_bbox[0] : 0) || (ni==+1 ? lc1_bbox[1] : 0)|| \
        (nj==-1 ? lc1_bbox[2] : 0) || (nj==+1 ? lc1_bbox[3] : 0)|| \
        (nk==-1 ? lc1_bbox[4] : 0) || (nk==+1 ? lc1_bbox[5] : 0)|| \
        (nl==-1 ? lc1_bbox[6] : 0) || (nl==+1 ? lc1_bbox[7] : 0); \
      int lc1_all_bbox = \
        (ni==-1 ? lc1_bbox[0] : 1) && (ni==+1 ? lc1_bbox[1] : 1)&& \
        (nj==-1 ? lc1_bbox[2] : 1) && (nj==+1 ? lc1_bbox[3] : 1)&& \
        (nk==-1 ? lc1_bbox[4] : 1) && (nk==+1 ? lc1_bbox[5] : 1)&& \
        (nl==-1 ? lc1_bbox[6] : 1) && (nl==+1 ? lc1_bbox[7] : 1); \
      if (lc1_all_bbox && lc1_any_bbox) { \
        int const lc1_bmin[] = { \
          ni==-1 ? 0 : ni==0 ? lc1_blo[0] : lc1_lssh[0] - lc1_bhi[0], \
          nj==-1 ? 0 : nj==0 ? lc1_blo[1] : lc1_lssh[1] - lc1_bhi[1], \
          nk==-1 ? 0 : nk==0 ? lc1_blo[2] : lc1_lssh[2] - lc1_bhi[2], \
          nl==-1 ? 0 : nl==0 ? lc1_blo[3] : lc1_lssh[3] - lc1_bhi[3], \
        }; \
        int const lc1_bmax[] = { \
          ni==-1 ? lc1_blo[0] : ni==0 ? lc1_lssh[0] - lc1_bhi[0] : lc1_lssh[0], \
          nj==-1 ? lc1_blo[1] : nj==0 ? lc1_lssh[1] - lc1_bhi[1] : lc1_lssh[1], \
          nk==-1 ? lc1_blo[2] : nk==0 ? lc1_lssh[2] - lc1_bhi[2] : lc1_lssh[2], \
          nl==-1 ? lc1_blo[3] : nl==0 ? lc1_lssh[3] - lc1_bhi[3] : lc1_lssh[3], \
        }; \
        CCTK_LOOP4STR(name##_boundaries, \
                      i,j,k,l, \
                      lc1_bmin[0],lc1_bmin[1],lc1_bmin[2],lc1_bmin[3], \
                      lc1_bmax[0],lc1_bmax[1],lc1_bmax[2],lc1_bmax[3], \
                      lc1_cctkGH->cctk_lsh[0], \
                      lc1_cctkGH->cctk_lsh[1], \
                      lc1_cctkGH->cctk_lsh[2], \
                      lc1_cctkGH->cctk_lsh[3], \
                      lc1_istr1) { \

#define CCTK_ENDLOOP4_INTBOUNDARIES(name) \
  CCTK_ENDLOOP4STR_INTBOUNDARIES(name) \

#define CCTK_ENDLOOP4STR_INTBOUNDARIES(name) \
        } CCTK_ENDLOOP4STR(name##_boundaries); \
      } /* if bbox */ \
    }   /* for dir */ \
    }   /* for dir */ \
    }   /* for dir */ \
    }   /* for dir */ \
    typedef lc1_loop4_intboundaries_##name lc1_ensure_proper_nesting; \
  } while (0) \



/* LOOP_ALL */

#define CCTK_LOOP4_ALL(name, cctkGH, \
                       i,j,k,l) \
  CCTK_LOOP4STR_ALL(name, (cctkGH), \
                    i,j,k,l, \
                    1) \

#define CCTK_LOOP4STR_ALL(name, cctkGH, \
                          i,j,k,l, \
                          istr) \
  do { \
    typedef int lc2_loop4_all_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_ALL can only be used in 4 dimensions"); \
    } \
    CCTK_LOOP4STR(name##_all, \
                  i,j,k,l, \
                  0,0,0,0, \
                  lc2_cctkGH->CCTK_LSSH(0,0), \
                  lc2_cctkGH->CCTK_LSSH(0,1), \
                  lc2_cctkGH->CCTK_LSSH(0,2), \
                  lc2_cctkGH->CCTK_LSSH(0,3), \
                  lc2_cctkGH->cctk_lsh[0], \
                  lc2_cctkGH->cctk_lsh[1], \
                  lc2_cctkGH->cctk_lsh[2], \
                  lc2_cctkGH->cctk_lsh[3], \
                  (istr)) { \

#define CCTK_ENDLOOP4_ALL(name) \
  CCTK_ENDLOOP4STR_ALL(name) \

#define CCTK_ENDLOOP4STR_ALL(name) \
    } CCTK_ENDLOOP4STR(name##_all); \
    typedef lc2_loop4_all_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INT */

#define CCTK_LOOP4_INT(name, cctkGH, \
                       i,j,k,l) \
  CCTK_LOOP4STR_INT(name, (cctkGH), \
                    i,j,k,l, \
                    1) \

#define CCTK_LOOP4STR_INT(name, cctkGH, \
                          i,j,k,l, \
                          istr) \
  do { \
    typedef int lc2_loop4_int_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_INT can only be used in 4 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [8]; \
    CCTK_INT lc2_is_ghostbnd[8]; \
    CCTK_INT lc2_is_symbnd  [8]; \
    CCTK_INT lc2_is_physbnd [8]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 8, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP4STR_INTERIOR(name##_int, \
                           lc2_cctkGH, \
                           i,j,k,l, \
                           lc2_bndsize[0],lc2_bndsize[2],lc2_bndsize[4],lc2_bndsize[6], \
                           lc2_bndsize[1],lc2_bndsize[3],lc2_bndsize[5],lc2_bndsize[7], \
                           (istr)) { \

#define CCTK_ENDLOOP4_INT(name) \
  CCTK_ENDLOOP4STR_INT(name) \

#define CCTK_ENDLOOP4STR_INT(name) \
    } CCTK_ENDLOOP4STR_INTERIOR(name##_int); \
    typedef lc2_loop4_int_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_BND */

#define CCTK_LOOP4_BND(name, cctkGH, \
                       i,j,k,l) \
  CCTK_LOOP4STR_BND(name, (cctkGH), \
                    i,j,k,l, \
                    1) \

#define CCTK_LOOP4STR_BND(name, cctkGH, \
                          i,j,k,l, \
                          istr) \
  do { \
    typedef int lc2_loop4_bnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_BND can only be used in 4 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [8]; \
    CCTK_INT lc2_is_ghostbnd[8]; \
    CCTK_INT lc2_is_symbnd  [8]; \
    CCTK_INT lc2_is_physbnd [8]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 8, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP4STR_BOUNDARIES(name##_bnd, \
                             lc2_cctkGH, \
                             i,j,k,l, \
                             lc2_bndsize[0],lc2_bndsize[2],lc2_bndsize[4],lc2_bndsize[6], \
                             lc2_bndsize[1],lc2_bndsize[3],lc2_bndsize[5],lc2_bndsize[7], \
                             lc2_is_physbnd[0],lc2_is_physbnd[2],lc2_is_physbnd[4],lc2_is_physbnd[6], \
                             lc2_is_physbnd[1],lc2_is_physbnd[3],lc2_is_physbnd[5],lc2_is_physbnd[7], \
                             (istr)) { \

#define CCTK_ENDLOOP4_BND(name) \
  CCTK_ENDLOOP4STR_BND(name) \

#define CCTK_ENDLOOP4STR_BND(name) \
    } CCTK_ENDLOOP4STR_BOUNDARIES(name##_bnd); \
    typedef lc2_loop4_bnd_##name lc2_ensure_proper_nesting; \
  } while (0) \



/* LOOP_INTBND */

#define CCTK_LOOP4_INTBND(name, cctkGH, \
                           i,j,k,l, \
                           ni,nj,nk,nl) \
  CCTK_LOOP4STR_INTBND(name, (cctkGH), \
                        i,j,k,l, \
                        ni,nj,nk,nl, \
                        1) \

#define CCTK_LOOP4STR_INTBND(name, cctkGH, \
                              i,j,k,l, \
                              ni,nj,nk,nl, \
                              istr) \
  do { \
    typedef int lc2_loop4_intbnd_##name; \
    cGH const *CCTK_RESTRICT const lc2_cctkGH = (cctkGH); \
    if (lc2_cctkGH->cctk_dim != 4) { \
      CCTK_WARN (CCTK_WARN_ABORT, \
                 "The macro CCTK_LOOP4_INTBND can only be used in 4 dimensions"); \
    } \
    CCTK_INT lc2_bndsize    [8]; \
    CCTK_INT lc2_is_ghostbnd[8]; \
    CCTK_INT lc2_is_symbnd  [8]; \
    CCTK_INT lc2_is_physbnd [8]; \
    GetBoundarySizesAndTypes \
      (lc2_cctkGH, 8, lc2_bndsize, lc2_is_ghostbnd, lc2_is_symbnd, lc2_is_physbnd); \
    CCTK_LOOP4STR_INTBOUNDARIES(name##_intbnd, \
                                lc2_cctkGH, \
                                i,j,k,l, \
                                ni,nj,nk,nl, \
                                lc2_bndsize[0],lc2_bndsize[2],lc2_bndsize[4],lc2_bndsize[6], \
                                lc2_bndsize[1],lc2_bndsize[3],lc2_bndsize[5],lc2_bndsize[7], \
                                lc2_is_physbnd[0],lc2_is_physbnd[2],lc2_is_physbnd[4],lc2_is_physbnd[6], \
                                lc2_is_physbnd[1],lc2_is_physbnd[3],lc2_is_physbnd[5],lc2_is_physbnd[7], \
                                (istr)) { \

#define CCTK_ENDLOOP4_INTBND(name) \
  CCTK_ENDLOOP4STR_INTBND(name) \

#define CCTK_ENDLOOP4STR_INTBND(name) \
    } CCTK_ENDLOOP4STR_INTBOUNDARIES(name##_intbnd); \
    typedef lc2_loop4_intbnd_##name lc2_ensure_proper_nesting; \
  } while (0) \

#endif /* #ifdef CCODE */



#ifdef FCODE

/* LOOP */

#define CCTK_LOOP4_DECLARE(name) \
   && integer :: name/**/_imin,name/**/_jmin,name/**/_kmin,name/**/_lmin \
   && integer :: name/**/_imax,name/**/_jmax,name/**/_kmax,name/**/_lmax \
   && integer :: name/**/_istr \

#define CCTK_LOOP4_OMP_PRIVATE(name) \

#define CCTK_LOOP4(name, \
                   i,j,k,l, \
                   imin,jmin,kmin,lmin, \
                   imax,jmax,kmax,lmax, \
                   ilsh,jlsh,klsh,llsh) \
  CCTK_LOOP4STR(name, \
             i,j,k,l, \
             imin,jmin,kmin,lmin, \
             imax,jmax,kmax,lmax, \
             ilsh,jlsh,klsh,llsh, \
             1) \

#define CCTK_LOOP4STR(name, \
                      i,j,k,l, \
                      imin,jmin,kmin,lmin, \
                      imax,jmax,kmax,lmax, \
                      ilsh,jlsh,klsh,llsh, \
                      istr) \
   && name/**/_imin = imin \
   && name/**/_jmin = jmin \
   && name/**/_kmin = kmin \
   && name/**/_lmin = lmin \
   && name/**/_imax = imax \
   && name/**/_jmax = jmax \
   && name/**/_kmax = kmax \
   && name/**/_lmax = lmax \
   && name/**/_istr = istr \
   && do l = name/**/_lmin, name/**/_lmax \
   && do k = name/**/_kmin, name/**/_kmax \
   && do j = name/**/_jmin, name/**/_jmax \
   && do i = name/**/_imin, name/**/_imax \

#define CCTK_ENDLOOP4(name) \
  CCTK_ENDLOOP4STR(name) \

#define CCTK_ENDLOOP4STR(name) \
   && end do \
   && end do \
   && end do \
   && end do \



/* LOOP_ALL */

#define CCTK_LOOP4_ALL_DECLARE(name) \
   CCTK_LOOP4_DECLARE(name) \

#define CCTK_LOOP4_ALL_OMP_PRIVATE(name) \
   CCTK_LOOP4_OMP_PRIVATE(name) \

#define CCTK_LOOP4_ALL(name, \
                       i,j,k,l) \
  CCTK_LOOP4STR_ALL(name, \
                 i,j,k,l, \
                 1) \

#define CCTK_LOOP4STR_ALL(name, \
                          i,j,k,l, \
                          istr) \
   CCTK_LOOP4STR(name, \
                 i,j,k,l, \
                 1,1,1,1, \
                 CCTK_LSSH(0,1),CCTK_LSSH(0,2),CCTK_LSSH(0,3),CCTK_LSSH(0,4), \
                 cctk_lsh(1),cctk_lsh(2),cctk_lsh(3),cctk_lsh(4), \
                 istr) \

#define CCTK_ENDLOOP4_ALL(name) \
  CCTK_ENDLOOP4STR_ALL(name) \

#define CCTK_ENDLOOP4STR_ALL(name) \
   CCTK_ENDLOOP4(name) \



/* LOOP_INTERIOR */

#define CCTK_LOOP4_INTERIOR_DECLARE(name) \
   CCTK_LOOP4_DECLARE(name) \

#define CCTK_LOOP4_INTERIOR_OMP_PRIVATE(name) \
   CCTK_LOOP4_OMP_PRIVATE(name) \

#define CCTK_LOOP4_INTERIOR(name, \
                            i,j,k,l, \
                            iblo,jblo,kblo,lblo, \
                            ibhi,jbhi,kbhi,lbhi) \
  CCTK_LOOP4STR_INTERIOR(name, \
                      i,j,k,l, \
                      iblo,jblo,kblo,lblo, \
                      ibhi,jbhi,kbhi,lbhi, \
                      1) \

#define CCTK_LOOP4STR_INTERIOR(name, \
                               i,j,k,l, \
                               iblo,jblo,kblo,lblo, \
                               ibhi,jbhi,kbhi,lbhi, \
                               istr) \
   CCTK_LOOP4STR(name, \
                 i,j,k,l, \
                 (iblo),(jblo),(kblo),(lblo), \
                 CCTK_LSSH(0,1)-(ibhi), \
                 CCTK_LSSH(0,2)-(jbhi), \
                 CCTK_LSSH(0,3)-(kbhi), \
                 CCTK_LSSH(0,4)-(lbhi), \
                 cctk_lsh(1),cctk_lsh(2),cctk_lsh(3),cctk_lsh(4), \
                 istr) \

#define CCTK_ENDLOOP4_INTERIOR(name) \
  CCTK_ENDLOOP4STR_INTERIOR(name) \

#define CCTK_ENDLOOP4STR_INTERIOR(name) \
   CCTK_ENDLOOP4(name) \



/* LOOP_BOUNDARIES */

#define CCTK_LOOP4_BOUNDARIES_DECLARE(name) \
   CCTK_LOOP4_DECLARE(name) \
   && integer :: lc_bmin(4), lc_bmax(4) \
   && integer :: lc_blo(4), lc_bhi(4) \
   && integer :: lc_istr \
   && integer :: lc_dir, lc_face \
   && integer :: lc_d \

#define CCTK_LOOP4_BOUNDARIES_OMP_PRIVATE(name) \
   CCTK_LOOP4_OMP_PRIVATE(name) \

#define CCTK_LOOP4_BOUNDARIES(name, \
                              i,j,k,l, \
                              iblo,jblo,kblo,lblo, \
                              ibhi,jbhi,kbhi,lbhi) \
  CCTK_LOOP4STR_BOUNDARIES(name, \
                        i,j,k,l, \
                        iblo,jblo,kblo,lblo, \
                        ibhi,jbhi,kbhi,lbhi, \
                        1) \

#define CCTK_LOOP4STR_BOUNDARIES(name, \
                                 i,j,k,l, \
                                 iblo,jblo,kblo,lblo, \
                                 ibhi,jbhi,kbhi,lbhi, \
                                 istr) \
   && lc_blo = (/ iblo,jblo,kblo,lblo /) \
   && lc_bhi = (/ ibhi,jbhi,kbhi,lbhi /) \
   && lc_istr = istr \
   && do lc_dir=1,4 \
   &&    do lc_face=1,2 \
   &&       do lc_d=1,4 \
   &&          lc_bmin(lc_d) = 1 \
   &&          lc_bmax(lc_d) = CCTK_LSSH(0,lc_d) \
   &&          if (lc_d<lc_dir) then \
   &&             lc_bmin(lc_d) = lc_bmin(lc_d)+lc_blo(lc_d) \
   &&             lc_bmax(lc_d) = lc_bmax(lc_d)-lc_bhi(lc_d) \
   &&          end if \
   &&       end do \
   &&       if (lc_face==1) then \
   &&          lc_bmax(lc_dir) = lc_bmin(lc_dir)+lc_blo(lc_dir) \
   &&       else \
   &&          lc_bmin(lc_dir) = lc_bmax(lc_dir)-lc_bhi(lc_dir) \
   &&       end if \
            CCTK_LOOP4STR(name, \
                          i,j,k,l, \
                          lc_bmin(1),lc_bmin(2),lc_bmin(3),lc_bmin(4), \
                          lc_bmax(1),lc_bmax(2),lc_bmax(3),lc_bmax(4), \
                          cctk_lsh(1),cctk_lsh(2),cctk_lsh(3),cctk_lsh(4), \
                          lc_istr) \

#define CCTK_ENDLOOP4_BOUNDARIES(name) \
  CCTK_ENDLOOP4STR_BOUNDARIES(name) \

#define CCTK_ENDLOOP4STR_BOUNDARIES(name) \
            CCTK_ENDLOOP4(name) \
   &&    end do /* face */ \
   && end do /* dir */ \

#endif /* #ifdef FCODE */



#endif /* #ifndef _CCTK_LOOP_H_ */
