
/* : : generated by proto : : */
/* : : generated from /tmp/ksh/Build/src/lib/libast/features/fcntl.c by iffe version 2011-01-07 : : */
#ifndef _def_fcntl_ast
#if !defined(__PROTO__)
#  if defined(__STDC__) || defined(__cplusplus) || defined(_proto) || defined(c_plusplus)
#    if defined(__cplusplus)
#      define __LINKAGE__	"C"
#    else
#      define __LINKAGE__
#    endif
#    define __STDARG__
#    define __PROTO__(x)	x
#    define __OTORP__(x)
#    define __PARAM__(n,o)	n
#    if !defined(__STDC__) && !defined(__cplusplus)
#      if !defined(c_plusplus)
#      	define const
#      endif
#      define signed
#      define void		int
#      define volatile
#      define __V_		char
#    else
#      define __V_		void
#    endif
#  else
#    define __PROTO__(x)	()
#    define __OTORP__(x)	x
#    define __PARAM__(n,o)	o
#    define __LINKAGE__
#    define __V_		char
#    define const
#    define signed
#    define void		int
#    define volatile
#  endif
#  define __MANGLE__	__LINKAGE__
#  if defined(__cplusplus) || defined(c_plusplus)
#    define __VARARG__	...
#  else
#    define __VARARG__
#  endif
#  if defined(__STDARG__)
#    define __VA_START__(p,a)	va_start(p,a)
#  else
#    define __VA_START__(p,a)	va_start(p)
#  endif
#  if !defined(__INLINE__)
#    if defined(__cplusplus)
#      define __INLINE__	extern __MANGLE__ inline
#    else
#      if defined(_WIN32) && !defined(__GNUC__)
#      	define __INLINE__	__inline
#      endif
#    endif
#  endif
#endif
#if !defined(__LINKAGE__)
#define __LINKAGE__		/* 2004-08-11 transition */
#endif

#define _def_fcntl_ast	1
#define _sys_types	1	/* #include <sys/types.h> ok */
                  

#if _typ_off64_t
#undef	off_t
#ifdef __STDC__
#define	off_t		off_t
#endif
#endif

#include <ast_fs.h>

#if _typ_off64_t
#undef	off_t
#ifdef __STDC__
#define	off_t		off_t
#endif
#endif

#include <fcntl.h>
#include <sys/mman.h>

#define O_BINARY		0
#define O_TEMPORARY		0
#define O_TEXT			0

#include <ast_fs.h>
#if _typ_off64_t
#undef	off_t
#define	off_t		off64_t
#endif
#if _lib_fstat64
#define fstat		fstat64
#endif
#if _lib_lstat64
#define lstat		lstat64
#endif
#if _lib_stat64
#define stat		stat64
#endif
#if _lib_creat64
#define creat		creat64
#endif
#if _lib_mmap64
#define mmap		mmap64
#endif
#if _lib_open64
#undef	open
#define open		open64
#endif
#endif
