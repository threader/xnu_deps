/*
 * IDENTIFICATION:
 * stub generated Sun Jan 26 13:37:06 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__UNDRequest_subsystem__ 1
#define	__NDR_convert__Reply__UNDRequest_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "UNDRequest.h"


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



/* SimpleRoutine UNDExecute_rpc */
mig_external kern_return_t UNDExecute_rpc
(
	UNDServerRef server,
	UNDPath executionPath,
	int uid,
	int gid
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t executionPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t executionPathCnt;
		char executionPath[1024];
		int uid;
		int gid;
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

	union UNDExecute_rpcMessU {
		Request In;
	} *Mess = (union UNDExecute_rpcMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__UNDExecute_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDExecute_rpc_t__defined */

	__DeclareSendSimple(6000, "UNDExecute_rpc")

	InP->NDR = NDR_record;

	InP->executionPathCnt = mig_strncpy(InP->executionPath, executionPath, 1024);

	msgh_size_delta = _WALIGN_(InP->executionPathCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 1024) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->uid = uid;

	InP->gid = gid;

	InP = &Mess->In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6000;

	__BeforeSendSimple(6000, "UNDExecute_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, msgh_size);
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6000, "UNDExecute_rpc")
		{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return msg_result; }
	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

/* SimpleRoutine UNDDisplayNoticeFromBundle_rpc */
mig_external kern_return_t UNDDisplayNoticeFromBundle_rpc
(
	UNDServerRef server,
	mach_port_t reply,
	UNDPath bundlePath,
	UNDPath fileName,
	UNDPath fileExtension,
	UNDKey messageKey
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t reply;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t bundlePathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t bundlePathCnt;
		char bundlePath[1024];
		mach_msg_type_number_t fileNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t fileNameCnt;
		char fileName[1024];
		mach_msg_type_number_t fileExtensionOffset; /* MiG doesn't use it */
		mach_msg_type_number_t fileExtensionCnt;
		char fileExtension[1024];
		mach_msg_type_number_t messageKeyOffset; /* MiG doesn't use it */
		mach_msg_type_number_t messageKeyCnt;
		char messageKey[128];
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

	union UNDDisplayNoticeFromBundle_rpcMessU {
		Request In;
	} *Mess = (union UNDDisplayNoticeFromBundle_rpcMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__UNDDisplayNoticeFromBundle_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDDisplayNoticeFromBundle_rpc_t__defined */

	__DeclareSendSimple(6001, "UNDDisplayNoticeFromBundle_rpc")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t replyTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->reply = replyTemplate;
	InP->reply.name = reply;
#else	/* UseStaticTemplates */
	InP->reply.name = reply;
	InP->reply.disposition = 19;
	InP->reply.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->bundlePathCnt = mig_strncpy(InP->bundlePath, bundlePath, 1024);

	msgh_size_delta = _WALIGN_(InP->bundlePathCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 3200) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->fileNameCnt = mig_strncpy(InP->fileName, fileName, 1024);

	msgh_size_delta = _WALIGN_(InP->fileNameCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->fileExtensionCnt = mig_strncpy(InP->fileExtension, fileExtension, 1024);

	msgh_size_delta = _WALIGN_(InP->fileExtensionCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->messageKeyCnt = mig_strncpy(InP->messageKey, messageKey, 128);

	msgh_size += _WALIGN_(InP->messageKeyCnt);
	InP = &Mess->In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6001;

	__BeforeSendSimple(6001, "UNDDisplayNoticeFromBundle_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, msgh_size);
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6001, "UNDDisplayNoticeFromBundle_rpc")
		{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return msg_result; }
	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

/* SimpleRoutine UNDDisplayAlertFromBundle_rpc */
mig_external kern_return_t UNDDisplayAlertFromBundle_rpc
(
	UNDServerRef server,
	mach_port_t reply,
	UNDPath bundlePath,
	UNDKey fileName,
	UNDKey fileExtension,
	UNDKey messageKey
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t reply;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t bundlePathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t bundlePathCnt;
		char bundlePath[1024];
		mach_msg_type_number_t fileNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t fileNameCnt;
		char fileName[128];
		mach_msg_type_number_t fileExtensionOffset; /* MiG doesn't use it */
		mach_msg_type_number_t fileExtensionCnt;
		char fileExtension[128];
		mach_msg_type_number_t messageKeyOffset; /* MiG doesn't use it */
		mach_msg_type_number_t messageKeyCnt;
		char messageKey[128];
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

	union UNDDisplayAlertFromBundle_rpcMessU {
		Request In;
	} *Mess = (union UNDDisplayAlertFromBundle_rpcMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__UNDDisplayAlertFromBundle_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDDisplayAlertFromBundle_rpc_t__defined */

	__DeclareSendSimple(6002, "UNDDisplayAlertFromBundle_rpc")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t replyTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->reply = replyTemplate;
	InP->reply.name = reply;
#else	/* UseStaticTemplates */
	InP->reply.name = reply;
	InP->reply.disposition = 19;
	InP->reply.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->bundlePathCnt = mig_strncpy(InP->bundlePath, bundlePath, 1024);

	msgh_size_delta = _WALIGN_(InP->bundlePathCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 1408) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->fileNameCnt = mig_strncpy(InP->fileName, fileName, 128);

	msgh_size_delta = _WALIGN_(InP->fileNameCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->fileExtensionCnt = mig_strncpy(InP->fileExtension, fileExtension, 128);

	msgh_size_delta = _WALIGN_(InP->fileExtensionCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->messageKeyCnt = mig_strncpy(InP->messageKey, messageKey, 128);

	msgh_size += _WALIGN_(InP->messageKeyCnt);
	InP = &Mess->In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6002;

	__BeforeSendSimple(6002, "UNDDisplayAlertFromBundle_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, msgh_size);
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6002, "UNDDisplayAlertFromBundle_rpc")
		{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return msg_result; }
	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

/* SimpleRoutine UNDDisplayCustomFromBundle_rpc */
mig_external kern_return_t UNDDisplayCustomFromBundle_rpc
(
	UNDServerRef server,
	mach_port_t reply,
	UNDPath bundlePath,
	UNDKey fileName,
	UNDKey fileExtension,
	UNDKey messageKey,
	UNDPath tokenKey
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t reply;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t bundlePathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t bundlePathCnt;
		char bundlePath[1024];
		mach_msg_type_number_t fileNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t fileNameCnt;
		char fileName[128];
		mach_msg_type_number_t fileExtensionOffset; /* MiG doesn't use it */
		mach_msg_type_number_t fileExtensionCnt;
		char fileExtension[128];
		mach_msg_type_number_t messageKeyOffset; /* MiG doesn't use it */
		mach_msg_type_number_t messageKeyCnt;
		char messageKey[128];
		mach_msg_type_number_t tokenKeyOffset; /* MiG doesn't use it */
		mach_msg_type_number_t tokenKeyCnt;
		char tokenKey[1024];
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

	union UNDDisplayCustomFromBundle_rpcMessU {
		Request In;
	} *Mess = (union UNDDisplayCustomFromBundle_rpcMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__UNDDisplayCustomFromBundle_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDDisplayCustomFromBundle_rpc_t__defined */

	__DeclareSendSimple(6003, "UNDDisplayCustomFromBundle_rpc")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t replyTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->reply = replyTemplate;
	InP->reply.name = reply;
#else	/* UseStaticTemplates */
	InP->reply.name = reply;
	InP->reply.disposition = 19;
	InP->reply.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->bundlePathCnt = mig_strncpy(InP->bundlePath, bundlePath, 1024);

	msgh_size_delta = _WALIGN_(InP->bundlePathCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 2432) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->fileNameCnt = mig_strncpy(InP->fileName, fileName, 128);

	msgh_size_delta = _WALIGN_(InP->fileNameCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->fileExtensionCnt = mig_strncpy(InP->fileExtension, fileExtension, 128);

	msgh_size_delta = _WALIGN_(InP->fileExtensionCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->messageKeyCnt = mig_strncpy(InP->messageKey, messageKey, 128);

	msgh_size_delta = _WALIGN_(InP->messageKeyCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->tokenKeyCnt = mig_strncpy(InP->tokenKey, tokenKey, 1024);

	msgh_size += _WALIGN_(InP->tokenKeyCnt);
	InP = &Mess->In;
	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6003;

	__BeforeSendSimple(6003, "UNDDisplayCustomFromBundle_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, msgh_size);
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6003, "UNDDisplayCustomFromBundle_rpc")
		{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return msg_result; }
	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

/* SimpleRoutine UNDDisplayCustomFromDictionary_rpc */
mig_external kern_return_t UNDDisplayCustomFromDictionary_rpc
(
	UNDServerRef server,
	mach_port_t reply,
	xmlData_t data,
	mach_msg_type_number_t dataCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t reply;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
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

#ifdef	__MIG_check__Reply__UNDDisplayCustomFromDictionary_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDDisplayCustomFromDictionary_rpc_t__defined */

	__DeclareSendSimple(6004, "UNDDisplayCustomFromDictionary_rpc")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t replyTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 2;
#if	UseStaticTemplates
	InP->reply = replyTemplate;
	InP->reply.name = reply;
#else	/* UseStaticTemplates */
	InP->reply.name = reply;
	InP->reply.disposition = 19;
	InP->reply.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->data = dataTemplate;
	InP->data.address = (void *)(data);
	InP->data.size = dataCnt;
#else	/* UseStaticTemplates */
	InP->data.address = (void *)(data);
	InP->data.size = dataCnt;
	InP->data.deallocate =  FALSE;
	InP->data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->dataCnt = dataCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6004;

	__BeforeSendSimple(6004, "UNDDisplayCustomFromDictionary_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6004, "UNDDisplayCustomFromDictionary_rpc")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine UNDCancelNotification_rpc */
mig_external kern_return_t UNDCancelNotification_rpc
(
	UNDServerRef server,
	int userLandNotificationKey
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int userLandNotificationKey;
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

#ifdef	__MIG_check__Reply__UNDCancelNotification_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDCancelNotification_rpc_t__defined */

	__DeclareSendSimple(6005, "UNDCancelNotification_rpc")

	InP->NDR = NDR_record;

	InP->userLandNotificationKey = userLandNotificationKey;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6005;

	__BeforeSendSimple(6005, "UNDCancelNotification_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6005, "UNDCancelNotification_rpc")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine UNDDisplayNoticeSimple_rpc */
mig_external kern_return_t UNDDisplayNoticeSimple_rpc
(
	UNDServerRef server,
	int rpctimeout,
	unsigned flags,
	UNDLabel iconPath,
	UNDLabel soundPath,
	UNDLabel localizationPath,
	UNDLabel header,
	UNDMessage message,
	UNDLabel defaultButtonTitle
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int rpctimeout;
		unsigned flags;
		mach_msg_type_number_t iconPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t iconPathCnt;
		char iconPath[128];
		mach_msg_type_number_t soundPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t soundPathCnt;
		char soundPath[128];
		mach_msg_type_number_t localizationPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t localizationPathCnt;
		char localizationPath[128];
		mach_msg_type_number_t headerOffset; /* MiG doesn't use it */
		mach_msg_type_number_t headerCnt;
		char header[128];
		mach_msg_type_number_t messageOffset; /* MiG doesn't use it */
		mach_msg_type_number_t messageCnt;
		char message[1024];
		mach_msg_type_number_t defaultButtonTitleOffset; /* MiG doesn't use it */
		mach_msg_type_number_t defaultButtonTitleCnt;
		char defaultButtonTitle[128];
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

	union UNDDisplayNoticeSimple_rpcMessU {
		Request In;
	} *Mess = (union UNDDisplayNoticeSimple_rpcMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__UNDDisplayNoticeSimple_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDDisplayNoticeSimple_rpc_t__defined */

	__DeclareSendSimple(6006, "UNDDisplayNoticeSimple_rpc")

	InP->NDR = NDR_record;

	InP->rpctimeout = rpctimeout;

	InP->flags = flags;

	InP->iconPathCnt = mig_strncpy(InP->iconPath, iconPath, 128);

	msgh_size_delta = _WALIGN_(InP->iconPathCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 1664) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->soundPathCnt = mig_strncpy(InP->soundPath, soundPath, 128);

	msgh_size_delta = _WALIGN_(InP->soundPathCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->localizationPathCnt = mig_strncpy(InP->localizationPath, localizationPath, 128);

	msgh_size_delta = _WALIGN_(InP->localizationPathCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->headerCnt = mig_strncpy(InP->header, header, 128);

	msgh_size_delta = _WALIGN_(InP->headerCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->messageCnt = mig_strncpy(InP->message, message, 1024);

	msgh_size_delta = _WALIGN_(InP->messageCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->defaultButtonTitleCnt = mig_strncpy(InP->defaultButtonTitle, defaultButtonTitle, 128);

	msgh_size += _WALIGN_(InP->defaultButtonTitleCnt);
	InP = &Mess->In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 6006;

	__BeforeSendSimple(6006, "UNDDisplayNoticeSimple_rpc")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, msgh_size);
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, msgh_size, 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(6006, "UNDDisplayNoticeSimple_rpc")
		{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return msg_result; }
	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__UNDRequest_subsystem__
#if !defined(__MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined)
#define __MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined
#ifndef __NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__UNDRequest__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode(a, f) \
	__NDR_convert__int_rep__UNDRequest__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#if	defined(__NDR_convert__int_rep__UNDRequest__int__defined)
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__int_rep__UNDRequest__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__UNDRequest__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__int_rep__UNDRequest__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined */



#ifndef __NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#if	defined(__NDR_convert__char_rep__UNDRequest__int__defined)
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__char_rep__UNDRequest__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__UNDRequest__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__char_rep__UNDRequest__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined */



#ifndef __NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#if	defined(__NDR_convert__float_rep__UNDRequest__int__defined)
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__float_rep__UNDRequest__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__UNDRequest__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__float_rep__UNDRequest__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined
#define	__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined */



mig_internal kern_return_t __MIG_check__Reply__UNDDisplayAlertSimple_rpc_t(__Reply__UNDDisplayAlertSimple_rpc_t *Out0P)
{

	typedef __Reply__UNDDisplayAlertSimple_rpc_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 6107) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	defined(__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined)
		__NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(&Out0P->response, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined)
		__NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(&Out0P->response, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined)
		__NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response(&Out0P->response, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__UNDDisplayAlertSimple_rpc_t__response__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined) */
#endif /* __MIG_check__Reply__UNDRequest_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine UNDDisplayAlertSimple_rpc */
mig_external kern_return_t UNDDisplayAlertSimple_rpc
(
	UNDServerRef server,
	int rpctimeout,
	unsigned flags,
	UNDLabel iconPath,
	UNDLabel soundPath,
	UNDLabel localizationPath,
	UNDLabel header,
	UNDMessage message,
	UNDLabel defaultButtonTitle,
	UNDLabel alternateButtonTitle,
	UNDLabel otherButtonTitle,
	int *response
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int rpctimeout;
		unsigned flags;
		mach_msg_type_number_t iconPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t iconPathCnt;
		char iconPath[128];
		mach_msg_type_number_t soundPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t soundPathCnt;
		char soundPath[128];
		mach_msg_type_number_t localizationPathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t localizationPathCnt;
		char localizationPath[128];
		mach_msg_type_number_t headerOffset; /* MiG doesn't use it */
		mach_msg_type_number_t headerCnt;
		char header[128];
		mach_msg_type_number_t messageOffset; /* MiG doesn't use it */
		mach_msg_type_number_t messageCnt;
		char message[1024];
		mach_msg_type_number_t defaultButtonTitleOffset; /* MiG doesn't use it */
		mach_msg_type_number_t defaultButtonTitleCnt;
		char defaultButtonTitle[128];
		mach_msg_type_number_t alternateButtonTitleOffset; /* MiG doesn't use it */
		mach_msg_type_number_t alternateButtonTitleCnt;
		char alternateButtonTitle[128];
		mach_msg_type_number_t otherButtonTitleOffset; /* MiG doesn't use it */
		mach_msg_type_number_t otherButtonTitleCnt;
		char otherButtonTitle[128];
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int response;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int response;
	} __Reply;
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

	union UNDDisplayAlertSimple_rpcMessU {
		Request In;
		Reply Out;
	} *Mess = (union UNDDisplayAlertSimple_rpcMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;
	Reply *Out0P = &Mess->Out;

	mach_msg_return_t msg_result;
	unsigned int msgh_size;
	unsigned int msgh_size_delta;


#ifdef	__MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined */

	__DeclareSendRpc(6007, "UNDDisplayAlertSimple_rpc")

	InP->NDR = NDR_record;

	InP->rpctimeout = rpctimeout;

	InP->flags = flags;

	InP->iconPathCnt = mig_strncpy(InP->iconPath, iconPath, 128);

	msgh_size_delta = _WALIGN_(InP->iconPathCnt);
	msgh_size = (mach_msg_size_t)(sizeof(Request) - 1920) + msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->soundPathCnt = mig_strncpy(InP->soundPath, soundPath, 128);

	msgh_size_delta = _WALIGN_(InP->soundPathCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->localizationPathCnt = mig_strncpy(InP->localizationPath, localizationPath, 128);

	msgh_size_delta = _WALIGN_(InP->localizationPathCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->headerCnt = mig_strncpy(InP->header, header, 128);

	msgh_size_delta = _WALIGN_(InP->headerCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->messageCnt = mig_strncpy(InP->message, message, 1024);

	msgh_size_delta = _WALIGN_(InP->messageCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 1024);

	InP->defaultButtonTitleCnt = mig_strncpy(InP->defaultButtonTitle, defaultButtonTitle, 128);

	msgh_size_delta = _WALIGN_(InP->defaultButtonTitleCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->alternateButtonTitleCnt = mig_strncpy(InP->alternateButtonTitle, alternateButtonTitle, 128);

	msgh_size_delta = _WALIGN_(InP->alternateButtonTitleCnt);
	msgh_size += msgh_size_delta;
	InP = (Request *) ((pointer_t) InP + msgh_size_delta - 128);

	InP->otherButtonTitleCnt = mig_strncpy(InP->otherButtonTitle, otherButtonTitle, 128);

	msgh_size += _WALIGN_(InP->otherButtonTitleCnt);
	InP = &Mess->In;
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 6007;

	__BeforeSendRpc(6007, "UNDDisplayAlertSimple_rpc")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, msgh_size, (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(6007, "UNDDisplayAlertSimple_rpc")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return msg_result; }
	}


#if	defined(__MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined)
	check_result = __MIG_check__Reply__UNDDisplayAlertSimple_rpc_t((__Reply__UNDDisplayAlertSimple_rpc_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return check_result; }
#endif	/* defined(__MIG_check__Reply__UNDDisplayAlertSimple_rpc_t__defined) */

	*response = Out0P->response;

	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}
