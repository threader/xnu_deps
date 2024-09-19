/*
 * IDENTIFICATION:
 * stub generated Thu Jan 23 03:08:22 2014
 * with a MiG generated Fri Apr 20 02:06:14 PDT 2007 by root@b42.apple.com
 * OPTIONS: 
 */
#define	__MIG_check__Reply__make_subsystem__ 1
#define	__NDR_convert__Reply__make_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "make.h"


#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_REPLY: \
	case MACH_RCV_INVALID_NAME: \
	case MACH_RCV_PORT_DIED: \
	case MACH_RCV_PORT_CHANGED: \
	case MACH_RCV_TIMED_OUT: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_REPLY: \
	case MACH_RCV_INVALID_NAME: \
	case MACH_RCV_PORT_DIED: \
	case MACH_RCV_PORT_CHANGED: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



/* SimpleRoutine alert_old */
mig_external kern_return_t make_alert_old
(
	mach_port_t makePort,
	int eventType,
	make_string_t functionName,
	mach_msg_type_number_t functionNameCnt,
	make_string_t fileName,
	mach_msg_type_number_t fileNameCnt,
	int line,
	make_string_t message,
	mach_msg_type_number_t messageCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int eventType;
		mach_msg_type_number_t functionNameCnt;
		char functionName[1024];
		mach_msg_type_number_t fileNameCnt;
		char fileName[1024];
		int line;
		mach_msg_type_number_t messageCnt;
		char message[1024];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
	} Mess;

	Request *InP = &Mess.In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__alert_old_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__alert_old_t__defined */

	__DeclareSendSimple(100, "alert_old")

	InP->NDR = NDR_record;

	InP->eventType = eventType;

	if (functionNameCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->functionName, (const char *) functionName, functionNameCnt);

	InP->functionNameCnt = functionNameCnt;

	msgh_size_delta = _WALIGN_(functionNameCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 3072) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	if (fileNameCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->fileName, (const char *) fileName, fileNameCnt);

	InP->fileNameCnt = fileNameCnt;

	msgh_size_delta = _WALIGN_(fileNameCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->line = line;

	if (messageCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->message, (const char *) message, messageCnt);

	InP->messageCnt = messageCnt;

	msgh_size += _WALIGN_(messageCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = makePort;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 100;

	__BeforeSendSimple(100, "alert_old")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendSimple(100, "alert_old")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine alert */
mig_external kern_return_t make_alert
(
	mach_port_t makePort,
	int eventType,
	make_string_t functionName,
	mach_msg_type_number_t functionNameCnt,
	make_string_t fileName,
	mach_msg_type_number_t fileNameCnt,
	make_string_t directory,
	mach_msg_type_number_t directoryCnt,
	int line,
	make_string_t message,
	mach_msg_type_number_t messageCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int eventType;
		mach_msg_type_number_t functionNameCnt;
		char functionName[1024];
		mach_msg_type_number_t fileNameCnt;
		char fileName[1024];
		mach_msg_type_number_t directoryCnt;
		char directory[1024];
		int line;
		mach_msg_type_number_t messageCnt;
		char message[1024];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
	} Mess;

	Request *InP = &Mess.In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__alert_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__alert_t__defined */

	__DeclareSendSimple(101, "alert")

	InP->NDR = NDR_record;

	InP->eventType = eventType;

	if (functionNameCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->functionName, (const char *) functionName, functionNameCnt);

	InP->functionNameCnt = functionNameCnt;

	msgh_size_delta = _WALIGN_(functionNameCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 4096) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	if (fileNameCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->fileName, (const char *) fileName, fileNameCnt);

	InP->fileNameCnt = fileNameCnt;

	msgh_size_delta = _WALIGN_(fileNameCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	if (directoryCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->directory, (const char *) directory, directoryCnt);

	InP->directoryCnt = directoryCnt;

	msgh_size_delta = _WALIGN_(directoryCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->line = line;

	if (messageCnt > 1024) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->message, (const char *) message, messageCnt);

	InP->messageCnt = messageCnt;

	msgh_size += _WALIGN_(messageCnt);
	InP = &Mess.In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = makePort;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 101;

	__BeforeSendSimple(101, "alert")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendSimple(101, "alert")
		return msg_result;
	return KERN_SUCCESS;
    }
}
