/*-
 * Copyright (c) 2002 Tim J. Robbins
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/string/wcscoll.c,v 1.3 2004/04/07 09:47:56 tjr Exp $");

#include "xlocale_private.h"

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include "collate.h"

static char *__mbsdup(const wchar_t *, locale_t);

/*
 * Placeholder implementation of wcscoll(). Attempts to use the single-byte
 * collation ordering where possible, and falls back on wcscmp() in locales
 * with extended character sets.
 */
int
wcscoll_l(const wchar_t *ws1, const wchar_t *ws2, locale_t loc)
{
	char *mbs1, *mbs2;
	int diff, sverrno;

	NORMALIZE_LOCALE(loc);
	if (loc->__collate_load_error || MB_CUR_MAX_L(loc) > 1)
		/*
		 * Locale has no special collating order, could not be
		 * loaded, or has an extended character set; do a fast binary
		 * comparison.
		 */
		return (wcscmp(ws1, ws2));

	if ((mbs1 = __mbsdup(ws1, loc)) == NULL || (mbs2 = __mbsdup(ws2, loc)) == NULL) {
		/*
		 * Out of memory or illegal wide chars; fall back to wcscmp()
		 * but leave errno indicating the error. Callers that don't
		 * check for error will get a reasonable but often slightly
		 * incorrect result.
		 */
		sverrno = errno;
		free(mbs1);
		errno = sverrno;
		return (wcscmp(ws1, ws2));
	}

	diff = strcoll_l(mbs1, mbs2, loc);
	sverrno = errno;
	free(mbs1);
	free(mbs2);
	errno = sverrno;

	return (diff);
}

int
wcscoll(const wchar_t *ws1, const wchar_t *ws2)
{
	return wcscoll_l(ws1, ws2, __current_locale());
}

static char *
__mbsdup(const wchar_t *ws, locale_t loc)
{
	static const mbstate_t initial;
	mbstate_t st;
	const wchar_t *wcp;
	size_t len;
	char *mbs;

	wcp = ws;
	st = initial;
	if ((len = wcsrtombs_l(NULL, &wcp, 0, &st, loc)) == (size_t)-1)
		return (NULL);
	if ((mbs = malloc(len + 1)) == NULL)
		return (NULL);
	st = initial;
	wcsrtombs_l(mbs, &ws, len + 1, &st, loc);

	return (mbs);
}
