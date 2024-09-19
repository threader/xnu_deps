#include <sys/cdefs.h>
#ifndef lint
#if 0
static char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#else
__IDSTRING(yyrcsid, "$NetBSD: skeleton.c,v 1.14 1997/10/20 03:41:16 lukem Exp $");
#endif
#endif
#include <stdlib.h>
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYLEX yylex()
#define YYEMPTY -1
#define yyclearin (yychar=(YYEMPTY))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
#define YYPREFIX "yy"
#line 30 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
typedef union {
	char	*str;
	int	val;
	struct	file_list *file;
	struct	idlst *lst;
} YYSTYPE;
#line 118 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"

#include "config.h"
#include <ctype.h>
#include <stdio.h>

struct	device cur;
struct	device *curp = 0;
char	*temp_id;
char	*val_id;
/* char	*malloc(); */

#line 39 "y.tab.c"
#define ADDRMOD 257
#define AND 258
#define ANY 259
#define ARGS 260
#define AT 261
#define BIN 262
#define BUILDDIR 263
#define COMMA 264
#define CONFIG 265
#define CONFIGDIR 266
#define CONTROLLER 267
#define CPU 268
#define CSR 269
#define DEVICE 270
#define DISK 271
#define DRIVE 272
#define DST 273
#define DUMPS 274
#define EQUALS 275
#define FLAGS 276
#define HZ 277
#define IDENT 278
#define INIT 279
#define MACHINE 280
#define MAJOR 281
#define MASTER 282
#define MAXUSERS 283
#define MAXDSIZ 284
#define MBA 285
#define MBII 286
#define MINOR 287
#define MINUS 288
#define NEXUS 289
#define OBJECTDIR 290
#define ON 291
#define OPTIONS 292
#define MAKEOPTIONS 293
#define PRIORITY 294
#define PROFILE 295
#define PSEUDO_DEVICE 296
#define ROOT 297
#define SEMICOLON 298
#define SIZE 299
#define SLAVE 300
#define SOURCEDIR 301
#define SWAP 302
#define TIMEZONE 303
#define TRACE 304
#define UBA 305
#define VECTOR 306
#define VME 307
#define VME16D16 308
#define VME24D16 309
#define VME32D16 310
#define VME16D32 311
#define VME24D32 312
#define VME32D32 313
#define LUN 314
#define SLOT 315
#define TAPE 316
#define ID 317
#define NUMBER 318
#define FPNUMBER 319
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,   13,   13,   14,   14,   14,   14,   14,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   19,   19,   20,   21,   21,   22,   22,   22,   22,   23,
   28,   28,   29,   11,   11,   24,    9,    9,   25,   10,
   10,   26,    8,    8,    7,   27,   27,    5,    5,    6,
    6,    6,   17,   17,   30,   30,    2,    2,    2,    1,
   18,   18,   31,   31,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   32,   35,   33,   33,   36,   36,
   36,   37,   37,   38,   38,   38,   38,   38,   38,   38,
   38,   12,   12,   34,   34,   34,   34,   34,   39,    4,
    4,    4,    4,
};
short yylen[] = {                                         2,
    1,    2,    0,    2,    2,    2,    1,    2,    2,    2,
    2,    2,    2,    1,    2,    2,    2,    2,    2,    1,
    1,    2,    2,    2,    1,    1,    1,    1,    1,    3,
    3,    1,    2,    1,    1,    3,    1,    1,    3,    1,
    1,    3,    1,    1,    4,    1,    0,    2,    0,    1,
    2,    3,    3,    1,    1,    3,    1,    1,    0,    1,
    3,    1,    1,    3,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    4,    4,    4,    4,    4,
    3,    4,    5,    6,    3,    0,    2,    0,    3,    3,
    3,    2,    0,    2,    2,    2,    2,    2,    2,    2,
    2,    1,    2,    1,    2,    3,    3,    0,    2,    1,
    2,    2,    3,
};
short yydefred[] = {                                      3,
    0,    0,    0,    0,    0,    0,   86,    0,   86,   86,
    0,    0,   86,    0,    0,    0,    0,   20,   86,    7,
    0,    0,   86,    2,    0,    0,   14,    0,    8,   60,
   16,   23,   17,    0,    0,   10,    0,    0,   13,    9,
    0,   15,   18,    0,    0,   54,    0,    0,   62,    0,
   19,    6,    0,    4,    5,    0,    0,    0,    0,    0,
   25,   26,   27,   28,   29,    0,    0,   93,   66,   74,
   65,   73,   67,   68,   69,   70,   71,   72,   75,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   46,
    0,    0,    0,    0,   24,    0,    0,    0,    0,    0,
   80,    0,    0,   85,   76,   78,   77,   57,   58,   56,
   53,   64,   61,    0,    0,   79,    0,    0,   43,   44,
   42,   40,   41,   39,   37,   38,   36,   34,   35,    0,
    0,   32,   91,   90,   89,    0,    0,  109,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   92,   83,    0,
    0,    0,    0,   33,    0,  106,    0,  111,  107,   97,
  100,   94,   95,   99,   96,   98,    0,  102,  101,   84,
    0,   52,   48,   31,  113,  103,   45,
};
short yydgoto[] = {                                       1,
  118,  110,   80,  138,  154,  128,  129,  121,  127,  124,
  130,  169,    2,   24,   25,   26,   45,   48,   27,   28,
   60,   61,   62,   63,   64,   65,   91,  131,  132,   46,
   49,   34,   67,  101,   35,   68,  103,  148,  102,
};
short yysindex[] = {                                      0,
    0, -247, -293, -302, -302, -302,    0, -302,    0,    0,
 -288, -302,    0, -251, -302, -302, -302,    0,    0,    0,
 -302, -227,    0,    0, -220, -218,    0, -148,    0,    0,
    0,    0,    0, -179, -134,    0, -179, -179,    0,    0,
 -179,    0,    0, -184, -158,    0, -162, -149,    0, -134,
    0,    0, -179,    0,    0, -171, -171, -171, -171, -148,
    0,    0,    0,    0,    0, -145, -241,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -196,
 -241, -241, -241, -244, -302, -244, -302, -276, -241,    0,
 -267, -267, -267, -267,    0, -190, -173, -172, -168, -302,
    0, -164, -210,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -159, -120,    0, -157, -133,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -130,
  -74,    0,    0,    0,    0, -119, -233,    0, -132, -129,
 -128, -127, -126, -125, -124, -123, -263,    0,    0, -121,
  -90, -118, -117,    0, -267,    0, -302,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -116,    0,    0,    0,
 -115,    0,    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,  198,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -98,    0,    0,
    0,    0,    0, -238,    0,    0, -238, -238,    0,    0,
 -238,    0,    0, -258,  -94,    0, -257,  -92,    0,    0,
    0,    0, -238,    0,    0, -259, -259, -259, -259,  -91,
    0,    0,    0,    0,    0,    0,  -89,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -89,  -89,  -89, -237,    0, -237,    0,  -88,  -89,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -87, -169,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -86,    0,    0, -188,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -166,
 -155,    0,    0,    0,    0,  -85, -266,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -181,    0,    0,    0,    0, -264,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   -4,  119,  -40,  -93,    0,  -54,   64,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  148,    0,    0,    0,    0,   30,    0,   59,  130,
  129,  125,   86,   99,  199,    0,    0,    0,   81,
};
#define YYTABLESIZE 218
short yytable[] = {                                      31,
   32,   33,  114,   36,   29,   55,   63,   40,    3,   88,
   43,   44,   47,  117,   30,    4,   51,    5,    6,    7,
    8,   47,    9,   10,  167,   98,   59,  110,   39,  112,
   11,  110,   12,  112,   13,   14,  119,  122,  125,   55,
   63,  115,   15,  158,   16,   17,  140,   18,   19,   30,
   20,  141,   99,   21,  168,   88,   22,   47,  142,   88,
   59,  143,  147,  175,  100,  144,   42,   88,   23,   50,
   52,   50,  108,  109,   69,   70,   51,   54,   51,   55,
   44,   66,   47,   30,  157,   50,   92,   93,   94,  145,
   84,   49,   51,   49,   71,  137,   72,   73,   74,   75,
   76,   77,   78,  146,   30,   85,   79,   49,   50,   50,
   50,   56,   86,   50,   87,   51,   51,   51,   30,   90,
   51,  104,   81,   82,   87,   57,   83,  133,   87,  139,
   49,   49,  137,   37,   38,   49,   87,   41,   89,   69,
   70,   30,   30,   96,  134,  135,   30,   53,   58,  136,
   69,   70,  137,   59,  120,  123,  126,  149,  150,   71,
  151,   72,   73,   74,   75,   76,   77,   78,  153,   97,
   71,   79,   72,   73,   74,   75,   76,   77,   78,  105,
  106,  107,   79,  155,  152,  159,  100,  116,  160,  161,
  162,  163,  164,  165,  166,  170,  171,    1,  172,   21,
  173,  176,  177,   11,  112,   12,   22,   95,  108,   81,
  104,   82,  105,  174,  111,  113,  156,   50,
};
short yycheck[] = {                                       4,
    5,    6,  279,    8,  298,  264,  264,   12,  256,   50,
   15,   16,   17,  281,  317,  263,   21,  265,  266,  267,
  268,  281,  270,  271,  288,   66,  264,  294,  317,  294,
  278,  298,  280,  298,  282,  283,   91,   92,   93,  298,
  298,  318,  290,  137,  292,  293,  257,  295,  296,  317,
  298,  262,  294,  301,  318,  294,  304,  317,  269,  298,
  298,  272,  103,  157,  306,  276,  318,  306,  316,  258,
  298,  260,  317,  318,  285,  286,  258,  298,  260,  298,
   85,  261,   87,  317,  318,  274,   57,   58,   59,  300,
  275,  258,  274,  260,  305,  100,  307,  308,  309,  310,
  311,  312,  313,  314,  260,  264,  317,  274,  297,  298,
  299,  260,  275,  302,  264,  297,  298,  299,  274,  291,
  302,  318,   37,   38,  294,  274,   41,  318,  298,  294,
  297,  298,  137,    9,   10,  302,  306,   13,   53,  285,
  286,  297,  298,  289,  318,  318,  302,   23,  297,  318,
  285,  286,  157,  302,   91,   92,   93,  317,  279,  305,
  318,  307,  308,  309,  310,  311,  312,  313,  299,  315,
  305,  317,  307,  308,  309,  310,  311,  312,  313,   81,
   82,   83,  317,  258,  318,  318,  306,   89,  318,  318,
  318,  318,  318,  318,  318,  317,  287,    0,  317,  298,
  318,  318,  318,  298,   86,  298,  298,   60,  298,  298,
  298,  298,  298,  155,   85,   87,  136,   19,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 319
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ADDRMOD","AND","ANY","ARGS","AT",
"BIN","BUILDDIR","COMMA","CONFIG","CONFIGDIR","CONTROLLER","CPU","CSR","DEVICE",
"DISK","DRIVE","DST","DUMPS","EQUALS","FLAGS","HZ","IDENT","INIT","MACHINE",
"MAJOR","MASTER","MAXUSERS","MAXDSIZ","MBA","MBII","MINOR","MINUS","NEXUS",
"OBJECTDIR","ON","OPTIONS","MAKEOPTIONS","PRIORITY","PROFILE","PSEUDO_DEVICE",
"ROOT","SEMICOLON","SIZE","SLAVE","SOURCEDIR","SWAP","TIMEZONE","TRACE","UBA",
"VECTOR","VME","VME16D16","VME24D16","VME32D16","VME16D32","VME24D32",
"VME32D32","LUN","SLOT","TAPE","ID","NUMBER","FPNUMBER",
};
char *yyrule[] = {
"$accept : Configuration",
"Configuration : Many_specs",
"Many_specs : Many_specs Spec",
"Many_specs :",
"Spec : Device_spec SEMICOLON",
"Spec : Config_spec SEMICOLON",
"Spec : TRACE SEMICOLON",
"Spec : SEMICOLON",
"Spec : error SEMICOLON",
"Config_spec : MACHINE Save_id",
"Config_spec : CPU Save_id",
"Config_spec : OPTIONS Opt_list",
"Config_spec : MAKEOPTIONS Mkopt_list",
"Config_spec : IDENT ID",
"Config_spec : System_spec",
"Config_spec : MAXUSERS NUMBER",
"Config_spec : BUILDDIR Save_id",
"Config_spec : CONFIGDIR Save_id",
"Config_spec : OBJECTDIR Save_id",
"Config_spec : SOURCEDIR Save_id",
"Config_spec : PROFILE",
"System_spec : System_id",
"System_spec : System_id System_parameter_list",
"System_id : CONFIG Save_id",
"System_parameter_list : System_parameter_list System_parameter",
"System_parameter_list : System_parameter",
"System_parameter : swap_spec",
"System_parameter : root_spec",
"System_parameter : dump_spec",
"System_parameter : arg_spec",
"swap_spec : SWAP optional_on swap_device_list",
"swap_device_list : swap_device_list AND swap_device",
"swap_device_list : swap_device",
"swap_device : swap_device_spec optional_size",
"swap_device_spec : device_name",
"swap_device_spec : major_minor",
"root_spec : ROOT optional_on root_device_spec",
"root_device_spec : device_name",
"root_device_spec : major_minor",
"dump_spec : DUMPS optional_on dump_device_spec",
"dump_device_spec : device_name",
"dump_device_spec : major_minor",
"arg_spec : ARGS optional_on arg_device_spec",
"arg_device_spec : device_name",
"arg_device_spec : major_minor",
"major_minor : MAJOR NUMBER MINOR NUMBER",
"optional_on : ON",
"optional_on :",
"optional_size : SIZE NUMBER",
"optional_size :",
"device_name : Save_id",
"device_name : Save_id NUMBER",
"device_name : Save_id NUMBER ID",
"Opt_list : Opt_list COMMA Option",
"Opt_list : Option",
"Option : Save_id",
"Option : Save_id EQUALS Opt_value",
"Opt_value : ID",
"Opt_value : NUMBER",
"Opt_value :",
"Save_id : ID",
"Mkopt_list : Mkopt_list COMMA Mkoption",
"Mkopt_list : Mkoption",
"Mkoption : Save_id",
"Mkoption : Save_id EQUALS Opt_value",
"Dev : UBA",
"Dev : MBA",
"Dev : VME16D16",
"Dev : VME24D16",
"Dev : VME32D16",
"Dev : VME16D32",
"Dev : VME24D32",
"Dev : VME32D32",
"Dev : VME",
"Dev : MBII",
"Dev : ID",
"Device_spec : DEVICE Dev_name Dev_info Int_spec",
"Device_spec : MASTER Dev_name Dev_info Int_spec",
"Device_spec : DISK Dev_name Dev_info Int_spec",
"Device_spec : TAPE Dev_name Dev_info Int_spec",
"Device_spec : CONTROLLER Dev_name Dev_info Int_spec",
"Device_spec : PSEUDO_DEVICE Init_dev Dev",
"Device_spec : PSEUDO_DEVICE Init_dev Dev NUMBER",
"Device_spec : PSEUDO_DEVICE Init_dev Dev INIT ID",
"Device_spec : PSEUDO_DEVICE Init_dev Dev NUMBER INIT ID",
"Dev_name : Init_dev Dev NUMBER",
"Init_dev :",
"Dev_info : Con_info Info_list",
"Dev_info :",
"Con_info : AT Dev NUMBER",
"Con_info : AT SLOT NUMBER",
"Con_info : AT NEXUS NUMBER",
"Info_list : Info_list Info",
"Info_list :",
"Info : CSR NUMBER",
"Info : DRIVE NUMBER",
"Info : SLAVE NUMBER",
"Info : ADDRMOD NUMBER",
"Info : LUN NUMBER",
"Info : FLAGS NUMBER",
"Info : BIN NUMBER",
"Info : Dev Value",
"Value : NUMBER",
"Value : MINUS NUMBER",
"Int_spec : Vec_spec",
"Int_spec : PRIORITY NUMBER",
"Int_spec : PRIORITY NUMBER Vec_spec",
"Int_spec : Vec_spec PRIORITY NUMBER",
"Int_spec :",
"Vec_spec : VECTOR Id_list",
"Id_list : Save_id",
"Id_list : Save_id Id_list",
"Id_list : Save_id NUMBER",
"Id_list : Save_id NUMBER Id_list",
};
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH 10000
#endif
#endif
#define YYINITSTACKSIZE 200
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short *yyss;
short *yysslim;
YYSTYPE *yyvs;
int yystacksize;
#line 765 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"

yyerror(s)
	char *s;
{
	fprintf(stderr, "config: line %d: %s\n", yyline, s);
}

/*
 * return the passed string in a new space
 */
char *
ns(str)
	register char *str;
{
	register char *cp;

	cp = malloc((unsigned)(strlen(str)+1));
	(void) strcpy(cp, str);
	return (cp);
}

/*
 * add a device to the list of devices
 */
newdev(dp)
	register struct device *dp;
{
	register struct device *np;

	np = (struct device *) malloc(sizeof *np);
	*np = *dp;
	if (curp == 0)
		dtab = np;
	else
		curp->d_next = np;
	curp = np;
	curp->d_next = 0;
}

/*
 * note that a configuration should be made
 */
mkconf(sysname)
	char *sysname;
{
	register struct file_list *fl, **flp;

	fl = (struct file_list *) malloc(sizeof *fl);
	fl->f_type = SYSTEMSPEC;
	fl->f_needs = sysname;
	fl->f_rootdev = NODEV;
	fl->f_argdev = NODEV;
	fl->f_dumpdev = NODEV;
	fl->f_fn = 0;
	fl->f_next = 0;
	for (flp = confp; *flp; flp = &(*flp)->f_next)
		;
	*flp = fl;
	confp = flp;
}

struct file_list *
newswap()
{
	struct file_list *fl = (struct file_list *)malloc(sizeof (*fl));

	fl->f_type = SWAPSPEC;
	fl->f_next = 0;
	fl->f_swapdev = NODEV;
	fl->f_swapsize = 0;
	fl->f_needs = 0;
	fl->f_fn = 0;
	return (fl);
}

/*
 * Add a swap device to the system's configuration
 */
mkswap(system, fl, size)
	struct file_list *system, *fl;
	int size;
{
	register struct file_list **flp;
	char name[80];

	if (system == 0 || system->f_type != SYSTEMSPEC) {
		yyerror("\"swap\" spec precedes \"config\" specification");
		return;
	}
	if (size < 0) {
		yyerror("illegal swap partition size");
		return;
	}
	/*
	 * Append swap description to the end of the list.
	 */
	flp = &system->f_next;
	for (; *flp && (*flp)->f_type == SWAPSPEC; flp = &(*flp)->f_next)
		;
	fl->f_next = *flp;
	*flp = fl;
	fl->f_swapsize = size;
	/*
	 * If first swap device for this system,
	 * set up f_fn field to insure swap
	 * files are created with unique names.
	 */
	if (system->f_fn)
		return;
	if (eq(fl->f_fn, "generic"))
		system->f_fn = ns(fl->f_fn);
	else
		system->f_fn = ns(system->f_needs);
}

/*
 * find the pointer to connect to the given device and number.
 * returns 0 if no such device and prints an error message
 */
struct device *
dconnect(dev, num)
	register char *dev;
	register int num;
{
	register struct device *dp;
	struct device *huhcon();

	if (num == QUES)
		return (huhcon(dev));
	for (dp = dtab; dp != 0; dp = dp->d_next) {
		if ((num != dp->d_unit) || !eq(dev, dp->d_name))
			continue;
		if (dp->d_type != CONTROLLER && dp->d_type != MASTER) {
			(void) sprintf(errbuf,
			    "%s connected to non-controller", dev);
			yyerror(errbuf);
			return (0);
		}
		return (dp);
	}
	(void) sprintf(errbuf, "%s %d not defined", dev, num);
	yyerror(errbuf);
	return (0);
}

/*
 * connect to an unspecific thing
 */
struct device *
huhcon(dev)
	register char *dev;
{
	register struct device *dp, *dcp;
	struct device rdev;
	int oldtype;

	/*
	 * First make certain that there are some of these to wildcard on
	 */
	for (dp = dtab; dp != 0; dp = dp->d_next)
		if (eq(dp->d_name, dev))
			break;
	if (dp == 0) {
		(void) sprintf(errbuf, "no %s's to wildcard", dev);
		yyerror(errbuf);
		return (0);
	}
	oldtype = dp->d_type;
	dcp = dp->d_conn;
	/*
	 * Now see if there is already a wildcard entry for this device
	 * (e.g. Search for a "uba ?")
	 */
	for (; dp != 0; dp = dp->d_next)
		if (eq(dev, dp->d_name) && dp->d_unit == -1)
			break;
	/*
	 * If there isn't, make one because everything needs to be connected
	 * to something.
	 */
	if (dp == 0) {
		dp = &rdev;
		init_dev(dp);
		dp->d_unit = QUES;
		dp->d_name = ns(dev);
		dp->d_type = oldtype;
		newdev(dp);
		dp = curp;
		/*
		 * Connect it to the same thing that other similar things are
		 * connected to, but make sure it is a wildcard unit
		 * (e.g. up connected to sc ?, here we make connect sc? to a
		 * uba?).  If other things like this are on the NEXUS or
		 * if they aren't connected to anything, then make the same
		 * connection, else call ourself to connect to another
		 * unspecific device.
		 */
		if (dcp == TO_NEXUS || dcp == 0)
			dp->d_conn = dcp;
		else
			dp->d_conn = dconnect(dcp->d_name, QUES);
	}
	return (dp);
}

init_dev(dp)
	register struct device *dp;
{

	dp->d_name = "OHNO!!!";
	dp->d_type = DEVICE;
	dp->d_conn = 0;
	dp->d_vec = 0;
	dp->d_addr = dp->d_pri = dp->d_flags = dp->d_dk = 0;
	dp->d_slave = dp->d_drive = dp->d_unit = UNKNOWN;
	if (machine == MACHINE_SUN2 || machine == MACHINE_SUN3
	    || machine == MACHINE_SUN4){
		dp->d_addr = UNKNOWN;
		dp->d_mach = dp->d_bus = 0;
	}
	if (machine == MACHINE_MIPSY || machine == MACHINE_MIPS){
		dp->d_addrmod = 0;
	}
	dp->d_init = 0;
}

/*
 * make certain that this is a reasonable type of thing to connect to a nexus
 */
check_nexus(dev, num)
	register struct device *dev;
	int num;
{

	switch (machine) {

	case MACHINE_VAX:
		if (!eq(dev->d_name, "uba") && !eq(dev->d_name, "mba"))
			yyerror("only uba's and mba's should be connected to the nexus");
		if (num != QUES)
			yyerror("can't give specific nexus numbers");
		break;

	case MACHINE_SUN:
		if (!eq(dev->d_name, "mb"))
			yyerror("only mb's should be connected to the nexus");
		break;

	case MACHINE_ROMP:
		if (!eq(dev->d_name, "iocc"))
			yyerror("only iocc's should be connected to the nexus");
		break;
        case MACHINE_SUN2:
		if (!eq(dev->d_name, "virtual") &&
		    !eq(dev->d_name, "obmem") &&
		    !eq(dev->d_name, "obio") &&
		    !eq(dev->d_name, "mbmem") &&
		    !eq(dev->d_name, "mbio") &&
		    !eq(dev->d_name, "vme16d16") &&
		    !eq(dev->d_name, "vme24d16")) {
			(void)sprintf(errbuf,
			    "unknown bus type `%s' for nexus connection on %s",
			    dev->d_name, machinename);
			yyerror(errbuf);
		}

	case MACHINE_MMAX:
		yyerror("don't grok 'nexus' on mmax -- try 'slot'.");
		break;
        case MACHINE_SUN3:
        case MACHINE_SUN4:
		if (!eq(dev->d_name, "virtual") &&
		    !eq(dev->d_name, "obmem") &&
		    !eq(dev->d_name, "obio") &&
		    !eq(dev->d_name, "mbmem") &&
		    !eq(dev->d_name, "mbio") &&
		    !eq(dev->d_name, "vme16d16") &&
		    !eq(dev->d_name, "vme24d16") &&
                    !eq(dev->d_name, "vme32d16") &&
		    !eq(dev->d_name, "vme16d32") &&
		    !eq(dev->d_name, "vme24d32") &&
		    !eq(dev->d_name, "vme32d32")) {
			(void)sprintf(errbuf,
			    "unknown bus type `%s' for nexus connection on %s",
			    dev->d_name, machinename);
			yyerror(errbuf);
		}
		break;
	case MACHINE_MIPSY:
	case MACHINE_MIPS:
		if (!eq(dev->d_name, "vme") && !eq(dev->d_name, "mbii"))
			yyerror("only vme's and mbii's should be connected to the nexus");
		if (num != QUES)
			yyerror("can't give specific nexus numbers");
		break;
	}
}

/*
 * make certain that this is a reasonable type of thing to connect to a slot
 */

check_slot(dev, num)
	register struct device *dev;
	int num;
{

	switch (machine) {

	case MACHINE_MMAX:
		if (!eq(dev->d_name, "emc"))
			yyerror("only emc's plug into backplane slots.");
		if (num == QUES)
			yyerror("specific slot numbers must be given");
		break;

	case MACHINE_SQT:
		if (!eq(dev->d_name, "mbad") &&
		    !eq(dev->d_name, "zdc") &&
		    !eq(dev->d_name, "sec")) {
			(void)sprintf(errbuf,
			    "unknown bus type `%s' for slot on %s",
			    dev->d_name, machinename);
			yyerror(errbuf);
		}
		break;

	default:
		yyerror("don't grok 'slot' for this machine -- try 'nexus'.");
		break;
	}
}

/*
 * Check system specification and apply defaulting
 * rules on root, argument, dump, and swap devices.
 */
checksystemspec(fl)
	register struct file_list *fl;
{
	char buf[BUFSIZ];
	register struct file_list *swap;
	int generic;

	if (fl == 0 || fl->f_type != SYSTEMSPEC) {
		yyerror("internal error, bad system specification");
		exit(1);
	}
	swap = fl->f_next;
	generic = swap && swap->f_type == SWAPSPEC && eq(swap->f_fn, "generic");
	if (fl->f_rootdev == NODEV && !generic) {
		yyerror("no root device specified");
		exit(1);
	}
	/*
	 * Default swap area to be in 'b' partition of root's
	 * device.  If root specified to be other than on 'a'
	 * partition, give warning, something probably amiss.
	 */
	if (swap == 0 || swap->f_type != SWAPSPEC) {
		dev_t dev;

		swap = newswap();
		dev = fl->f_rootdev;
		if (minor(dev) & DEV_MASK) {
			(void) sprintf(buf,
"Warning, swap defaulted to 'b' partition with root on '%c' partition",
				(minor(dev) & DEV_MASK) + 'a');
			yyerror(buf);
		}
		swap->f_swapdev =
		   makedev(major(dev), (minor(dev) &~ DEV_MASK) | ('b' - 'a'));
		swap->f_fn = devtoname(swap->f_swapdev);
		mkswap(fl, swap, 0);
	}
	/*
	 * Make sure a generic swap isn't specified, along with
	 * other stuff (user must really be confused).
	 */
	if (generic) {
		if (fl->f_rootdev != NODEV)
			yyerror("root device specified with generic swap");
		if (fl->f_argdev != NODEV)
			yyerror("arg device specified with generic swap");
		if (fl->f_dumpdev != NODEV)
			yyerror("dump device specified with generic swap");
		return;
	}
	/*
	 * Default argument device and check for oddball arrangements.
	 */
	if (fl->f_argdev == NODEV)
		fl->f_argdev = swap->f_swapdev;
	if (fl->f_argdev != swap->f_swapdev)
		yyerror("Warning, arg device different than primary swap");
	/*
	 * Default dump device and warn if place is not a
	 * swap area or the argument device partition.
	 */
	if (fl->f_dumpdev == NODEV)
		fl->f_dumpdev = swap->f_swapdev;
	if (fl->f_dumpdev != swap->f_swapdev && fl->f_dumpdev != fl->f_argdev) {
		struct file_list *p = swap->f_next;

		for (; p && p->f_type == SWAPSPEC; p = p->f_next)
			if (fl->f_dumpdev == p->f_swapdev)
				return;
		(void) sprintf(buf, "Warning, orphaned dump device, %s",
			"do you know what you're doing");
		yyerror(buf);
	}
}

/*
 * Verify all devices specified in the system specification
 * are present in the device specifications.
 */
verifysystemspecs()
{
	register struct file_list *fl;
	dev_t checked[50], *verifyswap();
	register dev_t *pchecked = checked;

	for (fl = conf_list; fl; fl = fl->f_next) {
		if (fl->f_type != SYSTEMSPEC)
			continue;
		if (!finddev(fl->f_rootdev))
			deverror(fl->f_needs, "root");
		*pchecked++ = fl->f_rootdev;
		pchecked = verifyswap(fl->f_next, checked, pchecked);
#define	samedev(dev1, dev2) \
	((minor(dev1) &~ DEV_MASK) != (minor(dev2) &~ DEV_MASK))
		if (!alreadychecked(fl->f_dumpdev, checked, pchecked)) {
			if (!finddev(fl->f_dumpdev))
				deverror(fl->f_needs, "dump");
			*pchecked++ = fl->f_dumpdev;
		}
		if (!alreadychecked(fl->f_argdev, checked, pchecked)) {
			if (!finddev(fl->f_argdev))
				deverror(fl->f_needs, "arg");
			*pchecked++ = fl->f_argdev;
		}
	}
}

/*
 * Do as above, but for swap devices.
 */
dev_t *
verifyswap(fl, checked, pchecked)
	register struct file_list *fl;
	dev_t checked[];
	register dev_t *pchecked;
{

	for (;fl && fl->f_type == SWAPSPEC; fl = fl->f_next) {
		if (eq(fl->f_fn, "generic"))
			continue;
		if (alreadychecked(fl->f_swapdev, checked, pchecked))
			continue;
		if (!finddev(fl->f_swapdev))
			fprintf(stderr,
			   "config: swap device %s not configured", fl->f_fn);
		*pchecked++ = fl->f_swapdev;
	}
	return (pchecked);
}

/*
 * Has a device already been checked
 * for it's existence in the configuration?
 */
alreadychecked(dev, list, last)
	dev_t dev, list[];
	register dev_t *last;
{
	register dev_t *p;

	for (p = list; p < last; p++)
		if (samedev(*p, dev))
			return (1);
	return (0);
}

deverror(systemname, devtype)
	char *systemname, *devtype;
{

	fprintf(stderr, "config: %s: %s device not configured\n",
		systemname, devtype);
}

/*
 * Look for the device in the list of
 * configured hardware devices.  Must
 * take into account stuff wildcarded.
 */
/*ARGSUSED*/
finddev(dev)
	dev_t dev;
{

	/* punt on this right now */
	return (1);
}

/*
 * bi_info gives the magic number used to construct the token for
 * the autoconf code.  bi_max is the maximum value (across all
 * machine types for a given architecture) that a given "bus 
 * type" can legally have.
 */
struct bus_info {
	char    *bi_name;
	u_short bi_info;
	u_int   bi_max;
};

struct bus_info sun2_info[] = {
	{ "virtual",    0x0001, (1<<24)-1 },
	{ "obmem",      0x0002, (1<<23)-1 },
	{ "obio",       0x0004, (1<<23)-1 },
	{ "mbmem",      0x0010, (1<<20)-1 },
	{ "mbio",       0x0020, (1<<16)-1 },
	{ "vme16d16",   0x0100, (1<<16)-1 },
	{ "vme24d16",   0x0200, (1<<24)-(1<<16)-1 },
	{ (char *)0,    0,      0 }
};

struct bus_info sun3_info[] = {
	{ "virtual",    0x0001, (1<<32)-1 },
	{ "obmem",      0x0002, (1<<32)-1 },
	{ "obio",       0x0004, (1<<21)-1 },
	{ "vme16d16",   0x0100, (1<<16)-1 },
	{ "vme24d16",   0x0200, (1<<24)-(1<<16)-1 },
	{ "vme32d16",   0x0400, (1<<32)-(1<<24)-1 },
	{ "vme16d32",   0x1000, (1<<16) },
	{ "vme24d32",   0x2000, (1<<24)-(1<<16)-1 },
	{ "vme32d32",   0x4000, (1<<32)-(1<<24)-1 },
	{ (char *)0,    0,      0 }
};

struct bus_info sun4_info[] = {
	{ "virtual",    0x0001, 0xffffffff },
	{ "obmem",      0x0002, 0xffffffff },
	{ "obio",       0x0004, 0xffffffff },
	{ "vme16d16",   0x0100, (1<<16)-1 },
	{ "vme24d16",   0x0200, (1<<24)-(1<<16)-1 },
	{ "vme32d16",   0x0400, 0xfeffffff },
	{ "vme16d32",   0x1000, (1<<16) },
	{ "vme24d32",   0x2000, (1<<24)-(1<<16)-1 },
	{ "vme32d32",   0x4000, 0xfeffffff },
	{ (char *)0,    0,      0 }
};

bus_encode(addr, dp)
        u_int addr;
	register struct device *dp;
{
	register char *busname;
	register struct bus_info *bip;
	register int num;

	if (machine == MACHINE_SUN2)
		bip = sun2_info;
	else if (machine == MACHINE_SUN3)
		bip = sun3_info;
	else if (machine == MACHINE_SUN4)
		bip = sun4_info;
	else {
		yyerror("bad machine type for bus_encode");
		exit(1);
	}

        if (dp->d_conn == TO_NEXUS || dp->d_conn == 0) {
		yyerror("bad connection");
		exit(1);
	}

        busname = dp->d_conn->d_name;
        num = dp->d_conn->d_unit;

        for (; bip->bi_name != 0; bip++)
                if (eq(busname, bip->bi_name))
                        break;

        if (bip->bi_name == 0) {
                (void)sprintf(errbuf, "bad bus type '%s' for machine %s",
                        busname, machinename);
                yyerror(errbuf);
        } else if (addr > bip->bi_max) {
                (void)sprintf(errbuf,
                        "0x%x exceeds maximum address 0x%x allowed for %s",
                        addr, bip->bi_max, busname);
                yyerror(errbuf);
        } else {
                dp->d_bus = bip->bi_info;       /* set up bus type info */
                if (num != QUES)
                        /*
                         * Set up cpu type since the connecting
                         * bus type is not wildcarded.
                         */
                        dp->d_mach = num;
        }
}
#line 1022 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
int yyparse __P((void));
static int yygrowstack __P((void));
static int yygrowstack()
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;
    i = yyssp - yyss;
    if ((newss = (short *)realloc(yyss, newsize * sizeof *newss)) == NULL)
        return -1;
    yyss = newss;
    yyssp = newss + i;
    if ((newvs = (YYSTYPE *)realloc(yyvs, newsize * sizeof *newvs)) == NULL)
        return -1;
    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    int yym, yyn, yystate;
#if YYDEBUG
    char *yys;

    if ((yys = getenv("YYDEBUG")) != NULL)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
    goto yynewerror;
yynewerror:
    yyerror("syntax error");
    goto yyerrlab;
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 133 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { verifysystemspecs(); }
break;
case 4:
#line 144 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { newdev(&cur); }
break;
case 6:
#line 148 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { do_trace = !do_trace; }
break;
case 9:
#line 156 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (!strcmp(yyvsp[0].str, "vax")) {
			machine = MACHINE_VAX;
			machinename = "vax";
		} else if (!strcmp(yyvsp[0].str, "sun")) {
			/* default to Sun 3 */
			machine = MACHINE_SUN3;
			machinename = "sun3";
		} else if (!strcmp(yyvsp[0].str, "sun2")) {
			machine = MACHINE_SUN2;
			machinename = "sun2";
		} else if (!strcmp(yyvsp[0].str, "sun3")) {
			machine = MACHINE_SUN3;
			machinename = "sun3";
		} else if (!strcmp(yyvsp[0].str, "sun4")) {
			machine = MACHINE_SUN4;
			machinename = "sun4";
		} else if (!strcmp(yyvsp[0].str, "romp")) {
			machine = MACHINE_ROMP;
			machinename = "romp";
		} else if (!strcmp(yyvsp[0].str, "ca")) {
			machine = MACHINE_ROMP;
			machinename = "ca";
		} else if (!strcmp(yyvsp[0].str, "mmax")) {
			machine = MACHINE_MMAX;
			machinename = "mmax";
		} else if (!strcmp(yyvsp[0].str, "sqt")) {
			machine = MACHINE_SQT;
			machinename = "sqt";
		} else if (!strcmp(yyvsp[0].str, "i")) {
			machine = MACHINE_I386;
			machinename = "i386";
		} else if (!strcmp(yyvsp[0].str, "i386")) {
			machine = MACHINE_I386;
			machinename = "i386";
		} else if (!strcmp(yyvsp[0].str, "ix")) {
			machine = MACHINE_IX;
			machinename = "ix";
		} else if (!strcmp(yyvsp[0].str, "mipsy")) {
			machine = MACHINE_MIPSY;
			machinename = "mipsy";
		} else if (!strcmp(yyvsp[0].str, "mips")) {
			machine = MACHINE_MIPS;
			machinename = "mips";
		} else if (!strcmp(yyvsp[0].str, "i860")) {
			machine = MACHINE_I860;
			machinename = "i860";
		} else if (!strcmp(yyvsp[0].str, "m68k")) {
			machine = MACHINE_M68K;
			machinename = "m68k";
		} else if (!strcmp(yyvsp[0].str, "m88k")) {
			machine = MACHINE_M88K;
			machinename = "m88k";
		} else if (!strcmp(yyvsp[0].str, "m98k")) {
			machine = MACHINE_M98K;
			machinename = "m98k";
		} else if (!strcmp(yyvsp[0].str, "hppa")) {
			machine = MACHINE_HPPA;
			machinename = "hppa";
		} else if (!strcmp(yyvsp[0].str, "sparc")) {
			machine = MACHINE_SPARC;
			machinename = "sparc";
		} else if (!strcmp(yyvsp[0].str, "ppc")) {
			machine = MACHINE_PPC;
			machinename = "ppc";
		} else
			yyerror("Unknown machine type");
	      }
break;
case 10:
#line 225 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct cputype *cp =
		    (struct cputype *)malloc(sizeof (struct cputype));
		cp->cpu_name = ns(yyvsp[0].str);
		cp->cpu_next = cputype;
		cputype = cp;
		free(temp_id);
	      }
break;
case 13:
#line 238 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { ident = ns(yyvsp[0].str); }
break;
case 15:
#line 243 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { maxusers = yyvsp[0].val; }
break;
case 16:
#line 246 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { build_directory = ns(yyvsp[0].str); }
break;
case 17:
#line 249 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { config_directory = ns(yyvsp[0].str); }
break;
case 18:
#line 252 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { object_directory = ns(yyvsp[0].str); }
break;
case 19:
#line 255 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { source_directory = ns(yyvsp[0].str); }
break;
case 20:
#line 258 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { profiling++; }
break;
case 21:
#line 263 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { checksystemspec(*confp); }
break;
case 22:
#line 265 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { checksystemspec(*confp); }
break;
case 23:
#line 270 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { mkconf(yyvsp[0].str); }
break;
case 33:
#line 296 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { mkswap(*confp, yyvsp[-1].file, yyvsp[0].val); }
break;
case 34:
#line 301 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			struct file_list *fl = newswap();

			if (eq(yyvsp[0].str, "generic"))
				fl->f_fn = yyvsp[0].str;
			else {
				fl->f_swapdev = nametodev(yyvsp[0].str, 0, 'b');
				fl->f_fn = devtoname(fl->f_swapdev);
			}
			yyval.file = fl;
		}
break;
case 35:
#line 313 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			struct file_list *fl = newswap();

			fl->f_swapdev = yyvsp[0].val;
			fl->f_fn = devtoname(yyvsp[0].val);
			yyval.file = fl;
		}
break;
case 36:
#line 324 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			struct file_list *fl = *confp;

			if (fl && fl->f_rootdev != NODEV)
				yyerror("extraneous root device specification");
			else
				fl->f_rootdev = yyvsp[0].val;
		}
break;
case 37:
#line 336 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = nametodev(yyvsp[0].str, 0, 'a'); }
break;
case 39:
#line 342 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			struct file_list *fl = *confp;

			if (fl && fl->f_dumpdev != NODEV)
				yyerror("extraneous dump device specification");
			else
				fl->f_dumpdev = yyvsp[0].val;
		}
break;
case 40:
#line 355 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = nametodev(yyvsp[0].str, 0, 'b'); }
break;
case 42:
#line 361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			struct file_list *fl = *confp;

			if (fl && fl->f_argdev != NODEV)
				yyerror("extraneous arg device specification");
			else
				fl->f_argdev = yyvsp[0].val;
		}
break;
case 43:
#line 373 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = nametodev(yyvsp[0].str, 0, 'b'); }
break;
case 45:
#line 379 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = makedev(yyvsp[-2].val, yyvsp[0].val); }
break;
case 48:
#line 389 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = yyvsp[0].val; }
break;
case 49:
#line 391 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = 0; }
break;
case 50:
#line 396 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = yyvsp[0].str; }
break;
case 51:
#line 398 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			char buf[80];

			(void) sprintf(buf, "%s%d", yyvsp[-1].str, yyvsp[0].val);
			yyval.str = ns(buf); free(yyvsp[-1].str);
		}
break;
case 52:
#line 405 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			char buf[80];

			(void) sprintf(buf, "%s%d%s", yyvsp[-2].str, yyvsp[-1].val, yyvsp[0].str);
			yyval.str = ns(buf); free(yyvsp[-2].str);
		}
break;
case 55:
#line 421 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct opt *op = (struct opt *)malloc(sizeof (struct opt));
		op->op_name = ns(yyvsp[0].str);
		op->op_next = (struct opt *) 0;
		op->op_value = 0;
		if (opt == (struct opt *) 0)
			opt = op;
		else
			opt_tail->op_next = op;
		opt_tail = op;
		free(temp_id);
	      }
break;
case 56:
#line 434 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct opt *op = (struct opt *)malloc(sizeof (struct opt));
		op->op_name = ns(yyvsp[-2].str);
		op->op_next = (struct opt *) 0;
		op->op_value = ns(yyvsp[0].str);
		if (opt == (struct opt *) 0)
			opt = op;
		else
			opt_tail->op_next = op;
		opt_tail = op;
		free(temp_id);
		if (val_id)
			free(val_id);
	      }
break;
case 57:
#line 451 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = val_id = ns(yyvsp[0].str); }
break;
case 58:
#line 453 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { char nb[16];
	          (void) sprintf(nb, "%u", yyvsp[0].val);
	      	  yyval.str = val_id = ns(nb);
	      }
break;
case 59:
#line 458 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = val_id = ns(""); }
break;
case 60:
#line 463 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = temp_id = ns(yyvsp[0].str); }
break;
case 63:
#line 474 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct opt *op = (struct opt *)malloc(sizeof (struct opt));
		op->op_name = ns(yyvsp[0].str);
		op->op_next =  (struct opt *) 0;
		op->op_value = 0;
		mkopt = op;
		free(temp_id);
	      }
break;
case 64:
#line 483 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct opt *op = (struct opt *)malloc(sizeof (struct opt));
		op->op_name = ns(yyvsp[-2].str);
		op->op_next =  (struct opt *) 0;
		op->op_value = ns(yyvsp[0].str);
		if (mkopt == (struct opt *) 0)
			mkopt = op;
		else
			mkopt_tail->op_next = op;
		mkopt_tail = op;
		free(temp_id);
		if (val_id)
			free(val_id);
	      }
break;
case 65:
#line 500 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = ns("uba"); }
break;
case 66:
#line 502 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = ns("mba"); }
break;
case 67:
#line 504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_SUN2 && machine != MACHINE_SUN3
		    && machine != MACHINE_SUN4)
			yyerror("wrong machine type for vme16d16");
		yyval.str = ns("vme16d16");
		}
break;
case 68:
#line 511 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_SUN2 && machine != MACHINE_SUN3
		    && machine != MACHINE_SUN4)
			yyerror("wrong machine type for vme24d16");
			yyval.str = ns("vme24d16");
		}
break;
case 69:
#line 518 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_SUN3 && machine != MACHINE_SUN4)

                        yyerror("wrong machine type for vme32d16");
                yyval.str = ns("vme32d16");
                }
break;
case 70:
#line 525 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
                if (machine != MACHINE_SUN3  && machine != MACHINE_SUN4)
                        yyerror("wrong machine type for vme16d32");
                yyval.str = ns("vme16d32");
                }
break;
case 71:
#line 531 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_SUN3 && machine != MACHINE_SUN4)
			yyerror("wrong machine type for vme24d32");
		yyval.str = ns("vme24d32");
		}
break;
case 72:
#line 537 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_SUN3 && machine != MACHINE_SUN4)
			yyerror("wrong machine type for vme32d32");
		yyval.str = ns("vme32d32");
		}
break;
case 73:
#line 543 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_MIPSY && machine != MACHINE_MIPS)
			yyerror("wrong machine type for vme");
			yyval.str = ns("vme");
		}
break;
case 74:
#line 549 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_MIPSY && machine != MACHINE_MIPS)
			yyerror("wrong machine type for mbii");
			yyval.str = ns("mbii");
		}
break;
case 75:
#line 555 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.str = ns(yyvsp[0].str); }
break;
case 76:
#line 560 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_type = DEVICE; }
break;
case 77:
#line 562 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_type = MASTER; }
break;
case 78:
#line 564 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_dk = 1; cur.d_type = DEVICE; }
break;
case 79:
#line 567 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_type = DEVICE; }
break;
case 80:
#line 569 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_type = CONTROLLER; }
break;
case 81:
#line 571 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_name = yyvsp[0].str;
		cur.d_type = PSEUDO_DEVICE;
		}
break;
case 82:
#line 576 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_name = yyvsp[-1].str;
		cur.d_type = PSEUDO_DEVICE;
		cur.d_slave = yyvsp[0].val;
		}
break;
case 83:
#line 582 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_name = yyvsp[-2].str;
		cur.d_type = PSEUDO_DEVICE;
		cur.d_init = ns(yyvsp[0].str);
		}
break;
case 84:
#line 588 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_name = yyvsp[-3].str;
		cur.d_type = PSEUDO_DEVICE;
		cur.d_slave = yyvsp[-2].val;
		cur.d_init = ns(yyvsp[0].str);
		}
break;
case 85:
#line 597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_name = yyvsp[-1].str;
		if (eq(yyvsp[-1].str, "mba"))
			seen_mba = 1;
		else if (eq(yyvsp[-1].str, "uba"))
			seen_uba = 1;
		else if (eq(yyvsp[-1].str, "mbii"))
			seen_mbii = 1;
		else if (eq(yyvsp[-1].str, "vme"))
			seen_vme = 1;
		cur.d_unit = yyvsp[0].val;
		}
break;
case 86:
#line 612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { init_dev(&cur); }
break;
case 89:
#line 622 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (eq(cur.d_name, "mba") || eq(cur.d_name, "uba")
		    || eq(cur.d_name, "mbii") || eq(cur.d_name, "vme")) {
			(void) sprintf(errbuf,
			    "%s must be connected to a nexus", cur.d_name);
			yyerror(errbuf);
		}
		cur.d_conn = dconnect(yyvsp[-1].str, yyvsp[0].val);
		if (machine == MACHINE_SQT)
			dev_param(&cur, "index", cur.d_unit);
		}
break;
case 90:
#line 635 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { 
		check_slot(&cur, yyvsp[0].val);
		cur.d_addr = yyvsp[0].val;
		cur.d_conn = TO_SLOT; 
		 }
break;
case 91:
#line 641 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { check_nexus(&cur, yyvsp[0].val); cur.d_conn = TO_NEXUS; }
break;
case 94:
#line 651 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_addr = yyvsp[0].val;
                if (machine == MACHINE_SUN2 || machine == MACHINE_SUN3
		    || machine == MACHINE_SUN4)
			bus_encode(yyvsp[0].val, &cur);
		if (machine == MACHINE_SQT) {
			dev_param(&cur, "csr", yyvsp[0].val);
		}
		}
break;
case 95:
#line 661 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
			cur.d_drive = yyvsp[0].val;
			if (machine == MACHINE_SQT) {
				dev_param(&cur, "drive", yyvsp[0].val);
			}
		}
break;
case 96:
#line 668 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (cur.d_conn != 0 && cur.d_conn != TO_NEXUS &&
		    cur.d_conn->d_type == MASTER)
			cur.d_slave = yyvsp[0].val;
		else
			yyerror("can't specify slave--not to master");
		}
break;
case 97:
#line 677 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_addrmod = yyvsp[0].val; }
break;
case 98:
#line 680 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if ((cur.d_conn != 0) && (cur.d_conn != TO_SLOT) &&
			(cur.d_conn->d_type == CONTROLLER)) {
			cur.d_addr = yyvsp[0].val; 
		}
		else {
			yyerror("device requires controller card");
		    }
		}
break;
case 99:
#line 690 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		cur.d_flags = yyvsp[0].val;
		if (machine == MACHINE_SQT) {
			dev_param(&cur, "flags", yyvsp[0].val);
		}
	      }
break;
case 100:
#line 697 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { 
		 if (machine != MACHINE_SQT)
			yyerror("bin specification only valid on Sequent Balance");
		 if (yyvsp[0].val < 1 || yyvsp[0].val > 7)  
			yyerror("bogus bin number");
		 else {
			cur.d_bin = yyvsp[0].val;
			dev_param(&cur, "bin", yyvsp[0].val);
		}
	       }
break;
case 101:
#line 708 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		if (machine != MACHINE_SQT)
			yyerror("bad device spec");
		dev_param(&cur, yyvsp[-1].str, yyvsp[0].val);
		}
break;
case 103:
#line 718 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { yyval.val = -(yyvsp[0].val); }
break;
case 104:
#line 723 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_pri = 0; }
break;
case 105:
#line 725 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_pri = yyvsp[0].val; }
break;
case 106:
#line 727 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_pri = yyvsp[-1].val; }
break;
case 107:
#line 729 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_pri = yyvsp[0].val; }
break;
case 109:
#line 735 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 { cur.d_vec = yyvsp[0].lst; }
break;
case 110:
#line 740 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct idlst *a = (struct idlst *)malloc(sizeof(struct idlst));
		a->id = yyvsp[0].str; a->id_next = 0; yyval.lst = a;
		a->id_vec = 0;
		}
break;
case 111:
#line 745 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"

		{
		struct idlst *a = (struct idlst *)malloc(sizeof(struct idlst));
	        a->id = yyvsp[-1].str; a->id_next = yyvsp[0].lst; yyval.lst = a;
		a->id_vec = 0;
		}
break;
case 112:
#line 752 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct idlst *a = (struct idlst *)malloc(sizeof(struct idlst));
		a->id_next = 0; a->id = yyvsp[-1].str; yyval.lst = a;
		a->id_vec = yyvsp[0].val;
		}
break;
case 113:
#line 758 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/config.tproj/parser.y"
 {
		struct idlst *a = (struct idlst *)malloc(sizeof(struct idlst));
		a->id_next = yyvsp[0].lst; a->id = yyvsp[-2].str; yyval.lst = a;
		a->id_vec = yyvsp[-1].val;
		}
break;
#line 1818 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
