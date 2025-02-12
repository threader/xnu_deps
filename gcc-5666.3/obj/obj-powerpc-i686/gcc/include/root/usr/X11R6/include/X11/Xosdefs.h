/*  DO NOT EDIT THIS FILE.

    It has been auto-edited by fixincludes from:

	"/usr/include/X11/Xosdefs.h"

    This had to be done to correct non-standard usages in the
    original, manufacturer supplied header file.  */

/*
 * O/S-dependent (mis)feature macro definitions
 *
 * $Xorg: Xosdefs.h,v 1.5 2001/02/09 02:03:23 xorgcvs Exp $
 *
Copyright 1991, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.
 */
/* $XFree86: xc/include/Xosdefs.h,v 3.21 2003/12/18 16:38:34 dawes Exp $ */

#ifndef _XOSDEFS_H_
#define _XOSDEFS_H_

/*
 * X_NOT_STDC_ENV means does not have ANSI C header files.  Lack of this
 * symbol does NOT mean that the system has stdarg.h.
 *
 * X_NOT_POSIX means does not have POSIX header files.  Lack of this
 * symbol does NOT mean that the POSIX environment is the default.
 * You may still have to define _POSIX_SOURCE to get it.
 */

#ifdef NOSTDHDRS
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef sony
#if !defined(SYSTYPE_SYSV) && !defined(_SYSTYPE_SYSV)
#define X_NOT_POSIX
#endif
#endif

#ifdef UTEK
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef vax
#ifndef ultrix			/* assume vanilla BSD */
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif
#endif

#ifdef luna
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef Mips
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif
  
#ifdef USL
#ifdef SYSV /* (release 3.2) */
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif
#endif

#ifdef _SCO_DS
#ifndef SCO
#define SCO
#endif
#ifndef SCO325
#define SCO325
#endif
#endif

#ifdef __i386__
#ifdef SYSV
#if !defined(ISC) && !defined(SCO) && !defined(_SEQUENT_)
#if !defined(_POSIX_SOURCE) && !defined(_SCO_DS)
#define X_NOT_POSIX
#endif
#define X_NOT_STDC_ENV
#endif
#endif
#endif

#ifdef MOTOROLA
#ifdef SYSV
#define X_NOT_STDC_ENV
#endif
#endif

#ifdef sun
/* Imake configs define SVR4 on Solaris, but cc & gcc only define __SVR4
 * This check allows non-Imake configured programs to build correctly.
 */
#if defined(__SVR4) && !defined(SVR4)
#define SVR4
#endif
#ifdef SVR4
/* define this to whatever it needs to be */
#define X_POSIX_C_SOURCE 199300L
#endif
#endif

#ifdef WIN32
#ifndef _POSIX_
#define X_NOT_POSIX
#endif
#endif

#if defined(nec_ews_svr2) || defined(SX) || defined(PC_UX)
#define X_NOT_POSIX
#define X_NOT_STDC_ENV
#endif

#ifdef __UNIXOS2__
#define USGISH
#define NULL_NOT_ZERO
#endif

#ifdef __DARWIN__
#define NULL_NOT_ZERO
#endif

#ifdef __GNU__
#ifndef PATH_MAX
#define PATH_MAX 4096
#endif
#ifndef MAXPATHLEN
#define MAXPATHLEN 4096
#endif
#endif
#endif /* _XOSDEFS_H_ */

