#	from @(#)Makefile.inc	8.3 (Berkeley) 2/4/95
# $FreeBSD: src/lib/libc/stdlib/Makefile.inc,v 1.45 2003/04/05 07:33:46 tjr Exp $

# machine-dependent stdlib sources
.sinclude "${.CURDIR}/${MACHINE_ARCH}/stdlib/Makefile.inc"

# machine-independent stdlib sources
.PATH: ${.CURDIR}/stdlib
CWD := ${.CURDIR}/stdlib

MISRCS+=a64l.c grantpt.c l64a.c

.include "Makefile.fbsd_begin"
FBSDMISRCS=_Exit_.c abort.c abs.c atexit.c atof.c atoi.c atol.c atoll.c \
	bsearch.c div.c exit.c getenv.c getopt.c getopt_long.c getsubopt.c \
	hcreate.c heapsort.c imaxabs.c imaxdiv.c insque.c labs.c \
	ldiv.c llabs.c lldiv.c lsearch.c merge.c putenv.c qsort.c qsort_r.c \
	radixsort.c rand.c random.c reallocf.c realpath.c remque.c setenv.c \
	strhash.c strtoimax.c strtol.c strtoll.c strtoq.c strtoul.c \
	strtoull.c strtoumax.c strtouq.c system.c tdelete.c tfind.c tsearch.c \
	twalk.c
FBSDHDRS= atexit.h
.include "Makefile.fbsd_end"

.include "Makefile.nbsd_begin"
NBSDMISRCS = strfmon.c
.include "Makefile.nbsd_end"

# 4302056: compile qsort.c and bsearch.c with -fexceptions
.for _src in qsort-fbsd.c bsearch-fbsd.c
CFLAGS-${_src} += -fexceptions
.endfor

PRIV_INSTHDRS += ${SRCROOT}/stdlib/atexit.h

.include "Makefile.obsd_begin"
OBSDMISRCS=ecvt.c gcvt.c
.include "Makefile.obsd_end"

LEGACYSRCS+= getopt.c putenv.c realpath.c setenv.c system.c
DARWINEXTSNSRCS += realpath.c
CANCELABLESRCS += system.c

# set the LIBC_ALIAS_* macros so we can decorate the symbol independent
# of other macro settings
CFLAGS-getopt-fbsd.c += -DLIBC_ALIAS_GETOPT
CFLAGS-putenv-fbsd.c += -DLIBC_ALIAS_PUTENV
CFLAGS-realpath-fbsd.c += -DLIBC_ALIAS_REALPATH
CFLAGS-setenv-fbsd.c += -DLIBC_ALIAS_SETENV -DLIBC_ALIAS_UNSETENV
CFLAGS-system-fbsd.c += -DLIBC_ALIAS_SYSTEM

.if ${LIB} == "c"
MAN3+=	a64l.3 grantpt.3
MAN3+=	strtod_l.3 strtol_l.3

.include "Makefile.fbsd_begin"
FBSDMAN3= abort.3 abs.3 alloca.3 atexit.3 atof.3 atoi.3 atol.3 bsearch.3 \
	div.3 exit.3 getenv.3 getopt.3 getopt_long.3 getsubopt.3 \
	hcreate.3 imaxabs.3 imaxdiv.3 insque.3 labs.3 ldiv.3 llabs.3 lldiv.3 \
	lsearch.3 memory.3 qsort.3 radixsort.3 rand.3 random.3 realpath.3 \
	strtod.3 strtol.3 strtoul.3 system.3 tsearch.3
.include "Makefile.fbsd_end"

.include "Makefile.nbsd_begin"
NBSDMAN3= strfmon.3
.include "Makefile.nbsd_end"

.include "Makefile.obsd_begin"
OBSDMAN3= ecvt.3
.include "Makefile.obsd_end"

MLINKS+= a64l.3 l64a.3

MLINKS+= atof.3 atof_l.3

MLINKS+= atoi.3 atoi_l.3

MLINKS+= atol.3 atol_l.3			\
         atol.3 atoll.3				\
         atol.3 atoll_l.3

MLINKS+= ecvt.3 fcvt.3				\
         ecvt.3 gcvt.3

MLINKS+= exit.3 _Exit.3

MLINKS+= getenv.3 putenv.3			\
         getenv.3 setenv.3			\
         getenv.3 unsetenv.3

MLINKS+= getopt_long.3 getopt_long_only.3

MLINKS+= grantpt.3 posix_openpt.3		\
         grantpt.3 ptsname.3			\
         grantpt.3 unlockpt.3

MLINKS+= hcreate.3 hdestroy.3			\
         hcreate.3 hsearch.3

MLINKS+= insque.3 remque.3

MLINKS+= lsearch.3 lfind.3

MLINKS+= qsort.3 heapsort.3			\
         qsort.3 mergesort.3			\
         qsort.3 qsort_r.3

MLINKS+= radixsort.3 sradixsort.3

MLINKS+= rand.3 rand_r.3			\
         rand.3 srand.3				\
         rand.3 sranddev.3

MLINKS+= random.3 initstate.3			\
         random.3 setstate.3			\
         random.3 srandom.3			\
         random.3 srandomdev.3

MLINKS+=strfmon.3 strfmon_l.3

MLINKS+= strtod.3 strtof.3			\
         strtod.3 strtold.3

MLINKS+= strtod_l.3 strtof_l.3			\
         strtod_l.3 strtold_l.3

MLINKS+= strtol.3 strtoll.3			\
         strtol.3 strtoq.3			\
         strtol.3 strtoimax.3

MLINKS+= strtol_l.3 strtoimax_l.3		\
         strtol_l.3 strtoll_l.3			\
         strtol_l.3 strtoq_l.3			\
         strtol_l.3 strtoul_l.3			\
         strtol_l.3 strtoull_l.3		\
         strtol_l.3 strtoumax_l.3		\
         strtol_l.3 strtouq_l.3

MLINKS+= strtoul.3 strtoull.3			\
         strtoul.3 strtoumax.3			\
         strtoul.3 strtouq.3

MLINKS+= tsearch.3 tdelete.3			\
         tsearch.3 tfind.3			\
         tsearch.3 twalk.3
.endif
