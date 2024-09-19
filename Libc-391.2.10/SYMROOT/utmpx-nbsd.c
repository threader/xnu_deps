/*	$NetBSD: utmpx.c,v 1.21 2003/09/06 16:42:10 wiz Exp $	 */

/*-
 * Copyright (c) 2002 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Christos Zoulas.
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
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include <sys/cdefs.h>

#if defined(LIBC_SCCS) && !defined(lint)
__RCSID("$NetBSD: utmpx.c,v 1.21 2003/09/06 16:42:10 wiz Exp $");
#endif /* LIBC_SCCS and not lint */

#include "namespace.h"
#include <sys/types.h>
#include <sys/param.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/wait.h>

#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <utmp.h>
/* don't define earlier, has side effects in fcntl.h */
#define __LIBC12_SOURCE__
#include <utmpx.h>
#include <vis.h>

#ifdef UTMP_COMPAT
#include <utmp.h>
#include <ttyent.h>

static void _utmp_compat(const struct utmpx *);
#endif /* UTMP_COMPAT */

__warn_references(getlastlogx,
    "warning: reference to compatibility getlastlogx(); include <utmpx.h> for correct reference")
__warn_references(lastlogxname,
    "warning: reference to deprecated lastlogxname()")

static FILE *fp;
static int readonly = 0;
static struct utmpx ut;
static char utfile[MAXPATHLEN] = _PATH_UTMPX;

static struct utmpx *utmp_update(const struct utmpx *);

static const char vers[] = "utmpx-1.00";

void
setutxent()
{

	(void)memset(&ut, 0, sizeof(ut));
	if (fp == NULL)
		return;
	(void)fseeko(fp, (off_t)sizeof(ut), SEEK_SET);
}


void
endutxent()
{

	(void)memset(&ut, 0, sizeof(ut));
	if (fp != NULL) {
		(void)fclose(fp);
		fp = NULL;
		readonly = 0;
	}
}


struct utmpx *
getutxent()
{

	if (fp == NULL) {
		struct stat st;

		if ((fp = fopen(utfile, "r+")) == NULL)
			if ((fp = fopen(utfile, "w+")) == NULL) {
				if ((fp = fopen(utfile, "r")) == NULL)
					goto fail;
				else
					readonly = 1;
			}
					

		/* get file size in order to check if new file */
		if (fstat(fileno(fp), &st) == -1)
			goto failclose;

		if (st.st_size == 0) {
			/* new file, add signature record */
			(void)memset(&ut, 0, sizeof(ut));
			ut.ut_type = SIGNATURE;
			(void)memcpy(ut.ut_user, vers, sizeof(vers));
			if (fwrite(&ut, sizeof(ut), 1, fp) != 1)
				goto failclose;
		} else {
			/* old file, read signature record */
			if (fread(&ut, sizeof(ut), 1, fp) != 1)
				goto failclose;
			if (memcmp(ut.ut_user, vers, sizeof(vers)) != 0 ||
			    ut.ut_type != SIGNATURE)
				goto failclose;
		}
	}

	if (fread(&ut, sizeof(ut), 1, fp) != 1)
		goto fail;

	return &ut;
failclose:
	(void)fclose(fp);
fail:
	(void)memset(&ut, 0, sizeof(ut));
	return NULL;
}


struct utmpx *
getutxid(const struct utmpx *utx)
{

	_DIAGASSERT(utx != NULL);

	if (utx->ut_type == EMPTY)
		return NULL;

	do {
		if (ut.ut_type == EMPTY)
			continue;
		switch (utx->ut_type) {
		case EMPTY:
			return NULL;
		case RUN_LVL:
		case BOOT_TIME:
		case OLD_TIME:
		case NEW_TIME:
			if (ut.ut_type == utx->ut_type)
				return &ut;
			break;
		case INIT_PROCESS:
		case LOGIN_PROCESS:
		case USER_PROCESS:
		case DEAD_PROCESS:
			switch (ut.ut_type) {
			case INIT_PROCESS:
			case LOGIN_PROCESS:
			case USER_PROCESS:
			case DEAD_PROCESS:
				if (memcmp(ut.ut_id, utx->ut_id,
				    sizeof(ut.ut_id)) == 0)
					return &ut;
				break;
			default:
				break;
			}
			break;
		default:
			return NULL;
		}
	} while (getutxent() != NULL);
	return NULL;
}


struct utmpx *
getutxline(const struct utmpx *utx)
{

	_DIAGASSERT(utx != NULL);

	do {
		switch (ut.ut_type) {
		case EMPTY:
			break;
		case LOGIN_PROCESS:
		case USER_PROCESS:
			if (strncmp(ut.ut_line, utx->ut_line,
			    sizeof(ut.ut_line)) == 0)
				return &ut;
			break;
		default:
			break;
		}
	} while (getutxent() != NULL);
	return NULL;
}


struct utmpx *
pututxline(const struct utmpx *utx)
{
	struct utmpx temp, *u = NULL;
	int gotlock = 0;

	_DIAGASSERT(utx != NULL);

	if (utx == NULL)
		return NULL;

	if (strcmp(_PATH_UTMPX, utfile) == 0)
		if ((fp != NULL && readonly) || (fp == NULL && geteuid() != 0))
			return utmp_update(utx);


	(void)memcpy(&temp, utx, sizeof(temp));

	if (fp == NULL) {
		(void)getutxent();
		if (fp == NULL || readonly)
			return NULL;
	}

	if (getutxid(&temp) == NULL) {
		setutxent();
		if (getutxid(&temp) == NULL) {
			if (lockf(fileno(fp), F_LOCK, (off_t)0) == -1)
				return NULL;
			gotlock++;
			if (fseeko(fp, (off_t)0, SEEK_END) == -1)
				goto fail;
		}
	}

	if (!gotlock) {
		/* we are not appending */
		if (fseeko(fp, -(off_t)sizeof(ut), SEEK_CUR) == -1)
			return NULL;
	}

	if (fwrite(&temp, sizeof (temp), 1, fp) != 1)
		goto fail;

	if (fflush(fp) == -1)
		goto fail;

	u = memcpy(&ut, &temp, sizeof(ut));
#ifdef UTMP_COMPAT
	_utmp_compat(u);
#endif /* UTMP_COMPAT */
fail:
	if (gotlock) {
		if (lockf(fileno(fp), F_ULOCK, (off_t)0) == -1)
			return NULL;
	}
	return u;
}


static struct utmpx *
utmp_update(const struct utmpx *utx)
{
	char buf[sizeof(*utx) * 4 + 1];
	pid_t pid;
	int status;

	_DIAGASSERT(utx != NULL);

	(void)strvisx(buf, (const char *)(const void *)utx, sizeof(*utx),
	    VIS_WHITE);
	switch (pid = fork()) {
	case 0:
		(void)execl(_PATH_UTMP_UPDATE,
		    strrchr(_PATH_UTMP_UPDATE, '/') + 1, buf, NULL);
		exit(1);
		/*NOTREACHED*/
	case -1:
		return NULL;
	default:
		if (waitpid(pid, &status, 0) == -1)
			return NULL;
		if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
			return memcpy(&ut, utx, sizeof(ut));
		return NULL;
	}

}

#ifdef UTMP_COMPAT
static void
_utmp_compat(const struct utmpx *ux)
{
	struct utmp u;
	int fd, slot;
	struct ttyent *ttyp;

	switch (ux->ut_type) {
	case INIT_PROCESS:
	case LOGIN_PROCESS:
	case USER_PROCESS:
		break;
	case DEAD_PROCESS:
		logout(ux->ut_line);
		return;
	default:
		return;
	}
	/* do equivalent of ttyslot(), but using ux->ut_slot */
	setttyent();
	slot = 1;
	for(;;) {
		if ((ttyp = getttyent()) == NULL) {
			endttyent();
			return;
		}
		if (!strcmp(ttyp->ty_name, ux->ut_line)) {
			endttyent();
			break;
		}
		slot++;
	}

	/* now write utmp */
	(void)memset(&u, 0, sizeof(u));
	strncpy(u.ut_line, ux->ut_line, UT_LINESIZE);
	strncpy(u.ut_name, ux->ut_user, UT_NAMESIZE);
	strncpy(u.ut_host, ux->ut_host, UT_HOSTSIZE);
	u.ut_time = ux->ut_tv.tv_sec;
	if ((fd = open(_PATH_UTMP, O_WRONLY|O_CREAT, 0644)) >= 0) {
		(void)lseek(fd, (off_t)(slot * sizeof(struct utmp)), L_SET);
		(void)write(fd, &u, sizeof(struct utmp));
		(void)close(fd);
	}
}
#endif /* UTMP_COMPAT */
