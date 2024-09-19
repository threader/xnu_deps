#ifndef _LIBC_FEATURES_H_
#define _LIBC_FEATURES_H_

#define LEGACY_RUNE_APIS 1
#define LEGACY_UTMP_APIS 1
/* #undef UNIFDEF_MOVE_LOCALTIME */
#if __DARWIN_LONG_DOUBLE_IS_DOUBLE
#  if !defined(LDBL_COMPAT)
#    error Feature mismatch: __DARWIN_LONG_DOUBLE_IS_DOUBLE == 1
#  endif /* !LDBL_COMPAT */
#elif defined(LDBL_COMPAT)
#  error Feature mismatch: __DARWIN_LONG_DOUBLE_IS_DOUBLE == 0
#endif /* LDBL_COMPAT */
#if __DARWIN_ONLY_VERS_1050
#  error Feature mismatch: __DARWIN_ONLY_VERS_1050 == 1
#endif /* __DARWIN_ONLY_VERS_1050 */
#if __DARWIN_ONLY_UNIX_CONFORMANCE
#  error Feature mismatch: __DARWIN_ONLY_UNIX_CONFORMANCE == 1
#endif /* __DARWIN_ONLY_UNIX_CONFORMANCE */
#if __DARWIN_ONLY_64_BIT_INO_T
#  error Feature mismatch: __DARWIN_ONLY_64_BIT_INO_T == 1
#endif /* __DARWIN_ONLY_64_BIT_INO_T */
#define __APPLE_PR3375657_HACK__ 1
#define __APPLE_PR3417676_HACK__ 1
#define PR_5243343 1
#define PLOCKSTAT 1
#define NOTIFY_TZ 1

#endif /* _LIBC_FEATURES_H_ */
