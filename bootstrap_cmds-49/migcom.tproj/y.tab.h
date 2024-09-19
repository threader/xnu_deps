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
extern YYSTYPE yylval;
