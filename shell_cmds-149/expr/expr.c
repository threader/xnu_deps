/*	$NetBSD: expr.c,v 1.9 1998/07/28 11:41:48 mycroft Exp $	*/

/*
 * Written by J.T. Conklin <jtc@netbsd.org>.
 * Public domain.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <regex.h>
#include <err.h>


enum token {
	OR, AND, EQ, LT, GT, ADD, SUB, MUL, DIV, MOD, MATCH, RP, LP,
	NE, LE, GE, OPERAND, EOI
};

struct val {
	enum {
		integer,
		string
	} type;

	union {
		char           *s;
		int64_t             i;
	} u;
};

enum token	token;
struct val     *tokval;
char          **av;

struct val *make_int __P((int64_t));
struct val *make_str __P((char *));
void free_value __P((struct val *));
int is_integer __P((struct val *, int64_t *));
int to_integer __P((struct val *));
void to_string __P((struct val *));
int is_null __P((struct val *));
int is_zero_or_null __P((struct val *));
void nexttoken __P((void));
void error __P((void)) __attribute__((__noreturn__));
struct val *eval6 __P((void));
struct val *eval5 __P((void));
struct val *eval4 __P((void));
struct val *eval3 __P((void));
struct val *eval2 __P((void));
struct val *eval1 __P((void));
struct val *eval0 __P((void));
int main __P((int, char **));


struct val *
make_int(i)
	int64_t             i;
{
	struct val     *vp;

	vp = (struct val *) malloc(sizeof(*vp));
	if (vp == NULL) {
		err(2, "%s", "");
	}
	vp->type = integer;
	vp->u.i = i;
	return vp;
}


struct val *
make_str(s)
	char           *s;
{
	struct val     *vp;

	vp = (struct val *) malloc(sizeof(*vp));
	if (vp == NULL || ((vp->u.s = strdup(s)) == NULL)) {
		err(2, "%s", "");
	}
	vp->type = string;
	return vp;
}


void
free_value(vp)
	struct val     *vp;
{
	if (vp->type == string)
		free(vp->u.s);
	free(vp);
}


/* determine if vp is an integer; if so, return it's value in *r */
int
is_integer(vp, r)
	struct val     *vp;
	int64_t	       *r;
{
	char           *s;
	int             neg;
	int64_t             i;

	if (vp->type == integer) {
		*r = vp->u.i;
		return 1;
	}

	/*
	 * POSIX.2 defines an "integer" as an optional unary minus 
	 * followed by digits.
	 */
	s = vp->u.s;
	i = 0;

	neg = (*s == '-');
	if (neg) {
		s++;
		/* the optional unary minus *must* be followed by digits to 
		 * be considered an integer.  A '-' alone is not an integer.
		 */
		if(!*s)
			return 0;
	}

	while (*s) {
		if (!isdigit(*s))
			return 0;

		i *= 10;
		i += *s - '0';

		s++;
	}

	if (neg)
		i *= -1;

	*r = i;
	return 1;
}


/* coerce to vp to an integer */
int
to_integer(vp)
	struct val     *vp;
{
	int64_t             r;

	if (vp->type == integer)
		return 1;

	if (is_integer(vp, &r)) {
		free(vp->u.s);
		vp->u.i = r;
		vp->type = integer;
		return 1;
	}

	return 0;
}


/* coerce to vp to an string */
void
to_string(vp)
	struct val     *vp;
{
	char           *tmp;

	if (vp->type == string)
		return;

	tmp = malloc(100);
	if (tmp == NULL) {
		err(2, "%s", "");
	}
	(void)snprintf(tmp, 100, "%lld", vp->u.i);
	vp->type = string;
	vp->u.s = tmp;
}

int is_null(vp)
	struct val     *vp;
{
	if ((vp->type != integer) && (*vp->u.s == 0))
		return 1;
	return 0;
}

int
is_zero_or_null(vp)
	struct val     *vp;
{
	if (vp->type == integer)
		return (vp->u.i == 0);
	else
		return (*vp->u.s == 0 || (to_integer(vp) && vp->u.i == 0));
	/* NOTREACHED */
}

void
nexttoken()
{
	char           *p;

	if ((p = *av) == NULL) {
		token = EOI;
		return;
	}
	av++;

	if (p[0] != '\0') {
		if (p[1] == '\0') {
			const char     *x = "|&=<>+-*/%:()";
			char           *i;	/* index */

			if ((i = strchr(x, *p)) != NULL) {
				token = i - x;
				return;
			}
		} else if (p[1] == '=' && p[2] == '\0') {
			switch (*p) {
			case '<':
				token = LE;
				return;
			case '>':
				token = GE;
				return;
			case '!':
				token = NE;
				return;
			}
		}
	}
	tokval = make_str(p);
	token = OPERAND;
	return;
}

void
error()
{
	errx(2, "syntax error");
	/* NOTREACHED */
}

struct val *
eval6()
{
	struct val *v;

	if (token == OPERAND) {
		nexttoken();
		return tokval;

	} else if (token == RP) {
		nexttoken();
		v = eval0();

		if (token != LP)
         		error();
		  
		nexttoken();
		return v;
	} else {
	   
		switch (token) {
	   	case DIV:
			 nexttoken();
		   	 tokval = make_str("/");
		   	 break;
	   	case MUL: 
			 nexttoken();
		    	 tokval = make_str("*");
		   	 break;
	   	case OR: 
		   	 nexttoken();
		   	 tokval = make_str("|");
		   	 break;
	   	case AND: 
		   	 nexttoken();
		   	 tokval = make_str("&");
		   	 break;
	   	case EQ: 
		   	 nexttoken();
		  	 tokval = make_str("=");
		 	 break;
	   	case LT: 
		  	 nexttoken();
		  	 tokval = make_str("<");
		  	 break;
	   	case GT: 
		  	 nexttoken();
		  	 tokval = make_str(">");
		  	 break;
	   	case ADD: 
		  	 nexttoken();
		  	 tokval = make_str("+");
		  	 break;
	   	case SUB: 
		    	 nexttoken();
		  	 tokval = make_str("-");
		  	 break;
	   	case MOD: 
		   	 nexttoken();
		  	 tokval = make_str("%");
		  	 break;
	   	case NE: 
		  	 nexttoken();
		  	 tokval = make_str("!=");
		  	 break;
	   	case LE: 
		  	 nexttoken();
		  	 tokval = make_str("<=");
		  	 break;
	   	case MATCH:
		  	 nexttoken();
		  	 tokval = make_str(":");
		  	 break;
	   	case GE: 
		  	 nexttoken();
		  	 tokval = make_str(">=");
		  	 break;
	   	case EOI:
		  	 error();
		}
        	return tokval;
	}
	/* NOTREACHED */
}

/* Parse and evaluate match (regex) expressions */
struct val *
eval5()
{
	regex_t         rp;
	regmatch_t      rm[2];
	char            errbuf[256];
	int             eval;
	struct val     *l, *r;
	struct val     *v;

	l = eval6();
	while (token == MATCH) {
		nexttoken();
		r = eval6();

		/* coerce to both arguments to strings */
		to_string(l);
		to_string(r);

		/* compile regular expression */
		if ((eval = regcomp(&rp, r->u.s, 0)) != 0) {
			(void)regerror(eval, &rp, errbuf, sizeof(errbuf));
			errx(2, "%s", errbuf);
		}

		/* compare string against pattern --  remember that patterns 
		   are anchored to the beginning of the line */
		if (regexec(&rp, l->u.s, 2, rm, 0) == 0 && rm[0].rm_so == 0) {
			if (rm[1].rm_so >= 0) {
				*(l->u.s + rm[1].rm_eo) = '\0';
				v = make_str(l->u.s + rm[1].rm_so);

			} else {
				v = make_int((int)(rm[0].rm_eo - rm[0].rm_so));
			}
		} else {
			if (rp.re_nsub == 0) {
				v = make_int(0);
			} else {
				v = make_str("");
			}
		}

		/* free arguments and pattern buffer */
		free_value(l);
		free_value(r);
		regfree(&rp);

		l = v;
	}

	return l;
}

/* Parse and evaluate multiplication and division expressions */
struct val *
eval4()
{
	struct val     *l, *r;
	enum token	op;

	l = eval5();
	while ((op = token) == MUL || op == DIV || op == MOD) {
		nexttoken();
		r = eval5();

		if (!to_integer(l) || !to_integer(r)) {
			errx(2, "non-numeric argument");
		}

		if (op == MUL) {
			l->u.i *= r->u.i;
		} else {
			if (r->u.i == 0) {
				errx(2, "division by zero");
			}
			if (op == DIV) {
				l->u.i /= r->u.i;
			} else {
				l->u.i %= r->u.i;
			}
		}

		free_value(r);
	}

	return l;
}

/* Parse and evaluate addition and subtraction expressions */
struct val *
eval3()
{
	struct val     *l, *r;
	enum token	op;

	l = eval4();
	while ((op = token) == ADD || op == SUB) {
		nexttoken();
		r = eval4();

		if (!to_integer(l) || !to_integer(r)) {
			errx(2, "non-numeric argument");
		}

		if (op == ADD) {
			l->u.i += r->u.i;
		} else {
			l->u.i -= r->u.i;
		}

		free_value(r);
	}

	return l;
}

/* Parse and evaluate comparison expressions */
struct val *
eval2()
{
	struct val     *l, *r;
	enum token	op;
	int             v = 0;	/* pacify gcc */
	int64_t		li, ri;

	l = eval3();
	while ((op = token) == EQ || op == NE || op == LT || op == GT || op == LE || op == GE) {
		nexttoken();
		r = eval3();

		if (is_integer(l, &li) && is_integer(r, &ri)) {
			switch (op) {
			case GT:
				v = (li >  ri);
				break;
			case GE:
				v = (li >= ri);
				break;
			case LT:
				v = (li <  ri);
				break;
			case LE:
				v = (li <= ri);
				break;
			case EQ:
				v = (li == ri);
				break;
			case NE:
				v = (li != ri);
				break;
			case MOD:
			case EOI:
			case OPERAND:
			case LP:
			case RP:
			case MATCH:
			case DIV:
			case MUL:
			case SUB:
			case ADD:
			case AND:
			case OR:
				/* Can't happen */
				abort();
				break;
			}
		} else {
			to_string(l);
			to_string(r);

			switch (op) {
			case GT:
				v = (strcoll(l->u.s, r->u.s) > 0);
				break;
			case GE:
				v = (strcoll(l->u.s, r->u.s) >= 0);
				break;
			case LT:
				v = (strcoll(l->u.s, r->u.s) < 0);
				break;
			case LE:
				v = (strcoll(l->u.s, r->u.s) <= 0);
				break;
			case EQ:
				v = (strcoll(l->u.s, r->u.s) == 0);
				break;
			case NE:
				v = (strcoll(l->u.s, r->u.s) != 0);
				break;
			case MUL:
			case SUB:
			case ADD:
			case AND:
			case OR:
			case DIV:
			case OPERAND:
			case EOI:
			case MOD:
			case RP:
			case MATCH:
			case LP:
				/* Can't happen */
				abort();
				break;
			}
		} 

		free_value(l);
		free_value(r);
		l = make_int(v);
	}

	return l;
}

/* Parse and evaluate & expressions */
struct val *
eval1()
{
	struct val     *l, *r;

	l = eval2();
	while (token == AND) {
		nexttoken();
		r = eval2();

		if (is_zero_or_null(l) || is_zero_or_null(r)) {
			free_value(l);
			free_value(r);
			l = make_int(0);
		} else {
			free_value(r);
		}
	}

	return l;
}

/* Parse and evaluate | expressions */
struct val *
eval0()
{
	struct val     *l, *r;

	l = eval1();
	while (token == OR) {
		nexttoken();
		r = eval1();

		if (is_zero_or_null(l)) {
			free_value(l);
			l = r;
			if( is_null(r) ) {
				free_value(r);
				l = make_int(0);
			}
		} else {
			free_value(r);
		}
	}

	return l;
}


int
main(argc, argv)
	int             argc;
	char          **argv;
{
	struct val     *vp;

	(void) setlocale(LC_ALL, "");
	av = argv + 1;
	if (*av && !strcmp(*av, "--"))
	    av++;
	nexttoken();
	vp = eval0();

	if (token != EOI)
		error();
        if (vp->type == string && vp->u.s[0]) 
		to_integer(vp);		/* -0 is not a string */
	if (vp->type == integer)
		(void)printf("%lld\n", vp->u.i);
	else
		(void)printf("%s\n", vp->u.s);

	exit(is_zero_or_null(vp));
	/* NOTREACHED */
}
