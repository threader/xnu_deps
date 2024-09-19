/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 08:11:32 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelServer
 */

/* Module UNDReply */

#define	__MIG_check__Request__UNDReply_subsystem__ 1
#define	__NDR_convert__Request__UNDReply_subsystem__ 1

#include "UNDReplyServer.h"

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

#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#if	__MigKernelSpecificCode
#define msgh_request_port	msgh_remote_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_REMOTE(bits)
#define msgh_reply_port		msgh_local_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_LOCAL(bits)
#else
#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)
#endif /* __MigKernelSpecificCode */

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _XUNDAlertCompletedWithResult_rpc
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _XUNDNotificationCreated_rpc
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__UNDReply_subsystem__
#if !defined(__MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined)
#define __MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined
#ifndef __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#if	defined(__NDR_convert__int_rep__UNDReply__int__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__int_rep__UNDReply__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__UNDReply__int32_t__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__int_rep__UNDReply__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined */

#ifndef __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#if	defined(__NDR_convert__int_rep__UNDReply__xmlData_t__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data(a, f, c) \
	__NDR_convert__int_rep__UNDReply__xmlData_t((xmlData_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__xmlData_t__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data(a, f, c) \
	__NDR_convert__int_rep__xmlData_t((xmlData_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined */

#ifndef __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined
#if	defined(__NDR_convert__int_rep__UNDReply__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt(a, f) \
	__NDR_convert__int_rep__UNDReply__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined
#define	__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined */

#ifndef __NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#if	defined(__NDR_convert__char_rep__UNDReply__int__defined)
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__char_rep__UNDReply__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__UNDReply__int32_t__defined)
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__char_rep__UNDReply__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined */

#ifndef __NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#if	defined(__NDR_convert__char_rep__UNDReply__xmlData_t__defined)
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data(a, f, c) \
	__NDR_convert__char_rep__UNDReply__xmlData_t((xmlData_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__xmlData_t__defined)
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#define	__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data(a, f, c) \
	__NDR_convert__char_rep__xmlData_t((xmlData_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined */

#ifndef __NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#if	defined(__NDR_convert__float_rep__UNDReply__int__defined)
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__float_rep__UNDReply__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__UNDReply__int32_t__defined)
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__float_rep__UNDReply__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined */

#ifndef __NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#if	defined(__NDR_convert__float_rep__UNDReply__xmlData_t__defined)
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data(a, f, c) \
	__NDR_convert__float_rep__UNDReply__xmlData_t((xmlData_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__xmlData_t__defined)
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined
#define	__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data(a, f, c) \
	__NDR_convert__float_rep__xmlData_t((xmlData_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined */


mig_internal kern_return_t __MIG_check__Request__UNDAlertCompletedWithResult_rpc_t(__Request__UNDAlertCompletedWithResult_rpc_t *In0P)
{

	typedef __Request__UNDAlertCompletedWithResult_rpc_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->data.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined) || \
	defined(__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined) || \
	defined(__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined)
		__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(&In0P->result, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined */
#if defined(__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined)
		__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt(&In0P->dataCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__dataCnt__defined */
#if defined(__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined)
		__NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data((xmlData_t)(In0P->data.address), In0P->NDR.int_rep, In0P->dataCnt);
#endif	/* __NDR_convert__int_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined) || \
	defined(__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined)
		__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(&In0P->result, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined */
#if defined(__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined)
		__NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data((xmlData_t)(In0P->data.address), In0P->NDR.char_rep, In0P->dataCnt);
#endif	/* __NDR_convert__char_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined) || \
	defined(__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined)
		__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result(&In0P->result, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__result__defined */
#if defined(__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined)
		__NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data((xmlData_t)(In0P->data.address), In0P->NDR.float_rep, In0P->dataCnt);
#endif	/* __NDR_convert__float_rep__Request__UNDAlertCompletedWithResult_rpc_t__data__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined) */
#endif /* __MIG_check__Request__UNDReply_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* SimpleRoutine UNDAlertCompletedWithResult_rpc */
mig_internal novalue _XUNDAlertCompletedWithResult_rpc
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int result;
		mach_msg_type_number_t dataCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__UNDAlertCompletedWithResult_rpc_t __Request;
	typedef __Reply__UNDAlertCompletedWithResult_rpc_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvSimple(6200, "UNDAlertCompletedWithResult_rpc")
	__BeforeRcvSimple(6200, "UNDAlertCompletedWithResult_rpc")

#if	defined(__MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined)
	check_result = __MIG_check__Request__UNDAlertCompletedWithResult_rpc_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__UNDAlertCompletedWithResult_rpc_t__defined) */

	OutP->RetCode = UNDAlertCompletedWithResult_rpc(convert_port_to_UNDReply(In0P->Head.msgh_request_port), In0P->result, (xmlData_t)(In0P->data.address), In0P->dataCnt);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	__AfterRcvSimple(6200, "UNDAlertCompletedWithResult_rpc")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__UNDReply_subsystem__
#if !defined(__MIG_check__Request__UNDNotificationCreated_rpc_t__defined)
#define __MIG_check__Request__UNDNotificationCreated_rpc_t__defined
#ifndef __NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#if	defined(__NDR_convert__int_rep__UNDReply__int__defined)
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__int_rep__UNDReply__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__UNDReply__int32_t__defined)
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__int_rep__UNDReply__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined */

#ifndef __NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#if	defined(__NDR_convert__char_rep__UNDReply__int__defined)
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__char_rep__UNDReply__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__UNDReply__int32_t__defined)
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__char_rep__UNDReply__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined */

#ifndef __NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#if	defined(__NDR_convert__float_rep__UNDReply__int__defined)
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__float_rep__UNDReply__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__UNDReply__int32_t__defined)
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__float_rep__UNDReply__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined
#define	__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined */


mig_internal kern_return_t __MIG_check__Request__UNDNotificationCreated_rpc_t(__Request__UNDNotificationCreated_rpc_t *In0P)
{

	typedef __Request__UNDNotificationCreated_rpc_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined)
		__NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(&In0P->userLandNotificationKey, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined)
		__NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(&In0P->userLandNotificationKey, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined)
		__NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey(&In0P->userLandNotificationKey, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__UNDNotificationCreated_rpc_t__userLandNotificationKey__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__UNDNotificationCreated_rpc_t__defined) */
#endif /* __MIG_check__Request__UNDReply_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* SimpleRoutine UNDNotificationCreated_rpc */
mig_internal novalue _XUNDNotificationCreated_rpc
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int userLandNotificationKey;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__UNDNotificationCreated_rpc_t __Request;
	typedef __Reply__UNDNotificationCreated_rpc_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__UNDNotificationCreated_rpc_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__UNDNotificationCreated_rpc_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvSimple(6201, "UNDNotificationCreated_rpc")
	__BeforeRcvSimple(6201, "UNDNotificationCreated_rpc")

#if	defined(__MIG_check__Request__UNDNotificationCreated_rpc_t__defined)
	check_result = __MIG_check__Request__UNDNotificationCreated_rpc_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__UNDNotificationCreated_rpc_t__defined) */

	OutP->RetCode = UNDNotificationCreated_rpc(convert_port_to_UNDReply(In0P->Head.msgh_request_port), In0P->userLandNotificationKey);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	__AfterRcvSimple(6201, "UNDNotificationCreated_rpc")
}



/* Description of this subsystem, for use in direct RPC */
const struct UNDReply_subsystem UNDReply_subsystem = {
	UNDReply_server_routine,
	6200,
	6202,
	(mach_msg_size_t)sizeof(union __ReplyUnion__UNDReply_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _XUNDAlertCompletedWithResult_rpc, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__UNDAlertCompletedWithResult_rpc_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _XUNDNotificationCreated_rpc, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__UNDNotificationCreated_rpc_t)},
	}
};

mig_external boolean_t UNDReply_server
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	register mig_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = (mach_msg_size_t)sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;

	if ((InHeadP->msgh_id > 6201) || (InHeadP->msgh_id < 6200) ||
	    ((routine = UNDReply_subsystem.routine[InHeadP->msgh_id - 6200].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t UNDReply_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 6200;

	if ((msgh_id > 1) || (msgh_id < 0))
		return 0;

	return UNDReply_subsystem.routine[msgh_id].stub_routine;
}
