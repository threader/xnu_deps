#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/gen/setprogname.c,v 1.8 2002/03/29 22:43:41 markm Exp $");

#include <stdlib.h>
#include <string.h>
#include <crt_externs.h>
#define	__progname	(*_NSGetProgname())

#include "libc_private.h"

void
setprogname(const char *progname)
{
	const char *p;

	p = strrchr(progname, '/');
	if (p != NULL)
		__progname = (char *)(p + 1);
	else
		__progname = (char *)progname;
}
