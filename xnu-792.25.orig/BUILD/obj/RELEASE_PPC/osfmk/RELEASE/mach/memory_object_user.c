/*
 * IDENTIFICATION:
 * stub generated Sun Jan 26 13:37:02 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__memory_object_subsystem__ 1
#define	__NDR_convert__Reply__memory_object_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "memory_object.h"


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



#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_init_t__defined)
#define __MIG_check__Reply__memory_object_init_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_init_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_init_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_init_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_init_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_init_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_init_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_init_t(__Reply__memory_object_init_t *Out0P)
{

	typedef __Reply__memory_object_init_t __Reply;
	if (Out0P->Head.msgh_id != 2300) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_init_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_init_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_init_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_init_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_init */
mig_external kern_return_t memory_object_init
(
	memory_object_t memory_object,
	memory_object_control_t memory_control,
	memory_object_cluster_size_t memory_object_page_size
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
		mach_msg_port_descriptor_t memory_control;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		memory_object_cluster_size_t memory_object_page_size;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_init_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_init_t__defined */

	__DeclareSendRpc(2200, "memory_object_init")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t memory_controlTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->memory_control = memory_controlTemplate;
	InP->memory_control.name = memory_control;
#else	/* UseStaticTemplates */
	InP->memory_control.name = memory_control;
	InP->memory_control.disposition = 19;
	InP->memory_control.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->memory_object_page_size = memory_object_page_size;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2200;

	__BeforeSendRpc(2200, "memory_object_init")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2200, "memory_object_init")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_init_t__defined)
	check_result = __MIG_check__Reply__memory_object_init_t((__Reply__memory_object_init_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_init_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_terminate_t__defined)
#define __MIG_check__Reply__memory_object_terminate_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_terminate_t(__Reply__memory_object_terminate_t *Out0P)
{

	typedef __Reply__memory_object_terminate_t __Reply;
	if (Out0P->Head.msgh_id != 2301) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_terminate_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_terminate_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_terminate */
mig_external kern_return_t memory_object_terminate
(
	memory_object_t memory_object
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

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_terminate_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_terminate_t__defined */

	__DeclareSendRpc(2201, "memory_object_terminate")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2201;

	__BeforeSendRpc(2201, "memory_object_terminate")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2201, "memory_object_terminate")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_terminate_t__defined)
	check_result = __MIG_check__Reply__memory_object_terminate_t((__Reply__memory_object_terminate_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_terminate_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_data_request_t__defined)
#define __MIG_check__Reply__memory_object_data_request_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_data_request_t(__Reply__memory_object_data_request_t *Out0P)
{

	typedef __Reply__memory_object_data_request_t __Reply;
	if (Out0P->Head.msgh_id != 2302) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_data_request_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_data_request_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_data_request */
mig_external kern_return_t memory_object_data_request
(
	memory_object_t memory_object,
	memory_object_offset_t offset,
	memory_object_cluster_size_t length,
	vm_prot_t desired_access
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_offset_t offset;
		memory_object_cluster_size_t length;
		vm_prot_t desired_access;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_data_request_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_data_request_t__defined */

	__DeclareSendRpc(2202, "memory_object_data_request")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->length = length;

	InP->desired_access = desired_access;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2202;

	__BeforeSendRpc(2202, "memory_object_data_request")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2202, "memory_object_data_request")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_data_request_t__defined)
	check_result = __MIG_check__Reply__memory_object_data_request_t((__Reply__memory_object_data_request_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_data_request_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_data_return_t__defined)
#define __MIG_check__Reply__memory_object_data_return_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined
#if	defined(__NDR_convert__int_rep__memory_object__memory_object_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__int_rep__memory_object__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__int_rep__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__int_rep__memory_object__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined
#if	defined(__NDR_convert__int_rep__memory_object__int__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__int_rep__memory_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__int_rep__memory_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined */



#ifndef __NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined
#if	defined(__NDR_convert__char_rep__memory_object__memory_object_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__char_rep__memory_object__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__char_rep__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__char_rep__memory_object__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined */


#ifndef __NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined
#if	defined(__NDR_convert__char_rep__memory_object__int__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__char_rep__memory_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__char_rep__memory_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined */



#ifndef __NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined
#if	defined(__NDR_convert__float_rep__memory_object__memory_object_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__float_rep__memory_object__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__float_rep__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__float_rep__memory_object__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined */


#ifndef __NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined
#if	defined(__NDR_convert__float_rep__memory_object__int__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__float_rep__memory_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__float_rep__memory_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined
#define	__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined */



mig_internal kern_return_t __MIG_check__Reply__memory_object_data_return_t(__Reply__memory_object_data_return_t *Out0P)
{

	typedef __Reply__memory_object_data_return_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2303) {
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

#if	defined(__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_return_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined)
		__NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset(&Out0P->resid_offset, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_return_t__resid_offset__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined)
		__NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error(&Out0P->io_error, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_return_t__io_error__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined) || \
	defined(__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined)
		__NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset(&Out0P->resid_offset, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_data_return_t__resid_offset__defined */
#if defined(__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined)
		__NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error(&Out0P->io_error, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_data_return_t__io_error__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined) || \
	defined(__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined)
		__NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset(&Out0P->resid_offset, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_data_return_t__resid_offset__defined */
#if defined(__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined)
		__NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error(&Out0P->io_error, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_data_return_t__io_error__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_data_return_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_data_return */
mig_external kern_return_t memory_object_data_return
(
	memory_object_t memory_object,
	memory_object_offset_t offset,
	memory_object_cluster_size_t size,
	memory_object_offset_t *resid_offset,
	int *io_error,
	boolean_t dirty,
	boolean_t kernel_copy,
	int upl_flags
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_offset_t offset;
		memory_object_cluster_size_t size;
		boolean_t dirty;
		boolean_t kernel_copy;
		int upl_flags;
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
		memory_object_offset_t resid_offset;
		int io_error;
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
		memory_object_offset_t resid_offset;
		int io_error;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_data_return_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_data_return_t__defined */

	__DeclareSendRpc(2203, "memory_object_data_return")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	InP->dirty = dirty;

	InP->kernel_copy = kernel_copy;

	InP->upl_flags = upl_flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2203;

	__BeforeSendRpc(2203, "memory_object_data_return")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2203, "memory_object_data_return")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_data_return_t__defined)
	check_result = __MIG_check__Reply__memory_object_data_return_t((__Reply__memory_object_data_return_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_data_return_t__defined) */

	*resid_offset = Out0P->resid_offset;

	*io_error = Out0P->io_error;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_data_initialize_t__defined)
#define __MIG_check__Reply__memory_object_data_initialize_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_data_initialize_t(__Reply__memory_object_data_initialize_t *Out0P)
{

	typedef __Reply__memory_object_data_initialize_t __Reply;
	if (Out0P->Head.msgh_id != 2304) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_data_initialize_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_data_initialize_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_data_initialize */
mig_external kern_return_t memory_object_data_initialize
(
	memory_object_t memory_object,
	memory_object_offset_t offset,
	memory_object_cluster_size_t size
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_offset_t offset;
		memory_object_cluster_size_t size;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_data_initialize_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_data_initialize_t__defined */

	__DeclareSendRpc(2204, "memory_object_data_initialize")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2204;

	__BeforeSendRpc(2204, "memory_object_data_initialize")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2204, "memory_object_data_initialize")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_data_initialize_t__defined)
	check_result = __MIG_check__Reply__memory_object_data_initialize_t((__Reply__memory_object_data_initialize_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_data_initialize_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_data_unlock_t__defined)
#define __MIG_check__Reply__memory_object_data_unlock_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_data_unlock_t(__Reply__memory_object_data_unlock_t *Out0P)
{

	typedef __Reply__memory_object_data_unlock_t __Reply;
	if (Out0P->Head.msgh_id != 2305) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_data_unlock_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_data_unlock_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_data_unlock */
mig_external kern_return_t memory_object_data_unlock
(
	memory_object_t memory_object,
	memory_object_offset_t offset,
	memory_object_cluster_size_t size,
	vm_prot_t desired_access
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_offset_t offset;
		memory_object_cluster_size_t size;
		vm_prot_t desired_access;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_data_unlock_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_data_unlock_t__defined */

	__DeclareSendRpc(2205, "memory_object_data_unlock")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	InP->desired_access = desired_access;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2205;

	__BeforeSendRpc(2205, "memory_object_data_unlock")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2205, "memory_object_data_unlock")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_data_unlock_t__defined)
	check_result = __MIG_check__Reply__memory_object_data_unlock_t((__Reply__memory_object_data_unlock_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_data_unlock_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_synchronize_t__defined)
#define __MIG_check__Reply__memory_object_synchronize_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_synchronize_t(__Reply__memory_object_synchronize_t *Out0P)
{

	typedef __Reply__memory_object_synchronize_t __Reply;
	if (Out0P->Head.msgh_id != 2306) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_synchronize_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_synchronize_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_synchronize */
mig_external kern_return_t memory_object_synchronize
(
	memory_object_t memory_object,
	memory_object_offset_t offset,
	memory_object_cluster_size_t size,
	vm_sync_t sync_flags
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_offset_t offset;
		memory_object_cluster_size_t size;
		vm_sync_t sync_flags;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_synchronize_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_synchronize_t__defined */

	__DeclareSendRpc(2206, "memory_object_synchronize")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	InP->sync_flags = sync_flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2206;

	__BeforeSendRpc(2206, "memory_object_synchronize")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2206, "memory_object_synchronize")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_synchronize_t__defined)
	check_result = __MIG_check__Reply__memory_object_synchronize_t((__Reply__memory_object_synchronize_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_synchronize_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_subsystem__
#if !defined(__MIG_check__Reply__memory_object_unmap_t__defined)
#define __MIG_check__Reply__memory_object_unmap_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_unmap_t(__Reply__memory_object_unmap_t *Out0P)
{

	typedef __Reply__memory_object_unmap_t __Reply;
	if (Out0P->Head.msgh_id != 2307) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (Out0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Reply)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_unmap_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_unmap_t__defined) */
#endif /* __MIG_check__Reply__memory_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_unmap */
mig_external kern_return_t memory_object_unmap
(
	memory_object_t memory_object
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

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
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

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_unmap_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_unmap_t__defined */

	__DeclareSendRpc(2207, "memory_object_unmap")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_object;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2207;

	__BeforeSendRpc(2207, "memory_object_unmap")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2207, "memory_object_unmap")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_unmap_t__defined)
	check_result = __MIG_check__Reply__memory_object_unmap_t((__Reply__memory_object_unmap_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_unmap_t__defined) */

	return KERN_SUCCESS;
    }
}
