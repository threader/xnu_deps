/*
 * Copyright (c) 2000, 2001 Alexey Zelkin <phantom@FreeBSD.org>
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
__FBSDID("$FreeBSD: src/lib/libc/locale/lnumeric.c,v 1.16 2003/06/26 10:46:16 phantom Exp $");

#include "xlocale_private.h"

#include <limits.h>
#include <string.h>

#include "ldpart.h"
#include "lnumeric.h"

extern const char *__fix_locale_grouping_str(const char *);

#define LCNUMERIC_SIZE (sizeof(struct lc_numeric_T) / sizeof(char *))

static char	numempty[] = { CHAR_MAX, '\0' };

static const struct lc_numeric_T _C_numeric_locale = {
	".",     	/* decimal_point */
	"",     	/* thousands_sep */
	numempty	/* grouping */
};

__private_extern__ int
__numeric_load_locale(const char *name, locale_t loc)
{
	int ret;
	struct __xlocale_st_numeric *xp;
	static struct __xlocale_st_numeric *cache = NULL;

	/* 'name' must be already checked. */
	if (strcmp(name, "C") == 0 || strcmp(name, "POSIX") == 0) {
		if (!loc->_numeric_using_locale)
			return (_LDP_CACHE);
		loc->_numeric_using_locale = 0;
		XL_RELEASE(loc->__lc_numeric);
		loc->__lc_numeric = NULL;
		loc->__nlocale_changed = 1;
		return (_LDP_CACHE);
	}

	if (loc->_numeric_using_locale && strcmp(name, loc->__lc_numeric->_numeric_locale_buf) == 0)
		return (_LDP_CACHE);
	/*
	 * If the locale name is the same as our cache, use the cache.
	 */
	if (cache && cache->_numeric_locale_buf && strcmp(name, cache->_numeric_locale_buf) == 0) {
		loc->_numeric_using_locale = 1;
		XL_RELEASE(loc->__lc_numeric);
		loc->__lc_numeric = cache;
		XL_RETAIN(loc->__lc_numeric);
		loc->__nlocale_changed = 1;
		return (_LDP_CACHE);
	}
	if ((xp = (struct __xlocale_st_numeric *)malloc(sizeof(*xp))) == NULL)
		return _LDP_ERROR;
	xp->__refcount = 1;
	xp->__free_extra = (__free_extra_t)__ldpart_free_extra;
	xp->_numeric_locale_buf = NULL;

	ret = __part_load_locale(name, &loc->_numeric_using_locale,
		&xp->_numeric_locale_buf, "LC_NUMERIC",
		LCNUMERIC_SIZE, LCNUMERIC_SIZE,
		(const char **)&xp->_numeric_locale);
	if (ret != _LDP_ERROR)
		loc->__nlocale_changed = 1;
	else
		free(xp);
	if (ret == _LDP_LOADED) {
		/* Can't be empty according to C99 */
		if (*xp->_numeric_locale.decimal_point == '\0')
			xp->_numeric_locale.decimal_point =
			    _C_numeric_locale.decimal_point;
		xp->_numeric_locale.grouping =
		    __fix_locale_grouping_str(xp->_numeric_locale.grouping);
		XL_RELEASE(loc->__lc_numeric);
		loc->__lc_numeric = xp;
		XL_RELEASE(cache);
		cache = xp;
		XL_RETAIN(cache);
	}
	return (ret);
}

__private_extern__ struct lc_numeric_T *
__get_current_numeric_locale(locale_t loc)
{
	return (loc->_numeric_using_locale
		? &loc->__lc_numeric->_numeric_locale
		: (struct lc_numeric_T *)&_C_numeric_locale);
}

#ifdef LOCALE_DEBUG
void
numericdebug(void) {
locale_t loc = __current_locale();
printf(	"decimal_point = %s\n"
	"thousands_sep = %s\n"
	"grouping = %s\n",
	loc->__lc_numeric->_numeric_locale.decimal_point,
	loc->__lc_numeric->_numeric_locale.thousands_sep,
	loc->__lc_numeric->_numeric_locale.grouping
);
}
#endif /* LOCALE_DEBUG */
