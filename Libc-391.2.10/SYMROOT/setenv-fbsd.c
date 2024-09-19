/*
 * Copyright (c) 1987, 1993
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
static char sccsid[] = "@(#)setenv.c	8.1 (Berkeley) 6/4/93";
#endif /* LIBC_SCCS and not lint */
#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/stdlib/setenv.c,v 1.9 2002/03/22 21:53:10 obrien Exp $");

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <crt_externs.h>
#include <errno.h>

char *__findenv(const char *, int *);
__private_extern__ int __setenv(const char *, const char *, int, int);

#ifndef BUILDING_VARIANT
__private_extern__ int
__setenv(name, value, rewrite, copy)
	const char *name;
	const char *value;
	int rewrite, copy;
{
	char ***environp = _NSGetEnviron();
	static char **alloced;			/* if allocated space before */
	char *c;
	int offset;

	if ((c = __findenv(name, &offset))) {	/* find if already exists */
		if (!rewrite)
			return (0);
		/* In UNIX03, we can't overwrite even if the string is long
		 * enough, because the putenv() string is owned by the user
		 * (ie, always malloc() a new string) */
	} else {					/* create new slot */
		int cnt;
		char **p;

		for (p = *environp, cnt = 0; *p; ++p, ++cnt);
		if (alloced == *environp) {			/* just increase size */
			p = (char **)realloc((char *)*environp,
			    (size_t)(sizeof(char *) * (cnt + 2)));
			if (!p)
				return (-1);
			alloced = *environp = p;
		}
		else {				/* get new space */
						/* copy old entries into it */
			p = malloc((size_t)(sizeof(char *) * (cnt + 2)));
			if (!p)
				return (-1);
			bcopy(*environp, p, cnt * sizeof(char *));
			alloced = *environp = p;
		}
		(*environp)[cnt + 1] = NULL;
		offset = cnt;
	}
	/* For non Unix03, or UnixO3 setenv(), we make a copy of the user's
	 * strings.  For Unix03 putenv(), we put the string directly in
	 * the environment. */
	if (copy) {
		for (c = (char *)name; *c && *c != '='; ++c);	/* no `=' in name */
		if (!((*environp)[offset] =			/* name + `=' + value */
		    malloc((size_t)((int)(c - name) + strlen(value) + 2))))
			return (-1);
		for (c = (*environp)[offset]; (*c = *name++) && *c != '='; ++c);
		for (*c++ = '='; (*c++ = *value++); );
	} else
		(*environp)[offset] = name;
	return (0);
}
#endif /* !BUILD_VARIANT */

/*
 * setenv --
 *	Set the value of the environmental variable "name" to be
 *	"value".  If rewrite is set, replace any current value.
 */
int
setenv(name, value, rewrite)
	const char *name;
	const char *value;
	int rewrite;
{
	/* no null ptr or empty str */
	if(name == NULL || *name == 0) {
		errno = EINVAL;
		return (-1);
	}

#if __DARWIN_UNIX03
	/* no '=' in name */
	if (strchr(name, '=')) {
		errno = EINVAL;
		return (-1);
	}
#endif /* __DARWIN_UNIX03 */

	if (*value == '=')			/* no `=' in value */
		++value;
	return (__setenv(name, value, rewrite, 1));
}

/*
 * unsetenv(name) --
 *	Delete environmental variable "name".
 */
#if __DARWIN_UNIX03
int
#else /* !__DARWIN_UNIX03 */
void
#endif /* __DARWIN_UNIX03 */
unsetenv(name)
	const char *name;
{
	char **environ = *_NSGetEnviron();
	char **p;
	int offset;

#if __DARWIN_UNIX03
	/* no null ptr or empty str */
	if(name == NULL || *name == 0) {
		errno = EINVAL;
		return (-1);
	}

	/* no '=' in name */
	if (strchr(name, '=')) {
		errno = EINVAL;
		return (-1);
	}
#else /* !__DARWIN_UNIX03 */
	/* no null ptr or empty str */
	if(name == NULL || *name == 0)
		return;
#endif /* __DARWIN_UNIX03 */
	while (__findenv(name, &offset))	/* if set multiple times */
		for (p = &environ[offset];; ++p)
			if (!(*p = *(p + 1)))
				break;
#if __DARWIN_UNIX03
	return 0;
#endif /* __DARWIN_UNIX03 */
}
