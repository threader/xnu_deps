/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 11:20:38 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelUser
 */
#define	__MIG_check__Reply__memory_object_control_subsystem__ 1
#define	__NDR_convert__Reply__memory_object_control_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "memory_object_control.h"


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
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_get_attributes_t__defined)
#define __MIG_check__Reply__memory_object_get_attributes_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__memory_object_info_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__int_rep__memory_object_control__memory_object_info_t((memory_object_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__memory_object_info_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__int_rep__memory_object_info_t((memory_object_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__memory_object_control__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt(a, f) \
	__NDR_convert__int_rep__memory_object_control__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined
#define	__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__memory_object_info_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__char_rep__memory_object_control__memory_object_info_t((memory_object_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__memory_object_info_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__char_rep__memory_object_info_t((memory_object_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__memory_object_control__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined */




#ifndef __NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__memory_object_info_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__float_rep__memory_object_control__memory_object_info_t((memory_object_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__memory_object_info_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__float_rep__memory_object_info_t((memory_object_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__memory_object_control__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined
#define	__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined */




mig_internal kern_return_t __MIG_check__Reply__memory_object_get_attributes_t(__Reply__memory_object_get_attributes_t *Out0P)
{

	typedef __Reply__memory_object_get_attributes_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2100) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 24)) &&
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

#if defined(__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt(&Out0P->attributesCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 24) + ((4 * Out0P->attributesCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributesCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined)
		__NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes(&Out0P->attributes, Out0P->NDR.int_rep, Out0P->attributesCnt);
#endif /* __NDR_convert__int_rep__Reply__memory_object_get_attributes_t__attributes__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined)
		__NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes(&Out0P->attributes, Out0P->NDR.char_rep, Out0P->attributesCnt);
#endif /* __NDR_convert__char_rep__Reply__memory_object_get_attributes_t__attributes__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined)
		__NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes(&Out0P->attributes, Out0P->NDR.float_rep, Out0P->attributesCnt);
#endif /* __NDR_convert__float_rep__Reply__memory_object_get_attributes_t__attributes__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_get_attributes_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_get_attributes */
mig_external kern_return_t memory_object_get_attributes
(
	memory_object_control_t memory_control,
	memory_object_flavor_t flavor,
	memory_object_info_t attributes,
	mach_msg_type_number_t *attributesCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_flavor_t flavor;
		mach_msg_type_number_t attributesCnt;
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
		mach_msg_type_number_t attributesCnt;
		int attributes[6];
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
		mach_msg_type_number_t attributesCnt;
		int attributes[6];
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

#ifdef	__MIG_check__Reply__memory_object_get_attributes_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_get_attributes_t__defined */

	__DeclareSendRpc(2000, "memory_object_get_attributes")

	InP->NDR = NDR_record;

	InP->flavor = flavor;

	if (*attributesCnt < 6)
		InP->attributesCnt = *attributesCnt;
	else
		InP->attributesCnt = 6;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2000;

	__BeforeSendRpc(2000, "memory_object_get_attributes")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2000, "memory_object_get_attributes")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_get_attributes_t__defined)
	check_result = __MIG_check__Reply__memory_object_get_attributes_t((__Reply__memory_object_get_attributes_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_get_attributes_t__defined) */

	if (Out0P->attributesCnt > *attributesCnt) {
		(void)memcpy((char *) attributes, (const char *) Out0P->attributes, 4 *  *attributesCnt);
		*attributesCnt = Out0P->attributesCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) attributes, (const char *) Out0P->attributes, 4 * Out0P->attributesCnt);

	*attributesCnt = Out0P->attributesCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_change_attributes_t__defined)
#define __MIG_check__Reply__memory_object_change_attributes_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_change_attributes_t(__Reply__memory_object_change_attributes_t *Out0P)
{

	typedef __Reply__memory_object_change_attributes_t __Reply;
	if (Out0P->Head.msgh_id != 2101) {
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

#if defined(__NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_change_attributes_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_change_attributes_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_change_attributes */
mig_external kern_return_t memory_object_change_attributes
(
	memory_object_control_t memory_control,
	memory_object_flavor_t flavor,
	memory_object_info_t attributes,
	mach_msg_type_number_t attributesCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_flavor_t flavor;
		mach_msg_type_number_t attributesCnt;
		int attributes[6];
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
	unsigned int msgh_size;

#ifdef	__MIG_check__Reply__memory_object_change_attributes_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_change_attributes_t__defined */

	__DeclareSendRpc(2001, "memory_object_change_attributes")

	InP->NDR = NDR_record;

	InP->flavor = flavor;

	if (attributesCnt > 6) {
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) InP->attributes, (const char *) attributes, 4 * attributesCnt);

	InP->attributesCnt = attributesCnt;

	msgh_size = (mach_msg_size_t)(sizeof(Request) - 24) + ((4 * attributesCnt));
	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2001;

	__BeforeSendRpc(2001, "memory_object_change_attributes")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, msgh_size, (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, msgh_size, (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2001, "memory_object_change_attributes")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_change_attributes_t__defined)
	check_result = __MIG_check__Reply__memory_object_change_attributes_t((__Reply__memory_object_change_attributes_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_change_attributes_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_synchronize_completed_t__defined)
#define __MIG_check__Reply__memory_object_synchronize_completed_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_synchronize_completed_t(__Reply__memory_object_synchronize_completed_t *Out0P)
{

	typedef __Reply__memory_object_synchronize_completed_t __Reply;
	if (Out0P->Head.msgh_id != 2102) {
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

#if defined(__NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_synchronize_completed_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_synchronize_completed_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_synchronize_completed */
mig_external kern_return_t memory_object_synchronize_completed
(
	memory_object_control_t memory_control,
	memory_object_offset_t offset,
	vm_offset_t length
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
		vm_offset_t length;
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

#ifdef	__MIG_check__Reply__memory_object_synchronize_completed_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_synchronize_completed_t__defined */

	__DeclareSendRpc(2002, "memory_object_synchronize_completed")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->length = length;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2002;

	__BeforeSendRpc(2002, "memory_object_synchronize_completed")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2002, "memory_object_synchronize_completed")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_synchronize_completed_t__defined)
	check_result = __MIG_check__Reply__memory_object_synchronize_completed_t((__Reply__memory_object_synchronize_completed_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_synchronize_completed_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_lock_request_t__defined)
#define __MIG_check__Reply__memory_object_lock_request_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__memory_object_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__int_rep__memory_object_control__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__int_rep__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_control__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__int_rep__memory_object_control__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__int_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__int_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__int_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined */



#ifndef __NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__memory_object_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__char_rep__memory_object_control__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__char_rep__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_control__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__char_rep__memory_object_control__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined */


#ifndef __NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__char_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__char_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__char_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined */



#ifndef __NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__memory_object_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__float_rep__memory_object_control__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__float_rep__memory_object_offset_t((memory_object_offset_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_control__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__float_rep__memory_object_control__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined */


#ifndef __NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__float_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__float_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__float_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined
#define	__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined */



mig_internal kern_return_t __MIG_check__Reply__memory_object_lock_request_t(__Reply__memory_object_lock_request_t *Out0P)
{

	typedef __Reply__memory_object_lock_request_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2103) {
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

#if	defined(__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_lock_request_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined)
		__NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset(&Out0P->resid_offset, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_lock_request_t__resid_offset__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined)
		__NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno(&Out0P->io_errno, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_lock_request_t__io_errno__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined) || \
	defined(__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined)
		__NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset(&Out0P->resid_offset, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_lock_request_t__resid_offset__defined */
#if defined(__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined)
		__NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno(&Out0P->io_errno, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_lock_request_t__io_errno__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined) || \
	defined(__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined)
		__NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset(&Out0P->resid_offset, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_lock_request_t__resid_offset__defined */
#if defined(__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined)
		__NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno(&Out0P->io_errno, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_lock_request_t__io_errno__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_lock_request_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_lock_request */
mig_external kern_return_t memory_object_lock_request
(
	memory_object_control_t memory_control,
	memory_object_offset_t offset,
	memory_object_size_t size,
	memory_object_offset_t *resid_offset,
	integer_t *io_errno,
	memory_object_return_t should_return,
	integer_t flags,
	vm_prot_t lock_value
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
		memory_object_size_t size;
		memory_object_return_t should_return;
		integer_t flags;
		vm_prot_t lock_value;
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
		integer_t io_errno;
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
		integer_t io_errno;
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

#ifdef	__MIG_check__Reply__memory_object_lock_request_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_lock_request_t__defined */

	__DeclareSendRpc(2003, "memory_object_lock_request")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	InP->should_return = should_return;

	InP->flags = flags;

	InP->lock_value = lock_value;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2003;

	__BeforeSendRpc(2003, "memory_object_lock_request")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2003, "memory_object_lock_request")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_lock_request_t__defined)
	check_result = __MIG_check__Reply__memory_object_lock_request_t((__Reply__memory_object_lock_request_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_lock_request_t__defined) */

	*resid_offset = Out0P->resid_offset;

	*io_errno = Out0P->io_errno;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_destroy_t__defined)
#define __MIG_check__Reply__memory_object_destroy_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_destroy_t(__Reply__memory_object_destroy_t *Out0P)
{

	typedef __Reply__memory_object_destroy_t __Reply;
	if (Out0P->Head.msgh_id != 2104) {
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

#if defined(__NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_destroy_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_destroy_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_destroy */
mig_external kern_return_t memory_object_destroy
(
	memory_object_control_t memory_control,
	kern_return_t reason
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t reason;
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

#ifdef	__MIG_check__Reply__memory_object_destroy_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_destroy_t__defined */

	__DeclareSendRpc(2004, "memory_object_destroy")

	InP->NDR = NDR_record;

	InP->reason = reason;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2004;

	__BeforeSendRpc(2004, "memory_object_destroy")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2004, "memory_object_destroy")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_destroy_t__defined)
	check_result = __MIG_check__Reply__memory_object_destroy_t((__Reply__memory_object_destroy_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_destroy_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_upl_request_t__defined)
#define __MIG_check__Reply__memory_object_upl_request_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__upl_page_info_array_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__int_rep__memory_object_control__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__upl_page_info_array_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__int_rep__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__memory_object_control__upl_page_info_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__int_rep__memory_object_control__upl_page_info_t)
#elif	defined(__NDR_convert__int_rep__upl_page_info_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__int_rep__upl_page_info_t)
#elif	defined(__NDR_convert__int_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__int_rep__memory_object_control__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__int_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt(a, f) \
	__NDR_convert__int_rep__memory_object_control__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined
#define	__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__upl_page_info_array_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__char_rep__memory_object_control__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__upl_page_info_array_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__char_rep__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__memory_object_control__upl_page_info_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__char_rep__memory_object_control__upl_page_info_t)
#elif	defined(__NDR_convert__char_rep__upl_page_info_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__char_rep__upl_page_info_t)
#elif	defined(__NDR_convert__char_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__char_rep__memory_object_control__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__char_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined */



#ifndef __NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__upl_page_info_array_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__float_rep__memory_object_control__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__upl_page_info_array_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__float_rep__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__memory_object_control__upl_page_info_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__float_rep__memory_object_control__upl_page_info_t)
#elif	defined(__NDR_convert__float_rep__upl_page_info_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__float_rep__upl_page_info_t)
#elif	defined(__NDR_convert__float_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__float_rep__memory_object_control__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__float_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined */




mig_internal kern_return_t __MIG_check__Reply__memory_object_upl_request_t(__Reply__memory_object_upl_request_t *Out0P)
{

	typedef __Reply__memory_object_upl_request_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2105) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 2048) || msgh_size > (mach_msg_size_t)sizeof(__Reply)) &&
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
	if (Out0P->upl.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->upl.disposition != 17)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt(&Out0P->page_listCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 2048) + ((8 * Out0P->page_listCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_listCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined)
		__NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list(&Out0P->page_list, Out0P->NDR.int_rep, Out0P->page_listCnt);
#endif /* __NDR_convert__int_rep__Reply__memory_object_upl_request_t__page_list__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined)
		__NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list(&Out0P->page_list, Out0P->NDR.char_rep, Out0P->page_listCnt);
#endif /* __NDR_convert__char_rep__Reply__memory_object_upl_request_t__page_list__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined)
		__NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list(&Out0P->page_list, Out0P->NDR.float_rep, Out0P->page_listCnt);
#endif /* __NDR_convert__float_rep__Reply__memory_object_upl_request_t__page_list__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_upl_request_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_upl_request */
mig_external kern_return_t memory_object_upl_request
(
	memory_object_control_t memory_control,
	memory_object_offset_t offset,
	vm_size_t size,
	upl_t *upl,
	upl_page_info_array_t page_list,
	mach_msg_type_number_t *page_listCnt,
	integer_t cntrl_flags
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
		vm_size_t size;
		mach_msg_type_number_t page_listCnt;
		integer_t cntrl_flags;
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
		mach_msg_port_descriptor_t upl;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t page_listCnt;
		upl_page_info_t page_list[256];
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
		mach_msg_port_descriptor_t upl;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t page_listCnt;
		upl_page_info_t page_list[256];
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

	union memory_object_upl_requestMessU {
		Request In;
		Reply Out;
	} *Mess = (union memory_object_upl_requestMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;
	Reply *Out0P = &Mess->Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_upl_request_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_upl_request_t__defined */

	__DeclareSendRpc(2005, "memory_object_upl_request")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	if (*page_listCnt < 256)
		InP->page_listCnt = *page_listCnt;
	else
		InP->page_listCnt = 256;

	InP->cntrl_flags = cntrl_flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2005;

	__BeforeSendRpc(2005, "memory_object_upl_request")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2005, "memory_object_upl_request")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_upl_request_t__defined)
	check_result = __MIG_check__Reply__memory_object_upl_request_t((__Reply__memory_object_upl_request_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_upl_request_t__defined) */

	*upl = Out0P->upl.name;
	if (Out0P->page_listCnt > *page_listCnt) {
		(void)memcpy((char *) page_list, (const char *) Out0P->page_list, 8 *  *page_listCnt);
		*page_listCnt = Out0P->page_listCnt;
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) page_list, (const char *) Out0P->page_list, 8 * Out0P->page_listCnt);

	*page_listCnt = Out0P->page_listCnt;

	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_super_upl_request_t__defined)
#define __MIG_check__Reply__memory_object_super_upl_request_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__upl_page_info_array_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__int_rep__memory_object_control__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__upl_page_info_array_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__int_rep__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__memory_object_control__upl_page_info_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__int_rep__memory_object_control__upl_page_info_t)
#elif	defined(__NDR_convert__int_rep__upl_page_info_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__int_rep__upl_page_info_t)
#elif	defined(__NDR_convert__int_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__int_rep__memory_object_control__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__int_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt(a, f) \
	__NDR_convert__int_rep__memory_object_control__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined
#define	__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__upl_page_info_array_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__char_rep__memory_object_control__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__upl_page_info_array_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__char_rep__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__memory_object_control__upl_page_info_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__char_rep__memory_object_control__upl_page_info_t)
#elif	defined(__NDR_convert__char_rep__upl_page_info_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__char_rep__upl_page_info_t)
#elif	defined(__NDR_convert__char_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__char_rep__memory_object_control__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__char_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined */



#ifndef __NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__upl_page_info_array_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__float_rep__memory_object_control__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__upl_page_info_array_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__float_rep__upl_page_info_array_t((upl_page_info_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__memory_object_control__upl_page_info_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__float_rep__memory_object_control__upl_page_info_t)
#elif	defined(__NDR_convert__float_rep__upl_page_info_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((upl_page_info_t *)(a), f, c, __NDR_convert__float_rep__upl_page_info_t)
#elif	defined(__NDR_convert__float_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__float_rep__memory_object_control__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, 2 * (c), __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__float_rep__memory_object_control__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined
#define	__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2 * (c), __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined */




mig_internal kern_return_t __MIG_check__Reply__memory_object_super_upl_request_t(__Reply__memory_object_super_upl_request_t *Out0P)
{

	typedef __Reply__memory_object_super_upl_request_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 2106) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 2048) || msgh_size > (mach_msg_size_t)sizeof(__Reply)) &&
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
	if (Out0P->upl.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->upl.disposition != 17)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt(&Out0P->page_listCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 2048) + ((8 * Out0P->page_listCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_listCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined)
		__NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list(&Out0P->page_list, Out0P->NDR.int_rep, Out0P->page_listCnt);
#endif /* __NDR_convert__int_rep__Reply__memory_object_super_upl_request_t__page_list__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined)
		__NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list(&Out0P->page_list, Out0P->NDR.char_rep, Out0P->page_listCnt);
#endif /* __NDR_convert__char_rep__Reply__memory_object_super_upl_request_t__page_list__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined)
		__NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list(&Out0P->page_list, Out0P->NDR.float_rep, Out0P->page_listCnt);
#endif /* __NDR_convert__float_rep__Reply__memory_object_super_upl_request_t__page_list__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_super_upl_request_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_super_upl_request */
mig_external kern_return_t memory_object_super_upl_request
(
	memory_object_control_t memory_control,
	memory_object_offset_t offset,
	vm_size_t size,
	vm_size_t super_size,
	upl_t *upl,
	upl_page_info_array_t page_list,
	mach_msg_type_number_t *page_listCnt,
	integer_t cntrl_flags
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
		vm_size_t size;
		vm_size_t super_size;
		mach_msg_type_number_t page_listCnt;
		integer_t cntrl_flags;
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
		mach_msg_port_descriptor_t upl;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t page_listCnt;
		upl_page_info_t page_list[256];
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
		mach_msg_port_descriptor_t upl;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t page_listCnt;
		upl_page_info_t page_list[256];
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

	union memory_object_super_upl_requestMessU {
		Request In;
		Reply Out;
	} *Mess = (union memory_object_super_upl_requestMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;
	Reply *Out0P = &Mess->Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__memory_object_super_upl_request_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_super_upl_request_t__defined */

	__DeclareSendRpc(2006, "memory_object_super_upl_request")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->size = size;

	InP->super_size = super_size;

	if (*page_listCnt < 256)
		InP->page_listCnt = *page_listCnt;
	else
		InP->page_listCnt = 256;

	InP->cntrl_flags = cntrl_flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2006;

	__BeforeSendRpc(2006, "memory_object_super_upl_request")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2006, "memory_object_super_upl_request")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_super_upl_request_t__defined)
	check_result = __MIG_check__Reply__memory_object_super_upl_request_t((__Reply__memory_object_super_upl_request_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_super_upl_request_t__defined) */

	*upl = Out0P->upl.name;
	if (Out0P->page_listCnt > *page_listCnt) {
		(void)memcpy((char *) page_list, (const char *) Out0P->page_list, 8 *  *page_listCnt);
		*page_listCnt = Out0P->page_listCnt;
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) page_list, (const char *) Out0P->page_list, 8 * Out0P->page_listCnt);

	*page_listCnt = Out0P->page_listCnt;

	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_page_op_t__defined)
#define __MIG_check__Reply__memory_object_page_op_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry(a, f) \
	__NDR_convert__int_rep__memory_object_control__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__int_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__int_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__int_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined */



#ifndef __NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry(a, f) \
	__NDR_convert__char_rep__memory_object_control__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined */


#ifndef __NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__char_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__char_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__char_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined */



#ifndef __NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry(a, f) \
	__NDR_convert__float_rep__memory_object_control__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined */


#ifndef __NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__float_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__float_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__float_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined
#define	__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined */



mig_internal kern_return_t __MIG_check__Reply__memory_object_page_op_t(__Reply__memory_object_page_op_t *Out0P)
{

	typedef __Reply__memory_object_page_op_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2107) {
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

#if	defined(__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_page_op_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined)
		__NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry(&Out0P->phys_entry, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_page_op_t__phys_entry__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined)
		__NDR_convert__int_rep__Reply__memory_object_page_op_t__flags(&Out0P->flags, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_page_op_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined) || \
	defined(__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined)
		__NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry(&Out0P->phys_entry, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_page_op_t__phys_entry__defined */
#if defined(__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined)
		__NDR_convert__char_rep__Reply__memory_object_page_op_t__flags(&Out0P->flags, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_page_op_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined) || \
	defined(__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined)
		__NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry(&Out0P->phys_entry, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_page_op_t__phys_entry__defined */
#if defined(__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined)
		__NDR_convert__float_rep__Reply__memory_object_page_op_t__flags(&Out0P->flags, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_page_op_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_page_op_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_page_op */
mig_external kern_return_t memory_object_page_op
(
	memory_object_control_t memory_control,
	memory_object_offset_t offset,
	integer_t ops,
	uint32_t *phys_entry,
	integer_t *flags
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
		integer_t ops;
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
		uint32_t phys_entry;
		integer_t flags;
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
		uint32_t phys_entry;
		integer_t flags;
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

#ifdef	__MIG_check__Reply__memory_object_page_op_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_page_op_t__defined */

	__DeclareSendRpc(2007, "memory_object_page_op")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->ops = ops;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2007;

	__BeforeSendRpc(2007, "memory_object_page_op")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2007, "memory_object_page_op")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_page_op_t__defined)
	check_result = __MIG_check__Reply__memory_object_page_op_t((__Reply__memory_object_page_op_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_page_op_t__defined) */

	*phys_entry = Out0P->phys_entry;

	*flags = Out0P->flags;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_recover_named_t__defined)
#define __MIG_check__Reply__memory_object_recover_named_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_recover_named_t(__Reply__memory_object_recover_named_t *Out0P)
{

	typedef __Reply__memory_object_recover_named_t __Reply;
	if (Out0P->Head.msgh_id != 2108) {
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

#if defined(__NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_recover_named_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_recover_named_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_recover_named */
mig_external kern_return_t memory_object_recover_named
(
	memory_object_control_t memory_control,
	boolean_t wait_on_terminating
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t wait_on_terminating;
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

#ifdef	__MIG_check__Reply__memory_object_recover_named_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_recover_named_t__defined */

	__DeclareSendRpc(2008, "memory_object_recover_named")

	InP->NDR = NDR_record;

	InP->wait_on_terminating = wait_on_terminating;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2008;

	__BeforeSendRpc(2008, "memory_object_recover_named")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2008, "memory_object_recover_named")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_recover_named_t__defined)
	check_result = __MIG_check__Reply__memory_object_recover_named_t((__Reply__memory_object_recover_named_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_recover_named_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_release_name_t__defined)
#define __MIG_check__Reply__memory_object_release_name_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__memory_object_release_name_t(__Reply__memory_object_release_name_t *Out0P)
{

	typedef __Reply__memory_object_release_name_t __Reply;
	if (Out0P->Head.msgh_id != 2109) {
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

#if defined(__NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__memory_object_release_name_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__memory_object_release_name_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_release_name */
mig_external kern_return_t memory_object_release_name
(
	memory_object_control_t memory_control,
	integer_t flags
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		integer_t flags;
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

#ifdef	__MIG_check__Reply__memory_object_release_name_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_release_name_t__defined */

	__DeclareSendRpc(2009, "memory_object_release_name")

	InP->NDR = NDR_record;

	InP->flags = flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2009;

	__BeforeSendRpc(2009, "memory_object_release_name")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2009, "memory_object_release_name")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_release_name_t__defined)
	check_result = __MIG_check__Reply__memory_object_release_name_t((__Reply__memory_object_release_name_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_release_name_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__memory_object_control_subsystem__
#if !defined(__MIG_check__Reply__memory_object_range_op_t__defined)
#define __MIG_check__Reply__memory_object_range_op_t__defined
#ifndef __NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode(a, f) \
	__NDR_convert__int_rep__memory_object_control__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined
#if	defined(__NDR_convert__int_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__int_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__int_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__int_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__int_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined */



#ifndef __NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined
#if	defined(__NDR_convert__char_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__char_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__char_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__char_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__char_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined */



#ifndef __NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined
#if	defined(__NDR_convert__float_rep__memory_object_control__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__float_rep__memory_object_control__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__float_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_control__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__float_rep__memory_object_control__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined
#define	__NDR_convert__float_rep__Reply__memory_object_range_op_t__range(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined */



mig_internal kern_return_t __MIG_check__Reply__memory_object_range_op_t(__Reply__memory_object_range_op_t *Out0P)
{

	typedef __Reply__memory_object_range_op_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 2110) {
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

#if	defined(__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_range_op_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined)
		__NDR_convert__int_rep__Reply__memory_object_range_op_t__range(&Out0P->range, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__memory_object_range_op_t__range__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined)
		__NDR_convert__char_rep__Reply__memory_object_range_op_t__range(&Out0P->range, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__memory_object_range_op_t__range__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined)
		__NDR_convert__float_rep__Reply__memory_object_range_op_t__range(&Out0P->range, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__memory_object_range_op_t__range__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__memory_object_range_op_t__defined) */
#endif /* __MIG_check__Reply__memory_object_control_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine memory_object_range_op */
mig_external kern_return_t memory_object_range_op
(
	memory_object_control_t memory_control,
	memory_object_offset_t offset_beg,
	memory_object_offset_t offset_end,
	integer_t ops,
	integer_t *range
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		memory_object_offset_t offset_beg;
		memory_object_offset_t offset_end;
		integer_t ops;
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
		integer_t range;
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
		integer_t range;
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

#ifdef	__MIG_check__Reply__memory_object_range_op_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__memory_object_range_op_t__defined */

	__DeclareSendRpc(2010, "memory_object_range_op")

	InP->NDR = NDR_record;

	InP->offset_beg = offset_beg;

	InP->offset_end = offset_end;

	InP->ops = ops;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = memory_control;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 2010;

	__BeforeSendRpc(2010, "memory_object_range_op")
#if	(__MigKernelSpecificCode) || (_MIG_KERNELSPECIFIC_CODE_)
	msg_result = mach_msg_rpc_from_kernel(&InP->Head, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply));
#else
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
#endif /* __MigKernelSpecificCode */
	__AfterSendRpc(2010, "memory_object_range_op")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__memory_object_range_op_t__defined)
	check_result = __MIG_check__Reply__memory_object_range_op_t((__Reply__memory_object_range_op_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__memory_object_range_op_t__defined) */

	*range = Out0P->range;

	return KERN_SUCCESS;
    }
}
