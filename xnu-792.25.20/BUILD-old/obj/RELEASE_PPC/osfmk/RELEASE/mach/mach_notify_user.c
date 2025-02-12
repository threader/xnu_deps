/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 08:11:28 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__notify_subsystem__ 1
#define	__NDR_convert__Reply__notify_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "mach_notify.h"


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



/* SimpleRoutine mach_notify_port_deleted */
mig_external kern_return_t mach_notify_port_deleted
(
	mach_port_t notify,
	mach_port_name_t name
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t name;
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

#ifdef	__MIG_check__Reply__mach_notify_port_deleted_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_notify_port_deleted_t__defined */

	__DeclareSendSimple(65, "mach_notify_port_deleted")

	InP->NDR = NDR_record;

	InP->name = name;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(18, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = notify;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 65;

	__BeforeSendSimple(65, "mach_notify_port_deleted")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(65, "mach_notify_port_deleted")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine mach_notify_port_destroyed */
mig_external kern_return_t mach_notify_port_destroyed
(
	mach_port_t notify,
	mach_port_t rights
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
		mach_msg_port_descriptor_t rights;
		/* end of the kernel processed data */
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

#ifdef	__MIG_check__Reply__mach_notify_port_destroyed_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_notify_port_destroyed_t__defined */

	__DeclareSendSimple(69, "mach_notify_port_destroyed")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t rightsTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		16,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->rights = rightsTemplate;
	InP->rights.name = rights;
#else	/* UseStaticTemplates */
	InP->rights.name = rights;
	InP->rights.disposition = 16;
	InP->rights.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(18, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = notify;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 69;

	__BeforeSendSimple(69, "mach_notify_port_destroyed")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(69, "mach_notify_port_destroyed")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine mach_notify_no_senders */
mig_external kern_return_t mach_notify_no_senders
(
	mach_port_t notify,
	mach_port_mscount_t mscount
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_mscount_t mscount;
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

#ifdef	__MIG_check__Reply__mach_notify_no_senders_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_notify_no_senders_t__defined */

	__DeclareSendSimple(70, "mach_notify_no_senders")

	InP->NDR = NDR_record;

	InP->mscount = mscount;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(18, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = notify;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 70;

	__BeforeSendSimple(70, "mach_notify_no_senders")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(70, "mach_notify_no_senders")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine mach_notify_send_once */
mig_external kern_return_t mach_notify_send_once
(
	mach_port_t notify
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
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

#ifdef	__MIG_check__Reply__mach_notify_send_once_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_notify_send_once_t__defined */

	__DeclareSendSimple(71, "mach_notify_send_once")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(18, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = notify;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 71;

	__BeforeSendSimple(71, "mach_notify_send_once")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(71, "mach_notify_send_once")
		return msg_result;
	return KERN_SUCCESS;
    }
}

/* SimpleRoutine mach_notify_dead_name */
mig_external kern_return_t mach_notify_dead_name
(
	mach_port_t notify,
	mach_port_name_t name
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_port_name_t name;
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

#ifdef	__MIG_check__Reply__mach_notify_dead_name_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_notify_dead_name_t__defined */

	__DeclareSendSimple(72, "mach_notify_dead_name")

	InP->NDR = NDR_record;

	InP->name = name;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(18, 0);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = notify;
	InP->Head.msgh_reply_port = MACH_PORT_NULL;
	InP->Head.msgh_id = 72;

	__BeforeSendSimple(72, "mach_notify_dead_name")
#if	__MigKernelSpecificCode
	msg_result = mach_msg_send_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), 0, MACH_PORT_NULL, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendSimple(72, "mach_notify_dead_name")
		return msg_result;
	return KERN_SUCCESS;
    }
}
