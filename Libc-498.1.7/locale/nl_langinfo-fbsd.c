/*-
 * Copyright (c) 2001, 2003 Alexey Zelkin <phantom@FreeBSD.org>
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
__FBSDID("$FreeBSD: src/lib/libc/locale/nl_langinfo.c,v 1.17 2003/06/26 10:46:16 phantom Exp $");

#include "xlocale_private.h"

#include <langinfo.h>
#include <limits.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#include "lnumeric.h"
#include "lmessages.h"
#include "lmonetary.h"
#include "timelocal.h"

#define _REL(BASE) ((int)item-BASE)

char *
nl_langinfo_l(nl_item item, locale_t loc)
{
   char *ret, *cs;
   const char *s;
   static char *csym = NULL;

   NORMALIZE_LOCALE(loc);
   switch (item) {
	case CODESET:
		ret = "";
		if ((s = querylocale(LC_CTYPE_MASK, loc)) != NULL) {
			if ((cs = strchr(s, '.')) != NULL)
				ret = cs + 1;
			else if (strcmp(s, "C") == 0 ||
				 strcmp(s, "POSIX") == 0)
				ret = "US-ASCII";
		}
		break;
	case D_T_FMT:
		ret = (char *) __get_current_time_locale(loc)->c_fmt;
		break;
	case D_FMT:
		ret = (char *) __get_current_time_locale(loc)->x_fmt;
		break;
	case T_FMT:
		ret = (char *) __get_current_time_locale(loc)->X_fmt;
		break;
	case T_FMT_AMPM:
		ret = (char *) __get_current_time_locale(loc)->ampm_fmt;
		break;
	case AM_STR:
		ret = (char *) __get_current_time_locale(loc)->am;
		break;
	case PM_STR:
		ret = (char *) __get_current_time_locale(loc)->pm;
		break;
	case DAY_1: case DAY_2: case DAY_3:
	case DAY_4: case DAY_5: case DAY_6: case DAY_7:
		ret = (char*) __get_current_time_locale(loc)->weekday[_REL(DAY_1)];
		break;
	case ABDAY_1: case ABDAY_2: case ABDAY_3:
	case ABDAY_4: case ABDAY_5: case ABDAY_6: case ABDAY_7:
		ret = (char*) __get_current_time_locale(loc)->wday[_REL(ABDAY_1)];
		break;
	case MON_1: case MON_2: case MON_3: case MON_4:
	case MON_5: case MON_6: case MON_7: case MON_8:
	case MON_9: case MON_10: case MON_11: case MON_12:
		ret = (char*) __get_current_time_locale(loc)->month[_REL(MON_1)];
		break;
	case ABMON_1: case ABMON_2: case ABMON_3: case ABMON_4:
	case ABMON_5: case ABMON_6: case ABMON_7: case ABMON_8:
	case ABMON_9: case ABMON_10: case ABMON_11: case ABMON_12:
		ret = (char*) __get_current_time_locale(loc)->mon[_REL(ABMON_1)];
		break;
	case ERA:
		/* XXX: need to be implemented  */
		ret = "";
		break;
	case ERA_D_FMT:
		/* XXX: need to be implemented  */
		ret = "";
		break;
	case ERA_D_T_FMT:
		/* XXX: need to be implemented  */
		ret = "";
		break;
	case ERA_T_FMT:
		/* XXX: need to be implemented  */
		ret = "";
		break;
	case ALT_DIGITS:
		/* XXX: need to be implemented  */
		ret = "";
		break;
	case RADIXCHAR:
		ret = (char*) __get_current_numeric_locale(loc)->decimal_point;
		break;
	case THOUSEP:
		ret = (char*) __get_current_numeric_locale(loc)->thousands_sep;
		break;
	case YESEXPR:
		ret = (char*) __get_current_messages_locale(loc)->yesexpr;
		break;
	case NOEXPR:
		ret = (char*) __get_current_messages_locale(loc)->noexpr;
		break;
	/*
	 * YESSTR and NOSTR items marked with LEGACY are available, but not
	 * recomended by SUSv2 to be used in portable applications since
	 * they're subject to remove in future specification editions.
	 */
	case YESSTR:            /* LEGACY  */
		ret = (char*) __get_current_messages_locale(loc)->yesstr;
		break;
	case NOSTR:             /* LEGACY  */
		ret = (char*) __get_current_messages_locale(loc)->nostr;
		break;
	/*
	 * SUSv2 special formatted currency string 
	 */
	case CRNCYSTR:
		ret = "";
		cs = (char*) __get_current_monetary_locale(loc)->currency_symbol;
		if (*cs != '\0') {
			char pos = localeconv_l(loc)->p_cs_precedes;

			if (pos == localeconv_l(loc)->n_cs_precedes) {
				char psn = '\0';

				if (pos == CHAR_MAX) {
					if (strcmp(cs, __get_current_monetary_locale(loc)->mon_decimal_point) == 0)
						psn = '.';
				} else
					psn = pos ? '-' : '+';
				if (psn != '\0') {
					int clen = strlen(cs);

					if ((csym = reallocf(csym, clen + 2)) != NULL) {
						*csym = psn;
						strcpy(csym + 1, cs);
						ret = csym;
					}
				}
			}
		}
		break;
	case D_MD_ORDER:        /* FreeBSD local extension */
		ret = (char *) __get_current_time_locale(loc)->md_order;
		break;
	default:
		return "";	/* do not consult POSIX */
   }
   if (ret && !ret[0] && item != D_MD_ORDER && item != CODESET && loc != _c_locale) {
       ret = nl_langinfo_l(item, _c_locale);
   }
   return (ret);
}

char *
nl_langinfo(nl_item item)
{
	return (nl_langinfo_l(item, __current_locale()));
}
