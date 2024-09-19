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
#line 154 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"

#include <stdio.h>
#include "lexxer.h"
#include "strdefs.h"
#include "type.h"
#include "routine.h"
#include "statement.h"
#include "global.h"
#include "error.h"

static char *import_name();

#line 168 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
typedef union
{
    u_int number;
    identifier_t identifier;
    string_t string;
    statement_kind_t statement_kind;
    ipc_type_t *type;
    struct
    {
	u_int innumber;		/* msgt_name value, when sending */
	string_t instr;
	u_int outnumber;	/* msgt_name value, when receiving */
	string_t outstr;
	u_int size;		/* 0 means there is no default size */
    } symtype;
    routine_t *routine;
    arg_kind_t direction;
    argument_t *argument;
    ipc_flags_t flag;
} YYSTYPE;
#line 54 "y.tab.c"
#define sySkip 257
#define syRoutine 258
#define sySimpleRoutine 259
#define sySubsystem 260
#define syKernelUser 261
#define syKernelServer 262
#define syMsgOption 263
#define syMsgSeqno 264
#define syWaitTime 265
#define sySendTime 266
#define syNoWaitTime 267
#define syErrorProc 268
#define syServerPrefix 269
#define syUserPrefix 270
#define syServerDemux 271
#define syRCSId 272
#define syImport 273
#define syUImport 274
#define sySImport 275
#define syIImport 276
#define syDImport 277
#define syIn 278
#define syOut 279
#define syInOut 280
#define syUserImpl 281
#define syServerImpl 282
#define syRequestPort 283
#define syReplyPort 284
#define sySReplyPort 285
#define syUReplyPort 286
#define syType 287
#define syArray 288
#define syStruct 289
#define syOf 290
#define syInTran 291
#define syOutTran 292
#define syDestructor 293
#define syCType 294
#define syCUserType 295
#define syUserTypeLimit 296
#define syOnStackLimit 297
#define syCServerType 298
#define syPointerTo 299
#define syPointerToIfNot 300
#define syValueOf 301
#define syCString 302
#define sySecToken 303
#define syUserSecToken 304
#define syServerSecToken 305
#define syAuditToken 306
#define syUserAuditToken 307
#define syServerAuditToken 308
#define syColon 309
#define sySemi 310
#define syComma 311
#define syPlus 312
#define syMinus 313
#define syStar 314
#define syDiv 315
#define syLParen 316
#define syRParen 317
#define syEqual 318
#define syCaret 319
#define syTilde 320
#define syLAngle 321
#define syRAngle 322
#define syLBrack 323
#define syRBrack 324
#define syBar 325
#define syError 326
#define syNumber 327
#define sySymbolicType 328
#define syIdentifier 329
#define syString 330
#define syQString 331
#define syFileName 332
#define syIPCFlag 333
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,   27,   27,   27,   27,   27,   27,   27,   27,
   27,   27,   27,   27,   27,   27,   27,   27,   28,   40,
   41,   41,   44,   44,   42,   43,   30,   31,   32,   29,
   29,   33,   34,   35,   36,   38,    1,    1,    1,    1,
    1,   39,   37,    6,    7,    7,    7,    7,    7,    7,
    7,    9,    9,    9,    9,    9,    9,    9,    9,    8,
    8,    8,   11,   11,   15,   15,   16,   16,   12,    2,
    2,    2,    3,    4,   10,   10,   14,   14,    5,    5,
    5,    5,    5,    5,   17,   17,   18,   19,   24,   24,
   25,   25,   25,   25,   22,   23,   20,   20,   20,   20,
   20,   20,   20,   20,   20,   20,   20,   20,   20,   20,
   20,   20,   20,   20,   21,   21,   13,   13,   13,   26,
   26,   26,   45,   46,   47,
};
short yylen[] = {                                         2,
    0,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    2,    2,    2,    2,    2,    2,    1,    2,    4,    1,
    0,    2,    1,    1,    1,    1,    3,    2,    2,    3,
    1,    2,    2,    2,    2,    3,    1,    1,    1,    1,
    1,    3,    2,    3,    1,    8,    8,    7,    4,    4,
    4,    1,    1,    2,    2,    2,    2,    1,    1,    4,
    6,    4,    1,    6,    1,    1,    1,    3,    1,    4,
    5,    7,    5,    5,    4,    6,    1,    2,    3,    3,
    3,    3,    1,    3,    1,    1,    3,    3,    2,    3,
    1,    1,    3,    3,    4,    3,    0,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    2,    2,    2,    0,
    3,    5,    0,    0,    0,
};
short yydefred[] = {                                      1,
    0,    0,    0,    0,    0,   20,   31,    0,    0,    0,
    0,    0,    0,    0,   17,    0,   85,   86,    2,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   21,    0,    0,    0,   18,   14,    0,    0,   32,
   33,   34,   35,    0,   43,   28,   29,   13,    3,    4,
    5,    6,    7,    8,    9,   10,   11,   12,   15,   16,
    0,    0,    0,   37,   38,   39,   40,   41,    0,    0,
    0,   87,   88,    0,   23,   24,   25,    0,   22,   27,
   30,   36,   42,  107,  114,  105,  106,   98,   99,  100,
  116,  115,  101,  102,  103,  104,  108,  110,  109,  111,
  113,  112,   89,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   65,   66,   69,    0,
    0,    0,    0,   59,   45,   58,   52,   53,    0,   63,
   26,   19,    0,    0,    0,    0,   90,    0,    0,    0,
    0,    0,    0,    0,   56,   54,   55,   57,    0,    0,
    0,    0,    0,    0,    0,    0,  120,   96,   93,   94,
    0,    0,    0,   83,    0,    0,   77,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   68,
    0,  118,  119,    0,    0,    0,    0,   70,    0,    0,
    0,    0,    0,    0,   60,   78,    0,   62,    0,   75,
    0,    0,    0,    0,   49,   50,   51,    0,    0,   71,
   84,    0,    0,   81,   82,   73,   74,    0,    0,    0,
    0,    0,    0,    0,    0,   61,   76,   64,    0,    0,
    0,    0,   72,    0,    0,   48,  122,   46,   47,
};
short yydgoto[] = {                                       1,
   69,  120,  121,  122,  165,   45,  123,  124,  125,  126,
  127,  128,  157,  168,  129,  130,   16,   17,   18,  104,
  105,  106,  107,   72,  108,  184,   19,   20,   21,   22,
   23,   24,   25,   26,   27,   28,   29,   30,   31,   32,
   61,   78,  132,   79,   33,   34,   35,
};
short yysindex[] = {                                      0,
 -240, -275, -271, -285, -258,    0,    0, -239, -237, -230,
 -208, -206, -186, -169,    0, -147,    0,    0,    0, -145,
 -143, -139, -121, -120, -119, -117, -116, -100,  -99,  -92,
  -81,    0, -223,  -53,  -77,    0,    0, -142, -142,    0,
    0,    0,    0, -106,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -261, -157,  -97,    0,    0,    0,    0,    0, -102,  -96,
 -200,    0,    0, -278,    0,    0,    0,  -95,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -93,  -91,  -79,  -76,  -80,  -84,  -83,
  -75,  -74,  -73,  -78, -251, -278,    0,    0,    0, -278,
 -278, -278,  -90,    0,    0,    0,    0,    0,  -72,    0,
    0,    0,  -65,  -65, -154, -154,    0, -152, -225,  -82,
  -82,  -82, -301,  -63,    0,    0,    0,    0,  -60,  -59,
  -58,  -57,  -55,  -54, -251, -292,    0,    0,    0,    0,
 -266, -225,  -44,    0, -176, -136,    0, -284, -297, -283,
  -52, -132, -225,  -71,  -70,  -69,  -68,  -67,  -66,    0,
 -106,    0,    0,  -46, -225,  -34,  -98,    0, -225, -225,
 -225, -225,  -26,  -24,    0,    0,  -82,    0, -225,    0,
  -87,  -62,  -61,  -45,    0,    0,    0,  -64, -128,    0,
    0, -196, -196,    0,    0,    0,    0, -257, -115, -250,
  -43,  -42,  -51,  -48,  -20,    0,    0,    0,  -50,  -49,
  -41,  -40,    0,  -36,  -35,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
 -130,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -39,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -32,  -31,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -195,    0,    0,    0,    0,    0, -197,    0,
    0,    0,    0,    0,  -39,  -39,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -151,    0,    0, -305,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -177,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -224, -156,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -104,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
    0,    0,    0,    0, -137,  116,    0,  121,  -47,    0,
    0,    0,  149, -138,  132,  173,    0,    0,    0,    0,
    0,    0,    0,  250,   34,   90,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 291
short yytable[] = {                                      75,
   76,  166,  169,  170,   95,  172,  111,  112,  113,  109,
  110,   95,  171,  197,  162,    2,    3,    4,    5,    6,
  111,  112,  113,  114,  187,  164,    7,    8,    9,   10,
   11,  196,  195,  198,   36,  201,  181,  115,   37,   62,
  116,   63,  185,   38,  196,  196,   12,  209,  117,  118,
  119,  212,  213,  214,  215,   13,   14,  186,  218,  226,
  208,  219,   84,   85,   86,   87,  228,   77,  145,   15,
   39,  196,  146,  147,  148,  117,  118,   88,   89,   90,
   91,   92,   93,   94,   95,   96,   79,   79,   79,   40,
  162,   41,   79,   67,   67,   67,   67,   67,   42,   79,
   67,  164,   97,   98,   99,  100,  101,  102,   84,   85,
   86,   87,   67,   67,   44,   44,  103,  191,  192,   67,
   43,   44,   44,   88,   89,   90,   91,   92,   93,   94,
   95,   96,  123,  120,  123,  189,  190,  191,  192,  120,
   46,  125,  124,  124,  124,  124,  124,  193,   97,   98,
   99,  100,  101,  102,   80,   80,   80,   47,  117,  117,
   80,  161,   48,  162,   49,  117,   50,   80,  159,  160,
   51,  163,   80,   71,  164,  189,  190,  191,  192,  189,
  190,  191,  192,  189,  190,  191,  192,  194,   52,   53,
   54,  200,   55,   56,   70,  225,  189,  190,  191,  192,
  149,  150,  151,  152,  153,  121,  121,  154,  227,   57,
   58,   74,  121,  189,  190,  191,  192,   59,  211,   64,
   65,   66,   67,   68,  189,  190,  191,  192,   60,   82,
  135,  131,   81,  136,   83,  133,  137,  134,  138,  139,
  140,  141,  142,  156,  143,  188,  167,  173,  174,  175,
  176,  177,  155,  178,  179,  210,  199,  202,  203,  204,
  205,  206,  207,  216,  208,  217,  221,  222,  224,  233,
  223,  182,  229,  230,  232,  236,  183,  231,  234,  235,
  238,  239,  158,  237,   91,   92,  180,  144,   73,   97,
  220,
};
short yycheck[] = {                                     261,
  262,  139,  141,  142,  310,  143,  299,  300,  301,  288,
  289,  317,  314,  311,  316,  256,  257,  258,  259,  260,
  299,  300,  301,  302,  162,  327,  267,  268,  269,  270,
  271,  329,  317,  317,  310,  173,  329,  316,  310,  263,
  319,  265,  309,  329,  329,  329,  287,  185,  327,  328,
  329,  189,  190,  191,  192,  296,  297,  324,  197,  317,
  311,  199,  263,  264,  265,  266,  317,  329,  116,  310,
  329,  329,  120,  121,  122,  327,  328,  278,  279,  280,
  281,  282,  283,  284,  285,  286,  311,  312,  313,  329,
  316,  329,  317,  291,  292,  293,  294,  295,  329,  324,
  298,  327,  303,  304,  305,  306,  307,  308,  263,  264,
  265,  266,  310,  311,  310,  311,  317,  314,  315,  317,
  329,  317,  329,  278,  279,  280,  281,  282,  283,  284,
  285,  286,  263,  311,  265,  312,  313,  314,  315,  317,
  327,  272,  273,  274,  275,  276,  277,  324,  303,  304,
  305,  306,  307,  308,  311,  312,  313,  327,  310,  311,
  317,  314,  310,  316,  310,  317,  310,  324,  135,  136,
  310,  324,  330,  316,  327,  312,  313,  314,  315,  312,
  313,  314,  315,  312,  313,  314,  315,  324,  310,  310,
  310,  324,  310,  310,  272,  324,  312,  313,  314,  315,
  291,  292,  293,  294,  295,  310,  311,  298,  324,  310,
  310,  318,  317,  312,  313,  314,  315,  310,  317,  273,
  274,  275,  276,  277,  312,  313,  314,  315,  310,  332,
  310,  327,  330,  310,  331,  329,  317,  329,  323,  323,
  316,  316,  316,  309,  323,  290,  329,  311,  309,  309,
  309,  309,  325,  309,  309,  290,  309,  329,  329,  329,
  329,  329,  329,  290,  311,  290,  329,  329,  333,  290,
  316,  156,  316,  316,  323,  317,  156,  329,  329,  329,
  317,  317,  134,  324,  317,  317,  155,  115,   39,  329,
  201,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 333
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"sySkip","syRoutine",
"sySimpleRoutine","sySubsystem","syKernelUser","syKernelServer","syMsgOption",
"syMsgSeqno","syWaitTime","sySendTime","syNoWaitTime","syErrorProc",
"syServerPrefix","syUserPrefix","syServerDemux","syRCSId","syImport",
"syUImport","sySImport","syIImport","syDImport","syIn","syOut","syInOut",
"syUserImpl","syServerImpl","syRequestPort","syReplyPort","sySReplyPort",
"syUReplyPort","syType","syArray","syStruct","syOf","syInTran","syOutTran",
"syDestructor","syCType","syCUserType","syUserTypeLimit","syOnStackLimit",
"syCServerType","syPointerTo","syPointerToIfNot","syValueOf","syCString",
"sySecToken","syUserSecToken","syServerSecToken","syAuditToken",
"syUserAuditToken","syServerAuditToken","syColon","sySemi","syComma","syPlus",
"syMinus","syStar","syDiv","syLParen","syRParen","syEqual","syCaret","syTilde",
"syLAngle","syRAngle","syLBrack","syRBrack","syBar","syError","syNumber",
"sySymbolicType","syIdentifier","syString","syQString","syFileName","syIPCFlag",
};
char *yyrule[] = {
"$accept : Statements",
"Statements :",
"Statements : Statements Statement",
"Statement : Subsystem sySemi",
"Statement : WaitTime sySemi",
"Statement : MsgOption sySemi",
"Statement : UserTypeLimit sySemi",
"Statement : OnStackLimit sySemi",
"Statement : Error sySemi",
"Statement : ServerPrefix sySemi",
"Statement : UserPrefix sySemi",
"Statement : ServerDemux sySemi",
"Statement : TypeDecl sySemi",
"Statement : RoutineDecl sySemi",
"Statement : sySkip sySemi",
"Statement : Import sySemi",
"Statement : RCSDecl sySemi",
"Statement : sySemi",
"Statement : error sySemi",
"Subsystem : SubsystemStart SubsystemMods SubsystemName SubsystemBase",
"SubsystemStart : sySubsystem",
"SubsystemMods :",
"SubsystemMods : SubsystemMods SubsystemMod",
"SubsystemMod : syKernelUser",
"SubsystemMod : syKernelServer",
"SubsystemName : syIdentifier",
"SubsystemBase : syNumber",
"MsgOption : LookString syMsgOption syString",
"UserTypeLimit : syUserTypeLimit syNumber",
"OnStackLimit : syOnStackLimit syNumber",
"WaitTime : LookString syWaitTime syString",
"WaitTime : syNoWaitTime",
"Error : syErrorProc syIdentifier",
"ServerPrefix : syServerPrefix syIdentifier",
"UserPrefix : syUserPrefix syIdentifier",
"ServerDemux : syServerDemux syIdentifier",
"Import : LookFileName ImportIndicant syFileName",
"ImportIndicant : syImport",
"ImportIndicant : syUImport",
"ImportIndicant : sySImport",
"ImportIndicant : syIImport",
"ImportIndicant : syDImport",
"RCSDecl : LookQString syRCSId syQString",
"TypeDecl : syType NamedTypeSpec",
"NamedTypeSpec : syIdentifier syEqual TransTypeSpec",
"TransTypeSpec : TypeSpec",
"TransTypeSpec : TransTypeSpec syInTran syColon syIdentifier syIdentifier syLParen syIdentifier syRParen",
"TransTypeSpec : TransTypeSpec syOutTran syColon syIdentifier syIdentifier syLParen syIdentifier syRParen",
"TransTypeSpec : TransTypeSpec syDestructor syColon syIdentifier syLParen syIdentifier syRParen",
"TransTypeSpec : TransTypeSpec syCType syColon syIdentifier",
"TransTypeSpec : TransTypeSpec syCUserType syColon syIdentifier",
"TransTypeSpec : TransTypeSpec syCServerType syColon syIdentifier",
"TypeSpec : BasicTypeSpec",
"TypeSpec : PrevTypeSpec",
"TypeSpec : VarArrayHead TypeSpec",
"TypeSpec : ArrayHead TypeSpec",
"TypeSpec : syCaret TypeSpec",
"TypeSpec : StructHead TypeSpec",
"TypeSpec : CStringSpec",
"TypeSpec : NativeTypeSpec",
"NativeTypeSpec : syPointerTo syLParen TypePhrase syRParen",
"NativeTypeSpec : syPointerToIfNot syLParen TypePhrase syComma TypePhrase syRParen",
"NativeTypeSpec : syValueOf syLParen TypePhrase syRParen",
"BasicTypeSpec : IPCType",
"BasicTypeSpec : syLParen IPCType syComma IntExp IPCFlags syRParen",
"PrimIPCType : syNumber",
"PrimIPCType : sySymbolicType",
"IPCType : PrimIPCType",
"IPCType : PrimIPCType syBar PrimIPCType",
"PrevTypeSpec : syIdentifier",
"VarArrayHead : syArray syLBrack syRBrack syOf",
"VarArrayHead : syArray syLBrack syStar syRBrack syOf",
"VarArrayHead : syArray syLBrack syStar syColon IntExp syRBrack syOf",
"ArrayHead : syArray syLBrack IntExp syRBrack syOf",
"StructHead : syStruct syLBrack IntExp syRBrack syOf",
"CStringSpec : syCString syLBrack IntExp syRBrack",
"CStringSpec : syCString syLBrack syStar syColon IntExp syRBrack",
"TypePhrase : syIdentifier",
"TypePhrase : TypePhrase syIdentifier",
"IntExp : IntExp syPlus IntExp",
"IntExp : IntExp syMinus IntExp",
"IntExp : IntExp syStar IntExp",
"IntExp : IntExp syDiv IntExp",
"IntExp : syNumber",
"IntExp : syLParen IntExp syRParen",
"RoutineDecl : Routine",
"RoutineDecl : SimpleRoutine",
"Routine : syRoutine syIdentifier Arguments",
"SimpleRoutine : sySimpleRoutine syIdentifier Arguments",
"Arguments : syLParen syRParen",
"Arguments : syLParen ArgumentList syRParen",
"ArgumentList : Argument",
"ArgumentList : Trailer",
"ArgumentList : Argument sySemi ArgumentList",
"ArgumentList : Trailer sySemi ArgumentList",
"Argument : Direction syIdentifier ArgumentType IPCFlags",
"Trailer : TrImplKeyword syIdentifier ArgumentType",
"Direction :",
"Direction : syIn",
"Direction : syOut",
"Direction : syInOut",
"Direction : syRequestPort",
"Direction : syReplyPort",
"Direction : sySReplyPort",
"Direction : syUReplyPort",
"Direction : syWaitTime",
"Direction : sySendTime",
"Direction : syMsgOption",
"Direction : sySecToken",
"Direction : syServerSecToken",
"Direction : syUserSecToken",
"Direction : syAuditToken",
"Direction : syServerAuditToken",
"Direction : syUserAuditToken",
"Direction : syMsgSeqno",
"TrImplKeyword : syServerImpl",
"TrImplKeyword : syUserImpl",
"ArgumentType : syColon syIdentifier",
"ArgumentType : syColon NamedTypeSpec",
"ArgumentType : syColon NativeTypeSpec",
"IPCFlags :",
"IPCFlags : IPCFlags syComma syIPCFlag",
"IPCFlags : IPCFlags syComma syIPCFlag syLBrack syRBrack",
"LookString :",
"LookFileName :",
"LookQString :",
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
#line 742 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"

void
yyerror(s)
    char *s;
{
    error(s);
}

static char *
import_name(sk)
    statement_kind_t sk;
{
    switch (sk)
    {
      case skImport:
	return "Import";
      case skSImport:
	return "SImport";
      case skUImport:
	return "UImport";
      case skIImport:
	return "IImport";
      case skDImport:
	return "DImport";
      default:
	fatal("import_name(%d): not import statement", (int) sk);
	/*NOTREACHED*/
        return strNULL;
    }
}
#line 532 "y.tab.c"
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
case 13:
#line 206 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    register statement_t *st = stAlloc();

    st->stKind = skRoutine;
    st->stRoutine = yyvsp[-1].routine;
    rtCheckRoutine(yyvsp[-1].routine);
    if (BeVerbose)
	rtPrintRoutine(yyvsp[-1].routine);
}
break;
case 14:
#line 216 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ rtSkip(); }
break;
case 18:
#line 221 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyerrok; }
break;
case 19:
#line 226 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (BeVerbose)
    {
	printf("Subsystem %s: base = %u%s%s\n\n",
	       SubsystemName, SubsystemBase,
	       IsKernelUser ? ", KernelUser" : "",
	       IsKernelServer ? ", KernelServer" : "");
    }
}
break;
case 20:
#line 238 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (SubsystemName != strNULL)
    {
	warn("previous Subsystem decl (of %s) will be ignored", SubsystemName);
	IsKernelUser = FALSE;
	IsKernelServer = FALSE;
	strfree(SubsystemName);
    }
}
break;
case 23:
#line 254 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (IsKernelUser)
	warn("duplicate KernelUser keyword");
    if (!UseMsgRPC) 
    {
	warn("with KernelUser the -R option is meaningless");
	UseMsgRPC = TRUE;
    }
    IsKernelUser = TRUE;
}
break;
case 24:
#line 265 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (IsKernelServer)
	warn("duplicate KernelServer keyword");
    IsKernelServer = TRUE;
}
break;
case 25:
#line 272 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ SubsystemName = yyvsp[0].identifier; }
break;
case 26:
#line 275 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ SubsystemBase = yyvsp[0].number; }
break;
case 27:
#line 279 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (streql(yyvsp[0].string, "MACH_MSG_OPTION_NONE"))
    {
	MsgOption = strNULL;
	if (BeVerbose)
	    printf("MsgOption: canceled\n\n");
    }
    else
    {
	MsgOption = yyvsp[0].string;
	if (BeVerbose)
	    printf("MsgOption %s\n\n",yyvsp[0].string);
    }
}
break;
case 28:
#line 296 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{UserTypeLimit = yyvsp[0].number; }
break;
case 29:
#line 299 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{MaxMessSizeOnStack = yyvsp[0].number; }
break;
case 30:
#line 303 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    WaitTime = yyvsp[0].string;
    if (BeVerbose)
	printf("WaitTime %s\n\n", WaitTime);
}
break;
case 31:
#line 309 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    WaitTime = strNULL;
    if (BeVerbose)
	printf("NoWaitTime\n\n");
}
break;
case 32:
#line 317 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    ErrorProc = yyvsp[0].identifier;
    if (BeVerbose)
	printf("ErrorProc %s\n\n", ErrorProc);
}
break;
case 33:
#line 325 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    ServerPrefix = yyvsp[0].identifier;
    if (BeVerbose)
	printf("ServerPrefix %s\n\n", ServerPrefix);
}
break;
case 34:
#line 333 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    UserPrefix = yyvsp[0].identifier;
    if (BeVerbose)
	printf("UserPrefix %s\n\n", UserPrefix);
}
break;
case 35:
#line 341 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    ServerDemux = yyvsp[0].identifier;
    if (BeVerbose)
	printf("ServerDemux %s\n\n", ServerDemux);
}
break;
case 36:
#line 349 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    register statement_t *st = stAlloc();
    st->stKind = yyvsp[-1].statement_kind;
    st->stFileName = yyvsp[0].string;

    if (BeVerbose)
	printf("%s %s\n\n", import_name(yyvsp[-1].statement_kind), yyvsp[0].string);
}
break;
case 37:
#line 359 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.statement_kind = skImport; }
break;
case 38:
#line 360 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.statement_kind = skUImport; }
break;
case 39:
#line 361 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.statement_kind = skSImport; }
break;
case 40:
#line 362 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.statement_kind = skIImport; }
break;
case 41:
#line 363 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.statement_kind = skDImport; }
break;
case 42:
#line 367 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (RCSId != strNULL)
	warn("previous RCS decl will be ignored");
    if (BeVerbose)
	printf("RCSId %s\n\n", yyvsp[0].string);
    RCSId = yyvsp[0].string;
}
break;
case 43:
#line 377 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    register identifier_t name = yyvsp[0].type->itName;

    if (itLookUp(name) != itNULL)
	warn("overriding previous definition of %s", name);
    itInsert(name, yyvsp[0].type);
}
break;
case 44:
#line 387 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ itTypeDecl(yyvsp[-2].identifier, yyval.type = yyvsp[0].type); }
break;
case 45:
#line 391 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itResetType(yyvsp[0].type); }
break;
case 46:
#line 394 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = yyvsp[-7].type;

    if ((yyval.type->itTransType != strNULL) && !streql(yyval.type->itTransType, yyvsp[-4].identifier))
	warn("conflicting translation types (%s, %s)",
	     yyval.type->itTransType, yyvsp[-4].identifier);
    yyval.type->itTransType = yyvsp[-4].identifier;

    if ((yyval.type->itInTrans != strNULL) && !streql(yyval.type->itInTrans, yyvsp[-3].identifier))
	warn("conflicting in-translation functions (%s, %s)",
	     yyval.type->itInTrans, yyvsp[-3].identifier);
    yyval.type->itInTrans = yyvsp[-3].identifier;

    if ((yyval.type->itServerType != strNULL) && !streql(yyval.type->itServerType, yyvsp[-1].identifier))
	warn("conflicting server types (%s, %s)",
	     yyval.type->itServerType, yyvsp[-1].identifier);
    yyval.type->itServerType = yyvsp[-1].identifier;
}
break;
case 47:
#line 414 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = yyvsp[-7].type;

    if ((yyval.type->itServerType != strNULL) && !streql(yyval.type->itServerType, yyvsp[-4].identifier))
	warn("conflicting server types (%s, %s)",
	     yyval.type->itServerType, yyvsp[-4].identifier);
    yyval.type->itServerType = yyvsp[-4].identifier;

    if ((yyval.type->itOutTrans != strNULL) && !streql(yyval.type->itOutTrans, yyvsp[-3].identifier))
	warn("conflicting out-translation functions (%s, %s)",
	     yyval.type->itOutTrans, yyvsp[-3].identifier);
    yyval.type->itOutTrans = yyvsp[-3].identifier;

    if ((yyval.type->itTransType != strNULL) && !streql(yyval.type->itTransType, yyvsp[-1].identifier))
	warn("conflicting translation types (%s, %s)",
	     yyval.type->itTransType, yyvsp[-1].identifier);
    yyval.type->itTransType = yyvsp[-1].identifier;
}
break;
case 48:
#line 434 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = yyvsp[-6].type;

    if ((yyval.type->itDestructor != strNULL) && !streql(yyval.type->itDestructor, yyvsp[-3].identifier))
	warn("conflicting destructor functions (%s, %s)",
	     yyval.type->itDestructor, yyvsp[-3].identifier);
    yyval.type->itDestructor = yyvsp[-3].identifier;

    if ((yyval.type->itTransType != strNULL) && !streql(yyval.type->itTransType, yyvsp[-1].identifier))
	warn("conflicting translation types (%s, %s)",
	     yyval.type->itTransType, yyvsp[-1].identifier);
    yyval.type->itTransType = yyvsp[-1].identifier;
}
break;
case 49:
#line 448 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = yyvsp[-3].type;

    if ((yyval.type->itUserType != strNULL) && !streql(yyval.type->itUserType, yyvsp[0].identifier))
	warn("conflicting user types (%s, %s)",
	     yyval.type->itUserType, yyvsp[0].identifier);
    yyval.type->itUserType = yyvsp[0].identifier;

    if ((yyval.type->itServerType != strNULL) && !streql(yyval.type->itServerType, yyvsp[0].identifier))
	warn("conflicting server types (%s, %s)",
	     yyval.type->itServerType, yyvsp[0].identifier);
    yyval.type->itServerType = yyvsp[0].identifier;
}
break;
case 50:
#line 462 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = yyvsp[-3].type;

    if ((yyval.type->itUserType != strNULL) && !streql(yyval.type->itUserType, yyvsp[0].identifier))
	warn("conflicting user types (%s, %s)",
	     yyval.type->itUserType, yyvsp[0].identifier);
    yyval.type->itUserType = yyvsp[0].identifier;
}
break;
case 51:
#line 472 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = yyvsp[-3].type;

    if ((yyval.type->itServerType != strNULL) && !streql(yyval.type->itServerType, yyvsp[0].identifier))
	warn("conflicting server types (%s, %s)",
	     yyval.type->itServerType, yyvsp[0].identifier);
    yyval.type->itServerType = yyvsp[0].identifier;
}
break;
case 52:
#line 483 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = yyvsp[0].type; }
break;
case 53:
#line 485 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = yyvsp[0].type; }
break;
case 54:
#line 487 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itVarArrayDecl(yyvsp[-1].number, yyvsp[0].type); }
break;
case 55:
#line 489 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itArrayDecl(yyvsp[-1].number, yyvsp[0].type); }
break;
case 56:
#line 491 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itPtrDecl(yyvsp[0].type); }
break;
case 57:
#line 493 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itStructDecl(yyvsp[-1].number, yyvsp[0].type); }
break;
case 58:
#line 495 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = yyvsp[0].type; }
break;
case 59:
#line 497 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = yyvsp[0].type; }
break;
case 60:
#line 501 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itNativeType(yyvsp[-1].identifier, TRUE, 0); }
break;
case 61:
#line 504 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itNativeType(yyvsp[-3].identifier, TRUE, yyvsp[-1].identifier); }
break;
case 62:
#line 506 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itNativeType(yyvsp[-1].identifier, FALSE, 0); }
break;
case 63:
#line 510 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = itShortDecl(yyvsp[0].symtype.innumber, yyvsp[0].symtype.instr,
		     yyvsp[0].symtype.outnumber, yyvsp[0].symtype.outstr,
		     yyvsp[0].symtype.size);
}
break;
case 64:
#line 517 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    error("Long form type declarations aren't allowed anylonger\n");
}
break;
case 65:
#line 523 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.symtype.innumber = yyval.symtype.outnumber = yyvsp[0].number;
    yyval.symtype.instr = yyval.symtype.outstr = strNULL;
    yyval.symtype.size = 0;
}
break;
case 66:
#line 529 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.symtype = yyvsp[0].symtype; }
break;
case 67:
#line 533 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.symtype = yyvsp[0].symtype; }
break;
case 68:
#line 535 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (yyvsp[-2].symtype.size != yyvsp[0].symtype.size)
    {
	if (yyvsp[-2].symtype.size == 0)
	    yyval.symtype.size = yyvsp[0].symtype.size;
	else if (yyvsp[0].symtype.size == 0)
	    yyval.symtype.size = yyvsp[-2].symtype.size;
	else
	{
	    error("sizes in IPCTypes (%d, %d) aren't equal",
		  yyvsp[-2].symtype.size, yyvsp[0].symtype.size);
	    yyval.symtype.size = 0;
	}
    }
    else
	yyval.symtype.size = yyvsp[-2].symtype.size;
    yyval.symtype.innumber = yyvsp[-2].symtype.innumber;
    yyval.symtype.instr = yyvsp[-2].symtype.instr;
    yyval.symtype.outnumber = yyvsp[0].symtype.outnumber;
    yyval.symtype.outstr = yyvsp[0].symtype.outstr;
}
break;
case 69:
#line 559 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itPrevDecl(yyvsp[0].identifier); }
break;
case 70:
#line 563 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = 0; }
break;
case 71:
#line 565 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = 0; }
break;
case 72:
#line 568 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number; }
break;
case 73:
#line 572 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number; }
break;
case 74:
#line 576 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number; }
break;
case 75:
#line 580 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itCStringDecl(yyvsp[-1].number, FALSE); }
break;
case 76:
#line 583 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = itCStringDecl(yyvsp[-1].number, TRUE); }
break;
case 77:
#line 587 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.identifier = yyvsp[0].identifier; }
break;
case 78:
#line 589 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.identifier = strphrase(yyvsp[-1].identifier, yyvsp[0].identifier); strfree(yyvsp[0].identifier); }
break;
case 79:
#line 593 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number + yyvsp[0].number;	}
break;
case 80:
#line 595 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number - yyvsp[0].number;	}
break;
case 81:
#line 597 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number * yyvsp[0].number;	}
break;
case 82:
#line 599 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-2].number / yyvsp[0].number;	}
break;
case 83:
#line 601 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[0].number;	}
break;
case 84:
#line 603 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.number = yyvsp[-1].number;	}
break;
case 85:
#line 607 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.routine = yyvsp[0].routine; }
break;
case 86:
#line 608 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.routine = yyvsp[0].routine; }
break;
case 87:
#line 612 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.routine = rtMakeRoutine(yyvsp[-1].identifier, yyvsp[0].argument); }
break;
case 88:
#line 616 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.routine = rtMakeSimpleRoutine(yyvsp[-1].identifier, yyvsp[0].argument); }
break;
case 89:
#line 620 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.argument = argNULL; }
break;
case 90:
#line 622 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.argument = yyvsp[-1].argument; }
break;
case 91:
#line 627 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.argument = yyvsp[0].argument; }
break;
case 92:
#line 629 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.argument = yyvsp[0].argument; }
break;
case 93:
#line 631 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.argument = yyvsp[-2].argument;
    yyval.argument->argNext = yyvsp[0].argument;
}
break;
case 94:
#line 636 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.argument = yyvsp[-2].argument;
    yyval.argument->argNext = yyvsp[0].argument;
}
break;
case 95:
#line 643 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.argument = argAlloc();
    yyval.argument->argKind = yyvsp[-3].direction;
    yyval.argument->argName = yyvsp[-2].identifier;
    yyval.argument->argType = yyvsp[-1].type;
    yyval.argument->argFlags = yyvsp[0].flag;
    if (yyvsp[-1].type && yyvsp[-1].type->itNative)
    {
        if (yyvsp[-3].direction != akIn && yyvsp[-3].direction != akOut && yyvsp[-3].direction != akInOut)
	    error("Illegal direction specified");
       
        if (!(yyvsp[-1].type->itNativePointer) && yyvsp[-3].direction != akIn)
	    error("ValueOf only valid for in");

        if ((yyvsp[-1].type->itBadValue) != NULL && yyvsp[-3].direction != akIn)
	    error("PointerToIfNot only valid for in");
    }
}
break;
case 96:
#line 664 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.argument = argAlloc();
    yyval.argument->argKind = yyvsp[-2].direction;
    yyval.argument->argName = yyvsp[-1].identifier;
    yyval.argument->argType = yyvsp[0].type;
}
break;
case 97:
#line 673 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akNone; }
break;
case 98:
#line 674 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akIn; }
break;
case 99:
#line 675 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akOut; }
break;
case 100:
#line 676 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akInOut; }
break;
case 101:
#line 677 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akRequestPort; }
break;
case 102:
#line 678 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akReplyPort; }
break;
case 103:
#line 679 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akSReplyPort; }
break;
case 104:
#line 680 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akUReplyPort; }
break;
case 105:
#line 681 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akWaitTime; }
break;
case 106:
#line 682 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akSendTime; }
break;
case 107:
#line 683 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akMsgOption; }
break;
case 108:
#line 684 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akSecToken; }
break;
case 109:
#line 685 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akServerSecToken; }
break;
case 110:
#line 686 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akUserSecToken; }
break;
case 111:
#line 687 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akAuditToken; }
break;
case 112:
#line 688 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akServerAuditToken; }
break;
case 113:
#line 689 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akUserAuditToken; }
break;
case 114:
#line 690 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akMsgSeqno; }
break;
case 115:
#line 695 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akServerImpl; }
break;
case 116:
#line 696 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.direction = akUserImpl; }
break;
case 117:
#line 701 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    yyval.type = itLookUp(yyvsp[0].identifier);
    if (yyval.type == itNULL)
	error("type '%s' not defined", yyvsp[0].identifier);
}
break;
case 118:
#line 707 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = yyvsp[0].type; }
break;
case 119:
#line 709 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.type = yyvsp[0].type; }
break;
case 120:
#line 713 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ yyval.flag = flNone; }
break;
case 121:
#line 715 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (yyvsp[-2].flag & yyvsp[0].flag)
	warn("redundant IPC flag ignored");
    else
	yyval.flag = yyvsp[-2].flag | yyvsp[0].flag;
}
break;
case 122:
#line 722 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{
    if (yyvsp[-2].flag != flDealloc)
	warn("only Dealloc is variable");
    else
	yyval.flag = yyvsp[-4].flag | flMaybeDealloc;
}
break;
case 123:
#line 730 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ LookString(); }
break;
case 124:
#line 734 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ LookFileName(); }
break;
case 125:
#line 738 "/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/bootstrap_cmds-49/migcom.tproj/parser.y"
{ LookQString(); }
break;
#line 1367 "y.tab.c"
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
