/*
 * IDENTIFICATION:
 * stub generated Thu Jan 23 03:08:24 2014
 * with a MiG generated Fri Apr 20 02:06:14 PDT 2007 by root@b42.apple.com
 * OPTIONS: 
 */
#define	__MIG_check__Reply___dyld_debug_subsystem__ 1
#define	__NDR_convert__Reply___dyld_debug_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "_dyld_debug.h"


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
#if __MIG_check__Reply___dyld_debug_subsystem__
#if !defined(__MIG_check__Reply___dyld_debug_defining_module_t__defined)
#define __MIG_check__Reply___dyld_debug_defining_module_t__defined
#ifndef __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode(a, f) \
	__NDR_convert__int_rep___dyld_debug__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__module_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__int_rep___dyld_debug__module_t((module_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__module_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__int_rep__module_t((module_t *)(a), f)
#elif	defined(__NDR_convert__int_rep___dyld_debug__long__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 3, __NDR_convert__int_rep___dyld_debug__long)
#elif	defined(__NDR_convert__int_rep__long__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 3, __NDR_convert__int_rep__long)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval(a, f) \
	__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval(a, f) \
	__NDR_convert__int_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__module_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__char_rep___dyld_debug__module_t((module_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__module_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__char_rep__module_t((module_t *)(a), f)
#elif	defined(__NDR_convert__char_rep___dyld_debug__long__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 3, __NDR_convert__char_rep___dyld_debug__long)
#elif	defined(__NDR_convert__char_rep__long__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 3, __NDR_convert__char_rep__long)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined */


#ifndef __NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval(a, f) \
	__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval(a, f) \
	__NDR_convert__char_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__module_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__float_rep___dyld_debug__module_t((module_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__module_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__float_rep__module_t((module_t *)(a), f)
#elif	defined(__NDR_convert__float_rep___dyld_debug__long__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 3, __NDR_convert__float_rep___dyld_debug__long)
#elif	defined(__NDR_convert__float_rep__long__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 3, __NDR_convert__float_rep__long)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined */


#ifndef __NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval(a, f) \
	__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval(a, f) \
	__NDR_convert__float_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined */



mig_internal kern_return_t __MIG_check__Reply___dyld_debug_defining_module_t(__Reply___dyld_debug_defining_module_t *Out0P)
{

	typedef __Reply___dyld_debug_defining_module_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 200) {
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

#if	defined(__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module(&Out0P->module, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__module__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval(&Out0P->retval, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_defining_module_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined) || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module(&Out0P->module, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__module__defined */
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval(&Out0P->retval, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_defining_module_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined) || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module(&Out0P->module, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__module__defined */
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval(&Out0P->retval, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_defining_module_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply___dyld_debug_defining_module_t__defined) */
#endif /* __MIG_check__Reply___dyld_debug_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine _dyld_debug_defining_module */
mig_external kern_return_t user_dyld_debug_defining_module
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	string_t name,
	mach_msg_type_number_t nameCnt,
	module_t *module,
	dyld_debug_return_t *retval
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
		mach_msg_ool_descriptor_t name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		mach_msg_type_number_t nameCnt;
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
		module_t module;
		dyld_debug_return_t retval;
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
		module_t module;
		dyld_debug_return_t retval;
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

#ifdef	__MIG_check__Reply___dyld_debug_defining_module_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply___dyld_debug_defining_module_t__defined */

	__DeclareSendRpc(100, "_dyld_debug_defining_module")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t nameTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->name = nameTemplate;
	InP->name.address = (void *)(name);
	InP->name.size = nameCnt;
#else	/* UseStaticTemplates */
	InP->name.address = (void *)(name);
	InP->name.size = nameCnt;
	InP->name.deallocate =  FALSE;
	InP->name.copy = MACH_MSG_VIRTUAL_COPY;
	InP->name.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->inconsistent_data_ok = inconsistent_data_ok;

	InP->nameCnt = nameCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = debug_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 100;

	__BeforeSendRpc(100, "_dyld_debug_defining_module")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_SEND_TIMEOUT|MACH_RCV_TIMEOUT|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, rcv_timeout, MACH_PORT_NULL);
	__AfterSendRpc(100, "_dyld_debug_defining_module")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply___dyld_debug_defining_module_t__defined)
	check_result = __MIG_check__Reply___dyld_debug_defining_module_t((__Reply___dyld_debug_defining_module_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply___dyld_debug_defining_module_t__defined) */

	*module = Out0P->module;

	*retval = Out0P->retval;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply___dyld_debug_subsystem__
#if !defined(__MIG_check__Reply___dyld_debug_is_module_bound_t__defined)
#define __MIG_check__Reply___dyld_debug_is_module_bound_t__defined
#ifndef __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode(a, f) \
	__NDR_convert__int_rep___dyld_debug__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound(a, f) \
	__NDR_convert__int_rep___dyld_debug__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval(a, f) \
	__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval(a, f) \
	__NDR_convert__int_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound(a, f) \
	__NDR_convert__char_rep___dyld_debug__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined */


#ifndef __NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval(a, f) \
	__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval(a, f) \
	__NDR_convert__char_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound(a, f) \
	__NDR_convert__float_rep___dyld_debug__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined */


#ifndef __NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval(a, f) \
	__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval(a, f) \
	__NDR_convert__float_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined */



mig_internal kern_return_t __MIG_check__Reply___dyld_debug_is_module_bound_t(__Reply___dyld_debug_is_module_bound_t *Out0P)
{

	typedef __Reply___dyld_debug_is_module_bound_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 201) {
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

#if	defined(__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound(&Out0P->bound, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__bound__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval(&Out0P->retval, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_is_module_bound_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined) || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound(&Out0P->bound, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__bound__defined */
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval(&Out0P->retval, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_is_module_bound_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined) || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound(&Out0P->bound, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__bound__defined */
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval(&Out0P->retval, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_is_module_bound_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply___dyld_debug_is_module_bound_t__defined) */
#endif /* __MIG_check__Reply___dyld_debug_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine _dyld_debug_is_module_bound */
mig_external kern_return_t user_dyld_debug_is_module_bound
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	module_t module,
	boolean_t *bound,
	dyld_debug_return_t *retval
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		module_t module;
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
		boolean_t bound;
		dyld_debug_return_t retval;
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
		boolean_t bound;
		dyld_debug_return_t retval;
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

#ifdef	__MIG_check__Reply___dyld_debug_is_module_bound_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply___dyld_debug_is_module_bound_t__defined */

	__DeclareSendRpc(101, "_dyld_debug_is_module_bound")

	InP->NDR = NDR_record;

	InP->inconsistent_data_ok = inconsistent_data_ok;

	InP->module = module;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = debug_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 101;

	__BeforeSendRpc(101, "_dyld_debug_is_module_bound")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_SEND_TIMEOUT|MACH_RCV_TIMEOUT|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, rcv_timeout, MACH_PORT_NULL);
	__AfterSendRpc(101, "_dyld_debug_is_module_bound")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply___dyld_debug_is_module_bound_t__defined)
	check_result = __MIG_check__Reply___dyld_debug_is_module_bound_t((__Reply___dyld_debug_is_module_bound_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply___dyld_debug_is_module_bound_t__defined) */

	*bound = Out0P->bound;

	*retval = Out0P->retval;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply___dyld_debug_subsystem__
#if !defined(__MIG_check__Reply___dyld_debug_bind_module_t__defined)
#define __MIG_check__Reply___dyld_debug_bind_module_t__defined
#ifndef __NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode(a, f) \
	__NDR_convert__int_rep___dyld_debug__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval(a, f) \
	__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval(a, f) \
	__NDR_convert__int_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval(a, f) \
	__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval(a, f) \
	__NDR_convert__char_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval(a, f) \
	__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval(a, f) \
	__NDR_convert__float_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined */



mig_internal kern_return_t __MIG_check__Reply___dyld_debug_bind_module_t(__Reply___dyld_debug_bind_module_t *Out0P)
{

	typedef __Reply___dyld_debug_bind_module_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 202) {
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

#if	defined(__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval(&Out0P->retval, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_bind_module_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval(&Out0P->retval, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_bind_module_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval(&Out0P->retval, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_bind_module_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply___dyld_debug_bind_module_t__defined) */
#endif /* __MIG_check__Reply___dyld_debug_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine _dyld_debug_bind_module */
mig_external kern_return_t user_dyld_debug_bind_module
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	module_t module,
	dyld_debug_return_t *retval
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		module_t module;
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
		dyld_debug_return_t retval;
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
		dyld_debug_return_t retval;
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

#ifdef	__MIG_check__Reply___dyld_debug_bind_module_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply___dyld_debug_bind_module_t__defined */

	__DeclareSendRpc(102, "_dyld_debug_bind_module")

	InP->NDR = NDR_record;

	InP->inconsistent_data_ok = inconsistent_data_ok;

	InP->module = module;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = debug_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 102;

	__BeforeSendRpc(102, "_dyld_debug_bind_module")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_SEND_TIMEOUT|MACH_RCV_TIMEOUT|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, rcv_timeout, MACH_PORT_NULL);
	__AfterSendRpc(102, "_dyld_debug_bind_module")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply___dyld_debug_bind_module_t__defined)
	check_result = __MIG_check__Reply___dyld_debug_bind_module_t((__Reply___dyld_debug_bind_module_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply___dyld_debug_bind_module_t__defined) */

	*retval = Out0P->retval;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply___dyld_debug_subsystem__
#if !defined(__MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined)
#define __MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined
#ifndef __NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode(a, f) \
	__NDR_convert__int_rep___dyld_debug__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval(a, f) \
	__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval(a, f) \
	__NDR_convert__int_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval(a, f) \
	__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval(a, f) \
	__NDR_convert__char_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval(a, f) \
	__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval(a, f) \
	__NDR_convert__float_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined */



mig_internal kern_return_t __MIG_check__Reply___dyld_debug_add_event_subscriber_t(__Reply___dyld_debug_add_event_subscriber_t *Out0P)
{

	typedef __Reply___dyld_debug_add_event_subscriber_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 203) {
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

#if	defined(__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval(&Out0P->retval, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval(&Out0P->retval, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval(&Out0P->retval, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_add_event_subscriber_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined) */
#endif /* __MIG_check__Reply___dyld_debug_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine _dyld_debug_add_event_subscriber */
mig_external kern_return_t user_dyld_debug_add_event_subscriber
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	mach_port_t subscriber,
	dyld_debug_return_t *retval
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
		mach_msg_port_descriptor_t subscriber;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
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
		dyld_debug_return_t retval;
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
		dyld_debug_return_t retval;
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

#ifdef	__MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined */

	__DeclareSendRpc(103, "_dyld_debug_add_event_subscriber")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t subscriberTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->subscriber = subscriberTemplate;
	InP->subscriber.name = subscriber;
#else	/* UseStaticTemplates */
	InP->subscriber.name = subscriber;
	InP->subscriber.disposition = 20;
	InP->subscriber.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->inconsistent_data_ok = inconsistent_data_ok;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = debug_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 103;

	__BeforeSendRpc(103, "_dyld_debug_add_event_subscriber")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_SEND_TIMEOUT|MACH_RCV_TIMEOUT|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, rcv_timeout, MACH_PORT_NULL);
	__AfterSendRpc(103, "_dyld_debug_add_event_subscriber")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined)
	check_result = __MIG_check__Reply___dyld_debug_add_event_subscriber_t((__Reply___dyld_debug_add_event_subscriber_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply___dyld_debug_add_event_subscriber_t__defined) */

	*retval = Out0P->retval;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply___dyld_debug_subsystem__
#if !defined(__MIG_check__Reply___dyld_debug_module_name_t__defined)
#define __MIG_check__Reply___dyld_debug_module_name_t__defined
#ifndef __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__string_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__int_rep___dyld_debug__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__string_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__int_rep__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep___dyld_debug__char__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep___dyld_debug__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt(a, f) \
	__NDR_convert__int_rep___dyld_debug__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__string_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__int_rep___dyld_debug__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__string_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__int_rep__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep___dyld_debug__char__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep___dyld_debug__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt(a, f) \
	__NDR_convert__int_rep___dyld_debug__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval(a, f) \
	__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval(a, f) \
	__NDR_convert__int_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined */


#ifndef __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__string_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__char_rep___dyld_debug__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__string_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__char_rep__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep___dyld_debug__char__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep___dyld_debug__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__string_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__char_rep___dyld_debug__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__string_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__char_rep__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep___dyld_debug__char__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep___dyld_debug__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval(a, f) \
	__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval(a, f) \
	__NDR_convert__char_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined */


#ifndef __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__string_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__float_rep___dyld_debug__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__string_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__float_rep__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep___dyld_debug__char__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep___dyld_debug__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__string_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__float_rep___dyld_debug__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__string_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__float_rep__string_t((string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep___dyld_debug__char__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep___dyld_debug__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval(a, f) \
	__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval(a, f) \
	__NDR_convert__float_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined */



mig_internal kern_return_t __MIG_check__Reply___dyld_debug_module_name_t(__Reply___dyld_debug_module_name_t *Out0P)
{

	typedef __Reply___dyld_debug_module_name_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 204) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 2 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
#ifdef	__NDR_convert__mig_reply_error_t__defined
		__NDR_convert__mig_reply_error_t((mig_reply_error_t *)Out0P);
#endif	/* __NDR_convert__mig_reply_error_t__defined */
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->image_name.type != MACH_MSG_OOL_DESCRIPTOR)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (Out0P->module_name.type != MACH_MSG_OOL_DESCRIPTOR)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt(&Out0P->image_nameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_nameCnt__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name((string_t)(Out0P->image_name.address), Out0P->NDR.int_rep, Out0P->image_nameCnt);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__image_name__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt(&Out0P->module_nameCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_nameCnt__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name((string_t)(Out0P->module_name.address), Out0P->NDR.int_rep, Out0P->module_nameCnt);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__module_name__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval(&Out0P->retval, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_module_name_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name((string_t)(Out0P->image_name.address), Out0P->NDR.char_rep, Out0P->image_nameCnt);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__image_name__defined */
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name((string_t)(Out0P->module_name.address), Out0P->NDR.char_rep, Out0P->module_nameCnt);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__module_name__defined */
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval(&Out0P->retval, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_module_name_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name((string_t)(Out0P->image_name.address), Out0P->NDR.float_rep, Out0P->image_nameCnt);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__image_name__defined */
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name((string_t)(Out0P->module_name.address), Out0P->NDR.float_rep, Out0P->module_nameCnt);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__module_name__defined */
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval(&Out0P->retval, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_module_name_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply___dyld_debug_module_name_t__defined) */
#endif /* __MIG_check__Reply___dyld_debug_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine _dyld_debug_module_name */
mig_external kern_return_t user_dyld_debug_module_name
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	module_t module,
	string_t *image_name,
	mach_msg_type_number_t *image_nameCnt,
	string_t *module_name,
	mach_msg_type_number_t *module_nameCnt,
	dyld_debug_return_t *retval
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		module_t module;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t image_name;
		mach_msg_ool_descriptor_t module_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t image_nameCnt;
		mach_msg_type_number_t module_nameCnt;
		dyld_debug_return_t retval;
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
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t image_name;
		mach_msg_ool_descriptor_t module_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t image_nameCnt;
		mach_msg_type_number_t module_nameCnt;
		dyld_debug_return_t retval;
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

#ifdef	__MIG_check__Reply___dyld_debug_module_name_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply___dyld_debug_module_name_t__defined */

	__DeclareSendRpc(104, "_dyld_debug_module_name")

	InP->NDR = NDR_record;

	InP->inconsistent_data_ok = inconsistent_data_ok;

	InP->module = module;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = debug_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 104;

	__BeforeSendRpc(104, "_dyld_debug_module_name")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_SEND_TIMEOUT|MACH_RCV_TIMEOUT|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, rcv_timeout, MACH_PORT_NULL);
	__AfterSendRpc(104, "_dyld_debug_module_name")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply___dyld_debug_module_name_t__defined)
	check_result = __MIG_check__Reply___dyld_debug_module_name_t((__Reply___dyld_debug_module_name_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply___dyld_debug_module_name_t__defined) */

	*image_name = (string_t)(Out0P->image_name.address);
	*image_nameCnt = Out0P->image_nameCnt;

	*module_name = (string_t)(Out0P->module_name.address);
	*module_nameCnt = Out0P->module_nameCnt;

	*retval = Out0P->retval;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply___dyld_debug_subsystem__
#if !defined(__MIG_check__Reply___dyld_debug_monoutput_t__defined)
#define __MIG_check__Reply___dyld_debug_monoutput_t__defined
#ifndef __NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode(a, f) \
	__NDR_convert__int_rep___dyld_debug__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined
#if	defined(__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval(a, f) \
	__NDR_convert__int_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined
#define	__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval(a, f) \
	__NDR_convert__int_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined */



#ifndef __NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined
#if	defined(__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval(a, f) \
	__NDR_convert__char_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined
#define	__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval(a, f) \
	__NDR_convert__char_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined */



#ifndef __NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined
#if	defined(__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval(a, f) \
	__NDR_convert__float_rep___dyld_debug__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__dyld_debug_return_t__defined)
#define	__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined
#define	__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval(a, f) \
	__NDR_convert__float_rep__dyld_debug_return_t((dyld_debug_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined */



mig_internal kern_return_t __MIG_check__Reply___dyld_debug_monoutput_t(__Reply___dyld_debug_monoutput_t *Out0P)
{

	typedef __Reply___dyld_debug_monoutput_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 205) {
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

#if	defined(__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined)
		__NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval(&Out0P->retval, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply___dyld_debug_monoutput_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined)
		__NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval(&Out0P->retval, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply___dyld_debug_monoutput_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined)
		__NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval(&Out0P->retval, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply___dyld_debug_monoutput_t__retval__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply___dyld_debug_monoutput_t__defined) */
#endif /* __MIG_check__Reply___dyld_debug_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine _dyld_debug_monoutput */
mig_external kern_return_t user_dyld_debug_monoutput
(
	mach_port_t debug_port,
	long rcv_timeout,
	dyld_debug_return_t *retval
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
		dyld_debug_return_t retval;
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
		dyld_debug_return_t retval;
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

#ifdef	__MIG_check__Reply___dyld_debug_monoutput_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply___dyld_debug_monoutput_t__defined */

	__DeclareSendRpc(105, "_dyld_debug_monoutput")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = debug_port;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 105;

	__BeforeSendRpc(105, "_dyld_debug_monoutput")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_SEND_TIMEOUT|MACH_RCV_TIMEOUT|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, rcv_timeout, MACH_PORT_NULL);
	__AfterSendRpc(105, "_dyld_debug_monoutput")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply___dyld_debug_monoutput_t__defined)
	check_result = __MIG_check__Reply___dyld_debug_monoutput_t((__Reply___dyld_debug_monoutput_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply___dyld_debug_monoutput_t__defined) */

	*retval = Out0P->retval;

	return KERN_SUCCESS;
    }
}
