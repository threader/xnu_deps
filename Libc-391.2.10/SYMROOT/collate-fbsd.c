/*-
 * Copyright (c) 1995 Alex Tatmanjants <alex@elvisti.kiev.ua>
 *		at Electronni Visti IA, Kiev, Ukraine.
 *			All rights reserved.
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
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/locale/collate.c,v 1.33 2004/09/22 16:56:48 stefanf Exp $");

#include "xlocale_private.h"
/* assumes the locale_t variable is named loc */
#define __collate_substitute_table	(loc->__lc_collate->__substitute_table)
#define __collate_char_pri_table	(loc->__lc_collate->__char_pri_table)

#include "namespace.h"
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sysexits.h>
#include "un-namespace.h"

#include "collate.h"
#include "setlocale.h"
#include "ldpart.h"

#include "libc_private.h"

void __collate_err(int ex, const char *f) __dead2;

/*
 * Normally, the __collate_* routines should all be __private_extern__,
 * but grep is using them (3715846).  Until we can provide an alternative,
 * we leave them public, and provide a read-only __collate_load_error variable
 */
#undef __collate_load_error
int __collate_load_error = 1;

__private_extern__ int
__collate_load_tables(const char *encoding, locale_t loc)
{
	FILE *fp;
	int i, saverr, chains;
	uint32_t u32;
	char strbuf[STR_LEN], buf[PATH_MAX];
	struct __xlocale_st_collate *TMP;
	static struct __xlocale_st_collate *cache = NULL;

	/* 'encoding' must be already checked. */
	if (strcmp(encoding, "C") == 0 || strcmp(encoding, "POSIX") == 0) {
		loc->__collate_load_error = 1;
		if (loc == &__global_locale)
			__collate_load_error = 1;
		XL_RELEASE(loc->__lc_collate);
		loc->__lc_collate = NULL;
		return (_LDP_CACHE);
	}

	/*
	 * If the locale name is the same as our cache, use the cache.
	 */
	if (cache && strcmp(encoding, cache->__encoding) == 0) {
		loc->__collate_load_error = 0;
		if (loc == &__global_locale)
			__collate_load_error = 0;
		XL_RELEASE(loc->__lc_collate);
		loc->__lc_collate = cache;
		XL_RETAIN(loc->__lc_collate);
		return (_LDP_CACHE);
	}

	/*
	 * Slurp the locale file into the cache.
	 */

	/* 'PathLocale' must be already set & checked. */
	/* Range checking not needed, encoding has fixed size */
	(void)strcpy(buf, _PathLocale);
	(void)strcat(buf, "/");
	(void)strcat(buf, encoding);
	(void)strcat(buf, "/LC_COLLATE");
	if ((fp = fopen(buf, "r")) == NULL)
		return (_LDP_ERROR);

	if (fread(strbuf, sizeof(strbuf), 1, fp) != 1) {
		saverr = errno;
		(void)fclose(fp);
		errno = saverr;
		return (_LDP_ERROR);
	}
	chains = -1;
	if (strcmp(strbuf, COLLATE_VERSION) == 0)
		chains = 0;
	else if (strcmp(strbuf, COLLATE_VERSION1_1) == 0)
		chains = 1;
	if (chains < 0) {
		(void)fclose(fp);
		errno = EFTYPE;
		return (_LDP_ERROR);
	}
	if (chains) {
		if (fread(&u32, sizeof(u32), 1, fp) != 1) {
			saverr = errno;
			(void)fclose(fp);
			errno = saverr;
			return (_LDP_ERROR);
		}
		if ((chains = (int)ntohl(u32)) < 1) {
			(void)fclose(fp);
			errno = EFTYPE;
			return (_LDP_ERROR);
		}
	} else
		chains = TABLE_SIZE;

	if ((TMP =
	     malloc(sizeof(struct __xlocale_st_collate) + sizeof(struct __collate_st_chain_pri) * chains)) == NULL) {
		saverr = errno;
		(void)fclose(fp);
		errno = saverr;
		return (_LDP_ERROR);
	}
	TMP->__refcount = 2; /* one for the locale, one for the cache */
	TMP->__free_extra = NULL;
	TMP->__chain_pri_table = (struct __collate_st_chain_pri *)(TMP + 1);

#define FREAD(a, b, c, d) \
{ \
	if (fread(a, b, c, d) != c) { \
		saverr = errno; \
		free(TMP); \
		(void)fclose(d); \
		errno = saverr; \
		return (_LDP_ERROR); \
	} \
}

	FREAD(TMP->__substitute_table, sizeof(TMP->__substitute_table), 1, fp);
	FREAD(TMP->__char_pri_table, sizeof(TMP->__char_pri_table), 1, fp);
	FREAD(TMP->__chain_pri_table,
	      sizeof(struct __collate_st_chain_pri), chains, fp);
	(void)fclose(fp);

	(void)strcpy(TMP->__encoding, encoding);
	XL_RELEASE(cache);
	cache = TMP;
	XL_RELEASE(loc->__lc_collate);
	loc->__lc_collate = cache;
	/* no need to retain, since we set __refcount to 2 above */
	
	loc->__collate_substitute_nontrivial = 0;
	for (i = 0; i < UCHAR_MAX + 1; i++) {
		if (__collate_substitute_table[i][0] != i ||
		    __collate_substitute_table[i][1] != 0) {
			loc->__collate_substitute_nontrivial = 1;
			break;
		}
	}
	loc->__collate_load_error = 0;
	if (loc == &__global_locale)
		__collate_load_error = 0;

	return (_LDP_LOADED);
}

__private_extern__ u_char *
__collate_substitute_l(s, loc)
	const u_char *s;
	locale_t loc;
{
	int dest_len, len, nlen;
	int delta = strlen((const char *)s);
	u_char *dest_str = NULL;

	if (s == NULL || *s == '\0')
		return (__collate_strdup((u_char *)""));
	delta += delta / 8;
	dest_str = malloc(dest_len = delta);
	if (dest_str == NULL)
		__collate_err(EX_OSERR, __func__);
	len = 0;
	while (*s) {
		nlen = len + strlen((const char *)__collate_substitute_table[*s]);
		if (dest_len <= nlen) {
			dest_str = reallocf(dest_str, dest_len = nlen + delta);
			if (dest_str == NULL)
				__collate_err(EX_OSERR, __func__);
		}
		(void)strcpy((char *)(dest_str + len), (const char *)__collate_substitute_table[*s++]);
		len = nlen;
	}
	return (dest_str);
}

u_char *
__collate_substitute(s)
	const u_char *s;
{
	return __collate_substitute_l(s, __current_locale());
}

__private_extern__ void
__collate_lookup_l(t, len, prim, sec, loc)
	const u_char *t;
	int *len, *prim, *sec;
	locale_t loc;
{
	struct __collate_st_chain_pri *p2;

	*len = 1;
	*prim = *sec = 0;
	for (p2 = loc->__lc_collate->__chain_pri_table; p2->str[0] != '\0'; p2++) {
		if (*t == p2->str[0] &&
		    strncmp((const char *)t, (const char *)p2->str, strlen((const char *)p2->str)) == 0) {
			*len = strlen((const char *)p2->str);
			*prim = p2->prim;
			*sec = p2->sec;
			return;
		}
	}
	*prim = __collate_char_pri_table[*t].prim;
	*sec = __collate_char_pri_table[*t].sec;
}

void
__collate_lookup(t, len, prim, sec)
	const u_char *t;
	int *len, *prim, *sec;
{
	return __collate_lookup_l(t, len, prim, sec, __current_locale());
}

u_char *
__collate_strdup(s)
	u_char *s;
{
	u_char *t = (u_char *)strdup((const char *)s);

	if (t == NULL)
		__collate_err(EX_OSERR, __func__);
	return (t);
}

void
__collate_err(int ex, const char *f)
{
	const char *s;
	int serrno = errno;

	s = _getprogname();
	_write(STDERR_FILENO, s, strlen(s));
	_write(STDERR_FILENO, ": ", 2);
	s = f;
	_write(STDERR_FILENO, s, strlen(s));
	_write(STDERR_FILENO, ": ", 2);
	s = strerror(serrno);
	_write(STDERR_FILENO, s, strlen(s));
	_write(STDERR_FILENO, "\n", 1);
	exit(ex);
}

#ifdef COLLATE_DEBUG
void
__collate_print_tables()
{
	int i;
	struct __collate_st_chain_pri *p2;
	locale_t loc = __current_locale();

	printf("Substitute table:\n");
	for (i = 0; i < UCHAR_MAX + 1; i++)
	    if (i != *__collate_substitute_table[i])
		printf("\t'%c' --> \"%s\"\n", i,
		       __collate_substitute_table[i]);
	printf("Chain priority table:\n");
	for (p2 = loc->__lc_collate->__chain_pri_table; p2->str[0] != '\0'; p2++)
		printf("\t\"%s\" : %d %d\n", p2->str, p2->prim, p2->sec);
	printf("Char priority table:\n");
	for (i = 0; i < UCHAR_MAX + 1; i++)
		printf("\t'%c' : %d %d\n", i, __collate_char_pri_table[i].prim,
		       __collate_char_pri_table[i].sec);
}
#endif
