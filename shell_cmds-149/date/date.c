/*-
 * Copyright (c) 1985, 1987, 1988, 1993
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
static char const copyright[] =
"@(#) Copyright (c) 1985, 1987, 1988, 1993\n\
	The Regents of the University of California.  All rights reserved.\n";
#endif /* not lint */

#if 0
#ifndef lint
static char sccsid[] = "@(#)date.c	8.2 (Berkeley) 4/28/95";
#endif /* not lint */
#endif

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/bin/date/date.c,v 1.47 2005/01/10 08:39:21 imp Exp $");

#include <sys/param.h>
#include <sys/time.h>

#include <ctype.h>
#include <err.h>
#include <locale.h>
#ifndef __APPLE__
#include <libutil.h>
#endif /* !__APPLE__ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <syslog.h>
#include <unistd.h>
#include <utmpx.h>

#ifdef __APPLE__
#include <get_compat.h>
#include <util.h>
#else
#define COMPAT_MODE(a,b) (1)
#endif /* __APPLE__ */

#include "extern.h"
#include "vary.h"

#ifndef	TM_YEAR_BASE
#define	TM_YEAR_BASE	1900
#endif

static time_t tval;
int retval;
int unix2003_std = 0;	/* to determine legacy vs std mode */

static void setthetime(const char *, const char *, int, int);
static void badformat(void);
static void usage(void);

int
main(int argc, char *argv[])
{
	struct timezone tz;
	int ch, rflag;
	int jflag, nflag;
	const char *format;
	char buf[1024];
	char *endptr, *fmt;
	char *tmp;
	int set_timezone;
	struct vary *v;
	const struct vary *badv;
	struct tm lt;

	unix2003_std = COMPAT_MODE("bin/date", "unix2003");	/* Determine the STD */

	v = NULL;
	fmt = NULL;
	(void) setlocale(LC_TIME, "");
	tz.tz_dsttime = tz.tz_minuteswest = 0;
	rflag = 0;
	jflag = nflag = 0;
	set_timezone = 0;
	while ((ch = getopt(argc, argv, "d:f:jnr:t:uv:")) != -1)
		switch((char)ch) {
		case 'd':		/* daylight savings time */
			tz.tz_dsttime = strtol(optarg, &endptr, 10) ? 1 : 0;
			if (endptr == optarg || *endptr != '\0')
				usage();
			set_timezone = 1;
			break;
		case 'f':
			fmt = optarg;
			break;
		case 'j':
			jflag = 1;	/* don't set time */
			break;
		case 'n':		/* don't set network */
			nflag = 1;
			break;
		case 'r':		/* user specified seconds */
			rflag = 1;
			tval = strtoq(optarg, &tmp, 0);
			if (*tmp != 0)
				usage();
			break;
		case 't':		/* minutes west of UTC */
					/* error check; don't allow "PST" */
			tz.tz_minuteswest = strtol(optarg, &endptr, 10);
			if (endptr == optarg || *endptr != '\0')
				usage();
			set_timezone = 1;
			break;
		case 'u':		/* do everything in UTC */
			(void)setenv("TZ", "UTC0", 1);
			break;
		case 'v':
			v = vary_append(v, optarg);
			break;
		default:
			usage();
		}
	argc -= optind;
	argv += optind;

	/*
	 * If -d or -t, set the timezone or daylight savings time; this
	 * doesn't belong here; the kernel should not know about either.
	 */
	if (set_timezone && settimeofday((struct timeval *)NULL, &tz))
		err(1, "settimeofday (timezone)");

	if (!rflag && time(&tval) == -1)
		err(1, "time");

	format = "%+";

	/* allow the operands in any order */
	if (*argv && **argv == '+') {
		format = *argv + 1;
		++argv;
	}

	if (*argv) {
		setthetime(fmt, *argv, jflag, nflag);
		++argv;
	} else if (fmt != NULL)
		usage();

	if (*argv && **argv == '+')
		format = *argv + 1;

	lt = *localtime(&tval);
	badv = vary_apply(v, &lt);
	if (badv) {
		fprintf(stderr, "%s: Cannot apply date adjustment\n",
			badv->arg);
		vary_destroy(v);
		usage();
	}
	vary_destroy(v);
	(void)strftime(buf, sizeof(buf), format, &lt);
	(void)printf("%s\n", buf);
	if (fflush(stdout))
		err(1, "stdout");
	/*
	 * If date/time could not be set/notified in the other hosts as
	 * determined by netsetval(), a return value 2 is set, which is
	 * only propagated back to shell in legacy mode.
	 */
	if (unix2003_std)
		exit(0);
	exit(retval);
}

#define	ATOI2(s)	((s) += 2, ((s)[-2] - '0') * 10 + ((s)[-1] - '0'))
#define	ATOI2_OFFSET(s, o)	(((s)[o] - '0') * 10 + ((s)[o + 1] - '0'))

static void
setthetime(const char *fmt, const char *p, int jflag, int nflag)
{
	struct tm *lt;
	const char *dot, *t;
	int century;
	size_t length;

	if (fmt != NULL) {
		lt = localtime(&tval);
		t = strptime(p, fmt, lt);
		if (t == NULL) {
			fprintf(stderr, "Failed conversion of ``%s''"
				" using format ``%s''\n", p, fmt);
			badformat();
		} else if (*t != '\0')
			fprintf(stderr, "Warning: Ignoring %ld extraneous"
				" characters in date string (%s)\n",
				(long) strlen(t), t);
	} else {
		for (t = p, dot = NULL; *t; ++t) {
			if (isdigit(*t))
				continue;
			if (*t == '.' && dot == NULL) {
				dot = t;
				continue;
			}
			badformat();
		}

		lt = localtime(&tval);

		if (dot != NULL) {			/* .ss */
			dot++; /* *dot++ = '\0'; */
			if (strlen(dot) != 2)
				badformat();
			lt->tm_sec = ATOI2(dot);
			if (lt->tm_sec > 61)
				badformat();
		} else
			lt->tm_sec = 0;

		century = 0;
		/* if p has a ".ss" field then let's pretend it's not there */
		switch (length = strlen(p) - ((dot != NULL) ? 3 : 0)) {
		case 12:				/* cc */
			lt->tm_year = (unix2003_std ? ATOI2_OFFSET(p, length - 4) : ATOI2(p)) * 100 - TM_YEAR_BASE;
			century = 1;
			/* FALLTHROUGH */
		case 10:				/* yy */
			if (century)
				lt->tm_year += (unix2003_std ? ATOI2_OFFSET(p, length - 2) : ATOI2(p));
			else {
				lt->tm_year = (unix2003_std ? ATOI2_OFFSET(p, length - 2) : ATOI2(p));
				if (lt->tm_year < 69)	/* hack for 2000 ;-} */
					lt->tm_year += 2000 - TM_YEAR_BASE;
				else
					lt->tm_year += 1900 - TM_YEAR_BASE;
			}
			/* FALLTHROUGH */
		case 8:					/* mm */
			lt->tm_mon = ATOI2(p);
			if (lt->tm_mon > 12)
				badformat();
			--lt->tm_mon;		/* time struct is 0 - 11 */
			/* FALLTHROUGH */
		case 6:					/* dd */
			lt->tm_mday = ATOI2(p);
			if (lt->tm_mday > 31)
				badformat();
			/* FALLTHROUGH */
		case 4:					/* HH */
			lt->tm_hour = ATOI2(p);
			if (lt->tm_hour > 23)
				badformat();
			/* FALLTHROUGH */
		case 2:					/* MM */
			lt->tm_min = ATOI2(p);
			if (lt->tm_min > 59)
				badformat();
			break;
		default:
			badformat();
		}
	}

	/* Let mktime() decide whether summer time is in effect. */
	lt->tm_isdst = -1;

	/* convert broken-down time to GMT clock time */
	if ((tval = mktime(lt)) == -1)
		errx(1, "nonexistent time");

	if (!jflag) {
		/* set the time */
		if (nflag || netsettime(tval)) {
			struct utmpx ut;
			bzero(&ut, sizeof(ut));
			ut.ut_type = OLD_TIME;
			(void)gettimeofday(&ut.ut_tv, NULL);
			pututxline(&ut);
			ut.ut_tv.tv_sec = tval;
			ut.ut_tv.tv_usec = 0;
			if (settimeofday(&ut.ut_tv, NULL))
				err(1, "settimeofday (timeval)");
			ut.ut_type = NEW_TIME;
			pututxline(&ut);
		}

		if ((p = getlogin()) == NULL)
			p = "???";
		syslog(LOG_AUTH | LOG_NOTICE, "date set by %s", p);
	}
}

static void
badformat(void)
{
	warnx("illegal time format");
	usage();
}

static void
usage(void)
{
	(void)fprintf(stderr, "%s\n%s\n",
	    "usage: date [-jnu] [-d dst] [-r seconds] [-t west] "
	    "[-v[+|-]val[ymwdHMS]] ... ",
		unix2003_std ? "            "
	    "[-f fmt date | [[[mm]dd]HH]MM[[cc]yy][.ss]] [+format]" :
	    "            "
	    "[-f fmt date | [[[[[cc]yy]mm]dd]HH]MM[.ss]] [+format]");
	exit(1);
}
