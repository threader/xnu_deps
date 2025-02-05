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
__FBSDID("$FreeBSD: src/lib/libc/string/strcoll.c,v 1.13 2001/11/07 19:55:16 obrien Exp $");

#include "xlocale_private.h"

#include <stdlib.h>
#include <string.h>
#include "collate.h"

int
strcoll_l(s, s2, loc)
	const char *s, *s2;
	locale_t loc;
{
	int len, len2, prim, prim2, sec, sec2, ret, ret2;
	const char *t, *t2;
	char *tt, *tt2;

	NORMALIZE_LOCALE(loc);
	if (loc->__collate_load_error)
		return strcmp(s, s2);

	len = len2 = 1;
	ret = ret2 = 0;
	if (loc->__collate_substitute_nontrivial) {
		t = tt = (char *)__collate_substitute_l((unsigned char *)s, loc);
		t2 = tt2 = (char *)__collate_substitute_l((unsigned char *)s2, loc);
	} else {
		tt = tt2 = NULL;
		t = s;
		t2 = s2;
	}
	while(*t && *t2) {
		prim = prim2 = 0;
		while(*t && !prim) {
			__collate_lookup_l((unsigned char *)t, &len, &prim, &sec, loc);
			t += len;
		}
		while(*t2 && !prim2) {
			__collate_lookup_l((unsigned char *)t2, &len2, &prim2, &sec2, loc);
			t2 += len2;
		}
		if(!prim || !prim2)
			break;
		if(prim != prim2) {
			ret = prim - prim2;
			goto end;
		}
		if(!ret2)
			ret2 = sec - sec2;
	}
	if(!*t && *t2)
		ret = -(int)((unsigned char)*t2);
	else if(*t && !*t2)
		ret = (unsigned char)*t;
	else if(!*t && !*t2)
		ret = ret2;
  end:
	free(tt);
	free(tt2);

	return ret;
}

int
strcoll(s, s2)
	const char *s, *s2;
{
	return strcoll_l(s, s2, __current_locale());
}
