#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: src/lib/libc/string/Makefile.inc,v 1.32 2002/11/18 09:50:56 ru Exp $

# machine-dependent string sources
.if exists(${.CURDIR}/${MACHINE_ARCH}/string/Makefile.inc)
.include "${.CURDIR}/${MACHINE_ARCH}/string/Makefile.inc"
.endif

.PATH: ${.CURDIR}/string

CFLAGS+= -I${.CURDIR}/locale

.include "Makefile.fbsd_begin"
# machine-independent string sources
FBSDMISRCS+=bcmp.c ffs.c index.c memccpy.c memchr.c memcmp.c \
	memset.c rindex.c stpcpy.c strcasecmp.c strcat.c \
	strchr.c strcoll.c strcpy.c strcspn.c strdup.c strerror.c \
	strlcat.c strlcpy.c strlen.c strmode.c strncat.c strncmp.c strncpy.c \
	strcasestr.c strnstr.c \
	strpbrk.c strrchr.c strsep.c strsignal.c strspn.c strstr.c strtok.c \
	strxfrm.c swab.c wcscat.c wcschr.c wcscmp.c wcscoll.c wcscpy.c \
	wcscspn.c \
	wcslcat.c wcslcpy.c wcslen.c wcsncat.c wcsncmp.c wcsncpy.c wcspbrk.c \
	wcsrchr.c wcsspn.c wcsstr.c wcstok.c wcswidth.c wcsxfrm.c wmemchr.c \
	wmemcmp.c \
	wmemcpy.c wmemmove.c wmemset.c
.include "Makefile.fbsd_end"

.if ${LIB} == "c"
.include "Makefile.fbsd_begin"
FBSDMAN3= bcmp.3 bcopy.3 bstring.3 bzero.3 ffs.3 index.3 memccpy.3 memchr.3 \
	memcmp.3 memcpy.3 memmove.3 memset.3 rindex.3 strcasecmp.3 strcat.3 \
	strchr.3 strcmp.3 strcoll.3 strcpy.3 strcspn.3 strdup.3 strerror.3 \
	string.3 strlcpy.3 strlen.3 strmode.3 strpbrk.3 strrchr.3 strsep.3 \
	strspn.3 strstr.3 strtok.3 strxfrm.3 swab.3 wcscoll.3 wcstok.3 \
	wcswidth.3 wcsxfrm.3 wmemchr.3
.include "Makefile.fbsd_end"

MLINKS+=strcasecmp.3 strncasecmp.3
MLINKS+=strcasecmp.3 strcasecmp_l.3
MLINKS+=strcasecmp.3 strncasecmp_l.3
MLINKS+=strcat.3 strncat.3
MLINKS+=strcmp.3 strncmp.3
MLINKS+=strcoll.3 strcoll_l.3
MLINKS+=strcpy.3 stpcpy.3
MLINKS+=strcpy.3 strncpy.3
MLINKS+=strerror.3 perror.3 strerror.3 sys_errlist.3 strerror.3 sys_nerr.3
MLINKS+=strerror.3 strerror_r.3
MLINKS+=strlcpy.3 strlcat.3
MLINKS+=strtok.3 strtok_r.3
MLINKS+=strstr.3 strcasestr.3
MLINKS+=strstr.3 strnstr.3
MLINKS+=strstr.3 strcasestr_l.3
MLINKS+=strxfrm.3 strxfrm_l.3
MLINKS+=wcscoll.3 wcscoll_l.3
MLINKS+=wcswidth.3 wcswidth_l.3
MLINKS+=wcsxfrm.3 wcsxfrm_l.3
MLINKS+=wmemchr.3 wmemcmp.3 wmemchr.3 wmemcpy.3 \
	wmemchr.3 wmemmove.3 wmemchr.3 wmemset.3 \
	wmemchr.3 wcscat.3 wmemchr.3 wcschr.3 \
	wmemchr.3 wcscmp.3 wmemchr.3 wcscpy.3 \
	wmemchr.3 wcscspn.3 wmemchr.3 wcslcat.3 \
	wmemchr.3 wcslcpy.3 wmemchr.3 wcslen.3 \
	wmemchr.3 wcsncat.3 wmemchr.3 wcsncmp.3 \
	wmemchr.3 wcsncpy.3 wmemchr.3 wcspbrk.3 \
	wmemchr.3 wcsrchr.3 wmemchr.3 wcsspn.3 \
	wmemchr.3 wcsstr.3
.endif
