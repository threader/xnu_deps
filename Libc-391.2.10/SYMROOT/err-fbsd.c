/*-
 * Copyright (c) 1993
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

#if defined(LIBC_SCCS) && !defined(lint)
static char sccsid[] = "@(#)err.c	8.1 (Berkeley) 6/4/93";
#endif /* LIBC_SCCS and not lint */
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/gen/err.c,v 1.13 2002/03/29 22:43:41 markm Exp $");

#include "namespace.h"
#include <err.h>
#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "un-namespace.h"

#include "libc_private.h"

#ifdef BUILDING_VARIANT

__private_extern__ FILE *_e_err_file; /* file to use for error output */
__private_extern__ void (*_e_err_exit)(int);

#else /* !BUILDING_VARIANT */

__private_extern__ FILE *_e_err_file = NULL; /* file to use for error output */
__private_extern__ void (*_e_err_exit)(int) = NULL;

/*
 * This is declared to take a `void *' so that the caller is not required
 * to include <stdio.h> first.  However, it is really a `FILE *', and the
 * manual page documents it as such.
 */
void
err_set_file(void *fp)
{
	if (fp)
		_e_err_file = fp;
	else
		_e_err_file = stderr;
}

void
err_set_exit(void (*ef)(int))
{
	_e_err_exit = ef;
}
#endif /* !BUILDING_VARIANT */

__weak_reference(_err, err);

void
_err(int eval, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	verrc(eval, errno, fmt, ap);
	va_end(ap);
}

void
verr(eval, fmt, ap)
	int eval;
	const char *fmt;
	va_list ap;
{
	verrc(eval, errno, fmt, ap);
}

void
errc(int eval, int code, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	verrc(eval, code, fmt, ap);
	va_end(ap);
}

void
verrc(eval, code, fmt, ap)
	int eval;
	int code;
	const char *fmt;
	va_list ap;
{
	if (_e_err_file == 0)
		err_set_file((FILE *)0);
	fprintf(_e_err_file, "%s: ", _getprogname());
	if (fmt != NULL) {
		vfprintf(_e_err_file, fmt, ap);
		fprintf(_e_err_file, ": ");
	}
	fprintf(_e_err_file, "%s\n", strerror(code));
	if (_e_err_exit)
		_e_err_exit(eval);
	exit(eval);
}

void
errx(int eval, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	verrx(eval, fmt, ap);
	va_end(ap);
}

void
verrx(eval, fmt, ap)
	int eval;
	const char *fmt;
	va_list ap;
{
	if (_e_err_file == 0)
		err_set_file((FILE *)0);
	fprintf(_e_err_file, "%s: ", _getprogname());
	if (fmt != NULL)
		vfprintf(_e_err_file, fmt, ap);
	fprintf(_e_err_file, "\n");
	if (_e_err_exit)
		_e_err_exit(eval);
	exit(eval);
}

__weak_reference(_warn, warn);

void
_warn(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vwarnc(errno, fmt, ap);
	va_end(ap);
}

void
vwarn(fmt, ap)
	const char *fmt;
	va_list ap;
{
	vwarnc(errno, fmt, ap);
}

void
warnc(int code, const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vwarnc(code, fmt, ap);
	va_end(ap);
}

void
vwarnc(code, fmt, ap)
	int code;
	const char *fmt;
	va_list ap;
{
	if (_e_err_file == 0)
		err_set_file((FILE *)0);
	fprintf(_e_err_file, "%s: ", _getprogname());
	if (fmt != NULL) {
		vfprintf(_e_err_file, fmt, ap);
		fprintf(_e_err_file, ": ");
	}
	fprintf(_e_err_file, "%s\n", strerror(code));
}

void
warnx(const char *fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vwarnx(fmt, ap);
	va_end(ap);
}

void
vwarnx(fmt, ap)
	const char *fmt;
	va_list ap;
{
	if (_e_err_file == 0)
		err_set_file((FILE *)0);
	fprintf(_e_err_file, "%s: ", _getprogname());
	if (fmt != NULL)
		vfprintf(_e_err_file, fmt, ap);
	fprintf(_e_err_file, "\n");
}
