#! /usr/bin/perl -w

use strict;



our $dim;



# Expand [DIM] to the (global) number of dimensions
sub expand ($)
{
    my ($str) = @_;
    $str =~ s{\[DIM\]}{$dim}g;
    return $str;
}

# Add a newline
sub nl ($)
{
    my ($str) = @_;
    return "$str\n";
}

# Add a backslash and newline
sub bsnl ($)
{
    my ($str) = @_;
    return "$str \\\n";
}

# Repeat a string once for each dimension, expanding 'I' and 'C' to a
# different number (0,1,2,3) and character (i,j,k,l) each time
sub rpt ($)
{
    my ($str) = @_;
    my @ret;
    for my $d (1..$dim) {
        my $int = $d-1;
        my $int1 = $int+1;
        my $char = ('i','j','k','l')[$d-1];
        my $tmp = $str;
        $tmp =~ s{\[I\]}{$int}g;
        $tmp =~ s{\[I\+1\]}{$int1}g;
        $tmp =~ s{\[C\]}{$char}g;
        push @ret, $tmp;
    }
    return @ret;
}

# Terminate a list (intersperse a string, and add the string at the
# end as well)
sub term ($@)
{
    my ($str, @txt) = @_;
    return (join $str, @txt) . $str;
}

# Separate a list (intersperse a string, but not at the end)
sub sep ($@)
{
    my ($str, @txt) = @_;
    return (join $str, @txt);
}

# Repeat and separate with a comma
sub crpt ($)
{
    my ($str) = @_;
    return (sep ',', rpt $str);
}

# The first argument is a list reference to force a list context for
# wherever this argument is evaluated
sub bsnlsep ($$;$)
{
    my ($txt, $str1, $str2) = @_;
    $str2 = $str1 if ! defined $str2;
    my @ret;
    for my $t (@$txt[0..$#$txt-1]) {
        push @ret, "$t$str1";
    }
    if ($#$txt >= 0) {
        push @ret, "$$txt[$#$txt]$str2";
    }
    return map {bsnl $_} @ret;
}



my @lines;

# Header
push @lines, (
    (nl '#ifndef _CCTK_LOOP_H_'),
    (nl '#define _CCTK_LOOP_H_'),
    (nl ''),
    (nl '/* WARNING: This file is auto-generated. Do not edit. */'),
    (nl '/*          Edit cctk_Loop.h.pl instead, and then re-generate this file via */'),
    (nl '/*             perl cctk_Loop.h.pl > cctk_Loop.h.pl */'),
    (nl ''),
    (nl '#ifdef CCODE'),
    (nl '#include <cctk_Config.h>'),
    (nl '#include <cctk_WarnLevel.h>'),
    (nl '#include <cGH.h>'),
    (nl '#endif /* #ifdef CCODE */'),
    );



for $dim (1,2,3,4) {

    push @lines, map {expand $_} (
        (nl ''),
        (nl ''),
        (nl ''),
        (nl '/* [DIM]D */'),
        (nl ''),
        (nl '#ifdef CCODE'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM](name,'),
        (bsnl '                   '.(crpt '[C]').','),
        (bsnl '                   '.(crpt '[C]min').','),
        (bsnl '                   '.(crpt '[C]max').','),
        (bsnl '                   '.(crpt '[C]lsh').')'),
        (bsnl '  CCTK_LOOP[DIM]STR(name,'),
        (bsnl '                '.(crpt '[C]').','),
        (bsnl '                '.(crpt '([C]min)').','),
        (bsnl '                '.(crpt '([C]max)').','),
        (bsnl '                '.(crpt '([C]lsh)').','),
        (bsnl '                1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR(name,'),
        (bsnl '                      '.(crpt '[C]').','),
        (bsnl '                      '.(crpt '[C]min').','),
        (bsnl '                      '.(crpt '[C]max').','),
        (bsnl '                      '.(crpt '[C]lsh').','),
        (bsnl '                      istr)'),
        (bsnl '  do {'),
        (bsnl '    typedef int lc_loop[DIM]_##name;'),
        (rpt (bsnl '    int const lc_[C]min = ([C]min);')),
        (rpt (bsnl '    int const lc_[C]max = ([C]max);')),
        (bsnl '    int const lc_istr = (istr);'),
        (reverse (rpt (bsnl '    for (int [C]=lc_[C]min; [C]<lc_[C]max; ++[C]) {'))),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM](name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR(name)'),
        (rpt (bsnl '    }')),
        (bsnl '    typedef lc_loop[DIM]_##name lc_ensure_proper_nesting;'),
        (bsnl '  } while (0)'),
        (nl ''),
        (nl ''),
        (nl ''),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_ALL(name, cctkGH,'),
        (bsnl '                       '.(crpt '[C]').')'),
        (bsnl '  CCTK_LOOP[DIM]STR_ALL(name, (cctkGH),'),
        (bsnl '                    '.(crpt '[C]').','),
        (bsnl '                    1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR_ALL(name, cctkGH,'),
        (bsnl '                          '.(crpt '[C]').','),
        (bsnl '                          istr)'),
        (bsnl '  do {'),
        (bsnl '    typedef int lc_loop[DIM]_all_##name;'),
        (bsnl '    cGH const *CCTK_RESTRICT const lc_cctkGH = (cctkGH);'),
        (bsnl '    if (lc_cctkGH->cctk_dim != [DIM]) {'),
        (bsnl '      CCTK_WARN (CCTK_WARN_ABORT,'),
        (bsnl '                 "The macro CCTK_LOOP[DIM]_ALL can only be used in [DIM] dimensions");'),
        (bsnl '    }'),
        (bsnl '    CCTK_LOOP[DIM]STR(name##_all,'),
        (bsnl '                  '.(crpt '[C]').','),
        (bsnl '                  '.(crpt '0').','),
        (bsnlsep [rpt '                  lc_cctkGH->CCTK_LSSH(0,[I])'], ','),
        (bsnlsep [rpt '                  lc_cctkGH->cctk_lsh[[I]]'], ','),
        (bsnl '                  (istr)) {'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]_ALL(name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR_ALL(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR_ALL(name)'),
        (bsnl '    } CCTK_ENDLOOP[DIM](name##_all);'),
        (bsnl '    typedef lc_loop[DIM]_all_##name lc_ensure_proper_nesting;'),
        (bsnl '  } while (0)'),
        (nl ''),
        (nl ''),
        (nl ''),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_INTERIOR(name, cctkGH,'),
        (bsnl '                            '.(crpt '[C]').','),
        (bsnl '                            '.(crpt '[C]blo').','),
        (bsnl '                            '.(crpt '[C]bhi').')'),
        (bsnl '  CCTK_LOOP[DIM]STR_INTERIOR(name, (cctkGH),'),
        (bsnl '                         '.(crpt '[C]').','),
        (bsnl '                         '.(crpt '([C]blo)').','),
        (bsnl '                         '.(crpt '([C]bhi)').','),
        (bsnl '                         1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR_INTERIOR(name, cctkGH,'),
        (bsnl '                               '.(crpt '[C]').','),
        (bsnl '                               '.(crpt '[C]blo').','),
        (bsnl '                               '.(crpt '[C]bhi').','),
        (bsnl '                               istr)'),
        (bsnl '  do {'),
        (bsnl '    typedef int lc_loop[DIM]_interior_##name;'),
        (bsnl '    cGH const *CCTK_RESTRICT const lc_cctkGH = (cctkGH);'),
        (bsnl '    if (lc_cctkGH->cctk_dim != [DIM]) {'),
        (bsnl '      CCTK_WARN (CCTK_WARN_ABORT,'),
        (bsnl '                 "The macro CCTK_LOOP[DIM]_INTERIOR can only be used in [DIM] dimensions");'),
        (bsnl '    }'),
        (bsnl '    CCTK_LOOP[DIM]STR(name##_interior,'),
        (bsnl '                  '.(crpt '[C]').','),
        (bsnl '                  '.(crpt '([C]blo)').','),
        (bsnlsep [rpt '                  lc_cctkGH->CCTK_LSSH(0,[I])-([C]bhi)'], ','),
        (bsnlsep [rpt '                  lc_cctkGH->cctk_lsh[[I]]'], ','),
        (bsnl '                  (istr)) {'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]_INTERIOR(name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR_INTERIOR(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR_INTERIOR(name)'),
        (bsnl '    } CCTK_ENDLOOP[DIM](name##_interior);'),
        (bsnl '    typedef lc_loop[DIM]_interior_##name lc_ensure_proper_nesting;'),
        (bsnl '  } while(0)'),
        (nl ''),
        (nl ''),
        (nl ''),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_BOUNDARIES(name, cctkGH,'),
        (bsnl '                              '.(crpt '[C]').','),
        (bsnl '                              '.(crpt '[C]blo').','),
        (bsnl '                              '.(crpt '[C]bhi').')'),
        (bsnl '  CCTK_LOOP[DIM]STR_BOUNDARIES(name, (cctkGH),'),
        (bsnl '                           '.(crpt '[C]').','),
        (bsnl '                           '.(crpt '([C]blo)').','),
        (bsnl '                           '.(crpt '([C]bhi)').','),
        (bsnl '                           1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR_BOUNDARIES(name, cctkGH,'),
        (bsnl '                                 '.(crpt '[C]').','),
        (bsnl '                                 '.(crpt '[C]blo').','),
        (bsnl '                                 '.(crpt '[C]bhi').','),
        (bsnl '                                 istr)'),
        (bsnl '  do {'),
        (bsnl '    typedef int lc_loop[DIM]_boundaries_##name;'),
        (bsnl '    cGH const *CCTK_RESTRICT const lc_cctkGH = (cctkGH);'),
        (bsnl '    if (lc_cctkGH->cctk_dim != [DIM]) {'),
        (bsnl '      CCTK_WARN (CCTK_WARN_ABORT,'),
        (bsnl '                 "The macro CCTK_LOOP[DIM]_BOUNDARIES can only be used in [DIM] dimensions");'),
        (bsnl '    }'),
        (bsnl '    int const lc_blo[] = { '.(crpt '([C]blo)').' };'),
        (bsnl '    int const lc_bhi[] = { '.(crpt '([C]bhi)').' };'),
        (bsnl '    int const lc_istr = (istr);'),
        (bsnl '    for (int lc_dir=0; lc_dir<[DIM]; ++lc_dir) {'),
        (bsnl '      for (int lc_face=0; lc_face<2; ++lc_face) {'),
        (bsnl '        int lc_bmin[[DIM]], lc_bmax[[DIM]];'),
        (bsnl '        for (int lc_d=0; lc_d<[DIM]; ++lc_d) {'),
        (bsnl '          lc_bmin[lc_d] = 0;'),
        (bsnl '          lc_bmax[lc_d] = lc_cctkGH->CCTK_LSSH(0,lc_d);'),
        (bsnl '          if (lc_d<lc_dir) {'),
        (bsnl '            lc_bmin[lc_d] += lc_blo[lc_d];'),
        (bsnl '            lc_bmax[lc_d] -= lc_bhi[lc_d];'),
        (bsnl '          }'),
        (bsnl '        }'),
        (bsnl '        if (lc_face==0) {'),
        (bsnl '          lc_bmax[lc_dir] = lc_bmin[lc_dir]+lc_blo[lc_dir];'),
        (bsnl '        } else {'),
        (bsnl '          lc_bmin[lc_dir] = lc_bmax[lc_dir]-lc_bhi[lc_dir];'),
        (bsnl '        }'),
        (bsnl '        CCTK_LOOP[DIM]STR(name##_boundaries,'),
        (bsnl '                      '.(crpt '[C]').','),
        (bsnl '                      '.(crpt 'lc_bmin[[I]]').','),
        (bsnl '                      '.(crpt 'lc_bmax[[I]]').','),
        (bsnlsep [rpt '                      lc_cctkGH->cctk_lsh[[I]]'], ','),
        (bsnl '                      lc_istr) {'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]_BOUNDARIES(name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR_BOUNDARIES(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR_BOUNDARIES(name)'),
        (bsnl '        } CCTK_ENDLOOP[DIM](name##_boundaries);'),
        (bsnl '      } /* for face */'),
        (bsnl '    }  /* for dir */'),
        (bsnl '    typedef lc_loop[DIM]_boundaries_##name lc_ensure_proper_nesting;'),
        (bsnl '  } while (0)'),
        (nl ''),
        (nl ''),
        (nl '#endif /* #ifdef CCODE */'),
        (nl ''),
        (nl '#ifdef FCODE'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_DECLARE(name)'),
        (bsnl '   && integer :: '.(crpt 'name/**/_[C]min')),
        (bsnl '   && integer :: '.(crpt 'name/**/_[C]max')),
        (bsnl '   && integer :: name/**/_istr'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_OMP_PRIVATE(name)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM](name,'),
        (bsnl '                   '.(crpt '[C]').','),
        (bsnl '                   '.(crpt '[C]min').','),
        (bsnl '                   '.(crpt '[C]max').','),
        (bsnl '                   '.(crpt '[C]lsh').')'),
        (bsnl '  CCTK_LOOP[DIM]STR(name,'),
        (bsnl '             '.(crpt '[C]').','),
        (bsnl '             '.(crpt '[C]min').','),
        (bsnl '             '.(crpt '[C]max').','),
        (bsnl '             '.(crpt '[C]lsh').','),
        (bsnl '             1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR(name,'),
        (bsnl '                      '.(crpt '[C]').','),
        (bsnl '                      '.(crpt '[C]min').','),
        (bsnl '                      '.(crpt '[C]max').','),
        (bsnl '                      '.(crpt '[C]lsh').','),
        (bsnl '                      istr)'),
        (rpt (bsnl '   && name/**/_[C]min = [C]min')),
        (rpt (bsnl '   && name/**/_[C]max = [C]max')),
        (bsnl '   && name/**/_istr = istr'),
        (reverse (rpt (bsnl '   && do [C] = name/**/_[C]min, name/**/_[C]max'))),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM](name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR(name)'),
        (rpt (bsnl '   && end do')),
        (nl ''),
        (nl ''),
        (nl ''),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_ALL_DECLARE(name)'),
        (bsnl '   CCTK_LOOP[DIM]_DECLARE(name)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_ALL_OMP_PRIVATE(name)'),
        (bsnl '   CCTK_LOOP[DIM]_OMP_PRIVATE(name)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_ALL(name,'),
        (bsnl '                       '.(crpt '[C]').')'),
        (bsnl '  CCTK_LOOP[DIM]STR_ALL(name,'),
        (bsnl '                 '.(crpt '[C]').','),
        (bsnl '                 1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR_ALL(name,'),
        (bsnl '                          '.(crpt '[C]').','),
        (bsnl '                          istr)'),
        (bsnl '   CCTK_LOOP[DIM]STR(name,'),
        (bsnl '                 '.(crpt '[C]').','),
        (bsnl '                 '.(crpt '1').','),
        (bsnl '                 '.(crpt 'CCTK_LSSH(0,[I+1])').','),
        (bsnl '                 '.(crpt 'cctk_lsh([I+1])').','),
        (bsnl '                 istr)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]_ALL(name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR_ALL(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR_ALL(name)'),
        (bsnl '   CCTK_ENDLOOP[DIM](name)'),
        (nl ''),
        (nl ''),
        (nl ''),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_INTERIOR_DECLARE(name)'),
        (bsnl '   CCTK_LOOP[DIM]_DECLARE(name)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_INTERIOR_OMP_PRIVATE(name)'),
        (bsnl '   CCTK_LOOP[DIM]_OMP_PRIVATE(name)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_INTERIOR(name,'),
        (bsnl '                            '.(crpt '[C]').','),
        (bsnl '                            '.(crpt '[C]blo').','),
        (bsnl '                            '.(crpt '[C]bhi').')'),
        (bsnl '  CCTK_LOOP[DIM]STR_INTERIOR(name,'),
        (bsnl '                      '.(crpt '[C]').','),
        (bsnl '                      '.(crpt '[C]blo').','),
        (bsnl '                      '.(crpt '[C]bhi').','),
        (bsnl '                      1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR_INTERIOR(name,'),
        (bsnl '                               '.(crpt '[C]').','),
        (bsnl '                               '.(crpt '[C]blo').','),
        (bsnl '                               '.(crpt '[C]bhi').','),
        (bsnl '                               istr)'),
        (bsnl '   CCTK_LOOP[DIM]STR(name,'),
        (bsnl '                 '.(crpt '[C]').','),
        (bsnl '                 '.(crpt '([C]blo)').','),
        (rpt (bsnl '                 CCTK_LSSH(0,[I+1])-([C]bhi),')),
        (bsnl '                 '.(crpt 'cctk_lsh([I+1])').','),
        (bsnl '                 istr)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]_INTERIOR(name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR_INTERIOR(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR_INTERIOR(name)'),
        (bsnl '   CCTK_ENDLOOP[DIM](name)'),
        (nl ''),
        (nl ''),
        (nl ''),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_BOUNDARIES_DECLARE(name)'),
        (bsnl '   CCTK_LOOP[DIM]_DECLARE(name)'),
        (bsnl '   && integer :: lc_bmin([DIM]), lc_bmax([DIM])'),
        (bsnl '   && integer :: lc_blo([DIM]), lc_bhi([DIM])'),
        (bsnl '   && integer :: lc_istr'),
        (bsnl '   && integer :: lc_dir, lc_face'),
        (bsnl '   && integer :: lc_d'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_BOUNDARIES_OMP_PRIVATE(name)'),
        (bsnl '   CCTK_LOOP[DIM]_OMP_PRIVATE(name)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]_BOUNDARIES(name,'),
        (bsnl '                              '.(crpt '[C]').','),
        (bsnl '                              '.(crpt '[C]blo').','),
        (bsnl '                              '.(crpt '[C]bhi').')'),
        (bsnl '  CCTK_LOOP[DIM]STR_BOUNDARIES(name,'),
        (bsnl '                        '.(crpt '[C]').','),
        (bsnl '                        '.(crpt '[C]blo').','),
        (bsnl '                        '.(crpt '[C]bhi').','),
        (bsnl '                        1)'),
        (nl ''),
        (bsnl '#define CCTK_LOOP[DIM]STR_BOUNDARIES(name,'),
        (bsnl '                                 '.(crpt '[C]').','),
        (bsnl '                                 '.(crpt '[C]blo').','),
        (bsnl '                                 '.(crpt '[C]bhi').','),
        (bsnl '                                 istr)'),
        (bsnl '   && lc_blo = (/ '.(crpt '[C]blo').' /)'),
        (bsnl '   && lc_bhi = (/ '.(crpt '[C]bhi').' /)'),
        (bsnl '   && lc_istr = istr'),
        (bsnl '   && do lc_dir=1,[DIM]'),
        (bsnl '   &&    do lc_face=1,2'),
        (bsnl '   &&       do lc_d=1,[DIM]'),
        (bsnl '   &&          lc_bmin(lc_d) = 1'),
        (bsnl '   &&          lc_bmax(lc_d) = CCTK_LSSH(0,lc_d)'),
        (bsnl '   &&          if (lc_d<lc_dir) then'),
        (bsnl '   &&             lc_bmin(lc_d) = lc_bmin(lc_d)+lc_blo(lc_d)'),
        (bsnl '   &&             lc_bmax(lc_d) = lc_bmax(lc_d)-lc_bhi(lc_d)'),
        (bsnl '   &&          end if'),
        (bsnl '   &&       end do'),
        (bsnl '   &&       if (lc_face==1) then'),
        (bsnl '   &&          lc_bmax(lc_dir) = lc_bmin(lc_dir)+lc_blo(lc_dir)'),
        (bsnl '   &&       else'),
        (bsnl '   &&          lc_bmin(lc_dir) = lc_bmax(lc_dir)-lc_bhi(lc_dir)'),
        (bsnl '   &&       end if'),
        (bsnl '            CCTK_LOOP[DIM]STR(name,'),
        (bsnl '                          '.(crpt '[C]').','),
        (bsnl '                          '.(crpt 'lc_bmin([I+1])').','),
        (bsnl '                          '.(crpt 'lc_bmax([I+1])').','),
        (bsnl '                          '.(crpt 'cctk_lsh([I+1])').','),
        (bsnl '                          lc_istr)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]_BOUNDARIES(name)'),
        (bsnl '  CCTK_ENDLOOP[DIM]STR_BOUNDARIES(name)'),
        (nl ''),
        (bsnl '#define CCTK_ENDLOOP[DIM]STR_BOUNDARIES(name)'),
        (bsnl '            CCTK_ENDLOOP[DIM](name)'),
        (bsnl '   &&    end do /* face */'),
        (bsnl '   && end do /* dir */'),
        (nl ''),
        (nl ''),
        (nl '#endif /* #ifdef FCODE */'),
    );
}                               # for dim



# Output footer
push @lines, (
    (nl ''),
    (nl ''),
    (nl ''),
    (nl '#endif /* #ifndef _CCTK_LOOP_H_ */'),
    );



print @lines;
