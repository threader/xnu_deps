/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef lint
#if 0
static char sccsid[] = "@(#)ls.c	8.1 (Berkeley) 6/6/93";
#endif
#endif /* not lint */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/usr.bin/find/ls.c,v 1.17 2004/01/20 09:27:03 des Exp $");

#include <sys/param.h>
#include <sys/stat.h>

#include <err.h>
#include <errno.h>
#include <fts.h>
#include <grp.h>
#include <inttypes.h>
#include <langinfo.h>
#include <pwd.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#ifdef __APPLE__
/* definition from utmp.h */
#define UT_NAMESIZE     8
#endif /* __APPLE__ */

#include "find.h"

/* Derived from the print routines in the ls(1) source code. */

static void printlink(char *);
static void printtime(time_t);

void
printlong(char *name, char *accpath, struct stat *sb)
{
	char modep[15];

	(void)printf("%6lu %8"PRId64" ", (u_long) sb->st_ino, sb->st_blocks);
	(void)strmode(sb->st_mode, modep);
#ifdef __APPLE__
	(void)printf("%s %3u %-*s %-*s ", modep, sb->st_nlink, UT_NAMESIZE,
	    user_from_uid(sb->st_uid, 0), UT_NAMESIZE,
#else /* !__APPLE__ */
	(void)printf("%s %3u %-*s %-*s ", modep, sb->st_nlink, MAXLOGNAME - 1,
	    user_from_uid(sb->st_uid, 0), MAXLOGNAME - 1,
#endif /* __APPLE__ */
	    group_from_gid(sb->st_gid, 0));

	if (S_ISCHR(sb->st_mode) || S_ISBLK(sb->st_mode))
		(void)printf("%3d, %3d ", major(sb->st_rdev),
		    minor(sb->st_rdev));
	else
		(void)printf("%8"PRId64" ", sb->st_size);
	printtime(sb->st_mtime);
	(void)printf("%s", name);
	if (S_ISLNK(sb->st_mode))
		printlink(accpath);
	(void)putchar('\n');
}

static void
printtime(time_t ftime)
{
	char longstring[80];
	static time_t lnow;
	const char *format;
	static int d_first = -1;

	if (d_first < 0)
		d_first = (*nl_langinfo(D_MD_ORDER) == 'd');
	if (lnow == 0)
		lnow = time(NULL);

#define	SIXMONTHS	((365 / 2) * 86400)
	if (ftime + SIXMONTHS > lnow && ftime < lnow + SIXMONTHS)
		/* mmm dd hh:mm || dd mmm hh:mm */
		format = d_first ? "%e %b %R " : "%b %e %R ";
	else
		/* mmm dd  yyyy || dd mmm  yyyy */
		format = d_first ? "%e %b  %Y " : "%b %e  %Y ";
	strftime(longstring, sizeof(longstring), format, localtime(&ftime));
	fputs(longstring, stdout);
}

static void
printlink(char *name)
{
	int lnklen;
	char path[MAXPATHLEN];

	if ((lnklen = readlink(name, path, MAXPATHLEN - 1)) == -1) {
		warn("%s", name);
		return;
	}
	path[lnklen] = '\0';
	(void)printf(" -> %s", path);
}
