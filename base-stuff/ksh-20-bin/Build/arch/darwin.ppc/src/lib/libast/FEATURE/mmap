/* : : generated from /tmp/ksh/Build/src/lib/libast/features/mmap by iffe version 2011-01-07 : : */
#ifndef _def_mmap_ast
#define _def_mmap_ast	1
#define _sys_types	1	/* #include <sys/types.h> ok */
#define _sys_mman	1	/* #include <sys/mman.h> ok */
#define _lib_mmap	1	/* standard mmap interface that works */
#define _mmap_anon	1	/* use mmap MAP_ANON to get raw memory */
#define _mmap_worthy	1	/* mmap is good */

/* some systems get it wrong but escape concise detection */
#ifndef _NO_MMAP
#if __CYGWIN__
#define _NO_MMAP	1
#endif
#endif

#if _NO_MMAP
#undef	_lib_mmap
#undef	_lib_mmap64
#undef	_mmap_anon
#undef	_mmap_devzero
#undef	_mmap_worthy
#endif

#endif
