/* conftypes.h -- defines for build and host system. */

/* Copyright (C) 2001 Free Software Foundation, Inc.

   This file is part of GNU Bash, the Bourne Again SHell.

   Bash is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   Bash is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with Bash; see the file COPYING.  If not, write to the Free
   Software Foundation, 59 Temple Place, Suite 330, Boston, MA 02111 USA. */

#if !defined (_CONFTYPES_H_)
#define _CONFTYPES_H_

/* Placeholder for future modifications if cross-compiling or building a
   `fat' binary, e.g. on Apple Rhapsody.  These values are used in multiple
   files, so they appear here. */
#if !defined (RHAPSODY) && !defined (MACOSX)
#  define HOSTTYPE	CONF_HOSTTYPE
#  define OSTYPE	CONF_OSTYPE
#  define MACHTYPE	CONF_MACHTYPE
#else /* RHAPSODY */
#  if __ppc64__
#    define HOSTTYPE "ppc64"
#  elif __ppc__
#    define HOSTTYPE "powerpc"
#  elif __x86_64__
#    define HOSTTYPE "x86_64"
#  elif defined(__i386__)
#    define HOSTTYPE "i386"
#  else
#    define HOSTTYPE CONF_HOSTTYPE
#  endif

#  define OSTYPE CONF_OSTYPE
#  define VENDOR CONF_VENDOR

#  define MACHTYPE HOSTTYPE "-" VENDOR "-" OSTYPE
#endif /* RHAPSODY */

#ifndef HOSTTYPE
#  define HOSTTYPE "unknown"
#endif

#ifndef OSTYPE
#  define OSTYPE "unknown"
#endif

#ifndef MACHTYPE
#  define MACHTYPE "unknown"
#endif

#endif /* _CONFTYPES_H_ */
