#define CCTK_ATTRIBUTE_NONNULL(m) __attribute__((__nonnull__(m)))
#define CCTK_ENDLOOP4_BOUNDARIES(name) CCTK_ENDLOOP4STR_BOUNDARIES(name)
#define MPIIMPL_ADVERTISES_FEATURES 1
#define MPI_MAX_ERROR_STRING 512
#define __DBL_MIN_EXP__ (-1021)
#define EMULTIHOP 72
#define __cpp_attributes 200809
#define MPI_PACKED ((MPI_Datatype)0x4c00010f)
#define _AVX512IFMAINTRIN_H_INCLUDED 
#define SIZEOF_SHORT_INT 2
#define __UINT_LEAST16_MAX__ 0xffff
#define HAVE_CCTK_CXX_ATTRIBUTE_NONNULL 1
#define __INT64_TYPE__ long int
#define RE_CONTEXT_INVALID_OPS (RE_CONTEXT_INDEP_OPS << 1)
#define RE_CARET_ANCHORS_HERE (RE_ICASE << 1)
#define RE_DUP_MAX (0x7fff)
#define _OVERLOADABLE_PROTOTYPE(prefix,dummy_prefix,name) __OVERLOADABLE_PROTOTYPE(prefix, dummy_prefix, name)
#define __GNUC_VA_LIST 
#define RE_SYNTAX_POSIX_MINIMAL_EXTENDED (_RE_SYNTAX_POSIX_COMMON | RE_CONTEXT_INDEP_ANCHORS | RE_CONTEXT_INVALID_OPS | RE_NO_BK_BRACES | RE_NO_BK_PARENS | RE_NO_BK_REFS | RE_NO_BK_VBAR | RE_UNMATCHED_RIGHT_PAREN_ORD)
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define _IO_UNITBUF 020000
#define MPI_SHORT ((MPI_Datatype)0x4c000203)
#define _T_WCHAR_ 
#define CCTK_LOOP3_INT(name,cctki3_cctkGH_,i,j,k) CCTK_LOOP3STR_INT(name, (cctki3_cctkGH_), i,j,k, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define _EXT_TYPE_TRAITS 1
#define _MM_FROUND_RAISE_EXC 0x00
#define restrict CCTK_CXX_RESTRICT
#define MPI_STATUS_IGNORE (MPI_Status *)1
#define _GLIBCXX_STRING 1
#define _GLIBCXX_HAVE_FINITEF 1
#define _GLIBCXX_NESTED_EXCEPTION_H 1
#define CCTK_REAL8_TYPE double
#define __S64_TYPE long int
#define TWO_FORTSTRINGS_CREATE(arg1,arg2) char *arg1 = Util_NullTerminateString(cctk_str1,cctk_strlen1); char *arg2 = Util_NullTerminateString(cctk_str2,cctk_strlen2);
#define MPI_DOUBLE ((MPI_Datatype)0x4c00080b)
#define kneg k8neg
#define __SQUAD_TYPE long int
#define CCTK_LOOP4_BND(name,cctki3_cctkGH_,i,j,k,l,ni,nj,nk,nl) CCTK_LOOP4STR_BND(name, (cctki3_cctkGH_), i,j,k,l, ni,nj,nk,nl, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define CCTK_VARIABLE_COMPLEX 140
#define CCTK_ENDLOOP1_BOUNDARIES(name) CCTK_ENDLOOP1STR_BOUNDARIES(name)
#define __GNU_LIBRARY__ 6
#define PASS_CARPETLIB_PUBLIC_C2F(GH) 
#define CARPET_DIM 3
#define __STDC_CONSTANT_MACROS 
#define M_El 2.718281828459045235360287471352662498L
#define PARAMETER_REAL 705
#define MPI_T_ERR_INVALID_INDEX 62
#define CLOCK_THREAD_CPUTIME_ID 3
#define __TIME_T_TYPE __SYSCALL_SLONG_TYPE
#define __CHAR_BIT__ 8
#define HAVE_CCTK_ISFINITE HAVE_CCTK_CXX_ISFINITE
#define _GLIBCXX_HAVE_ETIME 1
#define _GLIBCXX_WRITE_MEM_BARRIER __asm __volatile ("":::"memory")
#define __glibcxx_requires_sorted_set_pred(_First1,_Last1,_First2,_Pred) 
#define CCTK_LOOP1STR_INTERIOR(name,cctki2_cctkGH_,i,cctki2_iblo_,cctki2_ibhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop1_interior_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_INTERIOR can only be used in 1 dimensions"); } CCTK_LOOP1STR(name ##_interior, i, (cctki2_iblo_), cctki2_cctkGH->cctk_lsh[0]-(cctki2_ibhi_), cctki2_cctkGH->cctk_ash[0], imin,imax, (cctki2_istr_)) {
#define _OVERLOADABLE_DUMMY(prefix,dummy_prefix,name) __OVERLOADABLE_DUMMY(prefix, dummy_prefix, name)
#define EREMCHG 78
#define _UTIL_STRINGLIST_H_ 1
#define vec8_loadu_maybe3(off1,off2,off3,p) (vec8_loadu(p))
#define MPI_STATUSES_IGNORE (MPI_Status *)1
#define _STRINGFWD_H 1
#define _GLIBCXX_ATOMICITY_H 1
#define RE_NO_GNU_OPS (RE_NO_POSIX_BACKTRACKING << 1)
#define EDESTADDRREQ 89
#define CCTK_ENDLOOP3STR(name) CCTK_ENDLOOP3STR_NORMAL(name)
#define DECLARE_REDUCTION_OPERATOR_1_T_RET(fn,init,op,final,T,R) template <typename U, int D> inline vect<R, D> fn(const vect<U, D> &a) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = fn(a[d]); return r; } template <int D> inline R fn(const vect<T, D> &a) { R r(init); for (int d = 0; d < D; ++d) r op a[d]; return final(r); }
#define __DADDR_T_TYPE __S32_TYPE
#define _GLIBCXX_HAVE_WRITEV 1
#define TIME_UTC 1
#define _GLIBCXX_END_NAMESPACE_LDBL 
#define MPI_CXX_LONG_DOUBLE_COMPLEX ((MPI_Datatype)0x4c002036)
#define CCTK_PARAMETER__CARPETLIB__poison_value RESTRICTED_CARPETLIB_STRUCT.poison_value
#define stderr stderr
#define _SIDD_SBYTE_OPS 0x02
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define __cpp_static_assert 200410
#define __need_timer_t 
#define vec8_elt(x,d) ({ CCTK_REAL8_VEC const xelt=(x); CCTK_REAL8 aelt; switch (d) { case 0: aelt=vec8_elt0(xelt); break; case 1: aelt=vec8_elt1(xelt); break; } aelt; })
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define CCTK_PARAMETER__IO__filereader_ID_files RESTRICTED_IO_STRUCT.filereader_ID_files
#define MPI_ORDER_FORTRAN 57
#define MPI_NO_OP (MPI_Op)(0x5800000e)
#define _mm512_setr4_pd(e0,e1,e2,e3) _mm512_set4_pd(e3,e2,e1,e0)
#define CCTK_ARGUMENTS CARPETLIB_CARGUMENTS
#define __FLT_MIN_10_EXP__ (-37)
#define _GLIBCXX_USE_CLOCK_MONOTONIC 1
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_cleanup_class __clframe (routine, arg); __clframe.__defer ()
#define _mm512_setr4_ps(e0,e1,e2,e3) _mm512_set4_ps(e3,e2,e1,e0)
#define _MM_MALLOC_H_INCLUDED 
#define _CGH_H_ 1
#define HAVE_CCTK_CXX_ISNAN 1
#define M_E 2.7182818284590452354
#define __BLKCNT_T_TYPE __SYSCALL_SLONG_TYPE
#define CLONE_NEWUTS 0x04000000
#define HAVE_CCTK_ISNAN HAVE_CCTK_CXX_ISNAN
#define __DBL_DENORM_MIN__ double(4.94065645841246544177e-324L)
#define __OVERLOADABLE_DUMMYPROTOTYPE(prefix,dummy_prefix,name) RETURN_TYPE dummy_prefix ##name(ARGUMENTS) ATTRIBUTES;
#define _IO_flockfile(_fp) 
#define CCTK_REAL8_VEC_SIZE 2
#define RE_SYNTAX_GNU_AWK ((RE_SYNTAX_POSIX_EXTENDED | RE_BACKSLASH_ESCAPE_IN_LISTS | RE_INVALID_INTERVAL_ORD) & ~(RE_DOT_NOT_NULL | RE_CONTEXT_INDEP_OPS | RE_CONTEXT_INVALID_OPS ))
#define _PRFCHWINTRIN_H_INCLUDED 
#define vec4_load(p) (_mm_load_ps(&(p)))
#define _IO_USER_LOCK 0x8000
#define _IO_NO_WRITES 8
#define __unix__ 1
#define _GLIBCXX_HAVE_SYS_STAT_H 1
#define __cpp_binary_literals 201304
#define _CPP_TYPE_TRAITS_H 1
#define _GLIBCXX_HAVE_EOVERFLOW 1
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define M_PI 3.14159265358979323846
#define SCHED_RR 2
#define CCTK_INT16_TYPE __int128
#define _GLIBCXX_PACKAGE_NAME "package-unused"
#define _CONCURRENCE_H 1
#define __gthrw(name) __gthrw2(__gthrw_ ## name,name,name)
#define w_termsig __wait_terminated.__w_termsig
#define DECLARE_FUNCTION_1_RET(fn,R) template <typename T, int D> inline vect<R, D> fn(const vect<T, D> &a) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = fn(a[d]); return r; } template <typename T, int D, int E> inline vect<R, D> fn(const vect<vect<T, D>, E> &a) { vect<R, D> r; for (int e = 0; e < E; ++e) r[e] = fn(a[e]); return r; }
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define __x86_64 1
#define __ASSERT_VOID_CAST static_cast<void>
#define CLONE_NEWNET 0x40000000
#define CCTK_BUILTIN_UNREACHABLE __builtin_unreachable
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define _G_BUFSIZ 8192
#define __UINT_FAST64_MAX__ 0xffffffffffffffffUL
#define __SIG_ATOMIC_TYPE__ int
#define CCTK_INTEGER_PRECISION_4 1
#define CCTK_VARIABLE_INT1 121
#define CCTK_VARIABLE_INT2 122
#define CCTK_VARIABLE_INT8 124
#define __DBL_MIN_10_EXP__ (-307)
#define ENOTTY 25
#define CCTK_LOOP2_INT(name,cctki3_cctkGH_,i,j) CCTK_LOOP2STR_INT(name, (cctki3_cctkGH_), i,j, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define __DISABLE_AVX512VLCD__ 
#define MPI_HOST 0x64400003
#define MOD_NANO ADJ_NANO
#define __attribute_alloc_size__(params) __attribute__ ((__alloc_size__ params))
#define DECLARE_CARPETLIB_PUBLIC_C2F 
#define _MM_FROUND_TO_POS_INF 0x02
#define L_cuserid 9
#define RE_BACKSLASH_ESCAPE_IN_LISTS ((unsigned long int) 1)
#define MATH_ERREXCEPT 2
#define __u_char_defined 
#define _mm256_floor_pd(V) _mm256_round_pd ((V), _MM_FROUND_FLOOR)
#define _mm256_floor_ps(V) _mm256_round_ps ((V), _MM_FROUND_FLOOR)
#define CLONE_THREAD 0x00010000
#define __GNUC_PATCHLEVEL__ 1
#define _GLIBCXX_STD_A std
#define _GLIBCXX_STD_C std
#define _GLIBCXX_HAVE_LINUX_FUTEX 1
#define PMPI_Message_f2c(msg) ((MPI_Message)(msg))
#define __UINT_FAST8_MAX__ 0xff
#define __LEAF , __leaf__
#define _MM_TRANSPOSE4_PS(row0,row1,row2,row3) do { __v4sf __r0 = (row0), __r1 = (row1), __r2 = (row2), __r3 = (row3); __v4sf __t0 = __builtin_ia32_unpcklps (__r0, __r1); __v4sf __t1 = __builtin_ia32_unpcklps (__r2, __r3); __v4sf __t2 = __builtin_ia32_unpckhps (__r0, __r1); __v4sf __t3 = __builtin_ia32_unpckhps (__r2, __r3); (row0) = __builtin_ia32_movlhps (__t0, __t1); (row1) = __builtin_ia32_movhlps (__t1, __t0); (row2) = __builtin_ia32_movlhps (__t2, __t3); (row3) = __builtin_ia32_movhlps (__t3, __t2); } while (0)
#define __has_include(STR) __has_include__(STR)
#define _GLIBCXX_HAVE_POWL 1
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define _OVERLOADABLE_OVERLOADPROTO(call,prefix,dummy_prefix,name) __OVERLOADABLE_OVERLOADPROTO(call,prefix, dummy_prefix, name)
#define _WCHAR_T_DEFINED 
#define MPI_Info_c2f(info) (MPI_Fint)(info)
#define PRIVATE_TRIDIAGONAL_STRUCT tridiagonalpriv_
#define _CCTK_DEBUGDEFINES_H_ 
#define ENOMEM 12
#define CCTK_LOOP1STR_NORMAL(name,i,ni,cctki0_idir_,cctki0_imin_,cctki0_imax_,cctki0_iash_,imin,imax,cctki0_istr_) do { typedef int cctki0_loop1_normal_ ##name; const int cctki0_idir = (cctki0_idir_); const int cctki0_imin = (cctki0_imin_); const int cctki0_imax = (cctki0_imax_); const int cctki0_iash CCTK_ATTRIBUTE_UNUSED = (cctki0_iash_); const int cctki0_istr = (cctki0_istr_); assert(cctki0_istr>0 && (cctki0_istr & (cctki0_istr-1)) == 0); const int imin CCTK_ATTRIBUTE_UNUSED = cctki0_imin; const int imax CCTK_ATTRIBUTE_UNUSED = cctki0_imax; const int cctki0_ioff = (cctki0_imin) & (cctki0_istr-1); _Pragma("omp for") for (int i=cctki0_imin-cctki0_ioff; i<cctki0_imax; i+=cctki0_istr) { const int ni CCTK_ATTRIBUTE_UNUSED = cctki0_idir<0 ? i+1 : cctki0_idir==0 ? 0 : cctki0_imax-i; {
#define CCTK_CXX_SIGNBIT std::signbit
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffUL
#define __INT16_MAX__ 0x7fff
#define _ERRNO_H 1
#define MPI_IO 0x64400005
#define CCTK_ENDLOOP3STR_INTBOUNDARIES(name) } CCTK_ENDLOOP3STR_NORMAL(name ##_intboundaries); } } } } typedef cctki2_loop3_intboundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define HAVE_CCTK_CXX_ATTRIBUTE_HOT 1
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define CCTK_PRAGMA_OMP_FOR_COLLAPSE_1 _Pragma("omp for collapse(1)")
#define CCTK_PRAGMA_OMP_FOR_COLLAPSE_2 _Pragma("omp for collapse(2)")
#define CCTK_PRAGMA_OMP_FOR_COLLAPSE_3 _Pragma("omp for collapse(3)")
#define __stub_sigreturn 
#define MPI_T_ERR_CVAR_SET_NOT_NOW 68
#define HAVE_SCHED_H 1
#define NULL_DEVICE "/dev/null"
#define _GLIBCXX_HAVE_ENDIAN_H 1
#define MPI_MAXLOC (MPI_Op)(0x5800000c)
#define __always_inline __inline __attribute__ ((__always_inline__))
#define NFDBITS __NFDBITS
#define MPI_COUNT ((MPI_Datatype)0x4c000845)
#define MPI_WIN_SIZE 0x66000003
#define CCTK_ERROR_INTERP_DELTA_X_ZERO (-1005)
#define _GLIBCXX_COMPLEX 1
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define MPI_WIN_NULL_DELETE_FN ((MPI_Win_delete_attr_function*)0)
#define MPI_THREAD_FUNNELED 1
#define CCTK_PARAMETER__IO__print_timing_info RESTRICTED_IO_STRUCT.print_timing_info
#define be16toh(x) __bswap_16 (x)
#define MPI_Message_c2f(msg) ((MPI_Fint)(msg))
#define _CCTK_ARGUMENTS _CCTK_CARGUMENTS
#define CCTK_DECLARE_INIT(typ,nam,val) typ nam CCTK_ATTRIBUTE_UNUSED = (val);
#define __fortify_function __extern_always_inline __attribute_artificial__
#define HAVE_CCTK_CXX_COPYSIGN 1
#define CCTK_PRAGMA_OMP_FOR_COLLAPSE_4 _Pragma("omp for collapse(4)")
#define UNDERFLOW 4
#define _IO_STDIO_H 
#define __mbstate_t_defined 1
#define __UINT_LEAST8_MAX__ 0xff
#define _GLIBCXX_HAVE_EOWNERDEAD 1
#define _XSAVECINTRIN_H_INCLUDED 
#define REG_NOTBOL 1
#define CCTK_PARAMETER__CARPETLIB__print_timestats_every PRIVATE_CARPETLIB_STRUCT.print_timestats_every
#define _GLIBCXX_HAVE_ATANF 1
#define _GLIBCXX_HAVE_ATANL 1
#define __UINTMAX_TYPE__ long unsigned int
#define _SIDD_CMP_EQUAL_ANY 0x00
#define __CHAR32_TYPE__ unsigned int
#define __linux 1
#define _X86INTRIN_H_INCLUDED 
#define no_argument 0
#define CCTK_REAL16_TYPE long double
#define _CMP_NEQ_OQ 0x0c
#define _CMP_NEQ_OS 0x1c
#define HAVE_MALLOPT 1
#define _IO_cleanup_region_end(_Doit) 
#define _GLIBCXX_HAVE_SYS_TIME_H 1
#define __MATHDECLX(type,function,suffix,args,attrib) __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define _GLIBCXX_HAVE_LIBINTL_H 1
#define __unix 1
#define _OSTREAM_INSERT_H 1
#define PMPI_Comm_f2c(comm) (MPI_Comm)(comm)
#define CCTK_CmplxNorm CCTK_Cmplx16Norm
#define __UINT32_MAX__ 0xffffffffU
#define _STL_LIST_H 1
#define __GXX_EXPERIMENTAL_CXX0X__ 1
#define _GLIBCXX_HAVE_ISNANF 1
#define __SIZE_T 
#define _GLIBCXX_FULLY_DYNAMIC_STRING 0
#define _ATFILE_SOURCE 1
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define __glibcxx_assert(_Condition) 
#define __WAIT_STATUS void *
#define _IO_ssize_t __ssize_t
#define HAVE_CCTK_CXX_BUILTIN_UNREACHABLE 1
#define _XABORT_CAPACITY (1 << 3)
#define CCTK_VARIABLE_INT16 125
#define WUNTRACED 2
#define ERESTART 85
#define _HASH_BYTES_H 1
#define EISNAM 120
#define MPI_Type_c2f(datatype) (MPI_Fint)(datatype)
#define UINT16_C(c) c
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#define _CCTK_COMM_H_ 1
#define CCTK_LOOP1_INT(name,cctki3_cctkGH_,i) CCTK_LOOP1STR_INT(name, (cctki3_cctkGH_), i, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define CCTK_PARAMETER__IO__out_xyplane_zi RESTRICTED_IO_STRUCT.out_xyplane_zi
#define CLONE_SETTLS 0x00080000
#define CCTK_PARAMETER__CARPETLIB__timestat_file PRIVATE_CARPETLIB_STRUCT.timestat_file
#define ENOMSG 42
#define EXIT_FAILURE 1
#define _SIZE_T_DEFINED_ 
#define __LC_TIME 2
#define _CMP_NEQ_UQ 0x04
#define _CMP_NEQ_US 0x14
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define CCTK_REAL_VEC_SIZE CCTK_REAL8_VEC_SIZE
#define _GLIBCXX_MEMORY 1
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define CCTK_PARAMETER__IO__out_xline_yi RESTRICTED_IO_STRUCT.out_xline_yi
#define MPI_INT16_T ((MPI_Datatype)0x4c000238)
#define _IO_DONT_CLOSE 0100000
#define _IO_UNIFIED_JUMPTABLES 1
#define CCTK_LOOP2_BND(name,cctki3_cctkGH_,i,j,ni,nj) CCTK_LOOP2STR_BND(name, (cctki3_cctkGH_), i,j, ni,nj, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define PRIVATE_AEILOCALINTERP_STRUCT aeilocalinterppriv_
#define __KERNEL_STRICT_NAMES 
#define CCTK_PARAMETER__IO__out_xline_zi RESTRICTED_IO_STRUCT.out_xline_zi
#define __INT64_C(c) c ## L
#define CCTK_PARAMETER__IO__out_zline_x RESTRICTED_IO_STRUCT.out_zline_x
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define _GLIBCXX_CONST __attribute__ ((__const__))
#define __DBL_DIG__ 15
#define MPI_AINT ((MPI_Datatype)0x4c000843)
#define DECLARE_MEMBER_OPERATOR_1_REF(fn,op) vect &fn(const T &x) { for (int d = 0; d < D; ++d) elt[d] op x; return *this; } vect &fn(const vect &a) { for (int d = 0; d < D; ++d) elt[d] op a[d]; return *this; }
#define _EXT_NUMERIC_TRAITS 1
#define STA_PPSWANDER 0x0400
#define SING 2
#define __FLT_MAX__ 3.40282346638528859812e+38F
#define OVERLOADABLE_PROTOTYPE(name) _OVERLOADABLE_PROTOTYPE(OVERLOADABLE_PREFIX, OVERLOADABLE_DUMMY_PREFIX, name)
#define MPI_ERR_INTERN 16
#define HAVE_CRYPT 1
#define _GLIBCXX_HAVE_AT_QUICK_EXIT 1
#define _CCTKI_GROUPSONGH_H_ 
#define MPIIMPL_HAVE_MPI_TYPE_CREATE_DARRAY 1
#define _GLIBCXX_HAVE_STDBOOL_H 1
#define _AVX512PFINTRIN_H_INCLUDED 
#define DECLARE_FUNCTION_2_RET(fn,R) template <typename T, int D> inline vect<R, D> fn(const vect<T, D> &a, const vect<T, D> &b) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = fn(a[d], b[d]); return r; } template <typename T, int D> inline vect<R, D> fn(const T &a, const vect<T, D> &b) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = fn(a, b[d]); return r; } template <typename T, int D> inline vect<R, D> fn(const vect<T, D> &a, const T &b) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = fn(a[d], b); return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const vect<vect<T, D>, E> &a, const vect<vect<T, D>, E> &b) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = fn(a[e], b[e]); return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const T &a, const vect<vect<T, D>, E> &b) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = fn(a, b[e]); return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const vect<vect<T, D>, E> &a, const T &b) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = fn(a[e], b); return r; }
#define __isascii(c) (((c) & ~0x7f) == 0)
#define __toascii(c) ((c) & 0x7f)
#define _POSIX_SOURCE 1
#define __SIZEOF_INT__ 4
#define MPI_T_ERR_PVAR_NO_WRITE 71
#define __PRAGMA_REDEFINE_EXTNAME 1
#define CCTK_LOOP4_BOUNDARIES(name,cctki2_cctkGH_,i,j,k,l,ni,nj,nk,nl,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_lblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_lbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_lbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_,cctki2_lbboxhi_) CCTK_LOOP4STR_BOUNDARIES(name, (cctki2_cctkGH_), i,j,k,l, ni,nj,nk,nl, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_),(cctki2_lblo_), (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_),(cctki2_lbhi_), (cctki2_ibboxlo_),(cctki2_jbboxlo_),(cctki2_kbboxlo_),(cctki2_lbboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxhi_),(cctki2_kbboxhi_),(cctki2_lbboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define MPI_SIGNED_CHAR ((MPI_Datatype)0x4c000118)
#define CCTK_ISINF CCTK_CXX_ISINF
#define _SIDD_CMP_RANGES 0x04
#define __attribute_used__ __attribute__ ((__used__))
#define _STDIO_USES_IOSTREAM 
#define CLOCK_REALTIME 0
#define CCTK_LOOP1(name,i,cctki1_imin_,cctki1_imax_,cctki1_iash_) CCTK_LOOP1STR(name, i, (cctki1_imin_), (cctki1_imax_), (cctki1_iash_), cctki1_dummy_imin,cctki1_dummy_imax, 1)
#define CCTK_LOOP2(name,i,j,cctki1_imin_,cctki1_jmin_,cctki1_imax_,cctki1_jmax_,cctki1_iash_,cctki1_jash_) CCTK_LOOP2STR(name, i,j, (cctki1_imin_),(cctki1_jmin_), (cctki1_imax_),(cctki1_jmax_), (cctki1_iash_),(cctki1_jash_), cctki1_dummy_imin,cctki1_dummy_imax, 1)
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_BEGIN_NAMESPACE_LDBL
#define _mm_test_all_zeros(M,V) _mm_testz_si128 ((M), (V))
#define MPI_DOUBLE_PRECISION ((MPI_Datatype)1275070495)
#define CCTK_ENDLOOP2STR(name) CCTK_ENDLOOP2STR_NORMAL(name)
#define __USER_LABEL_PREFIX__ 
#define _GLIBCXX_NUM_FACETS 28
#define _GLIBCXX_USE_PTHREAD_RWLOCK_T 1
#define _CMP_EQ_OS 0x10
#define DECLARE_PRIVATE_CARPETLIB_STRUCT_PARAMS CCTK_DECLARE_INIT (const char * const, memstat_file, CCTK_PARAMETER__CARPETLIB__memstat_file); CCTK_DECLARE_INIT (const char * const, timestat_file, CCTK_PARAMETER__CARPETLIB__timestat_file); CCTK_DECLARE_INIT (CCTK_INT const, barrier_between_stages, CCTK_PARAMETER__CARPETLIB__barrier_between_stages); CCTK_DECLARE_INIT (CCTK_INT const, barriers, CCTK_PARAMETER__CARPETLIB__barriers); CCTK_DECLARE_INIT (CCTK_INT const, check_bboxes, CCTK_PARAMETER__CARPETLIB__check_bboxes); CCTK_DECLARE_INIT (CCTK_INT const, check_communication_schedule, CCTK_PARAMETER__CARPETLIB__check_communication_schedule); CCTK_DECLARE_INIT (CCTK_INT const, combine_recompose, CCTK_PARAMETER__CARPETLIB__combine_recompose); CCTK_DECLARE_INIT (CCTK_INT const, combine_sends, CCTK_PARAMETER__CARPETLIB__combine_sends); CCTK_DECLARE_INIT (CCTK_INT const, commstate_verbose, CCTK_PARAMETER__CARPETLIB__commstate_verbose); CCTK_DECLARE_INIT (CCTK_INT const, electric_fence, CCTK_PARAMETER__CARPETLIB__electric_fence); CCTK_DECLARE_INIT (CCTK_INT const, fence_width, CCTK_PARAMETER__CARPETLIB__fence_width); CCTK_DECLARE_INIT (CCTK_INT const, interleave_communications, CCTK_PARAMETER__CARPETLIB__interleave_communications); CCTK_DECLARE_INIT (CCTK_INT const, interpolate_from_buffer_zones, CCTK_PARAMETER__CARPETLIB__interpolate_from_buffer_zones); CCTK_DECLARE_INIT (CCTK_INT const, max_allowed_memory_MB, CCTK_PARAMETER__CARPETLIB__max_allowed_memory_MB); CCTK_DECLARE_INIT (CCTK_INT const, max_core_size_MB, CCTK_PARAMETER__CARPETLIB__max_core_size_MB); CCTK_DECLARE_INIT (CCTK_INT const, max_memory_size_MB, CCTK_PARAMETER__CARPETLIB__max_memory_size_MB); CCTK_DECLARE_INIT (CCTK_INT const, message_count_multiplier, CCTK_PARAMETER__CARPETLIB__message_count_multiplier); CCTK_DECLARE_INIT (CCTK_INT const, message_size_multiplier, CCTK_PARAMETER__CARPETLIB__message_size_multiplier); CCTK_DECLARE_INIT (CCTK_INT const, output_bboxes, CCTK_PARAMETER__CARPETLIB__output_bboxes); CCTK_DECLARE_INIT (CCTK_INT const, pad_to_cachelines, CCTK_PARAMETER__CARPETLIB__pad_to_cachelines); CCTK_DECLARE_INIT (CCTK_INT const, poison_new_memory, CCTK_PARAMETER__CARPETLIB__poison_new_memory); CCTK_DECLARE_INIT (CCTK_INT const, print_memstats_every, CCTK_PARAMETER__CARPETLIB__print_memstats_every); CCTK_DECLARE_INIT (CCTK_INT const, print_timestats_every, CCTK_PARAMETER__CARPETLIB__print_timestats_every); CCTK_DECLARE_INIT (CCTK_INT const, test_backtrace, CCTK_PARAMETER__CARPETLIB__test_backtrace); CCTK_DECLARE_INIT (CCTK_INT const, use_dgfe, CCTK_PARAMETER__CARPETLIB__use_dgfe); CCTK_DECLARE_INIT (CCTK_INT const, use_ipm_timing_regions, CCTK_PARAMETER__CARPETLIB__use_ipm_timing_regions); CCTK_DECLARE_INIT (CCTK_INT const, use_loopcontrol_in_operators, CCTK_PARAMETER__CARPETLIB__use_loopcontrol_in_operators); CCTK_DECLARE_INIT (CCTK_INT const, use_mpi_send, CCTK_PARAMETER__CARPETLIB__use_mpi_send); CCTK_DECLARE_INIT (CCTK_INT const, use_mpi_ssend, CCTK_PARAMETER__CARPETLIB__use_mpi_ssend); CCTK_DECLARE_INIT (CCTK_INT const, verbose, CCTK_PARAMETER__CARPETLIB__verbose);
#define __LC_MEASUREMENT 11
#define PMPI_Op_f2c(op) (MPI_Op)(op)
#define __GLIBC__ 2
#define CCTK_LOOP2STR_INTBOUNDARIES(name,cctki2_cctkGH_,i,j,ni,nj,cctki2_iblo_,cctki2_jblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop2_intboundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_INTBOUNDARIES can only be used in 2 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_),(cctki2_jblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_),(cctki2_jbhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxlo_), (cctki2_jbboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0],cctki2_cctkGH->cctk_lsh[1] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_jdir=-1; cctki2_jdir<=+1; ++cctki2_jdir) { for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0) || (cctki2_jdir<0 ? cctki2_bbox[2] : 0) || (cctki2_jdir>0 ? cctki2_bbox[3] : 0); const int cctki2_all_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 1) && (cctki2_idir>0 ? cctki2_bbox[1] : 1) && (cctki2_jdir<0 ? cctki2_bbox[2] : 1) && (cctki2_jdir>0 ? cctki2_bbox[3] : 1); if (cctki2_all_bbox && cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], cctki2_jdir<0 ? 0 : cctki2_jdir==0 ? cctki2_blo[1] : cctki2_lsh[1] - cctki2_bhi[1], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], cctki2_jdir<0 ? cctki2_blo[1] : cctki2_jdir==0 ? cctki2_lsh[1] - cctki2_bhi[1] : cctki2_lsh[1], }; CCTK_LOOP2STR_NORMAL(name ##_intboundaries, i,j, ni,nj, cctki2_idir,cctki2_jdir, cctki2_bmin[0],cctki2_bmin[1], cctki2_bmax[0],cctki2_bmax[1], cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], imin,imax, cctki2_istr) {
#define CCTK_THORNSTRING "CarpetLib"
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define RE_INTERVALS (RE_HAT_LISTS_NOT_NEWLINE << 1)
#define CCTK_PARAMETER__CARPETLIB__use_dgfe PRIVATE_CARPETLIB_STRUCT.use_dgfe
#define CCTK_VARIABLE_FPOINTER 162
#define WCONTINUED 8
#define UINT8_MAX (255)
#define PASS_CARPETLIB_C2F(GH) _PASS_CCTK_C2F(GH)
#define _mm512_mask_exp2a23_pd(W,U,A) _mm512_mask_exp2a23_round_pd(W, U, A, _MM_FROUND_CUR_DIRECTION)
#define _STL_ALGO_H 1
#define _GLIBCXX_PACKAGE__GLIBCXX_VERSION "version-unused"
#define __WAIT_STATUS_DEFN void *
#define MPICH_ATTR_TYPE_TAG_CXX(type) MPICH_ATTR_TYPE_TAG(type)
#define NAN (__builtin_nanf (""))
#define __clock_t_defined 1
#define __LDBL_HAS_INFINITY__ 1
#define MPI_COMM_TYPE_SHARED 1
#define MPI_T_ERR_CVAR_SET_NEVER 69
#define _GLIBCXX_MAP 1
#define CCTK_LOOP4STR_INTERIOR(name,cctki2_cctkGH_,i,j,k,l,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_lblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_lbhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop4_interior_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_INTERIOR can only be used in 4 dimensions"); } CCTK_LOOP4STR(name ##_interior, i,j,k,l, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_),(cctki2_lblo_), cctki2_cctkGH->cctk_lsh[0]-(cctki2_ibhi_), cctki2_cctkGH->cctk_lsh[1]-(cctki2_jbhi_), cctki2_cctkGH->cctk_lsh[2]-(cctki2_kbhi_), cctki2_cctkGH->cctk_lsh[3]-(cctki2_lbhi_), cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], cctki2_cctkGH->cctk_ash[2], cctki2_cctkGH->cctk_ash[3], imin,imax, (cctki2_istr_)) {
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define _GLIBCXX_HAVE_LIMIT_VMEM 0
#define __EXCEPTION__ 
#define _LP64 1
#define CCTK_COPYSIGN CCTK_CXX_COPYSIGN
#define _BSD_SIZE_T_DEFINED_ 
#define _CMP_GE_OS 0x0d
#define CCTK_VARIABLE_CHAR 150
#define __FLT_EPSILON__ 1.19209289550781250000e-7F
#define LC_COLLATE __LC_COLLATE
#define RESTRICTED_SPHERICALSURFACE_STRUCT sphericalsurfacerest_
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define _AVX512VLINTRIN_H_INCLUDED 
#define ENOLINK 67
#define __GXX_WEAK__ 1
#define k8madd(x,y,z) (k8add(k8mul(x,y),z))
#define _MM_MK_INSERTPS_NDX(S,D,M) (((S) << 6) | ((D) << 4) | (M))
#define CCTK_BUILTIN_EXPECT __builtin_expect
#define __SSIZE_T_TYPE __SWORD_TYPE
#define __DEV_T_TYPE __UQUAD_TYPE
#define MPI_MAX_OBJECT_NAME 128
#define _GLIBCXX_ALGORITHMFWD_H 1
#define _GLIBCXX_BEGIN_NAMESPACE_ALGO 
#define _IO_SCIENTIFIC 04000
#define __GTHREADS_CXX0X 1
#define le32toh(x) (x)
#define _SIZE_T_DEFINED 
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __DEC32_MAX__ 9.999999E96DF
#define _GLIBCXX_HAVE_POLL 1
#define CPU_SETSIZE __CPU_SETSIZE
#define CCTK_CXX_RESTRICT __restrict__
#define HAVE_CCTK_CXX_ISNORMAL 1
#define PRIVATE_CYCLECLOCK_STRUCT cycleclockpriv_
#define vec4_loadu_maybe(off,p) (vec4_loadu(p))
#define CCTK_LOOP1_BND(name,cctki3_cctkGH_,i,ni) CCTK_LOOP1STR_BND(name, (cctki3_cctkGH_), i, ni, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define __SIZEOF_SHORT__ 2
#define _XABORT_NESTED (1 << 5)
#define _GLIBCXX_ALWAYS_INLINE inline __attribute__((__always_inline__))
#define CLOCK_BOOTTIME_ALARM 9
#define MPI_ERR_RMA_RANGE 55
#define __INT32_MAX__ 0x7fffffff
#define _GLIBCXX_BEGIN_EXTERN_C extern "C" {
#define _GLIBCXX_ATOMIC_WORD_H 1
#define SIZEOF_LONG_DOUBLE 16
#define RE_UNMATCHED_RIGHT_PAREN_ORD (RE_NO_EMPTY_RANGES << 1)
#define MPI_MODE_APPEND 128
#define __SSE__ 1
#define __STDC_IEC_559__ 1
#define __STDC_ISO_10646__ 201304L
#define MOD_MICRO ADJ_MICRO
#define M_2_PI 0.63661977236758134308
#define HAVE_MALLOC_H 1
#define CCTK_LOOP1STR_BOUNDARIES(name,cctki2_cctkGH_,i,ni,cctki2_iblo_,cctki2_ibhi_,cctki2_ibboxlo_,cctki2_ibboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop1_boundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_BOUNDARIES can only be used in 1 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0); if (cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], }; CCTK_LOOP1STR_NORMAL(name ##_boundaries, i, ni, cctki2_idir, cctki2_bmin[0], cctki2_bmax[0], cctki2_cctkGH->cctk_ash[0], imin,imax, cctki2_istr) {
#define w_retcode __wait_terminated.__w_retcode
#define _IO_PENDING_OUTPUT_COUNT(_fp) ((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)
#define _GLIBCXX_HAVE_MODFF 1
#define _GLIBCXX_HAVE_MODFL 1
#define __DECIMAL_DIG__ 21
#define CCTK_ENDLOOP1(name) CCTK_ENDLOOP1STR(name)
#define CCTK_GF 402
#define MPI_ERR_RMA_SYNC 50
#define _GLIBCXX_HAVE_HYPOTF 1
#define _GLIBCXX_HAVE_HYPOTL 1
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define _LARGEFILE_SOURCE 1
#define CLOCK_BOOTTIME 7
#define __glibcxx_requires_heap(_First,_Last) 
#define ENETDOWN 100
#define ESTALE 116
#define _CTYPE_H 1
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_END_NAMESPACE_LDBL
#define LC_TIME __LC_TIME
#define WSTOPSIG(status) __WSTOPSIG (__WAIT_INT (status))
#define MPI_INTEGER4 ((MPI_Datatype)0x4c000430)
#define PTRDIFF_MAX (9223372036854775807L)
#define _GLIBCXX_HAVE_SYMVER_SYMBOL_RENAMING_RUNTIME_SUPPORT 1
#define _GLIBCXX_USE_CXX11_ABI 0
#define _IO_LEFT 02
#define _MM_ROUND_MASK 0x6000
#define _GLIBCXX_CERRNO 1
#define __glibcxx_max_b(T,B) (__glibcxx_signed_b (T,B) ? (((((T)1 << (__glibcxx_digits_b (T,B) - 1)) - 1) << 1) + 1) : ~(T)0)
#define __LDBL_HAS_QUIET_NAN__ 1
#define _GLIBXX_STREAMBUF 1
#define ADJ_MICRO 0x1000
#define _GLIBCXX_HAVE_VFWSCANF 1
#define _GLIBCXX_STDEXCEPT 1
#define _REENTRANT 1
#define __THROW throw ()
#define check(_expr) do { bool const _val = (_expr); assert(_val); } while (0)
#define __glibcxx_requires_heap_pred(_First,_Last,_Pred) 
#define _GLIBCXX_HAVE_POWF 1
#define SCOPE_RESTRICTED 902
#define MPI_ERR_DIMS 11
#define vec8_set1(a) (_mm_set1_pd(a))
#define _RE_SYNTAX_POSIX_COMMON (RE_CHAR_CLASSES | RE_DOT_NEWLINE | RE_DOT_NOT_NULL | RE_INTERVALS | RE_NO_EMPTY_RANGES)
#define _BASIC_IOS_TCC 1
#define UINT8_C(c) c
#define WIFCONTINUED(status) __WIFCONTINUED (__WAIT_INT (status))
#define _GLIBCXX_CXX_ALLOCATOR_H 1
#define __GNUC__ 5
#define __SYSCALL_ULONG_TYPE __ULONGWORD_TYPE
#define __GXX_RTTI 1
#define MPI_GROUP_NULL ((MPI_Group)0x08000000)
#define HAVE_SYS_TYPES_H 1
#define __MMX__ 1
#define CCTK_ENDLOOP4_ALL(name) CCTK_ENDLOOP4STR_ALL(name)
#define _GLIBCXX_USE_GET_NPROCS 1
#define __OFF64_T_TYPE __SQUAD_TYPE
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define CCTK_RegisterIOMethod(a) CCTKi_RegisterIOMethod (CCTK_THORNSTRING, a)
#define _GLIBCXX_HAVE_STRERROR_L 1
#define _GLIBCXX_HAVE_STRERROR_R 1
#define HAVE_SYS_SOCKET_H 1
#define __LDBL_MIN_EXP__ (-16381)
#define MPIO_INCLUDE 
#define MPICH_VERSION "3.1.4"
#define PRIVATE_CARPETLIB_STRUCT carpetlibpriv_
#define _GLIBCXX_HAVE_EWOULDBLOCK 1
#define CCTK_ERROR_INTERP_POINT_OUTSIDE (-1002)
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define _GLIBCXX_USE_C99_INTTYPES_WCHAR_T_TR1 1
#define MPICH_RELEASE_TYPE_BETA 1
#define MPI_WIN_MODEL 0x66000009
#define ADJ_OFFSET 0x0001
#define _IO_va_list __gnuc_va_list
#define k4madd(x,y,z) (k4add(k4mul(x,y),z))
#define CCTK_ENDLOOP4STR_ALL(name) } CCTK_ENDLOOP4STR(name ##_all); typedef cctki3_loop4_all_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define MPI_MESSAGE_NULL ((MPI_Message)MPI_REQUEST_NULL)
#define __BIGGEST_ALIGNMENT__ 16
#define ASSERT_VECT(x) 
#define _GLIBCXX_HAVE_LOGL 1
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define k8sqrt(x) (_mm_sqrt_pd(x))
#define _CCTK_GNU_H_ 1
#define CCTK_ENDLOOP3STR_INTERIOR(name) } CCTK_ENDLOOP3STR(name ##_interior); typedef cctki2_loop3_interior_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while(0)
#define CARPETLIB_PROTECTED_C2F_PROTO 
#define PMPI_Type_f2c(datatype) (MPI_Datatype)(datatype)
#define __glibcxx_digits10_b(T,B) (__glibcxx_digits_b (T,B) * 643L / 2136)
#define _GLIBCXX_POSTYPES_H 1
#define TWO_FORTSTRING_LEN(len1,len2) size_t len1 = cctk_strlen1; size_t len2 = cctk_strlen2;
#define HAVE_TIME_GETRUSAGE 1
#define CARPET_OPTIMISE 1
#define __BIG_ENDIAN 4321
#define _STL_CONSTRUCT_H 1
#define M_LOG10El 0.434294481903251827651128918916605082L
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define _rotwl(a,b) __rolw((a), (b))
#define _rotwr(a,b) __rorw((a), (b))
#define WTERMSIG(status) __WTERMSIG (__WAIT_INT (status))
#define _GLIBCXX_HAVE_S_ISREG 1
#define __bswap_16(x) (__extension__ ({ unsigned short int __v, __x = (unsigned short int) (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_16 (__x); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
#define HAVE_CCTK_COMPLEX16 1
#define STA_PPSTIME 0x0004
#define EXIT_SUCCESS 0
#define MPI_FILE_DEFINED 
#define _GLIBCXX_USE_DEPRECATED 1
#define _GLIBCXX_PREDEFINED_OPS_H 1
#define _DEQUE_TCC 1
#define sched_priority __sched_priority
#define _FMA4INTRIN_H_INCLUDED 
#define __INT_FAST32_MAX__ 0x7fffffffffffffffL
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define _GLIBCXX_CWCHAR 1
#define HAVE_CCTK_COMPLEX32 1
#define SIZEOF_DOUBLE 8
#define _GLIBCXX_HAVE_ETXTBSY 1
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define _GLIBCXX_END_NAMESPACE_ALGO 
#define MPI_FLOAT ((MPI_Datatype)0x4c00040a)
#define _MM_MASK_INEXACT 0x1000
#define CLONE_NEWNS 0x00020000
#define MPI_CONVERSION_FN_NULL ((MPI_Datarep_conversion_function *)0)
#define _FEATURES_H 1
#define HAVE_DLADDR 1
#define w_stopsig __wait_stopped.__w_stopsig
#define MPI_ERR_ROOT 7
#define __glibcxx_requires_partitioned_upper(_First,_Last,_Value) 
#define CCTK_ISNORMAL CCTK_CXX_ISNORMAL
#define __LDBL_HAS_DENORM__ 1
#define EPIPE 32
#define MPI_ERR_ASSERT 53
#define CCTK_CARGUMENTS CARPETLIB_CARGUMENTS
#define _GLIBCXX_HAVE_QUICK_EXIT 1
#define CCTK_WARN_DEBUG 4
#define __FD_SETSIZE 1024
#define HAVE_TIME_H 1
#define __STRICT_ANSI__ 1
#define _MM_CMPINT_NLE 0x6
#define RE_SYNTAX_POSIX_MINIMAL_BASIC (_RE_SYNTAX_POSIX_COMMON | RE_LIMITED_OPS)
#define _mm256_ceil_pd(V) _mm256_round_pd ((V), _MM_FROUND_CEIL)
#define DECLARE_REDUCTION_FUNCTION_1(fn,init,op,final) template <typename T, int D> inline T fn(const vect<T, D> &a) { T r(init); for (int d = 0; d < D; ++d) op(r, a[d]); return final(r); }
#define EBADMSG 74
#define CCTK_PARAMETER__CARPETLIB__restriction_order_space RESTRICTED_CARPETLIB_STRUCT.restriction_order_space
#define __USE_POSIX199506 1
#define __USE_XOPEN2K 1
#define _GLIBCXX_HAVE_EPROTO 1
#define CLONE_PARENT 0x00008000
#define __stub_getmsg 
#define LC_TIME_MASK (1 << __LC_TIME)
#define __cplusplus 201103L
#define __cpp_ref_qualifiers 200710
#define LC_ADDRESS __LC_ADDRESS
#define _STRUCT_TIMEVAL 1
#define __INT_LEAST32_MAX__ 0x7fffffff
#define _CCTK_MAIN_H_ 
#define _IO_UNBUFFERED 2
#define vec_elt vec8_elt
#define _GCC_WRAP_STDINT_H 
#define _IO_INTERNAL 010
#define __DEC32_MIN__ 1E-95DF
#define _XABORT_EXPLICIT (1 << 0)
#define __dev_t_defined 
#define CCTK_CmplxCos CCTK_Cmplx16Cos
#define _bit_scan_forward(a) __bsfd(a)
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define __DBL_MAX_EXP__ 1024
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define DECLARE_CARPETLIB_PROTECTED_CARGUMENTS 
#define _GLIBCXX_HAVE_FLOAT_H 1
#define MPIR_CXX_LONG_DOUBLE_COMPLEX 0x4c002036
#define SCOPE_GLOBAL 901
#define OVERFLOW 3
#define _BITS_WCHAR_H 1
#define CCTK_ENDLOOP3_ALL(name) CCTK_ENDLOOP3STR_ALL(name)
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define _rdtsc() __rdtsc()
#define __SSE2_MATH__ 1
#define __gthrw_(name) __gthrw_ ## name
#define __FSFILCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define LC_NAME_MASK (1 << __LC_NAME)
#define _GLIBCXX_HAVE_ECANCELED 1
#define k4pow(x,a) ({ CCTK_REAL4_VEC const xpow=(x); CCTK_REAL4 const apow=(a); vec4_set(pow(vec4_elt0(xpow),apow), pow(vec4_elt1(xpow),apow), pow(vec4_elt2(xpow),apow), pow(vec4_elt3(xpow),apow)); })
#define PRIVATE_LOOPCONTROL_STRUCT loopcontrolpriv_
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define ETOOMANYREFS 109
#define HAVE_REGEX_H 1
#define CCTK_ERROR_INTERP_GRID_TOO_TINY CCTK_ERROR_INTERP_GRID_TOO_SMALL
#define __need_timespec 
#define __USE_REENTRANT 1
#define MPI_ERR_PENDING 18
#define __STDC_UTF_16__ 1
#define _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY 1
#define _mm_floor_pd(V) _mm_round_pd((V), _MM_FROUND_FLOOR)
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define _mm_floor_ps(V) _mm_round_ps ((V), _MM_FROUND_FLOOR)
#define __USECONDS_T_TYPE __U32_TYPE
#define __BEGIN_NAMESPACE_STD 
#define __OFF_T_TYPE __SYSCALL_SLONG_TYPE
#define CCTK_RegisterReductionOperator(a,b) CCTKi_RegisterReductionOperator(CCTK_THORNSTRING,a,b)
#define HAVE_M_MMAP_THRESHOLD_VALUE 1
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define CCTK_PARAMETER__IO__out_save_parameters RESTRICTED_IO_STRUCT.out_save_parameters
#define CCTK_LOOP2_BOUNDARIES(name,cctki2_cctkGH_,i,j,ni,nj,cctki2_iblo_,cctki2_jblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_) CCTK_LOOP2STR_BOUNDARIES(name, (cctki2_cctkGH_), i,j, ni,nj, (cctki2_iblo_),(cctki2_jblo_), (cctki2_ibhi_),(cctki2_jbhi_), (cctki2_ibboxlo_),(cctki2_jbboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define __ATOMIC_HLE_ACQUIRE 65536
#define _T_WCHAR 
#define MPI_ERR_UNSUPPORTED_DATAREP 43
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define MPI_ERR_GROUP 8
#define _MM_FROUND_CUR_DIRECTION 0x04
#define _CCTK_WARNLEVEL_H_ 
#define MPI_LOR (MPI_Op)(0x58000007)
#define _mm_floor_sd(D,V) _mm_round_sd ((D), (V), _MM_FROUND_FLOOR)
#define CCTK_PARAMETER__CARPETLIB__test_backtrace PRIVATE_CARPETLIB_STRUCT.test_backtrace
#define MPICH 1
#define MPI_T_ERR_CANNOT_INIT 61
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define MPI_WIN_DISP_UNIT 0x66000005
#define __glibcxx_min_b(T,B) (__glibcxx_signed_b (T,B) ? -__glibcxx_max_b (T,B) - 1 : (T)0)
#define ENOTEMPTY 39
#define HAVE_FINITE 1
#define __GTHREAD_ONCE_INIT PTHREAD_ONCE_INIT
#define _STL_RELOPS_H 1
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)
#define _PTR_TRAITS_H 1
#define _DECLARE_CCTK_C2F 
#define _GLIBCXX_LIST 1
#define __stub_bdflush 
#define ENOTNAM 118
#define __u_intN_t(N,MODE) typedef unsigned int u_int ##N ##_t __attribute__ ((__mode__ (MODE)))
#define REGS_UNALLOCATED 0
#define MPIX_CALLREF(_objptr,fnc) { int err = fnc; if (err) { (_objptr)->Call_errhandler( err ); }}
#define __cpp_initializer_lists 200806
#define __U16_TYPE unsigned short int
#define CCTK_ORIGIN_SPACE(x) (cctk_origin_space[x]+cctk_delta_space[x]/cctk_levfac[x]*cctk_levoff[x]/cctk_levoffdenom[x])
#define _XSAVEINTRIN_H_INCLUDED 
#define _GLIBCXX_HAVE_SYS_PARAM_H 1
#define CCTK_PARAMETER__IO__out_fileinfo RESTRICTED_IO_STRUCT.out_fileinfo
#define _STDIO_H 1
#define WINT_MAX (4294967295u)
#define PMPI_Errhandler_f2c(errhandler) (MPI_Errhandler)(errhandler)
#define CCTK_ENDLOOP2(name) CCTK_ENDLOOP2STR(name)
#define CCTK_ENDLOOP3(name) CCTK_ENDLOOP3STR(name)
#define CCTK_ENDLOOP4(name) CCTK_ENDLOOP4STR(name)
#define CCTK_PARAMETER_NORMAL 801
#define UINTPTR_MAX (18446744073709551615UL)
#define _PTRDIFF_T 
#define _MOVE_H 1
#define __GOMP_NOTHROW throw ()
#define CCTK_PARAMETER__CARPETLIB__use_mpi_ssend PRIVATE_CARPETLIB_STRUCT.use_mpi_ssend
#define MPI_ERR_QUOTA 39
#define isnan Cactus::good_isnan
#define _GLIBCXX_MOVE(__val) std::move(__val)
#define _MMINTRIN_H_INCLUDED 
#define MPI_ANY_TAG (-1)
#define MPI_ERR_REQUEST 19
#define _GLIBCXX_DEBUG_ONLY(_Statement) ;
#define CCTK_PARAMETER__CARPETLIB__print_memstats_every PRIVATE_CARPETLIB_STRUCT.print_memstats_every
#define DECLARE_CARPETLIB_PRIVATE_CARGUMENTS 
#define SCOPE_FIRST 901
#define __USE_GNU 1
#define __FLT_MIN_EXP__ (-125)
#define WEXITED 4
#define HAVE_CCTK_CXX_LAMBDA 1
#define _GLIBCXX_HAVE_ENODATA 1
#define CCTK_ENDLOOP1STR_BOUNDARIES(name) } CCTK_ENDLOOP1STR_NORMAL(name ##_boundaries); } } typedef cctki2_loop1_boundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define ksub k8sub
#define MPI_LAND (MPI_Op)(0x58000005)
#define INT64_MAX (__INT64_C(9223372036854775807))
#define PTHREAD_RWLOCK_INITIALIZER { { 0, 0, 0, 0, 0, 0, 0, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, 0 } }
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define HAVE_UNISTD_H 1
#define CCTK_ATTRIBUTE_CONST 
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define alloca(size) __builtin_alloca (size)
#define _LWPINTRIN_H_INCLUDED 
#define CCTK_MPI 1
#define __THROWNL throw ()
#define _GLIBCXX_BEGIN_NAMESPACE_CXX11 
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define _GLIBCXX_CCTYPE 1
#define _Mlong_double_ long double
#define __cpp_lambdas 200907
#define HAVE_CAPABILITY_LoopControl 1
#define PMPI_Group_f2c(group) (MPI_Group)(group)
#define _MM_FROUND_NEARBYINT (_MM_FROUND_CUR_DIRECTION | _MM_FROUND_NO_EXC)
#define _GLIBCXX_HAVE_SINHF 1
#define _GLIBCXX_HAVE_SINHL 1
#define _LOCALE_H 1
#define _mm512_exp2a23_ps(A) _mm512_exp2a23_round_ps(A, _MM_FROUND_CUR_DIRECTION)
#define _LIST_TCC 1
#define _ISTREAM_TCC 1
#define MPI_OFFSET ((MPI_Datatype)0x4c000844)
#define ADJ_TIMECONST 0x0020
#define _GLIBCXX_HAVE_SQRTF 1
#define _GLIBCXX_HAVE_SQRTL 1
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define PARAMETER_BOOLEAN 706
#define CCTK_MEMBER_ATTRIBUTE_PURE 
#define _mm_floor_ss(D,V) _mm_round_ss ((D), (V), _MM_FROUND_FLOOR)
#define HUGE_VAL (__builtin_huge_val())
#define _STL_ITERATOR_BASE_TYPES_H 1
#define WINT_MIN (0u)
#define CCTK_PARAMETER_STRICT 800
#define __key_t_defined 
#define MPIX_ERR_REVOKED MPICH_ERR_FIRST_MPIX+3
#define CCTK_PARAMETER__CARPETLIB__deadbeef RESTRICTED_CARPETLIB_STRUCT.deadbeef
#define CCTK_ATTRIBUTE_NOINLINE __attribute__((__noinline__))
#define CCTK_ENDLOOP2_ALL(name) CCTK_ENDLOOP2STR_ALL(name)
#define PRIVATE_CARPETINTERP_STRUCT carpetinterppriv_
#define _lrotr(a,b) __rorq((a), (b))
#define MPI_PROD (MPI_Op)(0x58000004)
#define MPI_DISTRIBUTE_CYCLIC 122
#define CLONE_VM 0x00000100
#define _GLIBCXX_HAVE_ETIMEDOUT 1
#define CLOCK_REALTIME_COARSE 5
#define __USE_XOPEN2KXSI 1
#define __INT16_TYPE__ short int
#define __LP64__ 1
#define __offsetof__ offsetof
#define _IO_off64_t __off64_t
#define ENETRESET 102
#define MPI_T_ENUM_NULL ((MPI_T_enum)NULL)
#define __USE_UNIX98 1
#define CCTK_DISTRIB_CONSTANT 301
#define vec8_load(p) (_mm_load_pd(&(p)))
#define CLOCK_REALTIME_ALARM 8
#define CCTK_PARAMETER__IO__checkpoint_file RESTRICTED_IO_STRUCT.checkpoint_file
#define __LEAF_ATTR __attribute__ ((__leaf__))
#define MPI_ERR_NOT_SAME 35
#define __DECIMAL_BID_FORMAT__ 1
#define fpclassify Cactus::good_fpclassify
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define _mm_test_mix_ones_zeros(M,V) _mm_testnzc_si128 ((M), (V))
#define RE_SYNTAX_POSIX_EXTENDED (_RE_SYNTAX_POSIX_COMMON | RE_CONTEXT_INDEP_ANCHORS | RE_CONTEXT_INDEP_OPS | RE_NO_BK_BRACES | RE_NO_BK_PARENS | RE_NO_BK_VBAR | RE_CONTEXT_INVALID_OPS | RE_UNMATCHED_RIGHT_PAREN_ORD)
#define _GLIBCXX_HAVE_SETENV 1
#define HAVE___CXA_DEMANGLE 1
#define SEEK_DATA 3
#define THORN_IS_CarpetLib 1
#define _IO_BOOLALPHA 0200000
#define _MM_GET_DENORMALS_ZERO_MODE() (_mm_getcsr() & _MM_DENORMALS_ZERO_MASK)
#define _GLIBCXX_PACKAGE_URL ""
#define _bswap64(a) __bswapq(a)
#define __FDS_BITS(set) ((set)->fds_bits)
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CLONE_PARENT_SETTID 0x00100000
#define MPI_ERR_LASTCODE 0x3fffffff
#define INITIALISE_CARPETLIB_PUBLIC_C2F 
#define _CCTK_MISC_H_ 
#define k8nmadd(x,y,z) (k8sub(k8neg(z),k8mul(x,y)))
#define _GLIBCXX_ATOMIC_BUILTINS 1
#define CCTK_SIGNBIT CCTK_CXX_SIGNBIT
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define SCOPE_PRIVATE 903
#define CCTK_FPCLASSIFY CCTK_CXX_FPCLASSIFY
#define EIDRM 43
#define MPIR_CXX_COMPLEX 0x4c000834
#define klog k8log
#define _mm512_mask_rsqrt28_pd(W,U,A) _mm512_mask_rsqrt28_round_pd(W, U, A, _MM_FROUND_CUR_DIRECTION)
#define _mm512_mask_rsqrt28_ps(W,U,A) _mm512_mask_rsqrt28_round_ps(W, U, A, _MM_FROUND_CUR_DIRECTION)
#define X_TLOSS 1.41484755040568800000e+16
#define __CORRECT_ISO_CPP_WCHAR_H_PROTO 
#define CCTK_LOOP4STR_NORMAL(name,i,j,k,l,ni,nj,nk,nl,cctki0_idir_,cctki0_jdir_,cctki0_kdir_,cctki0_ldir_,cctki0_imin_,cctki0_jmin_,cctki0_kmin_,cctki0_lmin_,cctki0_imax_,cctki0_jmax_,cctki0_kmax_,cctki0_lmax_,cctki0_iash_,cctki0_jash_,cctki0_kash_,cctki0_lash_,imin,imax,cctki0_istr_) do { typedef int cctki0_loop4_normal_ ##name; const int cctki0_idir = (cctki0_idir_); const int cctki0_jdir = (cctki0_jdir_); const int cctki0_kdir = (cctki0_kdir_); const int cctki0_ldir = (cctki0_ldir_); const int cctki0_imin = (cctki0_imin_); const int cctki0_jmin = (cctki0_jmin_); const int cctki0_kmin = (cctki0_kmin_); const int cctki0_lmin = (cctki0_lmin_); const int cctki0_imax = (cctki0_imax_); const int cctki0_jmax = (cctki0_jmax_); const int cctki0_kmax = (cctki0_kmax_); const int cctki0_lmax = (cctki0_lmax_); const int cctki0_iash CCTK_ATTRIBUTE_UNUSED = (cctki0_iash_); const int cctki0_jash CCTK_ATTRIBUTE_UNUSED = (cctki0_jash_); const int cctki0_kash CCTK_ATTRIBUTE_UNUSED = (cctki0_kash_); const int cctki0_lash CCTK_ATTRIBUTE_UNUSED = (cctki0_lash_); const int cctki0_istr = (cctki0_istr_); assert(cctki0_istr>0 && (cctki0_istr & (cctki0_istr-1)) == 0); const int imin CCTK_ATTRIBUTE_UNUSED = cctki0_imin; const int imax CCTK_ATTRIBUTE_UNUSED = cctki0_imax; CCTK_PRAGMA_OMP_FOR_COLLAPSE_3 for (int l=cctki0_lmin; l<cctki0_lmax; ++l) { for (int k=cctki0_kmin; k<cctki0_kmax; ++k) { for (int j=cctki0_jmin; j<cctki0_jmax; ++j) { const int cctki0_ioff = (cctki0_imin+cctki0_iash*(j+cctki0_jash*(k+cctki0_kash*(l)))) & (cctki0_istr-1); for (int i=cctki0_imin-cctki0_ioff; i<cctki0_imax; i+=cctki0_istr) { const int ni CCTK_ATTRIBUTE_UNUSED = cctki0_idir<0 ? i+1 : cctki0_idir==0 ? 0 : cctki0_imax-i; const int nj CCTK_ATTRIBUTE_UNUSED = cctki0_jdir<0 ? j+1 : cctki0_jdir==0 ? 0 : cctki0_jmax-j; const int nk CCTK_ATTRIBUTE_UNUSED = cctki0_kdir<0 ? k+1 : cctki0_kdir==0 ? 0 : cctki0_kmax-k; const int nl CCTK_ATTRIBUTE_UNUSED = cctki0_ldir<0 ? l+1 : cctki0_ldir==0 ? 0 : cctki0_lmax-l; {
#define __ASSERT_FUNCTION __PRETTY_FUNCTION__
#define CCTK_LOOP2STR_BOUNDARIES(name,cctki2_cctkGH_,i,j,ni,nj,cctki2_iblo_,cctki2_jblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop2_boundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_BOUNDARIES can only be used in 2 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_),(cctki2_jblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_),(cctki2_jbhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxlo_), (cctki2_jbboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0],cctki2_cctkGH->cctk_lsh[1] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_jdir=-1; cctki2_jdir<=+1; ++cctki2_jdir) { for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0) || (cctki2_jdir<0 ? cctki2_bbox[2] : 0) || (cctki2_jdir>0 ? cctki2_bbox[3] : 0); if (cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], cctki2_jdir<0 ? 0 : cctki2_jdir==0 ? cctki2_blo[1] : cctki2_lsh[1] - cctki2_bhi[1], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], cctki2_jdir<0 ? cctki2_blo[1] : cctki2_jdir==0 ? cctki2_lsh[1] - cctki2_bhi[1] : cctki2_lsh[1], }; CCTK_LOOP2STR_NORMAL(name ##_boundaries, i,j, ni,nj, cctki2_idir,cctki2_jdir, cctki2_bmin[0],cctki2_bmin[1], cctki2_bmax[0],cctki2_bmax[1], cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], imin,imax, cctki2_istr) {
#define __glibcxx_requires_non_empty_range(_First,_Last) 
#define ADJ_NANO 0x2000
#define CLONE_CHILD_SETTID 0x01000000
#define _CCTK_GROUPSONGH_H_ 
#define __USE_POSIX2 1
#define CCTK_CmplxSqrt CCTK_Cmplx16Sqrt
#define _EXT_ALLOC_TRAITS_H 1
#define HAVE_CCTK_CXX_ATTRIBUTE_ALWAYS_INLINE 1
#define _MM_EXCEPT_DIV_ZERO 0x0004
#define _GLIBCXX_HAVE_ISWBLANK 1
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define k8div(x,y) (_mm_div_pd(x,y))
#define _CCTK_CONSTANTS_H_ 
#define CCTK_ENDLOOP3STR_ALL(name) } CCTK_ENDLOOP3STR(name ##_all); typedef cctki3_loop3_all_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define MPI_ERR_RANK 6
#define _OVERLOADABLE_FUNCTION(call,prefix,dummy_prefix,name) __OVERLOADABLE_FUNCTION(call, prefix, dummy_prefix, name)
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define HAVE_EXECINFO_H 1
#define CCTK_PROTECTED 502
#define OVERLOADABLE_INITIALISE(name) _OVERLOADABLE_INITIALISE(OVERLOADABLE_CALL, OVERLOADABLE_DUMMY_PREFIX, name)
#define MPI_ERR_BUFFER 1
#define __VERSION__ "5.1.1 20150618 (Red Hat 5.1.1-4)"
#define MPI_SEEK_SET 600
#define _CCTK_LOOP_H_ 
#define __UINT64_C(c) c ## UL
#define CCTK_LOOP3STR_BOUNDARIES(name,cctki2_cctkGH_,i,j,k,ni,nj,nk,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop3_boundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_BOUNDARIES can only be used in 3 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxlo_), (cctki2_jbboxhi_),(cctki2_kbboxlo_), (cctki2_kbboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0],cctki2_cctkGH->cctk_lsh[1],cctki2_cctkGH->cctk_lsh[2] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_kdir=-1; cctki2_kdir<=+1; ++cctki2_kdir) { for (int cctki2_jdir=-1; cctki2_jdir<=+1; ++cctki2_jdir) { for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0) || (cctki2_jdir<0 ? cctki2_bbox[2] : 0) || (cctki2_jdir>0 ? cctki2_bbox[3] : 0) || (cctki2_kdir<0 ? cctki2_bbox[4] : 0) || (cctki2_kdir>0 ? cctki2_bbox[5] : 0); if (cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], cctki2_jdir<0 ? 0 : cctki2_jdir==0 ? cctki2_blo[1] : cctki2_lsh[1] - cctki2_bhi[1], cctki2_kdir<0 ? 0 : cctki2_kdir==0 ? cctki2_blo[2] : cctki2_lsh[2] - cctki2_bhi[2], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], cctki2_jdir<0 ? cctki2_blo[1] : cctki2_jdir==0 ? cctki2_lsh[1] - cctki2_bhi[1] : cctki2_lsh[1], cctki2_kdir<0 ? cctki2_blo[2] : cctki2_kdir==0 ? cctki2_lsh[2] - cctki2_bhi[2] : cctki2_lsh[2], }; CCTK_LOOP3STR_NORMAL(name ##_boundaries, i,j,k, ni,nj,nk, cctki2_idir,cctki2_jdir,cctki2_kdir, cctki2_bmin[0],cctki2_bmin[1],cctki2_bmin[2], cctki2_bmax[0],cctki2_bmax[1],cctki2_bmax[2], cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], cctki2_cctkGH->cctk_ash[2], imin,imax, cctki2_istr) {
#define PRIVATE_CARPETIOASCII_STRUCT carpetioasciipriv_
#define CCTK_FCALL 
#define _SYS_CDEFS_H 1
#define _rotr(a,b) __rord((a), (b))
#define FP_SUBNORMAL 3
#define _GLIBCXX_HAVE_ENOSPC 1
#define MPI_2REAL ((MPI_Datatype)1275070497)
#define EBFONT 59
#define k4nmadd(x,y,z) (k4sub(k4neg(z),k4mul(x,y)))
#define _INITIALIZER_LIST 
#define CCTK_ENDLOOP4STR_INT(name) } CCTK_ENDLOOP4STR_INTERIOR(name ##_int); typedef cctki3_loop4_int_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _GLIBCXX_PACKAGE_BUGREPORT ""
#define _mm_rsqrt28_sd(A,B) __builtin_ia32_rsqrt28sd_round(B, A, _MM_FROUND_CUR_DIRECTION)
#define __INT_WCHAR_T_H 
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define DEFS_HH 
#define MPI_TYPE_DUP_FN ((MPI_Type_copy_attr_function*)MPI_DUP_FN)
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define _GLIBCXX_HAS_NESTED_TYPE(_NTYPE) template<typename _Tp, typename = __void_t<>> struct __has_ ##_NTYPE : false_type { }; template<typename _Tp> struct __has_ ##_NTYPE<_Tp, __void_t<typename _Tp::_NTYPE>> : true_type { };
#define ENOTSOCK 88
#define CCTK_ENDLOOP1_ALL(name) CCTK_ENDLOOP1STR_ALL(name)
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define _T_PTRDIFF_ 
#define WEOF (0xffffffffu)
#define MPI_CONGRUENT 1
#define ENOTDIR 20
#define _CCTK_REDUCTION_H_ 1
#define PRIVATE_CARPETREDUCE_STRUCT carpetreducepriv_
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define _AVX512ERINTRIN_H_INCLUDED 
#define MPI_ERR_NO_SUCH_FILE 37
#define _GLIBCXX_UTILITY 1
#define CCTK_DISTRIB_DEFAULT 302
#define PARAMETER_SENTENCE 703
#define MPI_MODE_RDONLY 2
#define EL3HLT 46
#define _SYS_SIZE_T_H 
#define RESTRICTED_DRIVER_STRUCT driverrest_
#define __DEC32_MAX_EXP__ 97
#define k8fmin(x,y) (_mm_min_pd(x,y))
#define vec4_store_nta(p,x) (_mm_stream_ps(&(p),x))
#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define CCTK_REAL_VEC CCTK_REAL8_VEC
#define __SIZE_T__ 
#define __stub_gtty 
#define MPI_ERR_INFO_NOKEY 31
#define __uint32_t_defined 
#define PASS_GROUPSIZE(group,dir) CCTKGROUPNUM_ ##group >= 0 ? CCTK_ArrayGroupSizeI(GH, dir, CCTKGROUPNUM_ ##group) : &_cctk_zero
#define _MM_FROUND_NINT (_MM_FROUND_TO_NEAREST_INT | _MM_FROUND_RAISE_EXC)
#define MPI_MAX_PROCESSOR_NAME 128
#define HAVE_CCTK_CXX_BUILTIN_EXPECT 1
#define LC_PAPER __LC_PAPER
#define _GLIBCXX_HAVE_TGMATH_H 1
#define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF
#define ONE_FORTSTRING_LEN(len1) size_t len1 = cctk_strlen1;
#define PRIVATE_TIME_STRUCT timepriv_
#define MPI_MODE_EXCL 64
#define __stub_sstk 
#define MPI_T_ERR_INVALID_SESSION 67
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { 0, 0, 0, 0, 0, 0, 0, 0, __PTHREAD_RWLOCK_ELISION_EXTRA, 0, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP } }
#define _GLIBCXX_DEQUE 1
#define _SIDD_MOST_SIGNIFICANT 0x40
#define __wur 
#define __cleanup_fct_attribute 
#define PASS_GROUPLEN(thorn,group) CCTKGROUPNUM_ ##group >= 0 ? CCTKi_GroupLengthAsPointer(#thorn "::" #group) : &_cctk_zero
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_RECURSIVE_NP, __PTHREAD_SPINS, { 0, 0 } } }
#define _mm512_maskz_exp2a23_ps(U,A) _mm512_maskz_exp2a23_round_ps(U, A, _MM_FROUND_CUR_DIRECTION)
#define __glibcxx_requires_partitioned_lower(_First,_Last,_Value) 
#define _STL_ALGOBASE_H 1
#define __off64_t_defined 
#define _GLIBCXX_NUM_CATEGORIES 6
#define _GLIBCXX_USE_C99_INTTYPES_TR1 1
#define __INT32_C(c) c
#define __DEC64_EPSILON__ 1E-15DD
#define __ORDER_PDP_ENDIAN__ 3412
#define CCTK_BUILTIN_ASSUME_ALIGNED __builtin_assume_aligned
#define MPICH_NAME 3
#define EL2HLT 51
#define CCTK_INFO(a) CCTK_Info(CCTK_THORNSTRING,(a))
#define CCTK_LOOP3_INTERIOR(name,cctki2_cctkGH_,i,j,k,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_) CCTK_LOOP3STR_INTERIOR(name, (cctki2_cctkGH_), i,j,k, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_), (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define MPICH_ATTR_TYPE_TAG(type) 
#define _IO_SHOWBASE 0200
#define BYTE_ORDER __BYTE_ORDER
#define MPICH_CALC_VERSION(MAJOR,MINOR,REVISION,TYPE,PATCH) (((MAJOR) * 10000000) + ((MINOR) * 100000) + ((REVISION) * 1000) + ((TYPE) * 100) + (PATCH))
#define __have_pthread_attr_t 1
#define _GLIBCXX_HAVE_LIMIT_DATA 1
#define CCTK_LOOP3STR_INTBND(name,cctki3_cctkGH_,i,j,k,ni,nj,nk,imin,imax,cctki3_istr_) do { typedef int cctki3_loop3_intbnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_INTBND can only be used in 3 dimensions"); } CCTK_INT cctki3_bndsize [6]; CCTK_INT cctki3_is_ghostbnd[6]; CCTK_INT cctki3_is_symbnd [6]; CCTK_INT cctki3_is_physbnd [6]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 6, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP3STR_INTBOUNDARIES(name ##_intbnd, cctki3_cctkGH, i,j,k, ni,nj,nk, cctki3_bndsize[0],cctki3_bndsize[2],cctki3_bndsize[4], cctki3_bndsize[1],cctki3_bndsize[3],cctki3_bndsize[5], cctki3_is_physbnd[0],cctki3_is_physbnd[2],cctki3_is_physbnd[4], cctki3_is_physbnd[1],cctki3_is_physbnd[3],cctki3_is_physbnd[5], imin,imax, (cctki3_istr_)) {
#define OVERLOADABLE_OVERLOADPROTO(name) _OVERLOADABLE_OVERLOADPROTO(OVERLOADABLE_CALL,OVERLOADABLE_PREFIX, OVERLOADABLE_DUMMY_PREFIX, name)
#define CLONE_NEWPID 0x20000000
#define htole32(x) (x)
#define CCTK_ENDLOOP3_INT(name) CCTK_ENDLOOP3STR_INT(name)
#define __SYSCALL_SLONG_TYPE __SLONGWORD_TYPE
#define EINVAL 22
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define MPI_T_ERR_INVALID_HANDLE 64
#define MPI_COMM_NULL_COPY_FN ((MPI_Comm_copy_attr_function*)0)
#define HAVE_MPI_OFFSET 
#define kmadd k8madd
#define RAND_MAX 2147483647
#define _SIZET_ 
#define CCTK_ENDLOOP4_BND(name) CCTK_ENDLOOP4STR_BND(name)
#define _CHAR_TRAITS_H 1
#define _GLIBCXX_HAVE_STRING_H 1
#define _MM_SET_DENORMALS_ZERO_MODE(mode) _mm_setcsr ((_mm_getcsr () & ~_MM_DENORMALS_ZERO_MASK) | (mode))
#define EKEYREJECTED 129
#define _BSD_SIZE_T_ 
#define vec4_elt(x,d) ({ CCTK_REAL4_VEC const xelt=(x); CCTK_REAL4 aelt; switch (d) { case 0: aelt=vec4_elt0(xelt); break; case 1: aelt=vec4_elt1(xelt); break; case 2: aelt=vec4_elt2(xelt); break; case 3: aelt=vec4_elt3(xelt); break; } aelt; })
#define __SIZE_TYPE__ long unsigned int
#define M_2_SQRTPI 1.12837916709551257390
#define __UINT64_MAX__ 0xffffffffffffffffUL
#define CCTK_FREE(p) CCTKi_Free(p)
#define _GLIBCXX_HAVE_LIMIT_AS 1
#define CCTK_ENDLOOP4STR_BND(name) } CCTK_ENDLOOP4STR_BOUNDARIES(name ##_bnd); typedef cctki3_loop4_bnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define MPI_MINLOC (MPI_Op)(0x5800000b)
#define LC_NUMERIC __LC_NUMERIC
#define k4exp(x) ({ CCTK_REAL4_VEC const xexp=(x); vec4_set(exp(vec4_elt0(xexp)), exp(vec4_elt1(xexp)), exp(vec4_elt2(xexp)), exp(vec4_elt3(xexp))); })
#define _IOS_NOCREATE 32
#define STA_INS 0x0010
#define STA_MODE 0x4000
#define CCTK_CmplxConjg CCTK_Cmplx16Conjg
#define HAVE_SCHED_GETAFFINITY 1
#define _GLIBCXX_DEBUG_MACRO_SWITCH_H 1
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_ERRORCHECK_NP, __PTHREAD_SPINS, { 0, 0 } } }
#define MPI_INCLUDED 
#define ADJ_OFFSET_SS_READ 0xa001
#define __warnattr(msg) __attribute__((__warning__ (msg)))
#define CCTK_PARAMETER__CARPETLIB__use_loopcontrol_in_operators PRIVATE_CARPETLIB_STRUCT.use_loopcontrol_in_operators
#define M_LN2 0.69314718055994530942
#define _IO_funlockfile(_fp) 
#define _LZCNTINTRIN_H_INCLUDED 
#define CCTK_ATTRIBUTE_UNUSED __attribute__((__unused__))
#define CCTK_ERROR(b) CCTK_Error(__LINE__,__FILE__,CCTK_THORNSTRING,b)
#define k4sqrt(x) (_mm_sqrt_ps(x))
#define _LOCALE_CLASSES_H 1
#define MPI_ERR_ACCESS 20
#define _T_SIZE 
#define vec_set1 vec8_set1
#define CCTK_VARIABLE_BYTE 110
#define INTPTR_MAX (9223372036854775807L)
#define SCHED_RESET_ON_FORK 0x40000000
#define __UINTMAX_C(c) c ## UL
#define CCTK_ERROR_INTERP_POINT_X_RANGE CCTK_ERROR_INTERP_POINT_OUTSIDE
#define minor(dev) gnu_dev_minor (dev)
#define _POSIX_C_SOURCE 200809L
#define CCTK_ENDLOOP3_NORMAL(name) CCTK_ENDLOOP3STR_NORMAL(name)
#define PRIVATE_IOASCII_STRUCT ioasciipriv_
#define _LOCALE_CLASSES_TCC 1
#define forall(var,expr) for (var : expr)
#define __SSE_MATH__ 1
#define _GLIBCXX_RANGE_ACCESS_H 1
#define RE_SYNTAX_POSIX_EGREP (RE_SYNTAX_EGREP | RE_INTERVALS | RE_NO_BK_BRACES | RE_INVALID_INTERVAL_ORD)
#define _EXCEPTION_PTR_H 
#define ENAVAIL 119
#define __uid_t_defined 
#define __k8 1
#define PRIVATE_CARPETEVOLUTIONMASK_STRUCT carpetevolutionmaskpriv_
#define __LDBL_REDIR(name,proto) name proto
#define _GLIBCXX_SSTREAM 1
#define MPI_DATATYPE_NULL ((MPI_Datatype)0x0c000000)
#define _GLIBCXX_CXX_CONFIG_H 1
#define __GTHREAD_COND_INIT PTHREAD_COND_INITIALIZER
#define _G_HAVE_MREMAP 1
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define MPI_LOGICAL ((MPI_Datatype)1275069469)
#define WCHAR_MIN __WCHAR_MIN
#define __blksize_t_defined 
#define RE_NO_EMPTY_RANGES (RE_NO_BK_VBAR << 1)
#define CCTK_PARAMETER__IO__recover RESTRICTED_IO_STRUCT.recover
#define _CMP_UNORD_S 0x13
#define __cpp_constexpr 200704
#define _SIDD_CMP_EQUAL_ORDERED 0x0c
#define MPI_TYPECLASS_REAL 1
#define THREE_FORTSTRINGS_CREATE(arg1,arg2,arg3) char *arg1 = Util_NullTerminateString(cctk_str1,cctk_strlen1); char *arg2 = Util_NullTerminateString(cctk_str2,cctk_strlen2); char *arg3 = Util_NullTerminateString(cctk_str3,cctk_strlen3);
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __bswap_constant_16(x) ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define MPI_LOCK_EXCLUSIVE 234
#define __WCHAR_MAX __WCHAR_MAX__
#define __INT8_MAX__ 0x7f
#define _ANSI_STDDEF_H 
#define __va_arg_pack() __builtin_va_arg_pack ()
#define _MATH_H_MATHDEF 1
#define CCTK_BUILD_VENDOR "unknown"
#define __bswap_constant_32(x) ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >> 8) | (((x) & 0x0000ff00) << 8) | (((x) & 0x000000ff) << 24))
#define _IO_FLAGS2_NOTCANCEL 2
#define _MM_CMPINT_EQ 0x0
#define _XOPEN_SOURCE_EXTENDED 1
#define _VECTOR_TCC 1
#define _GLIBCXX_END_NAMESPACE_VERSION 
#define HUGE_VALL (__builtin_huge_vall())
#define MPI_ERR_RMA_ATTACH 56
#define INT8_C(c) c
#define HAVE_BACKTRACE 1
#define CCTK_PARAMWARN(a) CCTK_ParamWarn(CCTK_THORNSTRING,(a))
#define CCTK_ENDLOOP2STR_BOUNDARIES(name) } CCTK_ENDLOOP2STR_NORMAL(name ##_boundaries); } } } typedef cctki2_loop2_boundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define __attribute_artificial__ __attribute__ ((__artificial__))
#define __USE_MISC 1
#define _BASIC_STRING_H 1
#define EBUSY 16
#define __UWORD_TYPE unsigned long int
#define _MM_CMPINT_GE 0x5
#define MPI_MIN (MPI_Op)(0x58000002)
#define CCTK_CXX_ISINF std::isinf
#define _MM_CMPINT_GT 0x6
#define __gthrw2(name,name2,type) static __typeof(type) name __attribute__ ((__weakref__(#name2))); __gthrw_pragma(weak type)
#define CCTK_ENDLOOP2_INT(name) CCTK_ENDLOOP2STR_INT(name)
#define __bswap_constant_64(x) (__extension__ ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56)))
#define __PTHREAD_RWLOCK_INT_FLAGS_SHARED 1
#define _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) 
#define __FSBLKCNT_T_TYPE __SYSCALL_ULONG_TYPE
#define _MM_ROUND_DOWN 0x2000
#define RESTRICTED_CARPETLIB_STRUCT carpetlibrest_
#define MPI_T_ERR_OUT_OF_SESSIONS 66
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define __INT_FAST16_MAX__ 0x7fffffffffffffffL
#define __timer_t_defined 1
#define CCTK_PARAMETER__IO__abort_on_io_errors RESTRICTED_IO_STRUCT.abort_on_io_errors
#define __WCLONE 0x80000000
#define _GLIBCXX14_CONSTEXPR 
#define CCTK_ENDLOOP3_BND(name) CCTK_ENDLOOP3STR_BND(name)
#define _GLIBCXX_END_NAMESPACE_CXX11 
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _GLIBCXX_ICONV_CONST 
#define _AVX512VBMIVLINTRIN_H_INCLUDED 
#define RESTRICTED_DISSIPATION_STRUCT dissipationrest_
#define _GLIBCXX_OSTREAM 1
#define CARPETLIB_C2F_PROTO _CCTK_C2F_PROTO
#define _IO_off_t __off_t
#define __WCHAR_MIN __WCHAR_MIN__
#define EROFS 30
#define CCTK_LOOP2STR(name,i,j,cctki1_imin_,cctki1_jmin_,cctki1_imax_,cctki1_jmax_,cctki1_iash_,cctki1_jash_,imin,imax,cctki1_istr_) CCTK_LOOP2STR_NORMAL(name, i,j, cctki1_ni,cctki1_nj, 0,0, (cctki1_imin_),(cctki1_jmin_), (cctki1_imax_),(cctki1_jmax_), (cctki1_iash_),(cctki1_jash_), imin,imax, (cctki1_istr_))
#define _CMP_EQ_OQ 0x00
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define ADJ_FREQUENCY 0x0002
#define CCTK_COMPLEX CCTK_COMPLEX16
#define HAVE_GETOPT_LONG_ONLY 1
#define _MM_EXCEPT_INEXACT 0x0020
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define _MM_CMPINT_LE 0x2
#define INT32_C(c) c
#define FP_ZERO 2
#define _GLIBCXX_HAVE_FLOORF 1
#define _MM_CMPINT_LT 0x1
#define _GLIBCXX_HAVE_FLOORL 1
#define _GLIBCXX_CWCTYPE 1
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __WCHAR_T__ 
#define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL
#define ELIBACC 79
#define _USES_ALLOCATOR_H 1
#define REDUCTION_ARRAY_OPERATOR_REGISTER_ARGLIST const cGH *arg_GH, int arg_proc, int arg_nDims, const int arg_dims [], int arg_nArrays, const void *const arg_inArrays [], int arg_inType, int arg_nOutVals, void *arg_outVals, int arg_outType
#define _MM_CMPINT_NE 0x4
#define MPI_PROC_NULL (-1)
#define CCTK_PARAMETER__IO__out_criterion RESTRICTED_IO_STRUCT.out_criterion
#define _SIGSET_H_types 1
#define CCTK_STEERABLE_RECOVER 202
#define CCTK_ENDLOOP2STR_ALL(name) } CCTK_ENDLOOP2STR(name ##_all); typedef cctki3_loop2_all_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define __OVERLOADABLE_INITIALISE(call,dummy_prefix,name) call ##Overload ##name(dummy_prefix ##name);
#define _MEMORYFWD_H 1
#define WIFSTOPPED(status) __WIFSTOPPED (__WAIT_INT (status))
#define CCTK_LOOP2STR_INTERIOR(name,cctki2_cctkGH_,i,j,cctki2_iblo_,cctki2_jblo_,cctki2_ibhi_,cctki2_jbhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop2_interior_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_INTERIOR can only be used in 2 dimensions"); } CCTK_LOOP2STR(name ##_interior, i,j, (cctki2_iblo_),(cctki2_jblo_), cctki2_cctkGH->cctk_lsh[0]-(cctki2_ibhi_), cctki2_cctkGH->cctk_lsh[1]-(cctki2_jbhi_), cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], imin,imax, (cctki2_istr_)) {
#define _SIDD_UWORD_OPS 0x01
#define CCTK_ENDLOOP3_BOUNDARIES(name) CCTK_ENDLOOP3STR_BOUNDARIES(name)
#define __glibcxx_signed_b(T,B) ((T)(-1) < 0)
#define CCTK_RegisterGridArrayReductionOperator(a) CCTKi_RegisterGridArrayReductionOperator(CCTK_THORNSTRING,a)
#define DECLARE_OPERATOR_1_RET(fn,op,R) template <typename T, int D> inline vect<R, D> fn(const vect<T, D> &a) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = op a[d]; return r; } template <typename T, int D> inline vect<R, D> fn(const T &a) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = op a; return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const vect<vect<T, D>, E> &a) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = op a[e]; return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const T &a) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = op a; return r; }
#define MPI_MAX_PORT_NAME 256
#define _VA_LIST_DEFINED 
#define MPI_COMM_NULL ((MPI_Comm)0x04000000)
#define MPI_ERR_UNKNOWN 13
#define __BLKSIZE_T_TYPE __SYSCALL_SLONG_TYPE
#define _CMP_EQ_UQ 0x08
#define _CMP_EQ_US 0x18
#define __INT_LEAST16_MAX__ 0x7fff
#define CCTK_PARAMETER_RELAXED 802
#define pthread_cleanup_pop(execute) __clframe.__setdoit (execute); } while (0)
#define __DEC64_MANT_DIG__ 16
#define MPI_UNDEFINED (-32766)
#define __INT64_MAX__ 0x7fffffffffffffffL
#define EDEADLK 35
#define HAVE_CAPABILITY_CycleClock 1
#define CCTK_PARAMETER__IO__out_yline_x RESTRICTED_IO_STRUCT.out_yline_x
#define CCTK_PARAMETER__IO__out_yline_z RESTRICTED_IO_STRUCT.out_yline_z
#define vec4_storeu(p,x) (_mm_storeu_ps(&(p),x))
#define __INT_LEAST64_TYPE__ long int
#define htole16(x) (x)
#define CCTK_ENDLOOP3STR_INT(name) } CCTK_ENDLOOP3STR_INTERIOR(name ##_int); typedef cctki3_loop3_int_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _GLIBCXX_SYMVER_GNU 1
#define HAVE_ISFINITE 1
#define __ATOMIC_HLE_RELEASE 131072
#define EACCES 13
#define CCTK_PARAMETER__IO__out_unchunked RESTRICTED_IO_STRUCT.out_unchunked
#define vec_store vec8_store
#define CCTK_LOOP2STR_NORMAL(name,i,j,ni,nj,cctki0_idir_,cctki0_jdir_,cctki0_imin_,cctki0_jmin_,cctki0_imax_,cctki0_jmax_,cctki0_iash_,cctki0_jash_,imin,imax,cctki0_istr_) do { typedef int cctki0_loop2_normal_ ##name; const int cctki0_idir = (cctki0_idir_); const int cctki0_jdir = (cctki0_jdir_); const int cctki0_imin = (cctki0_imin_); const int cctki0_jmin = (cctki0_jmin_); const int cctki0_imax = (cctki0_imax_); const int cctki0_jmax = (cctki0_jmax_); const int cctki0_iash CCTK_ATTRIBUTE_UNUSED = (cctki0_iash_); const int cctki0_jash CCTK_ATTRIBUTE_UNUSED = (cctki0_jash_); const int cctki0_istr = (cctki0_istr_); assert(cctki0_istr>0 && (cctki0_istr & (cctki0_istr-1)) == 0); const int imin CCTK_ATTRIBUTE_UNUSED = cctki0_imin; const int imax CCTK_ATTRIBUTE_UNUSED = cctki0_imax; CCTK_PRAGMA_OMP_FOR_COLLAPSE_1 for (int j=cctki0_jmin; j<cctki0_jmax; ++j) { const int cctki0_ioff = (cctki0_imin+cctki0_iash*(j)) & (cctki0_istr-1); for (int i=cctki0_imin-cctki0_ioff; i<cctki0_imax; i+=cctki0_istr) { const int ni CCTK_ATTRIBUTE_UNUSED = cctki0_idir<0 ? i+1 : cctki0_idir==0 ? 0 : cctki0_imax-i; const int nj CCTK_ATTRIBUTE_UNUSED = cctki0_jdir<0 ? j+1 : cctki0_jdir==0 ? 0 : cctki0_jmax-j; {
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define MPI_MODE_NOSUCCEED 16384
#define CCTK_REAL_PRECISION_8 1
#define _OLD_STDIO_MAGIC 0xFABC0000
#define HAVE_CCTK_COPYSIGN HAVE_CCTK_CXX_COPYSIGN
#define CSIGNAL 0x000000ff
#define _GLIBCXX_NUM_CXX11_FACETS 16
#define CCTK_CoordRegisterSystem(a,b) CCTKi_CoordRegisterSystem (a,CCTK_THORNSTRING,b)
#define MPI_ERR_SERVICE 41
#define CCTK_ENDLOOP4STR_NORMAL(name) } } } } } typedef cctki0_loop4_normal_ ##name cctki0_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define k8log(x) ({ CCTK_REAL8_VEC const xlog=(x); vec8_set(log(vec8_elt0(xlog)), log(vec8_elt1(xlog))); })
#define ENXIO 6
#define _GLIBCXX_HAVE_ISNAN 1
#define __cpp_range_based_for 200907
#define CCTK_ENDLOOP2_INTBOUNDARIES(name) CCTK_ENDLOOP2STR_INTBOUNDARIES(name)
#define kfnabs k8fnabs
#define HAVE_CCTK_ISNORMAL HAVE_CCTK_CXX_ISNORMAL
#define CCTK_COMPLEX_PRECISION 16
#define ____FILE_defined 1
#define kpos k8pos
#define _IOLBF 1
#define htole64(x) (x)
#define CCTK_ENDLOOP2STR_INTBOUNDARIES(name) } CCTK_ENDLOOP2STR_NORMAL(name ##_intboundaries); } } } typedef cctki2_loop2_intboundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _IO_UPPERCASE 01000
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define WIFSIGNALED(status) __WIFSIGNALED (__WAIT_INT (status))
#define MOD_ESTERROR ADJ_ESTERROR
#define CCTK_ENDLOOP3_INTERIOR(name) CCTK_ENDLOOP3STR_INTERIOR(name)
#define _GLIBCXX_HAVE_LDEXPF 1
#define required_argument 1
#define _XLOCALE_H 1
#define THREE_FORTSTRINGS_ARGS char *cctk_str1, char *cctk_str2, char *cctk_str3, unsigned int cctk_strlen1, unsigned int cctk_strlen2, unsigned int cctk_strlen3
#define CCTK_ENDLOOP1_INT(name) CCTK_ENDLOOP1STR_INT(name)
#define vec_store_nta vec8_store_nta
#define RESTRICTED_METHODOFLINES_STRUCT methodoflinesrest_
#define __SSE2__ 1
#define k4pos(x) (x)
#define vec4_loadu_maybe3(off1,off2,off3,p) (vec4_loadu(p))
#define MPI_DISTRIBUTE_BLOCK 121
#define CCTK_CXX_ISNORMAL std::isnormal
#define MPI_COMPLEX32 ((MPI_Datatype)0x4c00202c)
#define __EXCEPTIONS 1
#define __UINT8_TYPE__ unsigned char
#define __WORDSIZE 64
#define CCTK_CmplxSin CCTK_Cmplx16Sin
#define k4abs_mask (k4abs_mask_union.v)
#define CCTK_ENDLOOP2STR_NORMAL(name) } } } typedef cctki0_loop2_normal_ ##name cctki0_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define PDP_ENDIAN __PDP_ENDIAN
#define CCTK_ENDLOOP2_BND(name) CCTK_ENDLOOP2STR_BND(name)
#define PRIVATE_CARPETMASK_STRUCT carpetmaskpriv_
#define LC_TELEPHONE __LC_TELEPHONE
#define CCTK_PARAMETER__IO__parfile_name RESTRICTED_IO_STRUCT.parfile_name
#define _GLIBCXX_NUMERIC_LIMITS 1
#define k8msub(x,y,z) (k8sub(k8mul(x,y),z))
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _RANDOM_TCC 1
#define __DBL_HAS_QUIET_NAN__ 1
#define HAVE_NETINET_IN_H 1
#define _CPP_CPPCONFIG_WRAPPER 1
#define _GLIBCXX_TUPLE 1
#define PRIVATE_COORDBASE_STRUCT coordbasepriv_
#define _CMP_NLT_UQ 0x15
#define _CMP_NLT_US 0x05
#define MPIO_REQUEST_DEFINED 
#define MPI_MAX_INFO_VAL 1024
#define vec4_elt0(x) (_mm_cvtss_f32(x))
#define __code_model_small__ 1
#define __GXX_MERGED_TYPEINFO_NAMES 0
#define CCTK_PARAMETER__IO__out_xzplane_yi RESTRICTED_IO_STRUCT.out_xzplane_yi
#define SCOPE_ANY 905
#define __RLIM_T_TYPE __SYSCALL_ULONG_TYPE
#define _BACKWARD_AUTO_PTR_H 1
#define le64toh(x) (x)
#define _ADXINTRIN_H_INCLUDED 
#define INTPTR_MIN (-9223372036854775807L-1)
#define PRIVATE_NANCHECKER_STRUCT nancheckerpriv_
#define HAVE_MKSTEMP 1
#define vec4_elt3(x) ({ CCTK_REAL4_VEC const xelt3=(x); vec4_elt0(_mm_shuffle_ps(xelt3,xelt3,_MM_SHUFFLE(3,2,1,0))); })
#define CCTK_STATIC_INLINE static inline
#define ESOCKTNOSUPPORT 94
#define __INTPTR_TYPE__ long int
#define kdiv k8div
#define __WCHAR_TYPE__ int
#define _IO_uid_t __uid_t
#define _GLIBCXX_PACKAGE_TARNAME "libstdc++"
#define OPERATOR_PROTOTYPES 
#define HAVE_CCTK_CXX_ISINF 1
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __HAVE_COLUMN 
#define HAVE_CCTK_ISINF HAVE_CCTK_CXX_ISINF
#define MPI_LONG_DOUBLE ((MPI_Datatype)0x4c00100c)
#define _GLIBCXX_IOSFWD 1
#define __DEC64_MIN_EXP__ (-382)
#define RE_HAT_LISTS_NOT_NEWLINE (RE_DOT_NOT_NULL << 1)
#define __stub_chflags 
#define vec4_store_nta_partial_lo(p,x,n) ({ switch (n) { case 3: (&(p))[2]=vec_elt2(p); case 2: _mm_storel_pi(&(p),x); break; case 1: (&(p))[0]=vec_elt0(p); } })
#define ROMIO_VERSION 126
#define EDOTDOT 73
#define __cpp_decltype 200707
#define __OVERLOADABLE_PROTOTYPE(prefix,dummy_prefix,name) extern RETURN_TYPE (*prefix ##name)(ARGUMENTS) ATTRIBUTES;
#define _GLIBCXX_USE_C99 1
#define MPIO_Wait MPI_Wait
#define _GLIBCXX_DEFAULT_ABI_TAG 
#define _GLIBCXX_ABI_TAG_CXX11 __attribute ((__abi_tag__ ("cxx11")))
#define __USE_POSIX 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffL
#define CLONE_NEWIPC 0x08000000
#define BUFSIZ _IO_BUFSIZ
#define CCTK_INT2_TYPE short int
#define _GLIBCXX_HAVE_EIDRM 1
#define __FLT_MAX_10_EXP__ 38
#define OPERATOR_PROTOTYPES_3D 
#define MPI_ERR_FILE_IN_USE 26
#define CCTK_LOOP3STR_NORMAL(name,i,j,k,ni,nj,nk,cctki0_idir_,cctki0_jdir_,cctki0_kdir_,cctki0_imin_,cctki0_jmin_,cctki0_kmin_,cctki0_imax_,cctki0_jmax_,cctki0_kmax_,cctki0_iash_,cctki0_jash_,cctki0_kash_,imin,imax,cctki0_istr_) do { typedef int cctki0_loop3_normal_ ##name; const int cctki0_idir = (cctki0_idir_); const int cctki0_jdir = (cctki0_jdir_); const int cctki0_kdir = (cctki0_kdir_); const int cctki0_imin = (cctki0_imin_); const int cctki0_jmin = (cctki0_jmin_); const int cctki0_kmin = (cctki0_kmin_); const int cctki0_imax = (cctki0_imax_); const int cctki0_jmax = (cctki0_jmax_); const int cctki0_kmax = (cctki0_kmax_); const int cctki0_iash CCTK_ATTRIBUTE_UNUSED = (cctki0_iash_); const int cctki0_jash CCTK_ATTRIBUTE_UNUSED = (cctki0_jash_); const int cctki0_kash CCTK_ATTRIBUTE_UNUSED = (cctki0_kash_); const int cctki0_istr = (cctki0_istr_); assert(cctki0_istr>0 && (cctki0_istr & (cctki0_istr-1)) == 0); const int imin CCTK_ATTRIBUTE_UNUSED = cctki0_imin; const int imax CCTK_ATTRIBUTE_UNUSED = cctki0_imax; CCTK_PRAGMA_OMP_FOR_COLLAPSE_2 for (int k=cctki0_kmin; k<cctki0_kmax; ++k) { for (int j=cctki0_jmin; j<cctki0_jmax; ++j) { const int cctki0_ioff = (cctki0_imin+cctki0_iash*(j+cctki0_jash*(k))) & (cctki0_istr-1); for (int i=cctki0_imin-cctki0_ioff; i<cctki0_imax; i+=cctki0_istr) { const int ni CCTK_ATTRIBUTE_UNUSED = cctki0_idir<0 ? i+1 : cctki0_idir==0 ? 0 : cctki0_imax-i; const int nj CCTK_ATTRIBUTE_UNUSED = cctki0_jdir<0 ? j+1 : cctki0_jdir==0 ? 0 : cctki0_jmax-j; const int nk CCTK_ATTRIBUTE_UNUSED = cctki0_kdir<0 ? k+1 : cctki0_kdir==0 ? 0 : cctki0_kmax-k; {
#define _OSTREAM_TCC 1
#define _IO_size_t size_t
#define _MM_FROUND_FLOOR (_MM_FROUND_TO_NEG_INF | _MM_FROUND_RAISE_EXC)
#define CLONE_UNTRACED 0x00800000
#define CCTK_VARIABLE_REAL 130
#define _IO_putc_unlocked(_ch,_fp) (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define WNOWAIT 0x01000000
#define ELIBSCN 81
#define CCTK_PARAMETER__IO__out3D_septimefiles RESTRICTED_IO_STRUCT.out3D_septimefiles
#define CCTK_PARAMETER__IO__out_yzplane_xi RESTRICTED_IO_STRUCT.out_yzplane_xi
#define _GLIBCXX_HAVE_STRTOF 1
#define MPI_THREAD_MULTIPLE 3
#define __amd64__ 1
#define __glibcxx_requires_partitioned_upper_pred(_First,_Last,_Value,_Pred) 
#define __amd64 1
#define RE_BK_PLUS_QM (RE_BACKSLASH_ESCAPE_IN_LISTS << 1)
#define __LC_COLLATE 3
#define _GLIBCXX_HAVE_CEILL 1
#define CCTK_CmplxReal CCTK_Cmplx16Real
#define CCTK_CmplxSub CCTK_Cmplx16Sub
#define M_LN2l 0.693147180559945309417232121458176568L
#define __S16_TYPE short int
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define CCTK_ENDLOOP3STR_BND(name) } CCTK_ENDLOOP3STR_BOUNDARIES(name ##_bnd); typedef cctki3_loop3_bnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define EPROTONOSUPPORT 93
#define MPI_ERR_WIN 45
#define ADJ_TICK 0x4000
#define knmsub k8nmsub
#define M_SQRT2 1.41421356237309504880
#define kmul k8mul
#define CCTK_PARAMETER__CARPETLIB__fence_width PRIVATE_CARPETLIB_STRUCT.fence_width
#define MPI_BSEND_OVERHEAD 96
#define ASSERT_BBOX(x) 
#define _CMP_UNORD_Q 0x03
#define _GLIBCXX_HAVE_STRXFRM_L 1
#define __gid_t_defined 
#define LC_GLOBAL_LOCALE ((__locale_t) -1L)
#define MPI_BAND (MPI_Op)(0x58000006)
#define CCTK_PARAMETER__IO__require_empty_output_directory RESTRICTED_IO_STRUCT.require_empty_output_directory
#define _GLIBCXX_HAVE_STDINT_H 1
#define _GLIBCXX_HAVE_ENOTRECOVERABLE 1
#define RE_ICASE (RE_INVALID_INTERVAL_ORD << 1)
#define __ptr_t void *
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define __TIMER_T_TYPE void *
#define CCTK_MEMBER_ATTRIBUTE_CONST 
#define _GLIBCXX_HAVE_FENV_H 1
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffL
#define _GLIBCXX_DEBUG_PEDASSERT(_Condition) 
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define CCTK_ENDLOOP2_NORMAL(name) CCTK_ENDLOOP2STR_NORMAL(name)
#define MPI_LONG_LONG MPI_LONG_LONG_INT
#define CCTK_LOOP1STR(name,i,cctki1_imin_,cctki1_imax_,cctki1_iash_,imin,imax,cctki1_istr_) CCTK_LOOP1STR_NORMAL(name, i, cctki1_ni, 0, (cctki1_imin_), (cctki1_imax_), (cctki1_iash_), imin,imax, (cctki1_istr_))
#define LC_CTYPE __LC_CTYPE
#define __UINT_LEAST32_TYPE__ unsigned int
#define __sigset_t_defined 
#define __need_time_t 
#define k4fmax(x,y) (_mm_max_ps(x,y))
#define _rdtscp(a) __rdtscp(a)
#define HAVE_ARPA_INET_H 1
#define MPI_ROOT (-3)
#define CCTK_PARAMETER__CARPETLIB__check_bboxes PRIVATE_CARPETLIB_STRUCT.check_bboxes
#define _GLIBCXX_HAVE_EXPF 1
#define _GLIBCXX_HAVE_EXPL 1
#define _MM_CMPINT_NLT 0x5
#define _STL_VECTOR_H 1
#define __BIT_TYPES_DEFINED__ 1
#define MPI_INT ((MPI_Datatype)0x4c000405)
#define __USE_FORTIFY_LEVEL 0
#define CCTK_LOOP1STR_INTBOUNDARIES(name,cctki2_cctkGH_,i,ni,cctki2_iblo_,cctki2_ibhi_,cctki2_ibboxlo_,cctki2_ibboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop1_intboundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_INTBOUNDARIES can only be used in 1 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0); const int cctki2_all_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 1) && (cctki2_idir>0 ? cctki2_bbox[1] : 1); if (cctki2_all_bbox && cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], }; CCTK_LOOP1STR_NORMAL(name ##_intboundaries, i, ni, cctki2_idir, cctki2_bmin[0], cctki2_bmax[0], cctki2_cctkGH->cctk_ash[0], imin,imax, cctki2_istr) {
#define stdout stdout
#define _AVX512VLBWINTRIN_H_INCLUDED 
#define _XSAVESINTRIN_H_INCLUDED 
#define _CCTK_INTERP_H_ 
#define __INT_LEAST8_MAX__ 0x7f
#define DECLARE_RESTRICTED_CARPETLIB_STRUCT_PARAMS CCTK_DECLARE_INIT (CCTK_INT const, deadbeef, CCTK_PARAMETER__CARPETLIB__deadbeef); CCTK_DECLARE_INIT (CCTK_INT const, poison_value, CCTK_PARAMETER__CARPETLIB__poison_value); CCTK_DECLARE_INIT (CCTK_INT const, restriction_order_space, CCTK_PARAMETER__CARPETLIB__restriction_order_space); CCTK_DECLARE_INIT (CCTK_INT const, support_staggered_operators, CCTK_PARAMETER__CARPETLIB__support_staggered_operators); CCTK_DECLARE_INIT (CCTK_INT const, use_higher_order_restriction, CCTK_PARAMETER__CARPETLIB__use_higher_order_restriction);
#define ____mbstate_t_defined 1
#define ADJ_STATUS 0x0010
#define DECLARE_GLOBAL_PARAMETER_STRUCT_PARAMS 
#define VECTORS_H 
#define RESTRICTED_IO_STRUCT iorest_
#define MPI_ERR_INFO 28
#define _GLIBCXX_NUMERIC 1
#define HAVE_CCTK_CXX_ATTRIBUTE_UNUSED 1
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define PASS_CARPETLIB_PROTECTED_C2F(GH) 
#define MPI_REAL16 ((MPI_Datatype)0x4c00102b)
#define CCTK_INT8_TYPE long int
#define EMSGSIZE 90
#define MPIIMPL_HAVE_MPI_COMBINER_DUP 1
#define RESTRICTED_FUNWAVE_STRUCT funwaverest_
#define MPICH_ERR_LAST_CLASS 72
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define _CCTK_FLESH_H_ 
#define __UINT8_C(c) c
#define _XTESTINTRIN_H_INCLUDED 
#define _GLIBCXX_HAVE_CEILF 1
#define EFBIG 27
#define _MM_DENORMALS_ZERO_ON 0x0040
#define vec4_elt1(x) ({ CCTK_REAL4_VEC const xelt1=(x); vec4_elt0(_mm_shuffle_ps(xelt1,xelt1,_MM_SHUFFLE(1,0,3,2))); })
#define vec4_elt2(x) ({ CCTK_REAL4_VEC const xelt2=(x); vec4_elt0(_mm_unpackhi_ps(xelt2,xelt2)); })
#define MOD_MAXERROR ADJ_MAXERROR
#define __stub_stty 
#define CCTK_LOOP4STR_INTBND(name,cctki3_cctkGH_,i,j,k,l,ni,nj,nk,nl,imin,imax,cctki3_istr_) do { typedef int cctki3_loop4_intbnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_INTBND can only be used in 4 dimensions"); } CCTK_INT cctki3_bndsize [8]; CCTK_INT cctki3_is_ghostbnd[8]; CCTK_INT cctki3_is_symbnd [8]; CCTK_INT cctki3_is_physbnd [8]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 8, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP4STR_INTBOUNDARIES(name ##_intbnd, cctki3_cctkGH, i,j,k,l, ni,nj,nk,nl, cctki3_bndsize[0],cctki3_bndsize[2],cctki3_bndsize[4],cctki3_bndsize[6], cctki3_bndsize[1],cctki3_bndsize[3],cctki3_bndsize[5],cctki3_bndsize[7], cctki3_is_physbnd[0],cctki3_is_physbnd[2],cctki3_is_physbnd[4],cctki3_is_physbnd[6], cctki3_is_physbnd[1],cctki3_is_physbnd[3],cctki3_is_physbnd[5],cctki3_is_physbnd[7], imin,imax, (cctki3_istr_)) {
#define HAVE_CCTK_CXX_MEMBER_ATTRIBUTE_NOINLINE 1
#define _AVX512VLDQINTRIN_H_INCLUDED 
#define _GLIBCXX_NOTHROW _GLIBCXX_USE_NOEXCEPT
#define __UINT64_TYPE__ long unsigned int
#define DECLARE_RESTRICTED_IO_STRUCT_PARAMS CCTK_DECLARE_INIT (CCTK_REAL const, checkpoint_every_walltime_hours, CCTK_PARAMETER__IO__checkpoint_every_walltime_hours); CCTK_DECLARE_INIT (CCTK_REAL const, out_dt, CCTK_PARAMETER__IO__out_dt); CCTK_DECLARE_INIT (CCTK_REAL const, out_xline_y, CCTK_PARAMETER__IO__out_xline_y); CCTK_DECLARE_INIT (CCTK_REAL const, out_xline_z, CCTK_PARAMETER__IO__out_xline_z); CCTK_DECLARE_INIT (CCTK_REAL const, out_xyplane_z, CCTK_PARAMETER__IO__out_xyplane_z); CCTK_DECLARE_INIT (CCTK_REAL const, out_xzplane_y, CCTK_PARAMETER__IO__out_xzplane_y); CCTK_DECLARE_INIT (CCTK_REAL const, out_yline_x, CCTK_PARAMETER__IO__out_yline_x); CCTK_DECLARE_INIT (CCTK_REAL const, out_yline_z, CCTK_PARAMETER__IO__out_yline_z); CCTK_DECLARE_INIT (CCTK_REAL const, out_yzplane_x, CCTK_PARAMETER__IO__out_yzplane_x); CCTK_DECLARE_INIT (CCTK_REAL const, out_zline_x, CCTK_PARAMETER__IO__out_zline_x); CCTK_DECLARE_INIT (CCTK_REAL const, out_zline_y, CCTK_PARAMETER__IO__out_zline_y); CCTK_DECLARE_INIT (const char * const, checkpoint_ID_file, CCTK_PARAMETER__IO__checkpoint_ID_file); CCTK_DECLARE_INIT (const char * const, checkpoint_dir, CCTK_PARAMETER__IO__checkpoint_dir); CCTK_DECLARE_INIT (const char * const, checkpoint_file, CCTK_PARAMETER__IO__checkpoint_file); CCTK_DECLARE_INIT (const char * const, filereader_ID_dir, CCTK_PARAMETER__IO__filereader_ID_dir); CCTK_DECLARE_INIT (const char * const, filereader_ID_files, CCTK_PARAMETER__IO__filereader_ID_files); CCTK_DECLARE_INIT (const char * const, filereader_ID_vars, CCTK_PARAMETER__IO__filereader_ID_vars); CCTK_DECLARE_INIT (const char * const, out_criterion, CCTK_PARAMETER__IO__out_criterion); CCTK_DECLARE_INIT (const char * const, out_dir, CCTK_PARAMETER__IO__out_dir); CCTK_DECLARE_INIT (const char * const, out_fileinfo, CCTK_PARAMETER__IO__out_fileinfo); CCTK_DECLARE_INIT (const char * const, out_group_separator, CCTK_PARAMETER__IO__out_group_separator); CCTK_DECLARE_INIT (const char * const, out_mode, CCTK_PARAMETER__IO__out_mode); CCTK_DECLARE_INIT (const char * const, out_save_parameters, CCTK_PARAMETER__IO__out_save_parameters); CCTK_DECLARE_INIT (const char * const, parfile_name, CCTK_PARAMETER__IO__parfile_name); CCTK_DECLARE_INIT (const char * const, parfile_write, CCTK_PARAMETER__IO__parfile_write); CCTK_DECLARE_INIT (const char * const, recover, CCTK_PARAMETER__IO__recover); CCTK_DECLARE_INIT (const char * const, recover_dir, CCTK_PARAMETER__IO__recover_dir); CCTK_DECLARE_INIT (const char * const, recover_file, CCTK_PARAMETER__IO__recover_file); CCTK_DECLARE_INIT (const char * const, verbose, CCTK_PARAMETER__IO__verbose); CCTK_DECLARE_INIT (CCTK_INT const, abort_on_io_errors, CCTK_PARAMETER__IO__abort_on_io_errors); CCTK_DECLARE_INIT (CCTK_INT const, checkpoint_ID, CCTK_PARAMETER__IO__checkpoint_ID); CCTK_DECLARE_INIT (CCTK_INT const, checkpoint_every, CCTK_PARAMETER__IO__checkpoint_every); CCTK_DECLARE_INIT (CCTK_INT const, checkpoint_keep, CCTK_PARAMETER__IO__checkpoint_keep); CCTK_DECLARE_INIT (CCTK_INT const, checkpoint_on_terminate, CCTK_PARAMETER__IO__checkpoint_on_terminate); CCTK_DECLARE_INIT (CCTK_INT const, new_filename_scheme, CCTK_PARAMETER__IO__new_filename_scheme); CCTK_DECLARE_INIT (CCTK_INT const, out3D_septimefiles, CCTK_PARAMETER__IO__out3D_septimefiles); CCTK_DECLARE_INIT (CCTK_INT const, out_downsample_x, CCTK_PARAMETER__IO__out_downsample_x); CCTK_DECLARE_INIT (CCTK_INT const, out_downsample_y, CCTK_PARAMETER__IO__out_downsample_y); CCTK_DECLARE_INIT (CCTK_INT const, out_downsample_z, CCTK_PARAMETER__IO__out_downsample_z); CCTK_DECLARE_INIT (CCTK_INT const, out_every, CCTK_PARAMETER__IO__out_every); CCTK_DECLARE_INIT (CCTK_INT const, out_proc_every, CCTK_PARAMETER__IO__out_proc_every); CCTK_DECLARE_INIT (CCTK_INT const, out_single_precision, CCTK_PARAMETER__IO__out_single_precision); CCTK_DECLARE_INIT (CCTK_INT const, out_timesteps_per_file, CCTK_PARAMETER__IO__out_timesteps_per_file); CCTK_DECLARE_INIT (CCTK_INT const, out_unchunked, CCTK_PARAMETER__IO__out_unchunked); CCTK_DECLARE_INIT (CCTK_INT const, out_xline_yi, CCTK_PARAMETER__IO__out_xline_yi); CCTK_DECLARE_INIT (CCTK_INT const, out_xline_zi, CCTK_PARAMETER__IO__out_xline_zi); CCTK_DECLARE_INIT (CCTK_INT const, out_xyplane_zi, CCTK_PARAMETER__IO__out_xyplane_zi); CCTK_DECLARE_INIT (CCTK_INT const, out_xzplane_yi, CCTK_PARAMETER__IO__out_xzplane_yi); CCTK_DECLARE_INIT (CCTK_INT const, out_yline_xi, CCTK_PARAMETER__IO__out_yline_xi); CCTK_DECLARE_INIT (CCTK_INT const, out_yline_zi, CCTK_PARAMETER__IO__out_yline_zi); CCTK_DECLARE_INIT (CCTK_INT const, out_yzplane_xi, CCTK_PARAMETER__IO__out_yzplane_xi); CCTK_DECLARE_INIT (CCTK_INT const, out_zline_xi, CCTK_PARAMETER__IO__out_zline_xi); CCTK_DECLARE_INIT (CCTK_INT const, out_zline_yi, CCTK_PARAMETER__IO__out_zline_yi); CCTK_DECLARE_INIT (CCTK_INT const, parfile_update_every, CCTK_PARAMETER__IO__parfile_update_every); CCTK_DECLARE_INIT (CCTK_INT const, print_timing_info, CCTK_PARAMETER__IO__print_timing_info); CCTK_DECLARE_INIT (CCTK_INT const, recover_and_remove, CCTK_PARAMETER__IO__recover_and_remove); CCTK_DECLARE_INIT (CCTK_INT const, require_empty_output_directory, CCTK_PARAMETER__IO__require_empty_output_directory); CCTK_DECLARE_INIT (CCTK_INT const, strict_io_parameter_check, CCTK_PARAMETER__IO__strict_io_parameter_check);
#define _PTHREAD_H 1
#define HAVE_GETHOSTBYNAME 1
#define CCTK_LOOP4STR_ALL(name,cctki3_cctkGH_,i,j,k,l,imin,imax,cctki3_istr_) do { typedef int cctki3_loop4_all_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_ALL can only be used in 4 dimensions"); } CCTK_LOOP4STR(name ##_all, i,j,k,l, 0,0,0,0, cctki3_cctkGH->cctk_lsh[0], cctki3_cctkGH->cctk_lsh[1], cctki3_cctkGH->cctk_lsh[2], cctki3_cctkGH->cctk_lsh[3], cctki3_cctkGH->cctk_ash[0], cctki3_cctkGH->cctk_ash[1], cctki3_cctkGH->cctk_ash[2], cctki3_cctkGH->cctk_ash[3], imin,imax, (cctki3_istr_)) {
#define MPI_Message_f2c(msg) ((MPI_Message)(msg))
#define _GLIBCXX_HAVE_FREXPL 1
#define MPI_ERR_SPAWN 42
#define MPI_LONG_LONG_INT ((MPI_Datatype)0x4c000809)
#define __REDIRECT_NTH(name,proto,alias) name proto __THROW __asm__ (__ASMNAME (#alias))
#define CCTK_VAR 601
#define MPI_COMM_SELF ((MPI_Comm)0x44000001)
#define _GLIBCXX_READ_MEM_BARRIER __asm __volatile ("":::"memory")
#define _GTHREAD_USE_MUTEX_TIMEDLOCK 1
#define CCTK_ARRAY 403
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define CCTK_LOOP1_INTERIOR(name,cctki2_cctkGH_,i,cctki2_iblo_,cctki2_ibhi_) CCTK_LOOP1STR_INTERIOR(name, (cctki2_cctkGH_), i, (cctki2_iblo_), (cctki2_ibhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define PRIVATE_CARTGRID3D_STRUCT cartgrid3dpriv_
#define RE_SYNTAX_SED RE_SYNTAX_POSIX_BASIC
#define vec8_loadu(p) (_mm_loadu_pd(&(p)))
#define INITIALISE_CARPETLIB_PROTECTED_C2F 
#define DECLARE_CARPETLIB_CARGUMENTS _DECLARE_CCTK_CARGUMENTS
#define CCTK_ENDLOOP4STR_INTBND(name) } CCTK_ENDLOOP4STR_INTBOUNDARIES(name ##_intbnd); typedef cctki3_loop4_intbnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define k8sign_mask (k8sign_mask_union.v)
#define _STDINT_H 1
#define CCTK_PARAMETER__IO__parfile_write RESTRICTED_IO_STRUCT.parfile_write
#define THREE_FORTSTRING_CREATE(arg1,arg2,arg3) char *arg1 = Util_NullTerminateString(cctk_str1,cctk_strlen1); char *arg2 = Util_NullTerminateString(cctk_str2,cctk_strlen2); char *arg3 = Util_NullTerminateString(cctk_str3,cctk_strlen3);
#define ENOTCONN 107
#define REG_EXTENDED 1
#define M_2_SQRTPIl 1.128379167095512573896158903121545172L
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/tmp"
#define OVERLOADABLE_FUNCTION(name) _OVERLOADABLE_FUNCTION(OVERLOADABLE_CALL,OVERLOADABLE_PREFIX, OVERLOADABLE_DUMMY_PREFIX, name)
#define copysign Cactus::good_copysign
#define __INT_LEAST16_TYPE__ short int
#define _MM_FLUSH_ZERO_ON 0x8000
#define _OPENMP 201307
#define __WORDSIZE_TIME64_COMPAT32 1
#define PRIVATE_IOUTIL_STRUCT ioutilpriv_
#define INITIALISE_CARPETLIB_PRIVATE_C2F 
#define EPFNOSUPPORT 96
#define ESRMNT 69
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define _MM_EXCEPT_INVALID 0x0001
#define CCTK_ENDLOOP1STR_ALL(name) } CCTK_ENDLOOP1STR(name ##_all); typedef cctki3_loop1_all_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define k8exp(x) ({ CCTK_REAL8_VEC const xexp=(x); vec8_set(exp(vec8_elt0(xexp)), exp(vec8_elt1(xexp))); })
#define _IO_cleanup_region_start(_fct,_fp) 
#define __gthrw_pragma(pragma) 
#define _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE 1
#define CCTK_ENDLOOP3STR_BOUNDARIES(name) } CCTK_ENDLOOP3STR_NORMAL(name ##_boundaries); } } } } typedef cctki2_loop3_boundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define PTHREAD_ONCE_INIT 0
#define _IO_DEC 020
#define __DBL_DECIMAL_DIG__ 17
#define _POPCNTINTRIN_H_INCLUDED 
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 103
#define _SIZE_T 
#define ENOANO 55
#define _IO_ERR_SEEN 0x20
#define MPI_REAL4 ((MPI_Datatype)0x4c000427)
#define _AVX512BWINTRIN_H_INCLUDED 
#define _G_config_h 1
#define _BACKWARD_BINDERS_H 1
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define PRIVATE_CARPETTRACKER_STRUCT carpettrackerpriv_
#define MPI_ARGVS_NULL (char ***)0
#define PRIVATE_CARPETIOSCALAR_STRUCT carpetioscalarpriv_
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define UINT16_MAX (65535)
#define _IO_STDIO 040000
#define MPI_ERR_DUP_DATAREP 24
#define k4fmin(x,y) (_mm_min_ps(x,y))
#define M_LOG10E 0.43429448190325182765
#define __glibcxx_requires_string(_String) 
#define CCTK_WARN(a,b) CCTK_Warn(a,__LINE__,__FILE__,CCTK_THORNSTRING,b)
#define _GLIBCXX_HAVE_LDEXPL 1
#define RESTRICTED_TIME_STRUCT timerest_
#define _STL_MULTISET_H 1
#define __LDBL_EPSILON__ 1.08420217248550443401e-19L
#define MPI_ERR_COMM 5
#define _Mfloat_ float
#define CCTK_ENDLOOP2STR_INT(name) } CCTK_ENDLOOP2STR_INTERIOR(name ##_int); typedef cctki3_loop2_int_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define __mode_t_defined 
#define _GLIBCXX_ATOMIC_BASE_H 1
#define MPI_MODE_SEQUENTIAL 256
#define __ORDER_BIG_ENDIAN__ 4321
#define MPI_T_ERR_OUT_OF_HANDLES 65
#define CCTK_CXX_COPYSIGN std::copysign
#define _MM3DNOW_H_INCLUDED 
#define __k8__ 1
#define _GLIBCXX_USE_SCHED_YIELD 1
#define __cpp_alias_templates 200704
#define MPI_Win_f2c(win) (MPI_Win)(win)
#define _MM_DENORMALS_ZERO_OFF 0x0000
#define CCTK_LOOP1_NORMAL(name,i,ni,cctki0_idir_,cctki0_imin_,cctki0_imax_,cctki0_iash_) CCTK_LOOP1STR_NORMAL(name, i, ni, (cctki0_idir_), (cctki0_imin_), (cctki0_imax_), (cctki0_iash_), cctki0_dummy_imin,cctki0_dummy_imax, 1)
#define AT(index) operator[](index)
#define CCTK_PARAMETER__CARPETLIB__use_higher_order_restriction RESTRICTED_CARPETLIB_STRUCT.use_higher_order_restriction
#define CCTK_PARAMETER__IO__recover_and_remove RESTRICTED_IO_STRUCT.recover_and_remove
#define _IO_BUFSIZ _G_BUFSIZ
#define HAVE_CCTK_REAL4 1
#define HAVE_CCTK_REAL8 1
#define BBOX_HH 
#define _ENDIAN_H 1
#define CCTK_LOOP1_INTBOUNDARIES(name,cctki2_cctkGH_,i,ni,cctki2_iblo_,cctki2_ibhi_,cctki2_ibboxlo_,cctki2_ibboxhi_) CCTK_LOOP1STR_INTBOUNDARIES(name, (cctki2_cctkGH_), i, ni, (cctki2_iblo_), (cctki2_ibhi_), (cctki2_ibboxlo_), (cctki2_ibboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define _GLIBCXX_BEGIN_NAMESPACE_VERSION 
#define __ATOMIC_RELEASE 3
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define HAVE_GETOPT_H 1
#define INT_FAST16_MAX (9223372036854775807L)
#define _SHARED_PTR_ATOMIC_H 1
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define _MM_ROUND_TOWARD_ZERO 0x6000
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define k4nmsub(x,y,z) (k4sub(z,k4mul(x,y)))
#define _AVXINTRIN_H_INCLUDED 
#define CCTK_PASS_CTOC cctkGH
#define CCTK_CmplxLog CCTK_Cmplx16Log
#define _GLIBCXX_USE_TMPNAM 1
#define __CCTK_ACTIVETHORNS_H_ 
#define DECLARE_CCTK_PARAMETERS DECLARE_GLOBAL_PARAMETER_STRUCT_PARAMS DECLARE_RESTRICTED_CARPETLIB_STRUCT_PARAMS DECLARE_PRIVATE_CARPETLIB_STRUCT_PARAMS CCTK_DECLARE_INIT (const char * const, out_dir, CCTK_PARAMETER__IOUtil__out_dir);
#define RESTRICTED_FUNWAVEMESH_STRUCT funwavemeshrest_
#define _CONCEPT_CHECK_H 1
#define MPI_C_COMPLEX MPI_C_FLOAT_COMPLEX
#define _mm512_rsqrt28_ps(A) _mm512_rsqrt28_round_ps(A, _MM_FROUND_CUR_DIRECTION)
#define MPI_NULL_COPY_FN ((MPI_Copy_function *)0)
#define __REPB_PREFIX(name) name
#define __fsfilcnt_t_defined 
#define MPI_SUCCESS 0
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define _IO_SHOWPOS 02000
#define isnormal Cactus::good_isnormal
#define CCTK_ENDLOOP1STR_INTERIOR(name) } CCTK_ENDLOOP1STR(name ##_interior); typedef cctki2_loop1_interior_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while(0)
#define _MM_EXCEPT_OVERFLOW 0x0008
#define ERFKILL 132
#define MPI_Info_f2c(info) (MPI_Info)(info)
#define _MM_FROUND_TRUNC (_MM_FROUND_TO_ZERO | _MM_FROUND_RAISE_EXC)
#define __INT32_TYPE__ int
#define GETTIMEOFDAY_NEEDS_TIMEZONE 1
#define __SIZEOF_DOUBLE__ 8
#define __cpp_exceptions 199711
#define CCTK_ENDLOOP4STR(name) CCTK_ENDLOOP4STR_NORMAL(name)
#define TWO_FORTSTRING_CREATE(arg1,arg2) char *arg1 = Util_NullTerminateString(cctk_str1,cctk_strlen1); char *arg2 = Util_NullTerminateString(cctk_str2,cctk_strlen2);
#define PMPI_Info_c2f(info) (MPI_Fint)(info)
#define __SWORD_TYPE long int
#define CCTK_LOOP4STR_BOUNDARIES(name,cctki2_cctkGH_,i,j,k,l,ni,nj,nk,nl,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_lblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_lbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_lbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_,cctki2_lbboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop4_boundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_BOUNDARIES can only be used in 4 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_),(cctki2_lblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_),(cctki2_lbhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxlo_), (cctki2_jbboxhi_),(cctki2_kbboxlo_), (cctki2_kbboxhi_),(cctki2_lbboxlo_), (cctki2_lbboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0],cctki2_cctkGH->cctk_lsh[1],cctki2_cctkGH->cctk_lsh[2],cctki2_cctkGH->cctk_lsh[3] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_ldir=-1; cctki2_ldir<=+1; ++cctki2_ldir) { for (int cctki2_kdir=-1; cctki2_kdir<=+1; ++cctki2_kdir) { for (int cctki2_jdir=-1; cctki2_jdir<=+1; ++cctki2_jdir) { for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0) || (cctki2_jdir<0 ? cctki2_bbox[2] : 0) || (cctki2_jdir>0 ? cctki2_bbox[3] : 0) || (cctki2_kdir<0 ? cctki2_bbox[4] : 0) || (cctki2_kdir>0 ? cctki2_bbox[5] : 0) || (cctki2_ldir<0 ? cctki2_bbox[6] : 0) || (cctki2_ldir>0 ? cctki2_bbox[7] : 0); if (cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], cctki2_jdir<0 ? 0 : cctki2_jdir==0 ? cctki2_blo[1] : cctki2_lsh[1] - cctki2_bhi[1], cctki2_kdir<0 ? 0 : cctki2_kdir==0 ? cctki2_blo[2] : cctki2_lsh[2] - cctki2_bhi[2], cctki2_ldir<0 ? 0 : cctki2_ldir==0 ? cctki2_blo[3] : cctki2_lsh[3] - cctki2_bhi[3], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], cctki2_jdir<0 ? cctki2_blo[1] : cctki2_jdir==0 ? cctki2_lsh[1] - cctki2_bhi[1] : cctki2_lsh[1], cctki2_kdir<0 ? cctki2_blo[2] : cctki2_kdir==0 ? cctki2_lsh[2] - cctki2_bhi[2] : cctki2_lsh[2], cctki2_ldir<0 ? cctki2_blo[3] : cctki2_ldir==0 ? cctki2_lsh[3] - cctki2_bhi[3] : cctki2_lsh[3], }; CCTK_LOOP4STR_NORMAL(name ##_boundaries, i,j,k,l, ni,nj,nk,nl, cctki2_idir,cctki2_jdir,cctki2_kdir,cctki2_ldir, cctki2_bmin[0],cctki2_bmin[1],cctki2_bmin[2],cctki2_bmin[3], cctki2_bmax[0],cctki2_bmax[1],cctki2_bmax[2],cctki2_bmax[3], cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], cctki2_cctkGH->cctk_ash[2], cctki2_cctkGH->cctk_ash[3], imin,imax, cctki2_istr) {
#define __PTHREAD_SPINS 0, 0
#define HAVE_SIGNAL_H 1
#define MPI_OP_NULL ((MPI_Op)0x18000000)
#define CCTK_PARAMETER__CARPETLIB__message_count_multiplier PRIVATE_CARPETLIB_STRUCT.message_count_multiplier
#define CCTK_PARAMETER__CARPETLIB__interpolate_from_buffer_zones PRIVATE_CARPETLIB_STRUCT.interpolate_from_buffer_zones
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define CCTK_VARIABLE_REAL4 131
#define CCTK_VARIABLE_REAL8 132
#define DECLARE_REDUCTION_OPERATOR_2(fn,init,op,op2,final) template <typename T, int D> inline T fn(const vect<T, D> &a, const vect<T, D> &b) { T r(init); for (int d = 0; d < D; ++d) r op(a[d] op2 b[d]); return final(r); }
#define CCTK_LOOP3(name,i,j,k,cctki1_imin_,cctki1_jmin_,cctki1_kmin_,cctki1_imax_,cctki1_jmax_,cctki1_kmax_,cctki1_iash_,cctki1_jash_,cctki1_kash_) CCTK_LOOP3STR(name, i,j,k, (cctki1_imin_),(cctki1_jmin_),(cctki1_kmin_), (cctki1_imax_),(cctki1_jmax_),(cctki1_kmax_), (cctki1_iash_),(cctki1_jash_),(cctki1_kash_), cctki1_dummy_imin,cctki1_dummy_imax, 1)
#define CCTK_FARGUMENTS CARPETLIB_FARGUMENTS
#define DECLARE_OPERATOR_2_RET(fn,op,R) template <typename T, int D> inline vect<R, D> fn(const vect<T, D> &a, const vect<T, D> &b) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = a[d] op b[d]; return r; } template <typename T, int D> inline vect<R, D> fn(const T &a, const vect<T, D> &b) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = a op b[d]; return r; } template <typename T, int D> inline vect<R, D> fn(const vect<T, D> &a, const T &b) { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = a[d] op b; return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const vect<vect<T, D>, E> &a, const vect<vect<T, D>, E> &b) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = a[e] op b[e]; return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const T &a, const vect<vect<T, D>, E> &b) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = a op b[e]; return r; } template <typename T, int D, int E> inline vect<vect<R, D>, E> fn(const vect<vect<T, D>, E> &a, const T &b) { vect<vect<R, D>, E> r; for (int e = 0; e < E; ++e) r[e] = a[e] op b; return r; }
#define CCTK_PARAMETER__IO__out_downsample_x RESTRICTED_IO_STRUCT.out_downsample_x
#define CCTK_PARAMETER__IO__out_downsample_y RESTRICTED_IO_STRUCT.out_downsample_y
#define CCTK_PARAMETER__IO__out_downsample_z RESTRICTED_IO_STRUCT.out_downsample_z
#define _GLIBCXX_CSTDINT 1
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define _GLIBCXX_MAKE_MOVE_ITERATOR(_Iter) std::make_move_iterator(_Iter)
#define ELIBBAD 80
#define _XOPMMINTRIN_H_INCLUDED 
#define ESTRPIPE 86
#define HAVE_FPCLASSIFY 1
#define htobe32(x) __bswap_32 (x)
#define ECONNREFUSED 111
#define RE_DOT_NOT_NULL (RE_DOT_NEWLINE << 1)
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define _ASM_GENERIC_ERRNO_H 
#define EAGAIN 11
#define __DBL_MAX_10_EXP__ 308
#define _BITS_PTHREADTYPES_H 1
#define __LDBL_DENORM_MIN__ 3.64519953188247460253e-4951L
#define HAVE_CCTK_POINTER 1
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define HAVE_CCTK_FPOINTER 1
#define __USE_XOPEN_EXTENDED 1
#define kexp k8exp
#define __INT16_C(c) c
#define SRCIND3(i,j,k) index3(i, j, k, srcipadext, srcjpadext, srckpadext, srciext, srcjext, srckext)
#define _GLIBCXX_HAVE_SYS_IOCTL_H 1
#define _CCTK_CORE_H_ 1
#define MPI_CHARACTER ((MPI_Datatype)1275068698)
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define CCTK_LOOP4_NORMAL(name,i,j,k,l,ni,nj,nk,nl,cctki0_idir_,cctki0_jdir_,cctki0_kdir_,cctki0_ldir_,cctki0_imin_,cctki0_jmin_,cctki0_kmin_,cctki0_lmin_,cctki0_imax_,cctki0_jmax_,cctki0_kmax_,cctki0_lmax_,cctki0_iash_,cctki0_jash_,cctki0_kash_,cctki0_lash_) CCTK_LOOP4STR_NORMAL(name, i,j,k,l, ni,nj,nk,nl, (cctki0_idir_),(cctki0_jdir_),(cctki0_kdir_),(cctki0_ldir_), (cctki0_imin_),(cctki0_jmin_),(cctki0_kmin_),(cctki0_lmin_), (cctki0_imax_),(cctki0_jmax_),(cctki0_kmax_),(cctki0_lmax_), (cctki0_iash_),(cctki0_jash_),(cctki0_kash_),(cctki0_lash_), cctki0_dummy_imin,cctki0_dummy_imax, 1)
#define TIME_WITH_SYS_TIME 1
#define CCTK_PARAMETER__CARPETLIB__max_memory_size_MB PRIVATE_CARPETLIB_STRUCT.max_memory_size_MB
#define HAVE_CAPABILITY_MPI 1
#define CLONE_SYSVSEM 0x00040000
#define EEXIST 17
#define GLOBAL_PARAMETER_STRUCT cctk_params_global_
#define _GLIBCXX_USE_C99_CTYPE_TR1 1
#define _STRING_CONVERSIONS_H 1
#define HAVE_CCTK_CXX_FPCLASSIFY 1
#define __LC_IDENTIFICATION 12
#define CCTK_PARAMETER__IO__checkpoint_on_terminate RESTRICTED_IO_STRUCT.checkpoint_on_terminate
#define _CMP_ORD_Q 0x07
#define _CMP_ORD_S 0x17
#define DECLARE_REDUCTION_OPERATOR_1(fn,init,op,final) template <typename T, int D> inline T fn(const vect<T, D> &a) { T r(init); for (int d = 0; d < D; ++d) r op a[d]; return final(r); }
#define _G_IO_IO_FILE_VERSION 0x20001
#define REDUCTION_GRID_ARRAY_OPERATOR_REGISTER_ARGLIST const cGH *GH, int dest_proc, int local_reduce_handle, int param_table_handle, int N_input_arrays, const CCTK_INT input_array_variable_indices[], int M_output_values, const CCTK_INT output_value_type_codes[], void* const output_values[]
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define PRIVATE_IOBASIC_STRUCT iobasicpriv_
#define MPI_COMM_DUP_FN ((MPI_Comm_copy_attr_function *)MPI_DUP_FN)
#define HAVE_CCTK_INT1 1
#define HAVE_CCTK_INT2 1
#define HAVE_CCTK_INT4 1
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define CCTK_ENDLOOP2STR_BND(name) } CCTK_ENDLOOP2STR_BOUNDARIES(name ##_bnd); typedef cctki3_loop2_bnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define DOMAIN 1
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define ENONET 64
#define _MM_SHUFFLE2(fp1,fp0) (((fp1) << 1) | (fp0))
#define CCTK_ERROR_INTERP_GRID_TOO_SMALL (-1000)
#define ENOPKG 65
#define __CLOCK_T_TYPE __SYSCALL_SLONG_TYPE
#define _IO_fpos64_t _G_fpos64_t
#define __throw_exception_again throw
#define REG_NOTEOL (1 << 1)
#define EXFULL 54
#define MPIX_CALLWORLD(fnc) { int err = fnc ; if (err) MPIR_Call_world_errhand( err ); }
#define _CLWBINTRIN_H_INCLUDED 
#define __STDC_LIMIT_MACROS 
#define RE_DEBUG (RE_NO_GNU_OPS << 1)
#define CCTK_VARIABLE_VOID 100
#define __UINTPTR_TYPE__ long unsigned int
#define _FXSRINTRIN_H_INCLUDED 
#define MPIR_CXX_BOOL 0x4c000133
#define _GLIBCXX_INLINE_VERSION 0
#define PMPI_Errhandler_c2f(errhandler) (MPI_Fint)(errhandler)
#define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD
#define RE_CONTEXT_INVALID_DUP (RE_CARET_ANCHORS_HERE << 1)
#define Sign(x) -999999999
#define _GLIBCXX_ERROR_CONSTANTS 1
#define vec4_set(a,b,c,d) (_mm_set_ps(d,c,b,a))
#define MPI_COMPLEX16 ((MPI_Datatype)0x4c00102a)
#define _MM_DENORMALS_ZERO_MASK 0x0040
#define MPI_FILE_NULL ((MPI_File)0)
#define _IO_wint_t wint_t
#define MPI_IN_PLACE (void *) -1
#define CCTK_ENDLOOP1_NORMAL(name) CCTK_ENDLOOP1STR_NORMAL(name)
#define ToReal(x) (vec_set1((CCTK_REAL)(x)))
#define _GLIBCXX_VERBOSE 1
#define PMPIO_Wait PMPI_Wait
#define _SIDD_POSITIVE_POLARITY 0x00
#define _GLIBCXX_HAVE_ISINFF 1
#define __cpp_user_defined_literals 200809
#define REDUCTION_LOCAL_ARRAY_OPERATOR_REGISTER_ARGLIST int N_dims, int operator_handle, int param_table_handle, int N_input_arrays, const CCTK_INT input_array_dims[], const CCTK_INT input_array_type_codes[], const void *const input_arrays[], int M_output_numbers, const CCTK_INT output_number_type_codes[], void *const output_numbers[]
#define __USE_ATFILE 1
#define PASS_CARPETLIB_PRIVATE_C2F(GH) 
#define CCTK_PARAMETER__IO__verbose RESTRICTED_IO_STRUCT.verbose
#define RE_SYNTAX_POSIX_BASIC (_RE_SYNTAX_POSIX_COMMON | RE_BK_PLUS_QM | RE_CONTEXT_INVALID_DUP)
#define k4log(x) ({ CCTK_REAL4_VEC const xlog=(x); vec4_set(log(vec4_elt0(xlog)), log(vec4_elt1(xlog)), log(vec4_elt2(xlog)), log(vec4_elt3(xlog))); })
#define HAVE_TGMATH_H 1
#define MPI_Errhandler_f2c(errhandler) (MPI_Errhandler)(errhandler)
#define ENOTUNIQ 76
#define _STL_MAP_H 1
#define RE_SYNTAX_EGREP (RE_CHAR_CLASSES | RE_CONTEXT_INDEP_ANCHORS | RE_CONTEXT_INDEP_OPS | RE_HAT_LISTS_NOT_NEWLINE | RE_NEWLINE_ALT | RE_NO_BK_PARENS | RE_NO_BK_VBAR)
#define __FLT_DECIMAL_DIG__ 9
#define CCTK_ENDLOOP3STR_NORMAL(name) } } } } typedef cctki0_loop3_normal_ ##name cctki0_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define __WALL 0x40000000
#define __glibcxx_requires_nonempty() 
#define _GLIBCXX_STACK 1
#define _IO_NO_READS 4
#define MPI_Type_f2c(datatype) (MPI_Datatype)(datatype)
#define _OMP_H 1
#define _GLIBCXX_HAVE_ECHILD 1
#define MPI_2INTEGER ((MPI_Datatype)1275070496)
#define __glibc_likely(cond) __builtin_expect ((cond), 1)
#define EOPNOTSUPP 95
#define _GNU_SOURCE 1
#define CCTK_ENDLOOP1_INTERIOR(name) CCTK_ENDLOOP1STR_INTERIOR(name)
#define __N(msgid) (msgid)
#define __P(args) args
#define DECLARE_CCTK_CARGUMENTS DECLARE_CARPETLIB_CARGUMENTS
#define CCTK_STEERABLE_ALWAYS 201
#define _CARPETLIB_PROTOTYPES_H_ 1
#define __ATOMIC_ACQ_REL 4
#define __U32_TYPE unsigned int
#define MPI_COMPLEX8 ((MPI_Datatype)0x4c000828)
#define _GLIBCXX_HAVE_EXECINFO_H 1
#define RESTRICTED_CACTUS_STRUCT cactusrest_
#define _GLIBCXX_USE_INT128 1
#define _CCTK_FUNCTIONALIASES_H_ 1
#define _STDLIB_H 1
#define _GLIBCXX_HAVE_SYS_SDT_H 1
#define MPI_ERR_NO_SPACE 36
#define M_PIl 3.141592653589793238462643383279502884L
#define _IO_CURRENTLY_PUTTING 0x800
#define INITIALISE_CARPETLIB_C2F _INITIALISE_CCTK_C2F
#define k8mul(x,y) (_mm_mul_pd(x,y))
#define _IO_peekc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) && __underflow (_fp) == EOF ? EOF : *(unsigned char *) (_fp)->_IO_read_ptr)
#define _STL_PAIR_H 1
#define MPI_Comm_c2f(comm) (MPI_Fint)(comm)
#define MPI_CHAR ((MPI_Datatype)0x4c000101)
#define THREE_FORTSTRING_ARG char *cctk_str1, char *cctk_str2, char *cctk_str3, unsigned int cctk_strlen1, unsigned int cctk_strlen2, unsigned int cctk_strlen3
#define MPI_Op_f2c(op) (MPI_Op)(op)
#define M_SQRT1_2 0.70710678118654752440
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.78539816339744830962
#define CCTK_LOOP3STR_ALL(name,cctki3_cctkGH_,i,j,k,imin,imax,cctki3_istr_) do { typedef int cctki3_loop3_all_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_ALL can only be used in 3 dimensions"); } CCTK_LOOP3STR(name ##_all, i,j,k, 0,0,0, cctki3_cctkGH->cctk_lsh[0], cctki3_cctkGH->cctk_lsh[1], cctki3_cctkGH->cctk_lsh[2], cctki3_cctkGH->cctk_ash[0], cctki3_cctkGH->cctk_ash[1], cctki3_cctkGH->cctk_ash[2], imin,imax, (cctki3_istr_)) {
#define HAVE_STRING_H 1
#define CCTK_ENDLOOP4STR_INTERIOR(name) } CCTK_ENDLOOP4STR(name ##_interior); typedef cctki2_loop4_interior_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while(0)
#define vec8_loadu_maybe(off,p) (vec8_loadu(p))
#define __ATOMIC_ACQUIRE 2
#define __glibcxx_requires_valid_range(_First,_Last) 
#define vec8_storeu(p,x) (_mm_storeu_pd(&(p),x))
#define __WCHAR_MAX__ 0x7fffffff
#define _GLIBCXX_MOVE_BACKWARD3(_Tp,_Up,_Vp) std::move_backward(_Tp, _Up, _Vp)
#define MPIX_ERR_PROC_FAILED MPICH_ERR_FIRST_MPIX+1
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define DECLARE_FUNCTION_1(fn) DECLARE_FUNCTION_1_RET(fn, T)
#define MPI_ERR_AMODE 21
#define HAVE_MODE_T 1
#define CCTK_CmplxDiv CCTK_Cmplx16Div
#define __FLT_MIN__ 1.17549435082228750797e-38F
#define __GCC_IEC_559_COMPLEX 2
#define CCTK_VARIABLE_INT 120
#define MPI_ERR_CONVERSION 23
#define SIZEOF_LONG_LONG 8
#define signbit Cactus::good_signbit
#define CCTK_ARGUMENTS_H_ 1
#define CCTK_STATIC_ASSERT(cond,msg) static_assert(cond, msg)
#define CCTK_LOOP4STR_INTBOUNDARIES(name,cctki2_cctkGH_,i,j,k,l,ni,nj,nk,nl,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_lblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_lbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_lbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_,cctki2_lbboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop4_intboundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_INTBOUNDARIES can only be used in 4 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_),(cctki2_lblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_),(cctki2_lbhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxlo_), (cctki2_jbboxhi_),(cctki2_kbboxlo_), (cctki2_kbboxhi_),(cctki2_lbboxlo_), (cctki2_lbboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0],cctki2_cctkGH->cctk_lsh[1],cctki2_cctkGH->cctk_lsh[2],cctki2_cctkGH->cctk_lsh[3] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_ldir=-1; cctki2_ldir<=+1; ++cctki2_ldir) { for (int cctki2_kdir=-1; cctki2_kdir<=+1; ++cctki2_kdir) { for (int cctki2_jdir=-1; cctki2_jdir<=+1; ++cctki2_jdir) { for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0) || (cctki2_jdir<0 ? cctki2_bbox[2] : 0) || (cctki2_jdir>0 ? cctki2_bbox[3] : 0) || (cctki2_kdir<0 ? cctki2_bbox[4] : 0) || (cctki2_kdir>0 ? cctki2_bbox[5] : 0) || (cctki2_ldir<0 ? cctki2_bbox[6] : 0) || (cctki2_ldir>0 ? cctki2_bbox[7] : 0); const int cctki2_all_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 1) && (cctki2_idir>0 ? cctki2_bbox[1] : 1) && (cctki2_jdir<0 ? cctki2_bbox[2] : 1) && (cctki2_jdir>0 ? cctki2_bbox[3] : 1) && (cctki2_kdir<0 ? cctki2_bbox[4] : 1) && (cctki2_kdir>0 ? cctki2_bbox[5] : 1) && (cctki2_ldir<0 ? cctki2_bbox[6] : 1) && (cctki2_ldir>0 ? cctki2_bbox[7] : 1); if (cctki2_all_bbox && cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], cctki2_jdir<0 ? 0 : cctki2_jdir==0 ? cctki2_blo[1] : cctki2_lsh[1] - cctki2_bhi[1], cctki2_kdir<0 ? 0 : cctki2_kdir==0 ? cctki2_blo[2] : cctki2_lsh[2] - cctki2_bhi[2], cctki2_ldir<0 ? 0 : cctki2_ldir==0 ? cctki2_blo[3] : cctki2_lsh[3] - cctki2_bhi[3], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], cctki2_jdir<0 ? cctki2_blo[1] : cctki2_jdir==0 ? cctki2_lsh[1] - cctki2_bhi[1] : cctki2_lsh[1], cctki2_kdir<0 ? cctki2_blo[2] : cctki2_kdir==0 ? cctki2_lsh[2] - cctki2_bhi[2] : cctki2_lsh[2], cctki2_ldir<0 ? cctki2_blo[3] : cctki2_ldir==0 ? cctki2_lsh[3] - cctki2_bhi[3] : cctki2_lsh[3], }; CCTK_LOOP4STR_NORMAL(name ##_intboundaries, i,j,k,l, ni,nj,nk,nl, cctki2_idir,cctki2_jdir,cctki2_kdir,cctki2_ldir, cctki2_bmin[0],cctki2_bmin[1],cctki2_bmin[2],cctki2_bmin[3], cctki2_bmax[0],cctki2_bmax[1],cctki2_bmax[2],cctki2_bmax[3], cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], cctki2_cctkGH->cctk_ash[2], cctki2_cctkGH->cctk_ash[3], imin,imax, cctki2_istr) {
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define CARPET_ENABLE_BBOXSET2 
#define EUNATCH 49
#define _NEW_ALLOCATOR_H 1
#define INT_LEAST16_MIN (-32767-1)
#define CCTK_PARAMETER__CARPETLIB__barriers PRIVATE_CARPETLIB_STRUCT.barriers
#define __flexarr []
#define _STL_UNINITIALIZED_H 1
#define _GLIBCXX_HAVE_STDALIGN_H 1
#define _IO_FLAGS2_USER_WBUF 8
#define _SCHED_H 1
#define _SIDD_MASKED_POSITIVE_POLARITY 0x20
#define _BITS_SETJMP_H 1
#define _MM_FROUND_TO_NEG_INF 0x01
#define _MM_MASK_MASK 0x1f80
#define HAVE_ISNAN 1
#define HAVE_CCTK_SIGNBIT HAVE_CCTK_CXX_SIGNBIT
#define __stub_fchflags 
#define HAVE_CCTK_COMPLEX8 1
#define VECT_HELPERS_HH 
#define CCTK_LOOP4STR_INT(name,cctki3_cctkGH_,i,j,k,l,imin,imax,cctki3_istr_) do { typedef int cctki3_loop4_int_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_INT can only be used in 4 dimensions"); } CCTK_INT cctki3_bndsize [8]; CCTK_INT cctki3_is_ghostbnd[8]; CCTK_INT cctki3_is_symbnd [8]; CCTK_INT cctki3_is_physbnd [8]; _Pragma("omp single copyprivate(cctki3_bndsize)") GetBoundarySizesAndTypes (cctki3_cctkGH, 8, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP4STR_INTERIOR(name ##_int, cctki3_cctkGH, i,j,k,l, cctki3_bndsize[0],cctki3_bndsize[2],cctki3_bndsize[4],cctki3_bndsize[6], cctki3_bndsize[1],cctki3_bndsize[3],cctki3_bndsize[5],cctki3_bndsize[7], imin,imax, (cctki3_istr_)) {
#define MPI_ERR_TOPOLOGY 10
#define __INTMAX_C(c) c ## L
#define RE_NO_BK_PARENS (RE_NO_BK_BRACES << 1)
#define MPI_DOUBLE_COMPLEX ((MPI_Datatype)1275072546)
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define PTHREAD_CANCELED ((void *) -1)
#define _BITS_TIME_H 1
#define M_LN10l 2.302585092994045684017991454684364208L
#define MPI_REPLACE (MPI_Op)(0x5800000d)
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define HAVE_MALLINFO 1
#define __FSWORD_T_TYPE __SYSCALL_SLONG_TYPE
#define FP_NAN 0
#define makedev(maj,min) gnu_dev_makedev (maj, min)
#define _GLIBCXX_USE_RANDOM_TR1 1
#define EAFNOSUPPORT 97
#define DECLARE_CMPLX_FUNCTIONS(CCTK_Cmplx,cctk_real,cctk_complex) static inline cctk_complex CCTK_Cmplx(cctk_real Re, cctk_real Im) { return cctk_complex(Re,Im); } static inline cctk_real CCTK_Cmplx ##Real(cctk_complex a) { return std::real(a); } static inline cctk_real CCTK_Cmplx ##Imag(cctk_complex a) { return std::imag(a); } static inline cctk_complex CCTK_Cmplx ##Neg(cctk_complex a) { return -a; } static inline cctk_complex CCTK_Cmplx ##Conjg(cctk_complex a) { return std::conj(a); } static inline cctk_real CCTK_Cmplx ##Abs(cctk_complex a) { return std::abs(a); } static inline cctk_real CCTK_Cmplx ##Arg(cctk_complex a) { return std::arg(a); } static inline cctk_real CCTK_Cmplx ##Norm(cctk_complex a) { return std::norm(a); } static inline cctk_complex CCTK_Cmplx ##Add(cctk_complex a, cctk_complex b) { return a+b; } static inline cctk_complex CCTK_Cmplx ##Sub(cctk_complex a, cctk_complex b) { return a-b; } static inline cctk_complex CCTK_Cmplx ##Mul(cctk_complex a, cctk_complex b) { return a*b; } static inline cctk_complex CCTK_Cmplx ##Div(cctk_complex a, cctk_complex b) { return a/b; } static inline cctk_complex CCTK_Cmplx ##CPow(cctk_complex a, cctk_complex b) { return pow(a,b); } static inline cctk_complex CCTK_Cmplx ##Sin(cctk_complex a) { return std::sin(a); } static inline cctk_complex CCTK_Cmplx ##Cos(cctk_complex a) { return std::cos(a); } static inline cctk_complex CCTK_Cmplx ##Exp(cctk_complex a) { return std::exp(a); } static inline cctk_complex CCTK_Cmplx ##Log(cctk_complex a) { return std::log(a); } static inline cctk_complex CCTK_Cmplx ##Sqrt(cctk_complex a) { return std::sqrt(a); } static inline cctk_complex CCTK_Cmplx ##Pow(cctk_complex a, cctk_real b) { return std::pow(a,b); } static inline cctk_complex CCTK_Cmplx ##IPow(cctk_complex a, int b) { return std::pow(a,(cctk_real)b); }
#define CCTK_LOOP1_INTBND(name,cctki3_cctkGH_,i,ni) CCTK_LOOP1STR_INTBND(name, (cctki3_cctkGH_), i, ni, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define __UINT8_MAX__ 0xff
#define __cpp_unicode_characters 200704
#define CCTK_WARN_ABORT 0
#define MPI_MODE_NOPUT 4096
#define _IOS_BASE_H 1
#define MPI_SUBVERSION 0
#define _AVX2INTRIN_H_INCLUDED 
#define _CCTK_FORTRANSTRING_H_ 
#define INT16_C(c) c
#define CCTK_ENDLOOP1_INTBOUNDARIES(name) CCTK_ENDLOOP1STR_INTBOUNDARIES(name)
#define __WINT_MAX__ 0xffffffffU
#define __SIZEOF_PTHREAD_ATTR_T 56
#define _mm512_setr_pd(e0,e1,e2,e3,e4,e5,e6,e7) _mm512_set_pd(e7,e6,e5,e4,e3,e2,e1,e0)
#define _mm512_setr_ps(e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15) _mm512_set_ps(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0)
#define INT8_MAX (127)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define _WCHAR_H 1
#define _DECLARE_CCTK_ARGUMENTS _DECLARE_CCTK_CARGUMENTS
#define __WAIT_INT(status) (*(int *) &(status))
#define LC_ALL __LC_ALL
#define _XOPEN_SOURCE 700
#define CCTK_WARN_COMPLAIN 2
#define EILSEQ 84
#define ESPIPE 29
#define INT64_C(c) c ## L
#define _XABORT_RETRY (1 << 1)
#define __GTHREAD_MUTEX_INIT_FUNCTION __gthread_mutex_init_function
#define __OFF_T_MATCHES_OFF64_T 1
#define ADJ_MAXERROR 0x0004
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __stub_putmsg 
#define ENAMETOOLONG 36
#define CCTK_ENDLOOP1STR_INT(name) } CCTK_ENDLOOP1STR_INTERIOR(name ##_int); typedef cctki3_loop1_int_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _GLIBCXX_CLOCALE 1
#define MPI_MAX_DATAREP_STRING 128
#define __NO_MATH_INLINES 1
#define RE_NO_BK_BRACES (RE_NEWLINE_ALT << 1)
#define INT16_MAX (32767)
#define PMPI_Type_c2f(datatype) (MPI_Fint)(datatype)
#define __STDC__ 1
#define _GLIBCXX_USE_LONG_LONG 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define CCTK_VARIABLE_STRING 151
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define MPI_ERR_ARG 12
#define ADJ_ESTERROR 0x0008
#define EHOSTUNREACH 113
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define CCTK_LOOP1_BOUNDARIES(name,cctki2_cctkGH_,i,ni,cctki2_iblo_,cctki2_ibhi_,cctki2_ibboxlo_,cctki2_ibboxhi_) CCTK_LOOP1STR_BOUNDARIES(name, (cctki2_cctkGH_), i, ni, (cctki2_iblo_), (cctki2_ibhi_), (cctki2_ibboxlo_), (cctki2_ibboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define SIZEOF_CHAR_P 8
#define __GCC_IEC_559 2
#define _CXXABI_FORCED_H 1
#define _GLIBCXX_HAVE_VWSCANF 1
#define _IOFBF 0
#define __FLT_EVAL_METHOD__ 0
#define MPI_TYPE_NULL_DELETE_FN ((MPI_Type_delete_attr_function*)0)
#define MPI_ERRCODES_IGNORE (int *)0
#define _GLIBCXX_HAVE_FMODF 1
#define _GLIBCXX_PSEUDO_VISIBILITY(V) 
#define _GLIBCXX_HAVE_FMODL 1
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define _GLIBCXX_HAVE_ENOTSUP 1
#define __FXSR__ 1
#define _WINT_T 
#define CCTK_ENDLOOP3_INTBND(name) CCTK_ENDLOOP3STR_INTBND(name)
#define _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) 
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)
#define RE_CONTEXT_INDEP_ANCHORS (RE_CHAR_CLASSES << 1)
#define CCTK_PARAMETER__IO__out_mode RESTRICTED_IO_STRUCT.out_mode
#define CCTK_GROUP_OR_VAR 603
#define _mm512_mask_rcp28_ps(W,U,A) _mm512_mask_rcp28_round_ps(W, U, A, _MM_FROUND_CUR_DIRECTION)
#define RE_SYNTAX_POSIX_AWK (RE_SYNTAX_POSIX_EXTENDED | RE_BACKSLASH_ESCAPE_IN_LISTS | RE_INTERVALS | RE_NO_GNU_OPS | RE_INVALID_INTERVAL_ORD)
#define __stub_setlogin 
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define PMPI_Win_f2c(win) (MPI_Win)(win)
#define __SYSCALL_WORDSIZE 64
#define CCTK_PARAMETER__IO__checkpoint_every_walltime_hours RESTRICTED_IO_STRUCT.checkpoint_every_walltime_hours
#define _MM_FLUSH_ZERO_OFF 0x0000
#define MPI_WIN_DUP_FN ((MPI_Win_copy_attr_function*)MPI_DUP_FN)
#define CCTK_PARAMETER__IO__checkpoint_dir RESTRICTED_IO_STRUCT.checkpoint_dir
#define INT8_MIN (-128)
#define HAVE_NETDB_H 1
#define vec_loadu_maybe3 vec8_loadu_maybe3
#define vec_store_nta_partial_lo vec8_store_nta_partial_lo
#define MPI_INTEGER1 ((MPI_Datatype)0x4c00012d)
#define MPI_INTEGER2 ((MPI_Datatype)0x4c00022f)
#define __cpp_variadic_templates 200704
#define MPI_UINT64_T ((MPI_Datatype)0x4c00083e)
#define EOWNERDEAD 130
#define _GLIBCXX_USE_C99_COMPLEX_TR1 1
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define _UNIQUE_PTR_H 1
#define HAVE_CCTK_CXX_ATTRIBUTE_RETURNS_NONNULL 1
#define __COMPAR_FN_T 
#define __GID_T_TYPE __U32_TYPE
#define INT16_MIN (-32767-1)
#define HAVE_CCTK_CHAR 1
#define MPI_ERR_SIZE 51
#define SCHED_IDLE 5
#define RE_INVALID_INTERVAL_ORD (RE_DEBUG << 1)
#define __FINITE_MATH_ONLY__ 0
#define __id_t_defined 
#define CCTK_PARAMETER__IO__recover_dir RESTRICTED_IO_STRUCT.recover_dir
#define RESTRICTED_INTERPTOARRAY_STRUCT interptoarrayrest_
#define _GLIBCXX_GTHREAD_USE_WEAK 1
#define MOD_TIMECONST ADJ_TIMECONST
#define isinf Cactus::good_isinf
#define _CMP_NGT_UQ 0x1a
#define _CMP_NGT_US 0x0a
#define _GLIBCXX_USE_WCHAR_T 1
#define EBADF 9
#define MPI_VERSION 3
#define EBADR 53
#define WIFEXITED(status) __WIFEXITED (__WAIT_INT (status))
#define _PASS_CCTK_C2F(xGH) &((xGH)->cctk_dim), (xGH)->cctk_gsh,(xGH)->cctk_lsh, (xGH)->cctk_lbnd,(xGH)->cctk_ubnd, (xGH)->cctk_ash, (xGH)->cctk_from,(xGH)->cctk_to, (xGH)->cctk_bbox, &((xGH)->cctk_delta_time), &((xGH)->cctk_time), (xGH)->cctk_delta_space, (xGH)->cctk_origin_space, (xGH)->cctk_levfac, (xGH)->cctk_levoff, (xGH)->cctk_levoffdenom, &((xGH)->cctk_timefac), &((xGH)->cctk_convlevel), &((xGH)->cctk_convfac), (xGH)->cctk_nghostzones, &((xGH)->cctk_iteration), &(xGH), &(xGH)->cctk_ash[0], &(xGH)->cctk_ash[1], &(xGH)->cctk_ash[2]
#define STA_PPSERROR 0x0800
#define __pid_t_defined 
#define EL2NSYNC 45
#define ERANGE 34
#define _MM_FROUND_TO_NEAREST_INT 0x00
#define ECANCELED 125
#define CCTK_LOOP2_INTBOUNDARIES(name,cctki2_cctkGH_,i,j,ni,nj,cctki2_iblo_,cctki2_jblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_) CCTK_LOOP2STR_INTBOUNDARIES(name, (cctki2_cctkGH_), i,j, ni,nj, (cctki2_iblo_),(cctki2_jblo_), (cctki2_ibhi_),(cctki2_jbhi_), (cctki2_ibboxlo_),(cctki2_jbboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define __SCHAR_MAX__ 0x7f
#define _IO_pid_t __pid_t
#define __LDBL_REDIR1(name,proto,alias) name proto
#define MPI_MODE_NOPRECEDE 8192
#define __size_t 
#define MPI_CXX_BOOL ((MPI_Datatype)0x4c000133)
#define _GLIBCXX_HAVE_FREXPF 1
#define RE_LIMITED_OPS (RE_INTERVALS << 1)
#define CARPETLIB_PUBLIC_C2F_PROTO 
#define CCTK_LOOP4STR_BND(name,cctki3_cctkGH_,i,j,k,l,ni,nj,nk,nl,imin,imax,cctki3_istr_) do { typedef int cctki3_loop4_bnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 4) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP4_BND can only be used in 4 dimensions"); } CCTK_INT cctki3_bndsize [8]; CCTK_INT cctki3_is_ghostbnd[8]; CCTK_INT cctki3_is_symbnd [8]; CCTK_INT cctki3_is_physbnd [8]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 8, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP4STR_BOUNDARIES(name ##_bnd, cctki3_cctkGH, i,j,k,l, ni,nj,nk,nl, cctki3_bndsize[0],cctki3_bndsize[2],cctki3_bndsize[4],cctki3_bndsize[6], cctki3_bndsize[1],cctki3_bndsize[3],cctki3_bndsize[5],cctki3_bndsize[7], cctki3_is_physbnd[0],cctki3_is_physbnd[2],cctki3_is_physbnd[4],cctki3_is_physbnd[6], cctki3_is_physbnd[1],cctki3_is_physbnd[3],cctki3_is_physbnd[5],cctki3_is_physbnd[7], imin,imax, (cctki3_istr_)) {
#define CCTK_PARAMETER__CARPETLIB__electric_fence PRIVATE_CARPETLIB_STRUCT.electric_fence
#define INT_FAST8_MAX (127)
#define __DEC64_MAX_EXP__ 385
#define __GLIBC_MINOR__ 21
#define MPI_ERR_UNSUPPORTED_OPERATION 44
#define MOD_STATUS ADJ_STATUS
#define _GLIBCXX_PURE __attribute__ ((__pure__))
#define ETXTBSY 26
#define MPI_Op_c2f(op) (MPI_Fint)(op)
#define _MM_MASK_DIV_ZERO 0x0200
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX
#define __GXX_TYPEINFO_EQUALITY_INLINE 1
#define CLONE_DETACHED 0x00400000
#define _GLIBCXX_HAVE_COSHF 1
#define _STL_DEQUE_H 1
#define _GLIBCXX_HAVE_COSHL 1
#define __INTMAX_TYPE__ long int
#define MPI_MODE_CREATE 1
#define _IO_FLAGS2_MMAP 1
#define CCTK_PARAMETER__IO__checkpoint_keep RESTRICTED_IO_STRUCT.checkpoint_keep
#define htobe16(x) __bswap_16 (x)
#define OVERLOADABLE_TEST(name) _OVERLOADABLE_TEST(OVERLOADABLE_PREFIX, name)
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define HAVE_CCTK_CXX_ATTRIBUTE_NOINLINE 1
#define __SHRT_MAX__ 0x7fff
#define __PTHREAD_RWLOCK_ELISION_EXTRA 0, { 0, 0, 0, 0, 0, 0, 0 }
#define w_stopval __wait_stopped.__w_stopval
#define CCTK_ATTRIBUTE_PURE 
#define __LDBL_MAX__ 1.18973149535723176502e+4932L
#define CCTK_THORN CarpetLib
#define _GLIBCXX_USE_C99_COMPLEX 1
#define _STREAMBUF_TCC 1
#define __USING_NAMESPACE_STD(name) 
#define _BASIC_IOS_H 1
#define _TYPEINFO 
#define THREE_FORTSTRING_PTR(arg1,arg2,arg3) char *arg1 = cctk_str1; char *arg2 = cctk_str2; char *arg3 = cctk_str3;
#define CCTK_WARN_PICKY 3
#define _GLIBCXX_CPU_DEFINES 1
#define CCTK_CmplxMul CCTK_Cmplx16Mul
#define CCTK_LOOP3_NORMAL(name,i,j,k,ni,nj,nk,cctki0_idir_,cctki0_jdir_,cctki0_kdir_,cctki0_imin_,cctki0_jmin_,cctki0_kmin_,cctki0_imax_,cctki0_jmax_,cctki0_kmax_,cctki0_iash_,cctki0_jash_,cctki0_kash_) CCTK_LOOP3STR_NORMAL(name, i,j,k, ni,nj,nk, (cctki0_idir_),(cctki0_jdir_),(cctki0_kdir_), (cctki0_imin_),(cctki0_jmin_),(cctki0_kmin_), (cctki0_imax_),(cctki0_jmax_),(cctki0_kmax_), (cctki0_iash_),(cctki0_jash_),(cctki0_kash_), cctki0_dummy_imin,cctki0_dummy_imax, 1)
#define __daddr_t_defined 
#define MPI_ANY_SOURCE (-2)
#define _mm256_ceil_ps(V) _mm256_round_ps ((V), _MM_FROUND_CEIL)
#define CCTK_ENDLOOP2_INTBND(name) CCTK_ENDLOOP2STR_INTBND(name)
#define _IOS_BIN 128
#define _XSAVEOPTINTRIN_H_INCLUDED 
#define _MM_EXCEPT_UNDERFLOW 0x0010
#define CCTK_PARAMETER__CARPETLIB__max_core_size_MB PRIVATE_CARPETLIB_STRUCT.max_core_size_MB
#define CCTK_ATTRIBUTE_NORETURN __attribute__((__noreturn__))
#define MPIIMPL_HAVE_MPI_COMBINER_SUBARRAY 1
#define _IO_MAGIC_MASK 0xFFFF0000
#define __LITTLE_ENDIAN 1234
#define k4div(x,y) (_mm_div_ps(x,y))
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define CCTK_ENDLOOP1STR_BND(name) } CCTK_ENDLOOP1STR_BOUNDARIES(name ##_bnd); typedef cctki3_loop1_bnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _rotl(a,b) __rold((a), (b))
#define _GLIBCXX_HAVE_MODF 1
#define htobe64(x) __bswap_64 (x)
#define __USE_ISOCXX11 1
#define MPI_ERR_PORT 38
#define EINPROGRESS 115
#define MPI_ERR_NAME 33
#define _STDC_PREDEF_H 1
#define _TBMINTRIN_H_INCLUDED 
#define INT_FAST8_MIN (-128)
#define CLOCK_MONOTONIC_COARSE 6
#define _GLIBCXX_OS_DEFINES 1
#define PARAMETER_KEYWORD 701
#define CCTK_CmplxExp CCTK_Cmplx16Exp
#define CCTK_Cmplx CCTK_Cmplx16
#define __DEC32_EPSILON__ 1E-6DF
#define HUGE_VALF (__builtin_huge_valf())
#define MPI_SEEK_END 604
#define __OPTIMIZE__ 1
#define _BITS_TYPES_H 1
#define EUSERS 87
#define _GLIBCXX_STDIO_SEEK_END 2
#define HAVE_CCTK_CXX_MEMBER_ATTRIBUTE_ALWAYS_INLINE 1
#define __UID_T_TYPE __U32_TYPE
#define _CCTK_EXTRADEFS_H_ 
#define _SIDD_CMP_EQUAL_EACH 0x08
#define CLONE_SIGHAND 0x00000800
#define _GLIBCXX_SYMVER 1
#define DEFINE_THIS_THORN_H 1
#define __cpp_inheriting_constructors 200802
#define INT_LEAST32_MIN (-2147483647-1)
#define FD_SETSIZE __FD_SETSIZE
#define __LDBL_MAX_EXP__ 16384
#define STA_NANO 0x2000
#define _GLIBCXX_HAVE_STRTOLD 1
#define DSTOFF3(i,j,k) offset3(i, j, k, dstiext, dstjext, dstkext)
#define _XABORT_DEBUG (1 << 4)
#define ksqrt k8sqrt
#define __glibcxx_function_requires(...) 
#define UINT_FAST16_MAX (18446744073709551615UL)
#define _MM_MASK_UNDERFLOW 0x0800
#define MPI_REAL8 ((MPI_Datatype)0x4c000829)
#define ENOTBLK 15
#define _GLIBCXX_HAVE_LC_MESSAGES 1
#define __WINT_MIN__ 0U
#define kfmax k8fmax
#define EPROTOTYPE 91
#define MPI_UNEQUAL 3
#define vec_store_nta_partial_hi vec8_store_nta_partial_hi
#define _STREAMBUF_ITERATOR_H 1
#define __linux__ 1
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define CCTK_VARIABLE_POINTER 160
#define _mm_rcp28_ss(A,B) __builtin_ia32_rcp28ss_round(B, A, _MM_FROUND_CUR_DIRECTION)
#define CCTK_MEMBER_ATTRIBUTE_ALWAYS_INLINE __attribute__((__always_inline__))
#define _IOS_OUTPUT 2
#define MOD_CLKB ADJ_TICK
#define CCTK_PARAMETER__CARPETLIB__interleave_communications PRIVATE_CARPETLIB_STRUCT.interleave_communications
#define _GCC_PTRDIFF_T 
#define _IMMINTRIN_H_INCLUDED 
#define MPI_ORDER_C 56
#define __glibcxx_requires_sorted_pred(_First,_Last,_Pred) 
#define EALREADY 114
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define CCTK_ATTRIBUTE_ALWAYS_INLINE __attribute__((__always_inline__))
#define __SIZEOF_WINT_T__ 4
#define PTHREAD_COND_INITIALIZER { { 0, 0, 0, 0, 0, (void *) 0, 0, 0 } }
#define _FUNCTEXCEPT_H 1
#define __NTH(fct) __LEAF_ATTR fct throw ()
#define _GLIBCXX_IOS 1
#define __PID_T_TYPE __S32_TYPE
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define MPI_LONG_INT ((MPI_Datatype)0x8c000002)
#define HAVE_CCTK_REAL16 1
#define _GLIBCXX_X86_RDRAND 1
#define FP_NORMAL 4
#define _STL_RAW_STORAGE_ITERATOR_H 1
#define _BITS_TIMEX_H 1
#define CCTK_FILEVERSION(file) const char *CCTKi_version_ ##file (void); const char *CCTKi_version_ ##file (void) { return (rcsid); }
#define MPI_T_PVAR_SESSION_NULL ((MPI_T_pvar_session)NULL)
#define _GLIBCXX_HAVE_LIMIT_FSIZE 1
#define _GLIBCXX_HAVE_ATAN2F 1
#define _GLIBCXX_HAVE_ATAN2L 1
#define _mm512_maskz_rsqrt28_pd(U,A) _mm512_maskz_rsqrt28_round_pd(U, A, _MM_FROUND_CUR_DIRECTION)
#define _SIDD_SWORD_OPS 0x03
#define _mm512_maskz_rsqrt28_ps(U,A) _mm512_maskz_rsqrt28_round_ps(U, A, _MM_FROUND_CUR_DIRECTION)
#define kfabs k8fabs
#define _CCTK_FACES_H_ 1
#define MPI_BXOR (MPI_Op)(0x5800000a)
#define __SIZEOF_POINTER__ 8
#define CCTK_SOCKLEN_T socklen_t
#define _DEFAULT_SOURCE 1
#define CCTK_PARAMETER__CARPETLIB__pad_to_cachelines PRIVATE_CARPETLIB_STRUCT.pad_to_cachelines
#define CCTK_LOOP2STR_ALL(name,cctki3_cctkGH_,i,j,imin,imax,cctki3_istr_) do { typedef int cctki3_loop2_all_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_ALL can only be used in 2 dimensions"); } CCTK_LOOP2STR(name ##_all, i,j, 0,0, cctki3_cctkGH->cctk_lsh[0], cctki3_cctkGH->cctk_lsh[1], cctki3_cctkGH->cctk_ash[0], cctki3_cctkGH->cctk_ash[1], imin,imax, (cctki3_istr_)) {
#define HAVE_ASSERT_H 1
#define MOD_OFFSET ADJ_OFFSET
#define DECLARE_CARPETLIB_C2F _DECLARE_CCTK_C2F
#define _GLIBCXX_HAVE_TANF 1
#define _BMIINTRIN_H_INCLUDED 
#define CCTK_ARRANGEMENTSTRING "Carpet"
#define CCTK_PARAMETER__IO__out_xline_y RESTRICTED_IO_STRUCT.out_xline_y
#define CCTK_PARAMETER__IO__out_xline_z RESTRICTED_IO_STRUCT.out_xline_z
#define _STL_MULTIMAP_H 1
#define ETIMEDOUT 110
#define STRINGIFY1(x) #x
#define SCHED_OTHER 0
#define _MM_PICK_OUT_PS(X,N) _mm_insert_ps (_mm_setzero_ps (), (X), _MM_MK_INSERTPS_NDX ((N), 0, 0x0e))
#define MPIR_CXX_DOUBLE_COMPLEX 0x4c001035
#define _GLIBCXX_USE_C99_FENV_TR1 1
#define MPI_WTIME_IS_GLOBAL 0x64400007
#define CCTK_PARAMETER__IO__out_zline_y RESTRICTED_IO_STRUCT.out_zline_y
#define __END_DECLS }
#define FP_ILOGB0 (-2147483647 - 1)
#define vec8_elt0(x) (_mm_cvtsd_f64(x))
#define __CONCAT(x,y) x ## y
#define MPIU_DLL_SPEC 
#define _STL_STACK_H 1
#define __STDC_HOSTED__ 1
#define _ALLOCA_H 1
#define CCTK_LOOP3STR_INT(name,cctki3_cctkGH_,i,j,k,imin,imax,cctki3_istr_) do { typedef int cctki3_loop3_int_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_INT can only be used in 3 dimensions"); } CCTK_INT cctki3_bndsize [6]; CCTK_INT cctki3_is_ghostbnd[6]; CCTK_INT cctki3_is_symbnd [6]; CCTK_INT cctki3_is_physbnd [6]; _Pragma("omp single copyprivate(cctki3_bndsize)") GetBoundarySizesAndTypes (cctki3_cctkGH, 6, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP3STR_INTERIOR(name ##_int, cctki3_cctkGH, i,j,k, cctki3_bndsize[0],cctki3_bndsize[2],cctki3_bndsize[4], cctki3_bndsize[1],cctki3_bndsize[3],cctki3_bndsize[5], imin,imax, (cctki3_istr_)) {
#define k8neg(x) (_mm_xor_pd(x,k8sign_mask))
#define _bit_scan_reverse(a) __bsrd(a)
#define MPI_COMM_WORLD ((MPI_Comm)0x44000000)
#define MPI_T_ERR_MEMORY 59
#define __SLONG32_TYPE int
#define _SYS_SELECT_H 1
#define _IO_LINE_BUF 0x200
#define DECLARE_CCTK_ARGUMENTS DECLARE_CARPETLIB_CARGUMENTS
#define _CMP_LT_OQ 0x11
#define _CMP_LT_OS 0x01
#define k4sub(x,y) (_mm_sub_ps(x,y))
#define PRIVATE_TIMERS_STRUCT timerspriv_
#define CCTK_PARAMETER__IO__out_every RESTRICTED_IO_STRUCT.out_every
#define MPIR_ERRORS_THROW_EXCEPTIONS ((MPI_Errhandler)0x54000002)
#define __LC_TELEPHONE 10
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define EINTR 4
#define _GLIBCXX_C_LOCALE_GNU 1
#define STA_CLOCKERR 0x1000
#define _popcnt32(a) __popcntd(a)
#define _IO_EOF_SEEN 0x10
#define ECHILD 10
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define _GLIBCXX_HAVE_ISNANL 1
#define MPIR_ARGUNUSED __attribute__((unused))
#define L_tmpnam 20
#define MPI_Errhandler_c2f(errhandler) (MPI_Fint)(errhandler)
#define M_LOG2El 1.442695040888963407359924681001892137L
#define _OVERLOADABLE_INITIALISE(call,dummy_prefix,name) __OVERLOADABLE_INITIALISE(call, dummy_prefix, name)
#define _CCTK_ARCHDEFS_H_ 
#define TMP_MAX 238328
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define __need_clock_t 
#define _SHARED_PTR_H 1
#define ___int_wchar_t_h 
#define _mm512_rcp28_pd(A) _mm512_rcp28_round_pd(A, _MM_FROUND_CUR_DIRECTION)
#define __LDBL_MIN__ 3.36210314311209350626e-4932L
#define DECLARE_CCTK_FUNCTIONS DECLARE_CARPETLIB_FUNCTIONS
#define _popcnt64(a) __popcntq(a)
#define MPI_INFO_NULL ((MPI_Info)0x1c000000)
#define HAVE_CCTK_CXX_RANGE_BASED_FOR 1
#define CHECKPOINT dist::checkpoint(__FILE__, __LINE__)
#define _GLIBCXX_MAKE_MOVE_IF_NOEXCEPT_ITERATOR(_Iter) std::__make_move_if_noexcept_iterator(_Iter)
#define _GLIBCXX_USE_CLOCK_REALTIME 1
#define CCTK_CXX_ISNAN std::isnan
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define _WCHAR_T_ 
#define _rdpmc(a) __rdpmc(a)
#define EPERM 1
#define _STDDEF_H 
#define EADV 68
#define MPI_UNSIGNED_LONG_LONG ((MPI_Datatype)0x4c000819)
#define MATH_ERRNO 1
#define __glibcxx_digits_b(T,B) (B - __glibcxx_signed_b (T,B))
#define __SIZEOF_PTRDIFF_T__ 8
#define HAVE_SIGNBIT 1
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define _EMMINTRIN_H_INCLUDED 
#define __MATHCALLX(function,suffix,args,attrib) __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define _IO_getc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _STL_BVECTOR_H 1
#define CCTK_ATTRIBUTE_ALIGNED(x) __attribute__((__aligned__(x)))
#define PMPI_Request_f2c(request) (MPI_Request)(request)
#define MPI_2INT ((MPI_Datatype)0x4c000816)
#define __UINT16_C(c) c
#define CCTK_REAL_PRECISION 8
#define STA_DEL 0x0020
#define __PTRDIFF_TYPE__ long int
#define HAVE_CCTK_STRING 1
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define MPI_TAG_UB 0x64400001
#define MPI_Request_c2f(request) (MPI_Fint)(request)
#define DECLARE_FUNCTION_2(fn) DECLARE_FUNCTION_2_RET(fn, T)
#define HAVE_MPI_DARRAY_SUBARRAY 
#define __restrict_arr 
#define STA_FREQHOLD 0x0080
#define HAVE_CCTK_DECLARED_TIMELEVELS 
#define _GLIBCXX_HAVE_SYS_UIO_H 1
#define __gnu_linux__ 1
#define _CCTK_FILE_H_ 
#define SEEK_SET 0
#define _GLIBCXX_HAVE_SYS_TYPES_H 1
#define _GLIBCXX_GCC_GTHR_POSIX_H 
#define MPI_ERR_TAG 4
#define PRIVATE_IOJPEG_STRUCT iojpegpriv_
#define HAVE_CCTK_CXX_ATTRIBUTE_ALIGNED 1
#define __has_include_next(STR) __has_include_next__(STR)
#define _GLIBCXX_USE_LFS 1
#define __FLT_MAX_EXP__ 128
#define HAVE_CCTK_FPCLASSIFY HAVE_CCTK_CXX_FPCLASSIFY
#define CCTK_BUILD_CPU "x86_64"
#define PMPI_Info_f2c(info) (MPI_Info)(info)
#define __UINT_FAST32_TYPE__ long unsigned int
#define PASS_REFERENCE(var,level) CCTKARGNUM_ ##var >= 0 ? GH->data[CCTKARGNUM_ ##var][level] : 0
#define HAVE_VA_COPY 1
#define __glibcxx_requires_cond(_Cond,_Msg) 
#define _GLIBCXX_RANDOM 1
#define CCTK_MALLOC(s) CCTKi_Malloc(s,__LINE__,__FILE__)
#define _SIDD_LEAST_SIGNIFICANT 0x00
#define _GLIBCXX_HAVE_LOCALE_H 1
#define ENOSR 63
#define __USE_ISOC11 1
#define _REGEX_H 1
#define _GLIBCXX_HAVE_FABSF 1
#define _GLIBCXX_HAVE_FABSL 1
#define CARPETLIB_CARGUMENTS cGH *cctkGH
#define CCTK_PARAMETER__IO__out_xzplane_y RESTRICTED_IO_STRUCT.out_xzplane_y
#define __glibcxx_class_requires4(_a,_b,_c,_d,_e) 
#define MPI_TYPECLASS_COMPLEX 3
#define CCTK_MEMBER_ATTRIBUTE_NOINLINE __attribute__((__noinline__))
#define CCTK_LOOP4_INTBND(name,cctki3_cctkGH_,i,j,k,l,ni,nj,nk,nl) CCTK_LOOP4STR_INTBND(name, (cctki3_cctkGH_), i,j,k,l, ni,nj,nk,nl, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define RESTRICTED_SPACEMASK_STRUCT spacemaskrest_
#define CCTK_REAL CCTK_REAL8
#define CCTK_PARAMETER__CARPETLIB__check_communication_schedule PRIVATE_CARPETLIB_STRUCT.check_communication_schedule
#define MPI_BOTTOM (void *)0
#define _mm_rcp28_sd(A,B) __builtin_ia32_rcp28sd_round(B, A, _MM_FROUND_CUR_DIRECTION)
#define MPI_ERR_INFO_VALUE 30
#define _T_PTRDIFF 
#define CCTK_LOOP3STR_BND(name,cctki3_cctkGH_,i,j,k,ni,nj,nk,imin,imax,cctki3_istr_) do { typedef int cctki3_loop3_bnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_BND can only be used in 3 dimensions"); } CCTK_INT cctki3_bndsize [6]; CCTK_INT cctki3_is_ghostbnd[6]; CCTK_INT cctki3_is_symbnd [6]; CCTK_INT cctki3_is_physbnd [6]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 6, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP3STR_BOUNDARIES(name ##_bnd, cctki3_cctkGH, i,j,k, ni,nj,nk, cctki3_bndsize[0],cctki3_bndsize[2],cctki3_bndsize[4], cctki3_bndsize[1],cctki3_bndsize[3],cctki3_bndsize[5], cctki3_is_physbnd[0],cctki3_is_physbnd[2],cctki3_is_physbnd[4], cctki3_is_physbnd[1],cctki3_is_physbnd[3],cctki3_is_physbnd[5], imin,imax, (cctki3_istr_)) {
#define MPI_DOUBLE_INT ((MPI_Datatype)0x8c000001)
#define UINT_LEAST8_MAX (255)
#define CLONE_FILES 0x00000400
#define DECLARE_MEMBER_OPERATOR_0(fn,op) vect fn() const { vect r; for (int d = 0; d < D; ++d) r[d] = op elt[d]; return r; }
#define __cpp_delegating_constructors 200604
#define MPI_SIMILAR 2
#define __timespec_defined 1
#define L_ctermid 9
#define MPI_ERR_LOCKTYPE 47
#define offsetof(TYPE,MEMBER) ((size_t) & ((TYPE *)0)->MEMBER)
#define _MM_ROUND_NEAREST 0x0000
#define MPIX_ERR_PROC_FAILED_PENDING MPICH_ERR_FIRST_MPIX+2
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define assert_perror(errnum) (!(errnum) ? __ASSERT_VOID_CAST (0) : __assert_perror_fail ((errnum), __FILE__, __LINE__, __ASSERT_FUNCTION))
#define MPI_MODE_RDWR 8
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define _GLIBCXX_HAVE_SYS_SYSINFO_H 1
#define CCTK_ENDLOOP1STR_INTBOUNDARIES(name) } CCTK_ENDLOOP1STR_NORMAL(name ##_intboundaries); } } typedef cctki2_loop1_intboundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define MPI_MAX (MPI_Op)(0x58000001)
#define __cpp_rtti 199711
#define _GLIBCXX_USE_CONSTEXPR constexpr
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define HAVE_VECTOR 1
#define _GLIBCXX_RES_LIMITS 1
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define SEEK_CUR 1
#define ELNRNG 48
#define __defined_schedparam 1
#define _CMP_NGE_US 0x09
#define CCTK_LOOP2_NORMAL(name,i,j,ni,nj,cctki0_idir_,cctki0_jdir_,cctki0_imin_,cctki0_jmin_,cctki0_imax_,cctki0_jmax_,cctki0_iash_,cctki0_jash_) CCTK_LOOP2STR_NORMAL(name, i,j, ni,nj, (cctki0_idir_),(cctki0_jdir_), (cctki0_imin_),(cctki0_jmin_), (cctki0_imax_),(cctki0_jmax_), (cctki0_iash_),(cctki0_jash_), cctki0_dummy_imin,cctki0_dummy_imax, 1)
#define DECLARE_CARPETLIB_PRIVATE_C2F 
#define FP_INFINITE 1
#define k4add(x,y) (_mm_add_ps(x,y))
#define _MM_EXTRACT_FLOAT(D,S,N) { (D) = __builtin_ia32_vec_ext_v4sf ((__v4sf)(S), (N)); }
#define _LIBGOMP_OMP_LOCK_DEFINED 1
#define _GLIBCXX_NAMESPACE_LDBL 
#define __USE_ISOC95 1
#define _TIME_H 1
#define __USE_ISOC99 1
#define _GLIBCXX_HAVE_WCHAR_H 1
#define __UINT16_TYPE__ short unsigned int
#define MPI_TYPECLASS_INTEGER 2
#define MPI_Win_c2f(win) (MPI_Fint)(win)
#define __GTHREAD_RECURSIVE_MUTEX_INIT PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP
#define __CLOCKID_T_TYPE __S32_TYPE
#define CCTK_ERROR_INTERP_GHOST_SIZE_TOO_SMALL (-1001)
#define _GLIBCXX_HAVE_ICONV 1
#define MPIO_REQUEST_NULL ((MPIO_Request) 0)
#define MOD_FREQUENCY ADJ_FREQUENCY
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define __DBL_MAX__ double(1.79769313486231570815e+308L)
#define CCTK_REAL4_TYPE float
#define CCTK_STEERABLE_NEVER 200
#define CCTK_LOOP3_INTBOUNDARIES(name,cctki2_cctkGH_,i,j,k,ni,nj,nk,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_) CCTK_LOOP3STR_INTBOUNDARIES(name, (cctki2_cctkGH_), i,j,k, ni,nj,nk, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_), (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_), (cctki2_ibboxlo_),(cctki2_jbboxlo_),(cctki2_kbboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxhi_),(cctki2_kbboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define CCTK_BUILD_OS "linux-gnu"
#define _GLIBCXX_STDIO_SEEK_CUR 1
#define CCTK_INT CCTK_INT4
#define __cpp_raw_strings 200710
#define _mm512_mask_rcp28_pd(W,U,A) _mm512_mask_rcp28_round_pd(W, U, A, _MM_FROUND_CUR_DIRECTION)
#define __DBL_HAS_INFINITY__ 1
#define _GLIBCXX_STDIO_EOF -1
#define CCTK_ENDLOOP3STR_INTBND(name) } CCTK_ENDLOOP3STR_INTBOUNDARIES(name ##_intbnd); typedef cctki3_loop3_intbnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _CCTK_SYNC_H_ 
#define PMPI_Comm_c2f(comm) (MPI_Fint)(comm)
#define MPI_MODE_NOSTORE 2048
#define HAVE_SYS_IOCTL_H 1
#define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_NAMESPACE_LDBL
#define __USE_LARGEFILE 1
#define CCTK_PARAMETER__IO__checkpoint_ID RESTRICTED_IO_STRUCT.checkpoint_ID
#define __glibcxx_requires_subscript(_N) 
#define __SIZEOF_FLOAT__ 4
#define __USE_XOPEN 1
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define stdin stdin
#define _CARPETLIB_PARAMETERS_H_ 1
#define MPI_AINT_FMT_DEC_SPEC "%ld"
#define _mm512_setr4_epi32(e0,e1,e2,e3) _mm512_set4_epi32(e3,e2,e1,e0)
#define MPICH_ATTR_TYPE_TAG_LAYOUT_COMPATIBLE(type) 
#define RE_NO_SUB (RE_CONTEXT_INVALID_DUP << 1)
#define CCTK_CmplxNeg CCTK_Cmplx16Neg
#define __DEC32_MIN_EXP__ (-94)
#define SCHED_FIFO 1
#define CCTK_REAL4_VEC_SIZE 4
#define REGS_REALLOCATE 1
#define __END_NAMESPACE_C99 
#define CCTK_PARAMETER__IOUtil__out_dir RESTRICTED_IO_STRUCT.out_dir
#define _AVX512CDINTRIN_H_INCLUDED 
#define _ISOC11_SOURCE 1
#define _INITIALISE_CCTK_C2F 
#define _XABORT_CONFLICT (1 << 2)
#define CCTK_PARAMETER__IO__checkpoint_every RESTRICTED_IO_STRUCT.checkpoint_every
#define _GLIBCXX_HAVE_SINCOSF 1
#define _GLIBCXX_HAVE_SINCOSL 1
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define be32toh(x) __bswap_32 (x)
#define PMPI_Message_c2f(msg) ((MPI_Fint)(msg))
#define _XMMINTRIN_H_INCLUDED 
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define _IO_MAGIC 0xFBAD0000
#define CCTK_ATTRIBUTE_FORMAT(archetype,format,firstarg) __attribute__((__format__(archetype, format, firstarg)))
#define _mm512_setr4_epi64(e0,e1,e2,e3) _mm512_set4_epi64(e3,e2,e1,e0)
#define _AMMINTRIN_H_INCLUDED 
#define __INT_FAST16_TYPE__ long int
#define STRINGIFY(x) STRINGIFY1(x)
#define HAVE_CCTK_INT16 1
#define _GLIBCXX_HAVE_GETIPINFO 1
#define HAVE_SOCKLEN_T 1
#define _WCHAR_T_DEFINED_ 
#define __OVERLOADABLE_OVERLOADPROTO(call,prefix,dummy_prefix,name) int call ##Overload ##name(RETURN_TYPE (*func)(ARGUMENTS));
#define optional_argument 2
#define _SIDD_UNIT_MASK 0x40
#define TWO_FORTSTRING_ARG char *cctk_str1, char *cctk_str2, unsigned int cctk_strlen1, unsigned int cctk_strlen2
#define CCTK_ENDLOOP2_BOUNDARIES(name) CCTK_ENDLOOP2STR_BOUNDARIES(name)
#define _IO_FIXED 010000
#define MPI_SUM (MPI_Op)(0x58000003)
#define PRIVATE_SYMBASE_STRUCT symbasepriv_
#define __stub_fattach 
#define MPI_ERR_OTHER 15
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL
#define vec8_store_nta(p,x) (_mm_stream_pd(&(p),x))
#define INFINITY (__builtin_inff())
#define CCTK_ENDLOOP4STR_BOUNDARIES(name) } CCTK_ENDLOOP4STR_NORMAL(name ##_boundaries); } } } } } typedef cctki2_loop4_boundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define _GLIBCXX_HAVE_SYS_IPC_H 1
#define HAVE_COPYSIGN 1
#define _MM_FROUND_TO_ZERO 0x03
#define __DEPRECATED 1
#define SIZEOF_INT 4
#define MPI_MODE_UNIQUE_OPEN 32
#define __glibc_unlikely(cond) __builtin_expect ((cond), 0)
#define MPI_INTEGER ((MPI_Datatype)1275069467)
#define _GLIBCXX_EXTERN_TEMPLATE 1
#define MPIIMPL_HAVE_STATUS_SET_INFO 1
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_ADAPTIVE_NP, __PTHREAD_SPINS, { 0, 0 } } }
#define __DEC128_EPSILON__ 1E-33DL
#define MPI_WIN_CREATE_FLAVOR 0x66000007
#define CCTK_REAL4_VEC __m128
#define EREMOTE 66
#define _CMP_NLE_UQ 0x16
#define _CMP_NLE_US 0x06
#define MPI_Group_f2c(group) (MPI_Group)(group)
#define kfmin k8fmin
#define CCTK_LOOP1STR_ALL(name,cctki3_cctkGH_,i,imin,imax,cctki3_istr_) do { typedef int cctki3_loop1_all_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_ALL can only be used in 1 dimensions"); } CCTK_LOOP1STR(name ##_all, i, 0, cctki3_cctkGH->cctk_lsh[0], cctki3_cctkGH->cctk_ash[0], imin,imax, (cctki3_istr_)) {
#define _IO_LINKED 0x80
#define _mm512_mask_exp2a23_ps(W,U,A) _mm512_mask_exp2a23_round_ps(W, U, A, _MM_FROUND_CUR_DIRECTION)
#define ENOTSUP EOPNOTSUPP
#define __STDC_NO_THREADS__ 1
#define MPICH_ERR_LAST_MPIX MPICH_ERR_FIRST_MPIX+3
#define CCTK_LOOP2STR_INTBND(name,cctki3_cctkGH_,i,j,ni,nj,imin,imax,cctki3_istr_) do { typedef int cctki3_loop2_intbnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_INTBND can only be used in 2 dimensions"); } CCTK_INT cctki3_bndsize [4]; CCTK_INT cctki3_is_ghostbnd[4]; CCTK_INT cctki3_is_symbnd [4]; CCTK_INT cctki3_is_physbnd [4]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 4, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP2STR_INTBOUNDARIES(name ##_intbnd, cctki3_cctkGH, i,j, ni,nj, cctki3_bndsize[0],cctki3_bndsize[2], cctki3_bndsize[1],cctki3_bndsize[3], cctki3_is_physbnd[0],cctki3_is_physbnd[2], cctki3_is_physbnd[1],cctki3_is_physbnd[3], imin,imax, (cctki3_istr_)) {
#define CCTK_ENDLOOP4_INT(name) CCTK_ENDLOOP4STR_INT(name)
#define _IO_DELETE_DONT_CLOSE 0x40
#define vec_set vec8_set
#define _PTRDIFF_T_DECLARED 
#define MPI_BYTE ((MPI_Datatype)0x4c00010d)
#define PMPI_Op_c2f(op) (MPI_Fint)(op)
#define PARAMETER_STRING 702
#define CCTK_VARIABLE_COMPLEX16 142
#define __errordecl(name,msg) extern void name (void) __attribute__((__error__ (msg)))
#define RE_SYNTAX_ED RE_SYNTAX_POSIX_BASIC
#define STA_PLL 0x0001
#define __GNUG__ 5
#define _GLIBCXX_HAVE_ISINF 1
#define _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL 1
#define __SIZEOF_SIZE_T__ 8
#define __GLIBCXX__ 20150618
#define _WCHAR_T 
#define PTHREAD_MUTEX_INITIALIZER { { 0, 0, 0, 0, 0, __PTHREAD_SPINS, { 0, 0 } } }
#define CCTK_VARIABLE_COMPLEX32 143
#define _mm512_maskz_exp2a23_pd(U,A) _mm512_maskz_exp2a23_round_pd(U, A, _MM_FROUND_CUR_DIRECTION)
#define CCTK_LOOP2STR_INT(name,cctki3_cctkGH_,i,j,imin,imax,cctki3_istr_) do { typedef int cctki3_loop2_int_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_INT can only be used in 2 dimensions"); } CCTK_INT cctki3_bndsize [4]; CCTK_INT cctki3_is_ghostbnd[4]; CCTK_INT cctki3_is_symbnd [4]; CCTK_INT cctki3_is_physbnd [4]; _Pragma("omp single copyprivate(cctki3_bndsize)") GetBoundarySizesAndTypes (cctki3_cctkGH, 4, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP2STR_INTERIOR(name ##_int, cctki3_cctkGH, i,j, cctki3_bndsize[0],cctki3_bndsize[2], cctki3_bndsize[1],cctki3_bndsize[3], imin,imax, (cctki3_istr_)) {
#define __cpp_rvalue_reference 200610
#define MPI_C_FLOAT_COMPLEX ((MPI_Datatype)0x4c000840)
#define __RE_TRANSLATE_TYPE unsigned char *
#define __FD_ZERO(fdsp) do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&__FDS_BITS (fdsp)[0]) : "memory"); } while (0)
#define MPI_2DOUBLE_PRECISION ((MPI_Datatype)1275072547)
#define __cpp_nsdmi 200809
#define k4sign_mask (k4sign_mask_union.v)
#define _GLIBCXX_HAVE_INT64_T_LONG 1
#define PARAMETER_RECOVERY_IN 1
#define SIZE_MAX (18446744073709551615UL)
#define __NO_CTYPE 1
#define CCTK_DELTA_SPACE(x) (cctk_delta_space[x]/cctk_levfac[x])
#define HAVE_BACKTRACE_SYMBOLS 1
#define MPI_INT64_T ((MPI_Datatype)0x4c00083a)
#define vec_elt0 vec8_elt0
#define UINT64_C(c) c ## UL
#define MPI_ERR_INFO_KEY 29
#define __LDBL_MIN_10_EXP__ (-4931)
#define _GCC_WCHAR_T 
#define _STL_NUMERIC_H 1
#define CCTK_VARIABLE_FN_POINTER CCTK_VARIABLE_FPOINTER
#define pthread_cleanup_push(routine,arg) do { __pthread_cleanup_class __clframe (routine, arg)
#define CCTK_ERROR_INTERP_COORD_NAN (-1004)
#define MPI_ERR_KEYVAL 48
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define _CCTK_MATH_H_ 
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define ADJ_TAI 0x0080
#define _GLIBCXX_IOSTREAM 1
#define _GLIBCXX_HOSTED 1
#define __GXX_ABI_VERSION 1008
#define MPI_AINT_FMT_HEX_SPEC "%lx"
#define __WTERMSIG(status) ((status) & 0x7f)
#define _GLIBCXX_HAS_GTHREADS 1
#define UINT_LEAST16_MAX (65535)
#define _GLIBCXX_SET 1
#define __MATH_DECLARE_LDOUBLE 1
#define _GLIBCXX_HAVE_ENOSTR 1
#define kadd k8add
#define __FD_CLR(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define _GLIBCXX_THROW_OR_ABORT(_EXC) (throw (_EXC))
#define HAVE_CCTK_BYTE 1
#define MPI_CXX_DOUBLE_COMPLEX ((MPI_Datatype)0x4c001035)
#define VECT_HH 
#define M_LOG2E 1.4426950408889634074
#define ELIBEXEC 83
#define _GLIBCXX_FUNCTIONAL 1
#define _XABORT_CODE(x) (((x) >> 24) & 0xFF)
#define CCTK_LOOP4_INTERIOR(name,cctki2_cctkGH_,i,j,k,l,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_lblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_lbhi_) CCTK_LOOP4STR_INTERIOR(name, (cctki2_cctkGH_), i,j,k,l, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_),(cctki2_lblo_), (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_),(cctki2_lbhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define MPI_MODE_DELETE_ON_CLOSE 16
#define UINT32_MAX (4294967295U)
#define __FD_ELT(d) ((d) / __NFDBITS)
#define MPI_LONG ((MPI_Datatype)0x4c000807)
#define WNOHANG 1
#define __cpp_lib_result_of_sfinae 201210
#define REG_NOSUB (REG_NEWLINE << 1)
#define _GLIBCXX_BEGIN_NAMESPACE_CONTAINER 
#define MPI_ERR_FILE_EXISTS 25
#define __OVERLOADABLE_DUMMY(prefix,dummy_prefix,name) RETURN_TYPE dummy_prefix ##name(ARGUMENTS) { USE_ARGUMENTS fprintf(stderr, "Dummy %s%s called.\n", #dummy_prefix,#name); return 0; }
#define __exctype_l(name) extern int name (int, __locale_t) __THROW
#define ENOCSI 50
#define _GLIBCXX_HAVE_FINITEL 1
#define MPI_T_ERR_PVAR_NO_STARTSTOP 70
#define RE_CONTEXT_INDEP_OPS (RE_CONTEXT_INDEP_ANCHORS << 1)
#define _TMMINTRIN_H_INCLUDED 
#define STA_PPSSIGNAL 0x0100
#define _LOCALE_FWD_H 1
#define LC_MEASUREMENT __LC_MEASUREMENT
#define CCTK_LOOP4_ALL(name,cctki3_cctkGH_,i,j,k,l) CCTK_LOOP4STR_ALL(name, (cctki3_cctkGH_), i,j,k,l, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define __ATOMIC_CONSUME 1
#define CCODE 1
#define __DBL_MIN__ double(2.22507385850720138309e-308L)
#define RE_SYNTAX_GREP (RE_BK_PLUS_QM | RE_CHAR_CLASSES | RE_HAT_LISTS_NOT_NEWLINE | RE_INTERVALS | RE_NEWLINE_ALT)
#define EADDRINUSE 98
#define CCTK_PARAMETER__CARPETLIB__use_ipm_timing_regions PRIVATE_CARPETLIB_STRUCT.use_ipm_timing_regions
#define _GLIBCXX_HAVE_SYS_SEM_H 1
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define _STDDEF_H_ 
#define k4fnabs(x) (_mm_or_ps(x,k4sign_mask))
#define __cpu_set_t_defined 
#define CCTK_RegisterReduceArraysGloballyOperator(a) CCTKi_RegisterReduceArraysGloballyOperator(CCTK_THORNSTRING,a)
#define MPIIMPL_HAVE_MPI_GREQUEST 1
#define _GLIBCXX_HAVE_ENOLINK 1
#define _STL_SET_H 1
#define __WCOREFLAG 0x80
#define _GLIBCXX_ATOMIC_LOCK_FREE_H 1
#define MPI_WIN_NULL ((MPI_Win)0x20000000)
#define _CCTK_COORD_H_ 1
#define TWO_FORTSTRINGS_ARGS char *cctk_str1, char *cctk_str2, unsigned int cctk_strlen1, unsigned int cctk_strlen2
#define _mm_test_all_ones(V) _mm_testc_si128 ((V), _mm_cmpeq_epi32 ((V), (V)))
#define MPI_ERR_COUNT 2
#define _LARGEFILE64_SOURCE 1
#define __MODE_T_TYPE __U32_TYPE
#define RESTRICTED_GRID_STRUCT gridrest_
#define EISDIR 21
#define _GLIBCXX_HAVE_STRINGS_H 1
#define __nonnull(params) __attribute__ ((__nonnull__ params))
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define HAVE_TIME_GETTIMEOFDAY 1
#define CCTK_ATTRIBUTE_HOT __attribute__((__hot__))
#define __GTHREAD_TIME_INIT {0,0}
#define CCTK_ENDLOOP1_BND(name) CCTK_ENDLOOP1STR_BND(name)
#define MPI_SEEK_CUR 602
#define _IOS_ATEND 4
#define HAVE_CCTK_CXX_ISFINITE 1
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define INT_LEAST8_MAX (127)
#define LC_MONETARY __LC_MONETARY
#define HAVE_CCTK_POINTER_TO_CONST 1
#define MPI_COMM_NULL_DELETE_FN ((MPI_Comm_delete_attr_function*)0)
#define _BASIC_STRING_TCC 1
#define MPI_UINT32_T ((MPI_Datatype)0x4c00043d)
#define CCTK_PARAMETER__IO__out_xyplane_z RESTRICTED_IO_STRUCT.out_xyplane_z
#define _GLIBCXX_NUM_UNICODE_FACETS 2
#define TLOSS 5
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define CCTK_LOOP3_INTBND(name,cctki3_cctkGH_,i,j,k,ni,nj,nk) CCTK_LOOP3STR_INTBND(name, (cctki3_cctkGH_), i,j,k, ni,nj,nk, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define TWO_FORTSTRING_PTR(arg1,arg2) char *arg1 = cctk_str1; char *arg2 = cctk_str2;
#define MPI_ERR_RMA_CONFLICT 49
#define SRCOFF3(i,j,k) offset3(i, j, k, srciext, srcjext, srckext)
#define __DEC128_MIN__ 1E-6143DL
#define HAVE_ISNORMAL 1
#define CCTK_PARAMETER__IO__strict_io_parameter_check RESTRICTED_IO_STRUCT.strict_io_parameter_check
#define __glibcxx_requires_sorted_set(_First1,_Last1,_First2) 
#define _IOS_NOREPLACE 64
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX (2147483647)
#define HAVE_CCTK_CXX_AUTO_SPECIFIER 1
#define _ALIGNED_BUFFER_H 1
#define M_SQRT1_2l 0.707106781186547524400844362104849039L
#define HAVE_CAPABILITY_Vectors 1
#define CCTK_ENDLOOP3_INTBOUNDARIES(name) CCTK_ENDLOOP3STR_INTBOUNDARIES(name)
#define CCTK_PARAMETER__IO__out_dt RESTRICTED_IO_STRUCT.out_dt
#define _IO_TIED_PUT_GET 0x400
#define vec8_store_nta_partial_hi(p,x,n) (_mm_storeh_pd(&(p)+1,x))
#define __attribute_pure__ __attribute__ ((__pure__))
#define HAVE_CCTK_CXX_SIGNBIT 1
#define EDEADLOCK EDEADLK
#define _GLIBCXX_HAVE_SINCOS 1
#define __glibcxx_requires_sorted(_First,_Last) 
#define __SLONGWORD_TYPE long int
#define __NO_INLINE__ 1
#define CCTK_PARAMETER__IO__filereader_ID_vars RESTRICTED_IO_STRUCT.filereader_ID_vars
#define __warndecl(name,msg) extern void name (void) __attribute__((__warning__ (msg)))
#define MPIIMPL_HAVE_MPI_INFO 1
#define MPI_ERR_RMA_FLAVOR 58
#define _WCTYPE_H 1
#define CCTK_PARAMETER__CARPETLIB__verbose PRIVATE_CARPETLIB_STRUCT.verbose
#define MPI_INTEGER8 ((MPI_Datatype)0x4c000831)
#define MPI_ERR_RMA_SHARED 57
#define _CCTK_MALLOC_H_ 
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define MPI_Group_c2f(group) (MPI_Fint)(group)
#define _GLIBCXX_HAVE_COMPLEX_H 1
#define INT_LEAST8_MIN (-128)
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define _GLIBCXX_HAVE_HYPOT 1
#define _MM_FROUND_CEIL (_MM_FROUND_TO_POS_INF | _MM_FROUND_RAISE_EXC)
#define OVERLOADABLE_DUMMY(name) _OVERLOADABLE_DUMMY(OVERLOADABLE_PREFIX, OVERLOADABLE_DUMMY_PREFIX, name)
#define errno (*__errno_location ())
#define vec8_store_nta_partial_lo(p,x,n) (_mm_storel_pd(&(p),x))
#define _GLIBCXX_HAVE_INT64_T 1
#define PRIVATE_CARPETINTERP2_STRUCT carpetinterp2priv_
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define REDUCTION_ARRAYS_GLOBALLY_OPERATOR_REGISTER_ARGLIST const cGH *GH, int dest_proc, int local_reduce_handle, int param_table_handle, int N_input_arrays, const void *const input_arrays[], int N_dims, const CCTK_INT input_array_dims[], const CCTK_INT input_array_type_codes[], int M_output_values, const CCTK_INT output_value_type_codes[], void* const output_values[]
#define _PTRDIFF_T_ 
#define _GLIBCXX_HAVE_TANHF 1
#define _GLIBCXX_HAVE_TANHL 1
#define pthread_cleanup_pop_restore_np(execute) __clframe.__restore (); __clframe.__setdoit (execute); } while (0)
#define _GLIBCXX_USE_DECIMAL_FLOAT 1
#define CCTK_LOOP3STR(name,i,j,k,cctki1_imin_,cctki1_jmin_,cctki1_kmin_,cctki1_imax_,cctki1_jmax_,cctki1_kmax_,cctki1_iash_,cctki1_jash_,cctki1_kash_,imin,imax,cctki1_istr_) CCTK_LOOP3STR_NORMAL(name, i,j,k, cctki1_ni,cctki1_nj,cctki1_nk, 0,0,0, (cctki1_imin_),(cctki1_jmin_),(cctki1_kmin_), (cctki1_imax_),(cctki1_jmax_),(cctki1_kmax_), (cctki1_iash_),(cctki1_jash_),(cctki1_kash_), imin,imax, (cctki1_istr_))
#define MPICH_HAS_C2F 1
#define _ISwbit(bit) ((bit) < 8 ? (int) ((1UL << (bit)) << 24) : ((bit) < 16 ? (int) ((1UL << (bit)) << 8) : ((bit) < 24 ? (int) ((1UL << (bit)) >> 8) : (int) ((1UL << (bit)) >> 24))))
#define MPI_THREAD_SINGLE 0
#define HAVE_CCTK_CXX_BUILTIN_ASSUME_ALIGNED 1
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define k4fabs(x) (_mm_and_ps(x,k4abs_mask))
#define _IO_file_flags _flags
#define CCTK_PUBLIC 503
#define __USE_XOPEN2K8 1
#define CCTK_ISNAN CCTK_CXX_ISNAN
#define HUGE 3.40282347e+38F
#define CCTK_LOOP4STR(name,i,j,k,l,cctki1_imin_,cctki1_jmin_,cctki1_kmin_,cctki1_lmin_,cctki1_imax_,cctki1_jmax_,cctki1_kmax_,cctki1_lmax_,cctki1_iash_,cctki1_jash_,cctki1_kash_,cctki1_lash_,imin,imax,cctki1_istr_) CCTK_LOOP4STR_NORMAL(name, i,j,k,l, cctki1_ni,cctki1_nj,cctki1_nk,cctki1_nl, 0,0,0,0, (cctki1_imin_),(cctki1_jmin_),(cctki1_kmin_),(cctki1_lmin_), (cctki1_imax_),(cctki1_jmax_),(cctki1_kmax_),(cctki1_lmax_), (cctki1_iash_),(cctki1_jash_),(cctki1_kash_),(cctki1_lash_), imin,imax, (cctki1_istr_))
#define _GLIBCXX_THROW(_EXC) 
#define MPIO_USES_MPI_REQUEST 
#define CCTK_ARRANGEMENT Carpet
#define __catch(X) catch(X)
#define DECLARE_CCTK_FARGUMENTS DECLARE_CARPETLIB_FARGUMENTS
#define __STRING(x) #x
#define CCTK_LOOP3STR_INTERIOR(name,cctki2_cctkGH_,i,j,k,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop3_interior_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_INTERIOR can only be used in 3 dimensions"); } CCTK_LOOP3STR(name ##_interior, i,j,k, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_), cctki2_cctkGH->cctk_lsh[0]-(cctki2_ibhi_), cctki2_cctkGH->cctk_lsh[1]-(cctki2_jbhi_), cctki2_cctkGH->cctk_lsh[2]-(cctki2_kbhi_), cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], cctki2_cctkGH->cctk_ash[2], imin,imax, (cctki2_istr_)) {
#define _PMMINTRIN_H_INCLUDED 
#define _GLIBCXX_USE_NOEXCEPT noexcept
#define CCTK_VARIABLE_POINTER_TO_CONST 161
#define _PCOMMITINTRIN_H_INCLUDED 
#define __INO_T_TYPE __SYSCALL_ULONG_TYPE
#define CCTK_EQUALS(a,b) (CCTK_Equals((a),(b)))
#define CCTK_ENDLOOP4STR_INTBOUNDARIES(name) } CCTK_ENDLOOP4STR_NORMAL(name ##_intboundaries); } } } } } typedef cctki2_loop4_intboundaries_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define __LC_ALL 6
#define __ssize_t_defined 
#define EBADFD 77
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define PARAMETER_RECOVERY_PRE 0
#define _GLIBCXX_HAVE_EPERM 1
#define RESTRICTED_CARPETREGRID_STRUCT carpetregridrest_
#define RE_SYNTAX_EMACS 0
#define HAVE_CCTK_CXX_STATIC_ASSERT 1
#define MPI_GROUP_EMPTY ((MPI_Group)0x48000000)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define _MM_EXCEPT_DENORM 0x0002
#define __SUSECONDS_T_TYPE __SYSCALL_SLONG_TYPE
#define _MM_MASK_OVERFLOW 0x0400
#define _SIDD_UBYTE_OPS 0x00
#define MPI_MAX_LIBRARY_VERSION_STRING 8192
#define __NLINK_T_TYPE __SYSCALL_ULONG_TYPE
#define SIG_ATOMIC_MAX (2147483647)
#define __need_clockid_t 
#define _GLIBCXX_BEGIN_NAMESPACE_LDBL 
#define MPI_ARGV_NULL (char **)0
#define __nlink_t_defined 
#define CCTK_LOOP4_INTBOUNDARIES(name,cctki2_cctkGH_,i,j,k,l,ni,nj,nk,nl,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_lblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_lbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_lbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_,cctki2_lbboxhi_) CCTK_LOOP4STR_INTBOUNDARIES(name, (cctki2_cctkGH_), i,j,k,l, ni,nj,nk,nl, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_),(cctki2_lblo_), (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_),(cctki2_lbhi_), (cctki2_ibboxlo_),(cctki2_jbboxlo_),(cctki2_kbboxlo_),(cctki2_lbboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxhi_),(cctki2_kbboxhi_),(cctki2_lbboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define _GLIBCXX_HAVE_ISINFL 1
#define CCTK_LOOP3_BND(name,cctki3_cctkGH_,i,j,k,ni,nj,nk) CCTK_LOOP3STR_BND(name, (cctki3_cctkGH_), i,j,k, ni,nj,nk, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define SCOPE_NOT_GLOBAL 904
#define _STL_TREE_H 1
#define _MM_ROUND_UP 0x4000
#define CCTK_PARAMETER__IO__filereader_ID_dir RESTRICTED_IO_STRUCT.filereader_ID_dir
#define _MATH_H 1
#define __LC_ADDRESS 9
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define _IO_SHOWPOINT 0400
#define INT32_MAX (2147483647)
#define _CCTK_TIMERS_H_ 
#define PARAMETER_FIRST 701
#define OVERLOADABLE_DUMMYPROTOTYPE(name) _OVERLOADABLE_DUMMYPROTOTYPE(OVERLOADABLE_PREFIX, OVERLOADABLE_DUMMY_PREFIX, name)
#define MPI_ERR_TRUNCATE 14
#define MPI_INTEGER16 ((MPI_Datatype)MPI_DATATYPE_NULL)
#define _GLIBCXX_ARRAY 1
#define _IO_IN_BACKUP 0x100
#define CCTK_PARAMETER__CARPETLIB__support_staggered_operators RESTRICTED_CARPETLIB_STRUCT.support_staggered_operators
#define __STDC_IEC_559_COMPLEX__ 1
#define MPI_INFO_ENV ((MPI_Info)0x5c000001)
#define CCTK_ATTRIBUTE_RETURNS_NONNULL __attribute__((__returns_nonnull__))
#define _mm512_setr_epi32(e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12,e13,e14,e15) _mm512_set_epi32(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0)
#define _GLIBCXX_NOEXCEPT noexcept
#define CCTK_ISFINITE CCTK_CXX_ISFINITE
#define _GLIBCXX_HAVE_WCSTOF 1
#define CCTK_INT4_TYPE int
#define _GLIBCXX_WEAK_DEFINITION 
#define _GLIBCXX_FAST_MATH 0
#define __error_t_defined 1
#define RE_NEWLINE_ALT (RE_LIMITED_OPS << 1)
#define MPI_LB ((MPI_Datatype)0x4c000010)
#define __DEC128_MIN_EXP__ (-6142)
#define _GCC_SIZE_T 
#define _GLIBCXX_HAVE_ENOSR 1
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define CCTK_LOOP4(name,i,j,k,l,cctki1_imin_,cctki1_jmin_,cctki1_kmin_,cctki1_lmin_,cctki1_imax_,cctki1_jmax_,cctki1_kmax_,cctki1_lmax_,cctki1_iash_,cctki1_jash_,cctki1_kash_,cctki1_lash_) CCTK_LOOP4STR(name, i,j,k,l, (cctki1_imin_),(cctki1_jmin_),(cctki1_kmin_),(cctki1_lmin_), (cctki1_imax_),(cctki1_jmax_),(cctki1_kmax_),(cctki1_lmax_), (cctki1_iash_),(cctki1_jash_),(cctki1_kash_),(cctki1_lash_), cctki1_dummy_imin,cctki1_dummy_imax, 1)
#define MPI_C_DOUBLE_COMPLEX ((MPI_Datatype)0x4c001041)
#define _GLIBCXX_SYSTEM_ERROR 1
#define FP_ILOGBNAN (-2147483647 - 1)
#define _mm512_setr_epi64(e0,e1,e2,e3,e4,e5,e6,e7) _mm512_set_epi64(e7,e6,e5,e4,e3,e2,e1,e0)
#define _GXX_NULLPTR_T 
#define M_PI_2l 1.570796326794896619231321691639751442L
#define ENOKEY 126
#define __INT_FAST32_TYPE__ long int
#define _BITS_OPT_RANDOM_H 1
#define _GLIBCXX_HAVE_EBADMSG 1
#define HAVE_SYS_STAT_H 1
#define __GTHREAD_MUTEX_INIT PTHREAD_MUTEX_INITIALIZER
#define MPIX_CALLOBJ(_obj,fnc) { int err = fnc; if (err) { (_obj).Call_errhandler( err ); }}
#define MPIO_Test MPI_Test
#define _CCTK_BANNER_H_ 
#define MPICH_IGNORE_CXX_SEEK 1
#define _GLIBCXX_USE_C99_MATH_TR1 1
#define MPI_ERRORS_ARE_FATAL ((MPI_Errhandler)0x54000000)
#define _GLIBCXX_USE_C99_MATH 1
#define SIG_ATOMIC_MIN (-2147483647-1)
#define MPI_UNSIGNED_LONG ((MPI_Datatype)0x4c000808)
#define STA_PPSFREQ 0x0002
#define M_PI_4l 0.785398163397448309615660845819875721L
#define __UINT_FAST16_TYPE__ long unsigned int
#define _STL_HEAP_H 1
#define CCTK_RESTRICT CCTK_CXX_RESTRICT
#define kpow k8pow
#define CCTK_ENDLOOP4_INTERIOR(name) CCTK_ENDLOOP4STR_INTERIOR(name)
#define __FD_ZERO_STOS "stosq"
#define _IO_SKIPWS 01
#define ESHUTDOWN 108
#define __DEC64_MAX__ 9.999999999999999E384DD
#define CCTK_LOOP1STR_INT(name,cctki3_cctkGH_,i,imin,imax,cctki3_istr_) do { typedef int cctki3_loop1_int_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_INT can only be used in 1 dimensions"); } CCTK_INT cctki3_bndsize [2]; CCTK_INT cctki3_is_ghostbnd[2]; CCTK_INT cctki3_is_symbnd [2]; CCTK_INT cctki3_is_physbnd [2]; _Pragma("omp single copyprivate(cctki3_bndsize)") GetBoundarySizesAndTypes (cctki3_cctkGH, 2, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP1STR_INTERIOR(name ##_int, cctki3_cctkGH, i, cctki3_bndsize[0], cctki3_bndsize[1], imin,imax, (cctki3_istr_)) {
#define MPI_UNSIGNED_SHORT ((MPI_Datatype)0x4c000204)
#define HAVE_SYS_TIME_H 1
#define INT32_MIN (-2147483647-1)
#define _SKBINTREE_H_ 
#define _GLIBCXX_MOVE3(_Tp,_Up,_Vp) std::move(_Tp, _Up, _Vp)
#define CCTK_ALL_FACES 16383
#define __va_arg_pack_len() __builtin_va_arg_pack_len ()
#define __ULONGWORD_TYPE unsigned long int
#define _SIZE_T_DECLARED 
#define _CMP_GT_OQ 0x1e
#define _CMP_GT_OS 0x0e
#define ONE_FORTSTRING_ARG char *cctk_str1, unsigned int cctk_strlen1
#define _RANDOM_H 1
#define __INT8_TYPE__ signed char
#define _ALLOCATOR_H 1
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define __ELF__ 1
#define ENOMEDIUM 123
#define MPI_LONG_DOUBLE_INT ((MPI_Datatype)0x8c000004)
#define _SIDD_NEGATIVE_POLARITY 0x10
#define _CCTK_TYPES_H_ 
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define MPI_UB ((MPI_Datatype)0x4c000011)
#define CCTK_PARAMETER__IO__out_single_precision RESTRICTED_IO_STRUCT.out_single_precision
#define _BITS_BYTESWAP_H 1
#define MPI_ERR_BAD_FILE 22
#define __ID_T_TYPE __U32_TYPE
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define _MM_SHUFFLE(fp3,fp2,fp1,fp0) (((fp3) << 6) | ((fp2) << 4) | ((fp1) << 2) | (fp0))
#define _ASM_GENERIC_ERRNO_BASE_H 
#define _STL_FUNCTION_H 1
#define __PDP_ENDIAN 3412
#define M_2_PIl 0.636619772367581343075535053490057448L
#define __FLT_RADIX__ 2
#define _CCTK_TERMINATION_H_ 1
#define CCTK_ENDLOOP2STR_INTBND(name) } CCTK_ENDLOOP2STR_INTBOUNDARIES(name ##_intbnd); typedef cctki3_loop2_intbnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define RE_NO_BK_REFS (RE_NO_BK_PARENS << 1)
#define MPI_Request_f2c(request) (MPI_Request)(request)
#define __GNUC_RH_RELEASE__ 4
#define CCTK_VARIABLE_INT4 123
#define _IO_USER_BUF 1
#define CCTK_ENDLOOP2STR_INTERIOR(name) } CCTK_ENDLOOP2STR(name ##_interior); typedef cctki2_loop2_interior_ ##name cctki2_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while(0)
#define __LC_MESSAGES 5
#define _GETOPT_H 1
#define PMPI_Group_c2f(group) (MPI_Fint)(group)
#define MPI_NULL_DELETE_FN ((MPI_Delete_function *)0)
#define __long_double_t long double
#define PMPIO_Test PMPI_Test
#define CCTK_LOOP3STR_INTBOUNDARIES(name,cctki2_cctkGH_,i,j,k,ni,nj,nk,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_,imin,imax,cctki2_istr_) do { typedef int cctki2_loop3_intboundaries_ ##name; cGH const *restrict const cctki2_cctkGH = (cctki2_cctkGH_); if (cctki2_cctkGH->cctk_dim != 3) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP3_INTBOUNDARIES can only be used in 3 dimensions"); } const int cctki2_blo[] = { (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_) }; const int cctki2_bhi[] = { (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_) }; const int cctki2_bbox[] = { (cctki2_ibboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxlo_), (cctki2_jbboxhi_),(cctki2_kbboxlo_), (cctki2_kbboxhi_) }; const int cctki2_lsh[] = { cctki2_cctkGH->cctk_lsh[0],cctki2_cctkGH->cctk_lsh[1],cctki2_cctkGH->cctk_lsh[2] }; const int cctki2_istr CCTK_ATTRIBUTE_UNUSED = (cctki2_istr_); for (int cctki2_kdir=-1; cctki2_kdir<=+1; ++cctki2_kdir) { for (int cctki2_jdir=-1; cctki2_jdir<=+1; ++cctki2_jdir) { for (int cctki2_idir=-1; cctki2_idir<=+1; ++cctki2_idir) { const int cctki2_any_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 0) || (cctki2_idir>0 ? cctki2_bbox[1] : 0) || (cctki2_jdir<0 ? cctki2_bbox[2] : 0) || (cctki2_jdir>0 ? cctki2_bbox[3] : 0) || (cctki2_kdir<0 ? cctki2_bbox[4] : 0) || (cctki2_kdir>0 ? cctki2_bbox[5] : 0); const int cctki2_all_bbox = (cctki2_idir<0 ? cctki2_bbox[0] : 1) && (cctki2_idir>0 ? cctki2_bbox[1] : 1) && (cctki2_jdir<0 ? cctki2_bbox[2] : 1) && (cctki2_jdir>0 ? cctki2_bbox[3] : 1) && (cctki2_kdir<0 ? cctki2_bbox[4] : 1) && (cctki2_kdir>0 ? cctki2_bbox[5] : 1); if (cctki2_all_bbox && cctki2_any_bbox) { const int cctki2_bmin[] = { cctki2_idir<0 ? 0 : cctki2_idir==0 ? cctki2_blo[0] : cctki2_lsh[0] - cctki2_bhi[0], cctki2_jdir<0 ? 0 : cctki2_jdir==0 ? cctki2_blo[1] : cctki2_lsh[1] - cctki2_bhi[1], cctki2_kdir<0 ? 0 : cctki2_kdir==0 ? cctki2_blo[2] : cctki2_lsh[2] - cctki2_bhi[2], }; const int cctki2_bmax[] = { cctki2_idir<0 ? cctki2_blo[0] : cctki2_idir==0 ? cctki2_lsh[0] - cctki2_bhi[0] : cctki2_lsh[0], cctki2_jdir<0 ? cctki2_blo[1] : cctki2_jdir==0 ? cctki2_lsh[1] - cctki2_bhi[1] : cctki2_lsh[1], cctki2_kdir<0 ? cctki2_blo[2] : cctki2_kdir==0 ? cctki2_lsh[2] - cctki2_bhi[2] : cctki2_lsh[2], }; CCTK_LOOP3STR_NORMAL(name ##_intboundaries, i,j,k, ni,nj,nk, cctki2_idir,cctki2_jdir,cctki2_kdir, cctki2_bmin[0],cctki2_bmin[1],cctki2_bmin[2], cctki2_bmax[0],cctki2_bmax[1],cctki2_bmax[2], cctki2_cctkGH->cctk_ash[0], cctki2_cctkGH->cctk_ash[1], cctki2_cctkGH->cctk_ash[2], imin,imax, cctki2_istr) {
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#define UINT_FAST32_MAX (18446744073709551615UL)
#define MPI_MESSAGE_NO_PROC ((MPI_Message)0x6c000000)
#define CCTK_PARAMETER__IO__checkpoint_ID_file RESTRICTED_IO_STRUCT.checkpoint_ID_file
#define CLOCK_MONOTONIC_RAW 4
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define MPI_ERR_BASE 46
#define _ISOC95_SOURCE 1
#define _GLIBCXX_HAVE_DLFCN_H 1
#define _GLIBCXX_HAVE_LIMIT_RSS 1
#define _IO_IS_FILEBUF 0x2000
#define _GLIBCXX_USE_DUAL_ABI 1
#define EOVERFLOW 75
#define vec_loadu vec8_loadu
#define REGS_FIXED 2
#define M_LN10 2.30258509299404568402
#define __SIZEOF_PTHREAD_COND_T 48
#define CCTK_ENDLOOP4_NORMAL(name) CCTK_ENDLOOP4STR_NORMAL(name)
#define MPI_DUP_FN MPIR_Dup_fn
#define _WCHAR_T_H 
#define _GLIBCXX_CSTDIO 1
#define MPI_CXX_FLOAT_COMPLEX ((MPI_Datatype)0x4c000834)
#define CCTK_PARAMETER__CARPETLIB__poison_new_memory PRIVATE_CARPETLIB_STRUCT.poison_new_memory
#define _GLIBCXX_VISIBILITY(V) __attribute__ ((__visibility__ (#V)))
#define PMPI_Win_c2f(win) (MPI_Fint)(win)
#define RE_CHAR_CLASSES (RE_BK_PLUS_QM << 1)
#define HAVE_MPI_GREQUEST 1
#define _GLIBCXX_HAVE_COSF 1
#define _GLIBCXX_HAVE_COSL 1
#define _GLIBCXX_USE_FLOAT128 1
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define k8fmax(x,y) (_mm_max_pd(x,y))
#define PRIVATE_CACTUS_STRUCT cactuspriv_
#define CLOCK_TAI 11
#define EUCLEAN 117
#define k4msub(x,y,z) (k4sub(k4mul(x,y),z))
#define DIST_HH 
#define RE_NREGS 30
#define EPROTO 71
#define MPI_KEYVAL_INVALID 0x24000000
#define CCTK_ATTRIBUTE_COLD __attribute__((__cold__))
#define _MM_MASK_DENORM 0x0100
#define _EXCEPTION_DEFINES_H 1
#define __LDBL_DIG__ 18
#define KRANC_VECTORS 1
#define vec4_store_nta_partial_hi(p,x,n) ({ switch (n) { case 3: (&(p))[1]=vec_elt1(p); case 2: _mm_storeh_pi(&(p)+2,x); break; case 1: (&(p))[3]=vec_elt3(p); } })
#define SCHED_BATCH 3
#define __LC_PAPER 7
#define STA_FLL 0x0008
#define __x86_64__ 1
#define _SIZE_T_ 
#define MPI_APPNUM 0x6440000d
#define _SIDD_MASKED_NEGATIVE_POLARITY 0x30
#define MPI_THREAD_SERIALIZED 2
#define _IO_iconv_t _G_iconv_t
#define _SSTREAM_TCC 1
#define _CCTK_C2F_PROTO int const *, int const *, int const *, int const *, int const *, int const *, int const *, int const *, int const *, CCTK_REAL const *, CCTK_REAL const *, CCTK_REAL const *, CCTK_REAL const *, int const *, int const *, int const *, int const *, int const *, int const *, int const *, int const *, cGH const *const *, int const *, int const *, int const *
#define k8add(x,y) (_mm_add_pd(x,y))
#define __OVERLOADABLE_TEST(prefix,name) int call ##Overload ##name(NULL) { int return_code; }
#define ENODEV 19
#define _bswap(a) __bswapd(a)
#define DECLARE_CARPETLIB_PUBLIC_CARGUMENTS 
#define k8sub(x,y) (_mm_sub_pd(x,y))
#define __stub_revoke 
#define _RTMINTRIN_H_INCLUDED 
#define _GLIBCXX_HAVE_VSWSCANF 1
#define MPI_BOR (MPI_Op)(0x58000008)
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define CCTK_LOOP2_INTBND(name,cctki3_cctkGH_,i,j,ni,nj) CCTK_LOOP2STR_INTBND(name, (cctki3_cctkGH_), i,j, ni,nj, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define __off_t_defined 
#define EKEYEXPIRED 127
#define vec8_store(p,x) (_mm_store_pd(&(p),x))
#define vec4_loadu(p) (_mm_loadu_ps(&(p)))
#define __UINT_FAST32_MAX__ 0xffffffffffffffffUL
#define CCTK_GROUP 602
#define __UINT_LEAST64_TYPE__ long unsigned int
#define CCTK_ENDLOOP1_INTBND(name) CCTK_ENDLOOP1STR_INTBND(name)
#define CCTK_LOOP1STR_BND(name,cctki3_cctkGH_,i,ni,imin,imax,cctki3_istr_) do { typedef int cctki3_loop1_bnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_BND can only be used in 1 dimensions"); } CCTK_INT cctki3_bndsize [2]; CCTK_INT cctki3_is_ghostbnd[2]; CCTK_INT cctki3_is_symbnd [2]; CCTK_INT cctki3_is_physbnd [2]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 2, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP1STR_BOUNDARIES(name ##_bnd, cctki3_cctkGH, i, ni, cctki3_bndsize[0], cctki3_bndsize[1], cctki3_is_physbnd[0], cctki3_is_physbnd[1], imin,imax, (cctki3_istr_)) {
#define CCTK_LOOP1STR_INTBND(name,cctki3_cctkGH_,i,ni,imin,imax,cctki3_istr_) do { typedef int cctki3_loop1_intbnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 1) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP1_INTBND can only be used in 1 dimensions"); } CCTK_INT cctki3_bndsize [2]; CCTK_INT cctki3_is_ghostbnd[2]; CCTK_INT cctki3_is_symbnd [2]; CCTK_INT cctki3_is_physbnd [2]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 2, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP1STR_INTBOUNDARIES(name ##_intbnd, cctki3_cctkGH, i, ni, cctki3_bndsize[0], cctki3_bndsize[1], cctki3_is_physbnd[0], cctki3_is_physbnd[1], imin,imax, (cctki3_istr_)) {
#define CCTK_INT1_TYPE signed char
#define __U64_TYPE unsigned long int
#define __FLT_HAS_QUIET_NAN__ 1
#define PARAMETER_RECOVERY_POST 2
#define MPI_ERR_NO_MEM 34
#define __FD_MASK(d) ((__fd_mask) (1UL << ((d) % __NFDBITS)))
#define _OVERLOADMACROS_H_ 1
#define _AVX512VBMIINTRIN_H_INCLUDED 
#define RESTRICTED_INITBASE_STRUCT initbaserest_
#define MPICH_ATTR_TYPE_TAG_MUST_BE_NULL() 
#define EHWPOISON 133
#define _GLIBCXX_NORETURN __attribute__ ((__noreturn__))
#define __FLT_HAS_INFINITY__ 1
#define ENODATA 61
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define _mm512_exp2a23_pd(A) _mm512_exp2a23_round_pd(A, _MM_FROUND_CUR_DIRECTION)
#define _ALLOCATED_PTR_H 1
#define CCTK_EXTERN_INLINE extern
#define _BSD_PTRDIFF_T_ 
#define __cpp_unicode_literals 200710
#define CCTK_PARAMETER__CARPETLIB__memstat_file PRIVATE_CARPETLIB_STRUCT.memstat_file
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define M_1_PIl 0.318309886183790671537767526745028724L
#define __DEC64_MIN__ 1E-383DD
#define NULL __null
#define GTHR_ACTIVE_PROXY __gthrw_(__pthread_key_create)
#define __CHAR16_TYPE__ short unsigned int
#define LT_OBJDIR ".libs/"
#define _GLIBCXX_END_EXTERN_C }
#define _GLIBCXX_NAMESPACE_CXX11 
#define E2BIG 7
#define __USING_NAMESPACE_C99(name) 
#define BIG_ENDIAN __BIG_ENDIAN
#define _GLIBCXX_HAVE_SINF 1
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define _GLIBCXX_HAVE_SINL 1
#define _WCHAR_T_DECLARED 
#define __stub_lchmod 
#define CLONE_NEWUSER 0x10000000
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define _AVX512IFMAVLINTRIN_H_INCLUDED 
#define EL3RST 47
#define CCTK_PARAMETER__CARPETLIB__combine_sends PRIVATE_CARPETLIB_STRUCT.combine_sends
#define _CCTK_COMMANDLINE_H_ 
#define __S32_TYPE int
#define __INT_LEAST8_TYPE__ signed char
#define MPICH_ERR_FIRST_MPIX 100
#define CCTK_VARIABLE_REAL16 133
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); const __cpu_mask *__arr1 = (srcset1)->__bits; const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define SEEK_HOLE 4
#define DECLARE_OPERATOR_2(fn,op) DECLARE_OPERATOR_2_RET(fn, op, T)
#define vec4_store(p,x) (_mm_store_ps(&(p),x))
#define TIMER_ABSTIME 1
#define CCTK_ENDLOOP4_INTBOUNDARIES(name) CCTK_ENDLOOP4STR_INTBOUNDARIES(name)
#define k8abs_mask (k8sign_mask_union.v)
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(c) c ## UL
#define __PMT(args) args
#define ATOMIC_FLAG_INIT { 0 }
#define MPI_Comm_f2c(comm) (MPI_Comm)(comm)
#define vec8_set(a,b) (_mm_set_pd(b,a))
#define _SYS_TYPES_H 1
#define CCTK_LOOP2_INTERIOR(name,cctki2_cctkGH_,i,j,cctki2_iblo_,cctki2_jblo_,cctki2_ibhi_,cctki2_jbhi_) CCTK_LOOP2STR_INTERIOR(name, (cctki2_cctkGH_), i,j, (cctki2_iblo_),(cctki2_jblo_), (cctki2_ibhi_),(cctki2_jbhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define ECONNRESET 104
#define CCTK_PARAMETER__CARPETLIB__use_mpi_send PRIVATE_CARPETLIB_STRUCT.use_mpi_send
#define CCTK_CmplxAbs CCTK_Cmplx16Abs
#define RESTRICTED_FUNWAVECOORD_STRUCT funwavecoordrest_
#define _STL_TEMPBUF_H 1
#define ONE_FORTSTRING_PTR(arg1) char *arg1 = cctk_str1;
#define _GLIBCXX_GCC_GTHR_H 
#define HAVE_CLOCK_GETTIME 1
#define RESTRICTED_BOUNDARY_STRUCT boundaryrest_
#define _IOS_APPEND 8
#define _GLIBCXX_DEBUG_ASSERT(_Condition) 
#define CLOCK_MONOTONIC 1
#define SIZEOF_FLOAT 4
#define __int8_t_defined 
#define _GLIBCXX_HAVE_WCTYPE_H 1
#define MPICH_ATTR_POINTER_WITH_TYPE_TAG(buffer_idx,type_idx) 
#define HAVE_ISINF 1
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define CCTK_LOOP3_BOUNDARIES(name,cctki2_cctkGH_,i,j,k,ni,nj,nk,cctki2_iblo_,cctki2_jblo_,cctki2_kblo_,cctki2_ibhi_,cctki2_jbhi_,cctki2_kbhi_,cctki2_ibboxlo_,cctki2_jbboxlo_,cctki2_kbboxlo_,cctki2_ibboxhi_,cctki2_jbboxhi_,cctki2_kbboxhi_) CCTK_LOOP3STR_BOUNDARIES(name, (cctki2_cctkGH_), i,j,k, ni,nj,nk, (cctki2_iblo_),(cctki2_jblo_),(cctki2_kblo_), (cctki2_ibhi_),(cctki2_jbhi_),(cctki2_kbhi_), (cctki2_ibboxlo_),(cctki2_jbboxlo_),(cctki2_kbboxlo_), (cctki2_ibboxhi_),(cctki2_jbboxhi_),(cctki2_kbboxhi_), cctki2_dummy_imin,cctki2_dummy_imax, 1)
#define CCTK_PARAMETER__CARPETLIB__max_allowed_memory_MB PRIVATE_CARPETLIB_STRUCT.max_allowed_memory_MB
#define EBADRQC 56
#define isfinite Cactus::good_isfinite
#define MPI_WIN_BASE 0x66000001
#define PMPI_Request_c2f(request) (MPI_Fint)(request)
#define _GLIBCXX_ALGORITHM 1
#define __PTRDIFF_T 
#define __try try
#define _GLIBCXX_ISTREAM 1
#define CCTK_CmplxCPow CCTK_Cmplx16CPow
#define __KEY_T_TYPE __S32_TYPE
#define MPI_ERR_FILE 27
#define __BEGIN_DECLS extern "C" {
#define __LDBL_MANT_DIG__ 64
#define _CCTK_GHEXTENSIONS_H_ 
#define PRIVATE_CARPETIOBASIC_STRUCT carpetiobasicpriv_
#define PARAMETER_INT 704
#define MPI_MODE_WRONLY 4
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define _GLIBCXX_HAVE_INTTYPES_H 1
#define SIZEOF_LONG_INT 8
#define PRIVATE_SPHERICALSURFACE_STRUCT sphericalsurfacepriv_
#define _GLIBCXX_CSTDLIB 1
#define PARAMETER_INTEGER 704
#define MPI_FLOAT_INT ((MPI_Datatype)0x8c000000)
#define CCTK_SCALAR 401
#define _GCC_MAX_ALIGN_T 
#define _mm_ceil_pd(V) _mm_round_pd ((V), _MM_FROUND_CEIL)
#define RE_NO_BK_VBAR (RE_NO_BK_REFS << 1)
#define WSTOPPED 2
#define _mm_ceil_ps(V) _mm_round_ps ((V), _MM_FROUND_CEIL)
#define assert(expr) ((expr) ? __ASSERT_VOID_CAST (0) : __assert_fail (__STRING(expr), __FILE__, __LINE__, __ASSERT_FUNCTION))
#define CCTK_PARAMETER__CARPETLIB__message_size_multiplier PRIVATE_CARPETLIB_STRUCT.message_size_multiplier
#define _CLFLUSHOPTINTRIN_H_INCLUDED 
#define FILENAME_MAX 4096
#define MPICH_NUMVERSION 30104300
#define CLONE_FS 0x00000200
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define __cpp_lib_is_null_pointer 201309
#define __ino_t_defined 
#define _CMP_NGE_UQ 0x19
#define CCTK_ENDLOOP1STR_NORMAL(name) } } typedef cctki0_loop1_normal_ ##name cctki0_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define MPIIMPL_HAVE_STATUS_SET_BYTES 1
#define _IOS_TRUNC 16
#define MPIIMPL_HAVE_MPI_COMBINER_DARRAY 1
#define _mm_ceil_sd(D,V) _mm_round_sd ((D), (V), _MM_FROUND_CEIL)
#define __stub_fdetach 
#define _mm_ceil_ss(D,V) _mm_round_ss ((D), (V), _MM_FROUND_CEIL)
#define PRIVATE_FORTRAN_STRUCT fortranpriv_
#define CCTK_CmplxImag CCTK_Cmplx16Imag
#define __cpp_runtime_arrays 198712
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define MPI_ERR_DISP 52
#define CLONE_IO 0x80000000
#define PRIVATE_CARPETREGRID_STRUCT carpetregridpriv_
#define CCTK_RegisterLocalArrayReductionOperator(a,b) CCTKi_RegisterLocalArrayReductionOperator(CCTK_THORNSTRING,a,b)
#define DECLARE_MEMBER_OPERATOR_0_RET(fn,op,R) vect<R, D> fn() const { vect<R, D> r; for (int d = 0; d < D; ++d) r[d] = op elt[d]; return r; }
#define __UQUAD_TYPE unsigned long int
#define vec8_elt1(x) ({ CCTK_REAL8_VEC const xelt1=(x); vec8_elt0(_mm_unpackhi_pd(xelt1,xelt1)); })
#define __BYTE_ORDER __LITTLE_ENDIAN
#define __FLT_MANT_DIG__ 24
#define _mm512_rcp28_ps(A) _mm512_rcp28_round_ps(A, _MM_FROUND_CUR_DIRECTION)
#define EADDRNOTAVAIL 99
#define ETIME 62
#define major(dev) gnu_dev_major (dev)
#define __FLT_DIG__ 6
#define __FSID_T_TYPE struct { int __val[2]; }
#define _CCTK_CONFIG_H_ 
#define _CCTK_H_ 1
#define __malloc_and_calloc_defined 
#define DSTIND3(i,j,k) index3(i, j, k, dstipadext, dstjpadext, dstkpadext, dstiext, dstjext, dstkext)
#define INT_FAST32_MAX (9223372036854775807L)
#define _GLIBCXX_CONSTEXPR constexpr
#define EBADE 52
#define __UINT_FAST64_TYPE__ long unsigned int
#define __glibcxx_class_requires(_a,_b) 
#define _LOCALE_FACETS_H 1
#define PLOSS 6
#define _MM_FROUND_NO_EXC 0x08
#define __LDBL_REDIR_DECL(name) 
#define _mm512_maskz_rcp28_pd(U,A) _mm512_maskz_rcp28_round_pd(U, A, _MM_FROUND_CUR_DIRECTION)
#define _GLIBCXX_FORWARD(_Tp,__val) std::forward<_Tp>(__val)
#define UINT_FAST8_MAX (255)
#define _CCTK_PARAMETER_H 1
#define _GLIBCXX_HAVE_MEMORY_H 1
#define __INT_MAX__ 0x7fffffff
#define MPI_ERR_IO 32
#define __glibcxx_requires_string_len(_String,_Len) 
#define MPI_MODE_NOCHECK 1024
#define CCTK_INTEGER_PRECISION 4
#define w_coredump __wait_terminated.__w_coredump
#define CCTK_CmplxAdd CCTK_Cmplx16Add
#define _MM_CMPINT_UNUSED 0x3
#define _T_SIZE_ 
#define HAVE_CCTK_CXX_RESTRICT 1
#define __CPU_SETSIZE 1024
#define ENOTRECOVERABLE 131
#define CARPETLIB_PRIVATE_C2F_PROTO 
#define __WNOTHREAD 0x20000000
#define _G_va_list __gnuc_va_list
#define __LC_NUMERIC 1
#define _IOS_INPUT 1
#define MPICH_RELEASE_TYPE_RC 2
#define MPI_WIN_NULL_COPY_FN ((MPI_Win_copy_attr_function*)0)
#define EIO 5
#define CLOCK_PROCESS_CPUTIME_ID 2
#define STDC_HEADERS 1
#define CCTK_ENDLOOP4_INTBND(name) CCTK_ENDLOOP4STR_INTBND(name)
#define __glibcxx_integral_traps true
#define ENETUNREACH 101
#define EXDEV 18
#define MPI_SHORT_INT ((MPI_Datatype)0x8c000003)
#define _GLIBCXX_USE_SC_NPROCESSORS_ONLN 1
#define UINT32_C(c) c ## U
#define k4neg(x) (_mm_xor_ps(x,k4sign_mask))
#define __INT_FAST64_TYPE__ long int
#define CCTK_PARAMETER__IO__out_group_separator RESTRICTED_IO_STRUCT.out_group_separator
#define _mm512_maskz_rcp28_ps(U,A) _mm512_maskz_rcp28_round_ps(U, A, _MM_FROUND_CUR_DIRECTION)
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define __INO64_T_TYPE __UQUAD_TYPE
#define PRIVATE_CARPETREGRID2_STRUCT carpetregrid2priv_
#define _CCTK_IO_H_ 1
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define MPI_LOCK_SHARED 235
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define __WINT_TYPE__ unsigned int
#define MPI_ERR_OP 9
#define EDQUOT 122
#define MPI_ERR_TYPE 3
#define MPI_INT32_T ((MPI_Datatype)0x4c000439)
#define _GLIBCXX_CXX_LOCALE_H 1
#define _CMP_TRUE_UQ 0x0f
#define _CMP_TRUE_US 0x1f
#define __intptr_t_defined 
#define MOD_TAI ADJ_TAI
#define __glibcxx_requires_partitioned_lower_pred(_First,_Last,_Value,_Pred) 
#define EREMOTEIO 121
#define _MM_FLUSH_ZERO_MASK 0x8000
#define ENOSPC 28
#define MPI_INT8_T ((MPI_Datatype)0x4c000137)
#define _NEW 
#define ENOEXEC 8
#define k8pos(x) (x)
#define k8pow(x,a) ({ CCTK_REAL8_VEC const xpow=(x); CCTK_REAL8 const apow=(a); vec8_set(pow(vec8_elt0(xpow),apow), pow(vec8_elt1(xpow),apow)); })
#define __REDIRECT_NTHNL(name,proto,alias) name proto __THROWNL __asm__ (__ASMNAME (#alias))
#define HAVE_GETPID 1
#define HAVE_CRYPT_H 1
#define EOF (-1)
#define CCTK_PARAMETER__IO__out_zline_xi RESTRICTED_IO_STRUCT.out_zline_xi
#define MPICH_RELEASE_TYPE_ALPHA 0
#define __USE_POSIX199309 1
#define _OVERLOADABLE_TEST(prefix,name) __OVERLOADABLE_TEST(prefix, name)
#define MPI_T_ERR_PVAR_NO_ATOMIC 72
#define PRIVATE_TESTCARPETGRIDINFO_STRUCT testcarpetgridinfopriv_
#define CCTK_PARAMETER__IO__out_zline_yi RESTRICTED_IO_STRUCT.out_zline_yi
#define _GLIBCXX_HAVE_LOG10F 1
#define _GLIBCXX_HAVE_LOG10L 1
#define __SIZEOF_INT128__ 16
#define _GLIBCXX_HAVE_LOGF 1
#define _GLIBCXX_TYPE_TRAITS 1
#define _STL_ITERATOR_BASE_FUNCS_H 1
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __LDBL_MAX_10_EXP__ 4932
#define __W_CONTINUED 0xffff
#define __ATOMIC_RELAXED 0
#define ONE_FORTSTRING_CREATE(arg1) char *arg1 = Util_NullTerminateString(cctk_str1,cctk_strlen1);
#define HAVE_CCTK_CXX_ATTRIBUTE_NORETURN 1
#define CCTK_VARIABLE_COMPLEX8 141
#define __DBL_EPSILON__ double(2.22044604925031308085e-16L)
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define _GLIBCXX_HAVE_GETS 1
#define le16toh(x) (x)
#define _IO_BAD_SEEN 0x4000
#define __GTHREAD_HAS_COND 1
#define EDOM 33
#define CCTK_PARAMETER__IO__recover_file RESTRICTED_IO_STRUCT.recover_file
#define _RDSEEDINTRIN_H_INCLUDED 
#define ENOSTR 60
#define _LOCALE_FACETS_TCC 1
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define CCTK_LOOP3_ALL(name,cctki3_cctkGH_,i,j,k) CCTK_LOOP3STR_ALL(name, (cctki3_cctkGH_), i,j,k, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define REG_STARTEND (1 << 2)
#define INT_LEAST16_MAX (32767)
#define CLONE_PTRACE 0x00002000
#define MPI_LASTUSEDCODE 0x6440000b
#define ESRCH 3
#define __DEC128_MANT_DIG__ 34
#define __GTHREADS 1
#define __INT_LEAST32_TYPE__ int
#define ECHRNG 44
#define __OVERLOADABLE_FUNCTION(call,prefix,dummy_prefix,name) RETURN_TYPE (*prefix ##name)(ARGUMENTS) = NULL; int call ##Overload ##name(RETURN_TYPE (*func)(ARGUMENTS)); int call ##Overload ##name(RETURN_TYPE (*func)(ARGUMENTS)) { int return_code; static int overloaded = 0; if (func) { if(overloaded < 2) { prefix ##name = func; overloaded++; return_code = overloaded; } else { CCTK_VWarn(1,__LINE__,__FILE__,"Cactus","Overload Macros: " "Attempted to overload function %s%s twice", #prefix, #name); return_code = 0; } } else { return_code = overloaded; } return return_code; }
#define CCTK_PARAMETER__CARPETLIB__combine_recompose PRIVATE_CARPETLIB_STRUCT.combine_recompose
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define CCTK_PARAMETER__CARPETLIB__barrier_between_stages PRIVATE_CARPETLIB_STRUCT.barrier_between_stages
#define STA_CLK 0x8000
#define __wchar_t__ 
#define CCTK_CmplxArg CCTK_Cmplx16Arg
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define CCTK_PARAMETER__IO__out_dir RESTRICTED_IO_STRUCT.out_dir
#define _FUNCTIONAL_HASH_H 1
#define CCTK_PTHREADS 1
#define _ISOC99_SOURCE 1
#define k8fnabs(x) (_mm_or_pd(x,k8sign_mask))
#define _GLIBCXX_VECTOR 1
#define ENOLCK 37
#define ENFILE 23
#define MPI_IDENT 0
#define _IO_RIGHT 04
#define __END_NAMESPACE_STD 
#define CCTK_LOOP2STR_BND(name,cctki3_cctkGH_,i,j,ni,nj,imin,imax,cctki3_istr_) do { typedef int cctki3_loop2_bnd_ ##name; cGH const *restrict const cctki3_cctkGH = (cctki3_cctkGH_); if (cctki3_cctkGH->cctk_dim != 2) { _Pragma("omp critical") CCTK_WARN(CCTK_WARN_ABORT, "The macro CCTK_LOOP2_BND can only be used in 2 dimensions"); } CCTK_INT cctki3_bndsize [4]; CCTK_INT cctki3_is_ghostbnd[4]; CCTK_INT cctki3_is_symbnd [4]; CCTK_INT cctki3_is_physbnd [4]; _Pragma("omp single copyprivate(cctki3_bndsize, cctki3_is_physbnd)") GetBoundarySizesAndTypes (cctki3_cctkGH, 4, cctki3_bndsize, cctki3_is_ghostbnd, cctki3_is_symbnd, cctki3_is_physbnd); CCTK_LOOP2STR_BOUNDARIES(name ##_bnd, cctki3_cctkGH, i,j, ni,nj, cctki3_bndsize[0],cctki3_bndsize[2], cctki3_bndsize[1],cctki3_bndsize[3], cctki3_is_physbnd[0],cctki3_is_physbnd[2], cctki3_is_physbnd[1],cctki3_is_physbnd[3], imin,imax, (cctki3_istr_)) {
#define _GLIBCXX_USE_C99_STDINT_TR1 1
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define __LC_NAME 8
#define MPI_COMPLEX ((MPI_Datatype)1275070494)
#define CCTK_PRINTSEPARATOR printf("--------------------------------------------------------------------------------\n");
#define TYPEPROPS_HH 
#define be64toh(x) __bswap_64 (x)
#define ENOSYS 38
#define MPI_T_CVAR_HANDLE_NULL ((MPI_T_cvar_handle)NULL)
#define MPI_UNSIGNED_CHAR ((MPI_Datatype)0x4c000102)
#define PRIVATE_CARPETIOHDF5_STRUCT carpetiohdf5priv_
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define CARPET_USE_BBOXSET2 
#define CCTK_ENDLOOP1STR(name) CCTK_ENDLOOP1STR_NORMAL(name)
#define _GLIBCXX_HAVE_TANL 1
#define _BITS_LOCALE_H 1
#define _GLIBCXX_USE_NLS 1
#define EHOSTDOWN 112
#define CCTK_PARAMETER__IO__parfile_update_every RESTRICTED_IO_STRUCT.parfile_update_every
#define _GLIBCXX_HAVE_STDLIB_H 1
#define MPI_UINT16_T ((MPI_Datatype)0x4c00023c)
#define _CCTK_IOMETHODS_H_ 
#define __UINT32_C(c) c ## U
#define HAVE_CCTK_INT8 1
#define _CMP_FALSE_OQ 0x0b
#define _CMP_FALSE_OS 0x1b
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define vec_load vec8_load
#define CCTK_ENDLOOP2_INTERIOR(name) CCTK_ENDLOOP2STR_INTERIOR(name)
#define MPICH_RELEASE_TYPE_PATCH 3
#define _GLIBCXX_DEPRECATED __attribute__ ((__deprecated__))
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define ATOMIC_VAR_INIT(_VI) { _VI }
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define __STDC_UTF_32__ 1
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _FMAINTRIN_H_INCLUDED 
#define CCTK_CmplxIPow CCTK_Cmplx16IPow
#define _CMP_LE_OQ 0x12
#define _CMP_LE_OS 0x02
#define CLOCKS_PER_SEC ((clock_t) 1000000)
#define _GLIBCXX_USE_GETTIMEOFDAY 1
#define WEXITSTATUS(status) __WEXITSTATUS (__WAIT_INT (status))
#define __ULONG32_TYPE unsigned int
#define STA_PPSJITTER 0x0200
#define _IO_OCT 040
#define _SHAINTRIN_H_INCLUDED 
#define __glibcxx_class_requires2(_a,_b,_c) 
#define __glibcxx_class_requires3(_a,_b,_c,_d) 
#define __iswxxx_defined 1
#define CLONE_CHILD_CLEARTID 0x00200000
#define FOPEN_MAX 16
#define _WMMINTRIN_H_INCLUDED 
#define kmsub k8msub
#define _OVERLOADABLE_DUMMYPROTOTYPE(prefix,dummy_prefix,name) __OVERLOADABLE_DUMMYPROTOTYPE(prefix, dummy_prefix, name)
#define __suseconds_t_defined 
#define MPI_T_PVAR_HANDLE_NULL ((MPI_T_pvar_handle)NULL)
#define MPI_C_BOOL ((MPI_Datatype)0x4c00013f)
#define EISCONN 106
#define MPIO_Request MPI_Request
#define CCTK_WARN_ALERT 1
#define MPI_UINT8_T ((MPI_Datatype)0x4c00013b)
#define _IO_IS_APPENDING 0x1000
#define _DECLARE_CCTK_CARGUMENTS CCTK_DECLARE_INIT(ptrdiff_t,cctki_dummy_int,0); CCTK_DECLARE_INIT(int const,cctk_dim,cctkGH->cctk_dim); CCTK_DECLARE_INIT(int const *restrict const,cctk_gsh,cctkGH->cctk_gsh); CCTK_DECLARE_INIT(int const *restrict const,cctk_lsh,cctkGH->cctk_lsh); CCTK_DECLARE_INIT(int const *restrict const,cctk_lbnd,cctkGH->cctk_lbnd); CCTK_DECLARE_INIT(int const *restrict const,cctk_ubnd,cctkGH->cctk_ubnd); CCTK_DECLARE_INIT(int const *restrict const,cctk_ash,cctkGH->cctk_ash); CCTK_DECLARE_INIT(int const *restrict const,cctk_from,cctkGH->cctk_from); CCTK_DECLARE_INIT(int const *restrict const,cctk_to,cctkGH->cctk_to); CCTK_DECLARE_INIT(int const *restrict const,cctk_bbox,cctkGH->cctk_bbox); CCTK_DECLARE_INIT(CCTK_REAL const,cctk_delta_time,cctkGH->cctk_delta_time); CCTK_DECLARE_INIT(CCTK_REAL const,cctk_time,cctkGH->cctk_time); CCTK_DECLARE_INIT(CCTK_REAL const *restrict const,cctk_delta_space,cctkGH->cctk_delta_space); CCTK_DECLARE_INIT(CCTK_REAL const *restrict const,cctk_origin_space,cctkGH->cctk_origin_space); CCTK_DECLARE_INIT(int const *restrict const,cctk_levfac,cctkGH->cctk_levfac); CCTK_DECLARE_INIT(int const *restrict const,cctk_levoff,cctkGH->cctk_levoff); CCTK_DECLARE_INIT(int const *restrict const,cctk_levoffdenom,cctkGH->cctk_levoffdenom); CCTK_DECLARE_INIT(int const,cctk_timefac,cctkGH->cctk_timefac); CCTK_DECLARE_INIT(int const,cctk_convlevel,cctkGH->cctk_convlevel); CCTK_DECLARE_INIT(int const,cctk_convfac,cctkGH->cctk_convfac); CCTK_DECLARE_INIT(int const *restrict const,cctk_nghostzones,cctkGH->cctk_nghostzones); CCTK_DECLARE_INIT(int const,cctk_iteration,cctkGH->cctk_iteration);
#define _BITS_TYPESIZES_H 1
#define _SIDD_BIT_MASK 0x00
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define _STL_ITERATOR_H 1
#define _mm_rsqrt28_ss(A,B) __builtin_ia32_rsqrt28ss_round(B, A, _MM_FROUND_CUR_DIRECTION)
#define RE_NO_POSIX_BACKTRACKING (RE_UNMATCHED_RIGHT_PAREN_ORD << 1)
#define __USE_XOPEN2K8XSI 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __size_t__ 
#define CCTK_ENDLOOP1STR_INTBND(name) } CCTK_ENDLOOP1STR_INTBOUNDARIES(name ##_intbnd); typedef cctki3_loop1_intbnd_ ##name cctki3_ensure_proper_nesting CCTK_ATTRIBUTE_UNUSED; } while (0)
#define __FLT_DENORM_MIN__ 1.40129846432481707092e-45F
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define __BEGIN_NAMESPACE_C99 
#define __LC_CTYPE 0
#define CCTK_LOOP2_ALL(name,cctki3_cctkGH_,i,j) CCTK_LOOP2STR_ALL(name, (cctki3_cctkGH_), i,j, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define _CCTK_COMPLEX_H_ 
#define k8nmsub(x,y,z) (k8sub(z,k8mul(x,y)))
#define __INO_T_MATCHES_INO64_T 1
#define MPI_LXOR (MPI_Op)(0x58000009)
#define _IO_fpos_t _G_fpos_t
#define ENOPROTOOPT 92
#define issignaling(x) (sizeof (x) == sizeof (float) ? __issignalingf (x) : sizeof (x) == sizeof (double) ? __issignaling (x) : __issignalingl (x))
#define CCTK_PARAMETER__IO__out_yline_zi RESTRICTED_IO_STRUCT.out_yline_zi
#define _CCTK_GROUPS_H_ 1
#define __blkcnt_t_defined 
#define MPI_MAX_INFO_KEY 255
#define vec4_set1(a) (_mm_set1_ps(a))
#define ECOMM 70
#define UINT_LEAST32_MAX (4294967295U)
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define EMFILE 24
#define knmadd k8nmadd
#define DECLARE_CARPETLIB_PROTECTED_C2F 
#define M_1_PI 0.31830988618379067154
#define _CMP_GE_OQ 0x1d
#define _GLIBCXX_CMATH 1
#define MPI_T_ERR_INVALID_ITEM 63
#define __lldiv_t_defined 1
#define MPI_REAL ((MPI_Datatype)1275069468)
#define MPICH_ATTR_TYPE_TAG_C99(type) 
#define _MM_MASK_INVALID 0x0080
#define CCTK_PARAMETER__CARPETLIB__output_bboxes PRIVATE_CARPETLIB_STRUCT.output_bboxes
#define MPI_UNSIGNED ((MPI_Datatype)0x4c000406)
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define _ASSERT_H 1
#define ENOBUFS 105
#define __time_t_defined 1
#define _SYS_SYSMACROS_H 1
#define _AVX512FINTRIN_H_INCLUDED 
#define _IO_BE(expr,res) __builtin_expect ((expr), res)
#define PRIVATE_CARPET_STRUCT carpetpriv_
#define _ALLOC_TRAITS_H 1
#define _XBEGIN_STARTED (~0u)
#define _G_HAVE_MMAP 1
#define EFAULT 14
#define _BMI2INTRIN_H_INCLUDED 
#define k4mul(x,y) (_mm_mul_ps(x,y))
#define CCTK_PARAMETER__CARPETLIB__commstate_verbose PRIVATE_CARPETLIB_STRUCT.commstate_verbose
#define vec_loadu_maybe vec8_loadu_maybe
#define __DEC128_MAX_EXP__ 6145
#define MPI_DISTRIBUTE_DFLT_DARG -49767
#define EWOULDBLOCK EAGAIN
#define CCTK_CmplxPow CCTK_Cmplx16Pow
#define _GLIBCXX_HAVE_TLS 1
#define _GLIBCXX_HAVE_ACOSF 1
#define _GLIBCXX_HAVE_ACOSL 1
#define RE_DOT_NEWLINE (RE_CONTEXT_INVALID_OPS << 1)
#define CLONE_VFORK 0x00004000
#define RE_TRANSLATE_TYPE __RE_TRANSLATE_TYPE
#define __GNUC_MINOR__ 1
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define __DEC32_MANT_DIG__ 7
#define M_SQRT2l 1.414213562373095048801688724209698079L
#define LC_MESSAGES __LC_MESSAGES
#define INTMAX_C(c) c ## L
#define _F16CINTRIN_H_INCLUDED 
#define __intN_t(N,MODE) typedef int int ##N ##_t __attribute__ ((__mode__ (MODE)))
#define MPI_T_ERR_NOT_INITIALIZED 60
#define CCTK_CXX_ISFINITE CCTK_isfinite
#define EMEDIUMTYPE 124
#define __FILE_defined 1
#define _GLIBCXX_PACKAGE_STRING "package-unused version-unused"
#define CCTK_ERROR_INTERP_POINT_EXCISED (-1003)
#define _mm512_rsqrt28_pd(A) _mm512_rsqrt28_round_pd(A, _MM_FROUND_CUR_DIRECTION)
#define MPI_REQUEST_NULL ((MPI_Request)0x2c000000)
#define LC_NAME __LC_NAME
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu / 8 < (setsize) ? ((((const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define CCTK_PRIVATE 501
#define _GLIBCXX_HAVE_SYS_RESOURCE_H 1
#define __LC_MONETARY 4
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define ELIBMAX 82
#define CCTK_LOOP4_INT(name,cctki3_cctkGH_,i,j,k,l) CCTK_LOOP4STR_INT(name, (cctki3_cctkGH_), i,j,k,l, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define PRIVATE_MOL_STRUCT molpriv_
#define _GLIBCXX_END_NAMESPACE_CONTAINER 
#define REG_NEWLINE (REG_ICASE << 1)
#define HAVE_CCTK_CXX_ATTRIBUTE_COLD 1
#define __ino64_t_defined 
#define MPI_DISTRIBUTE_NONE 123
#define STA_UNSYNC 0x0040
#define __clockid_t_defined 1
#define __fsblkcnt_t_defined 
#define _SMMINTRIN_H_INCLUDED 
#define MPI_WCHAR ((MPI_Datatype)0x4c00040e)
#define __FD_SET(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define _IO_HEX 0100
#define __ATOMIC_SEQ_CST 5
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define MPI_ERR_READ_ONLY 40
#define HAVE_MPI_INFO 
#define ENOENT 2
#define _AVX512DQINTRIN_H_INCLUDED 
#define MPI_DISPLACEMENT_CURRENT -54278278
#define REG_ICASE (REG_EXTENDED << 1)
#define __UINT32_TYPE__ unsigned int
#define _SHARED_PTR_BASE_H 1
#define MPI_ERRORS_RETURN ((MPI_Errhandler)0x54000001)
#define CCTK_CXX_FPCLASSIFY std::fpclassify
#define MPI_ERRHANDLER_NULL ((MPI_Errhandler)0x14000000)
#define _mm256_permutexvar_ps(A,B) _mm256_permutevar8x32_ps((B), (A))
#define CCTK_PARAMETER__IO__out_timesteps_per_file RESTRICTED_IO_STRUCT.out_timesteps_per_file
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define CCTK_LOOP1_ALL(name,cctki3_cctkGH_,i) CCTK_LOOP1STR_ALL(name, (cctki3_cctkGH_), i, cctki3_dummy_imin,cctki3_dummy_imax, 1)
#define EBADSLT 57
#define EKEYREVOKED 128
#define __attribute_const__ __attribute__ ((__const__))
#define __useconds_t_defined 
#define THREE_FORTSTRING_LEN(len1,len2,len3) size_t len1 = cctk_strlen1; size_t len2 = cctk_strlen2; size_t len3 = cctk_strlen3;
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define REDUCTION_OPERATOR_REGISTER_ARGLIST const cGH *arg_GH, int arg_proc, int arg_num_outvals, int arg_outtype, void *arg_outvals, int arg_num_invars, const int arg_varlist []
#define _MM_FROUND_RINT (_MM_FROUND_CUR_DIRECTION | _MM_FROUND_RAISE_EXC)
#define _GLIBCXX_HAVE_MBSTATE_T 1
#define HAVE_CCTK_CXX_ATTRIBUTE_FORMAT 1
#define __SIZEOF_LONG_LONG__ 8
#define CCTK_PARAMETER__IO__new_filename_scheme RESTRICTED_IO_STRUCT.new_filename_scheme
#define _GLIBCXX_HAVE_ASINF 1
#define ELOOP 40
#define CCTK_REAL8_VEC __m128d
#define _GLIBCXX_HAVE_ASINL 1
#define MPI_ERR_IN_STATUS 17
#define MPICH_ATTR_TYPE_TAG_STDINT(type) MPICH_ATTR_TYPE_TAG(type)
#define __exctype(name) extern int name (int) __THROW
#define RE_SYNTAX_AWK (RE_BACKSLASH_ESCAPE_IN_LISTS | RE_DOT_NOT_NULL | RE_NO_BK_PARENS | RE_NO_BK_REFS | RE_NO_BK_VBAR | RE_NO_EMPTY_RANGES | RE_DOT_NEWLINE | RE_CONTEXT_INDEP_ANCHORS | RE_CHAR_CLASSES | RE_UNMATCHED_RIGHT_PAREN_ORD | RE_NO_GNU_OPS)
#define __UINT_FAST16_MAX__ 0xffffffffffffffffUL
#define MPI_TYPE_NULL_COPY_FN ((MPI_Type_copy_attr_function*)0)
#define MPI_UNIVERSE_SIZE 0x64400009
#define __ldiv_t_defined 1
#define ___int_ptrdiff_t_h 
#define MPI_C_LONG_DOUBLE_COMPLEX ((MPI_Datatype)0x4c002042)
#define CCTK_PARAMETER__IO__out_yline_xi RESTRICTED_IO_STRUCT.out_yline_xi
#define _MM_EXCEPT_MASK 0x003f
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _GLIBCXX_USE_NANOSLEEP 1
#define CCTK_PARAMETER__IO__out_proc_every RESTRICTED_IO_STRUCT.out_proc_every
#define _GLIBCXX_HAVE_FINITE 1
#define k8fabs(x) (_mm_and_pd(x,k8abs_mask))
#define _lrotl(a,b) __rolq((a), (b))
#define _IO_ftrylockfile(_fp) 
#define _GLIBCXX_HAVE_UNISTD_H 1
#define __FD_ISSET(d,set) ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define CCTK_PARAMETER__IO__out_yzplane_x RESTRICTED_IO_STRUCT.out_yzplane_x
#define __USE_LARGEFILE64 1
#define CCTK_DELTA_TIME (cctk_delta_time/cctk_timefac)
#define __WCHAR_T 
#define HAVE_DIRENT_H 1
#define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
