/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 08:11:29 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 */

/* Module mach_exc */

#define	__MIG_check__Request__mach_exc_subsystem__ 1
#define	__NDR_convert__Request__mach_exc_subsystem__ 1

#include "mach_exc_server.h"

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

#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _Xmach_exception_raise
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xmach_exception_raise_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xmach_exception_raise_state_identity
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__mach_exc_subsystem__
#if !defined(__MIG_check__Request__mach_exception_raise_t__defined)
#define __MIG_check__Request__mach_exception_raise_t__defined
#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#if	defined(__NDR_convert__int_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_type_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__int_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__int_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exception_data_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__int_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__int_rep__int64_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__int_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt(a, f) \
	__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#if	defined(__NDR_convert__char_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_type_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__char_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined
#if	defined(__NDR_convert__char_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__char_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exception_data_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__char_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__char_rep__int64_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__char_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#if	defined(__NDR_convert__float_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_type_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__float_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined
#if	defined(__NDR_convert__float_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__float_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exception_data_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__float_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__float_rep__int64_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__float_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined */


mig_internal kern_return_t __MIG_check__Request__mach_exception_raise_t(__Request__mach_exception_raise_t *In0P)
{

	typedef __Request__mach_exception_raise_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 2) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 16)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->thread.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->thread.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->task.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->task.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt(&In0P->codeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 16) + ((8 * In0P->codeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_t__codeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_t__exception(&In0P->exception, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_t__exception__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_t__code(&In0P->code, In0P->NDR.int_rep, In0P->codeCnt);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_t__code__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined) || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_t__exception(&In0P->exception, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_t__exception__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_t__code(&In0P->code, In0P->NDR.char_rep, In0P->codeCnt);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_t__code__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined) || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_t__exception(&In0P->exception, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_t__exception__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_t__code(&In0P->code, In0P->NDR.float_rep, In0P->codeCnt);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_t__code__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_exception_raise_t__defined) */
#endif /* __MIG_check__Request__mach_exc_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_exception_raise */
mig_internal novalue _Xmach_exception_raise
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t thread;
		mach_msg_port_descriptor_t task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__mach_exception_raise_t __Request;
	typedef __Reply__mach_exception_raise_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__mach_exception_raise_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_exception_raise_t__defined */

	__DeclareRcvRpc(2405, "mach_exception_raise")
	__BeforeRcvRpc(2405, "mach_exception_raise")

#if	defined(__MIG_check__Request__mach_exception_raise_t__defined)
	check_result = __MIG_check__Request__mach_exception_raise_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_exception_raise_t__defined) */

	OutP->RetCode = catch_mach_exception_raise(In0P->Head.msgh_request_port, In0P->thread.name, In0P->task.name, In0P->exception, In0P->code, In0P->codeCnt);

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2405, "mach_exception_raise")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__mach_exc_subsystem__
#if !defined(__MIG_check__Request__mach_exception_raise_state_t__defined)
#define __MIG_check__Request__mach_exception_raise_state_t__defined
#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#if	defined(__NDR_convert__int_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_type_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__int_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__int_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exception_data_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__int_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__int_rep__int64_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__int_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt(a, f) \
	__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined
#if	defined(__NDR_convert__int_rep__mach_exc__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__int_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__int_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#if	defined(__NDR_convert__int_rep__mach_exc__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__int_rep__mach_exc__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__int_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exc__natural_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__mach_exc__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#if	defined(__NDR_convert__char_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_type_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__char_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined
#if	defined(__NDR_convert__char_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__char_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exception_data_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__char_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__char_rep__int64_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__char_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined
#if	defined(__NDR_convert__char_rep__mach_exc__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__char_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__char_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#if	defined(__NDR_convert__char_rep__mach_exc__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__char_rep__mach_exc__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__char_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exc__natural_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__mach_exc__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#if	defined(__NDR_convert__float_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_type_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__float_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined
#if	defined(__NDR_convert__float_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__float_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exception_data_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__float_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__float_rep__int64_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__float_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined
#if	defined(__NDR_convert__float_rep__mach_exc__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__float_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__float_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#if	defined(__NDR_convert__float_rep__mach_exc__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__float_rep__mach_exc__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__float_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exc__natural_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__mach_exc__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined */


mig_internal kern_return_t __MIG_check__Request__mach_exception_raise_state_t(__Request__mach_exception_raise_state_t *In0P, __Request__mach_exception_raise_state_t **In1PP)
{

	typedef __Request__mach_exception_raise_state_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 592)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt(&In0P->codeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined */
	msgh_size_delta = (8 * In0P->codeCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 592) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 16);

#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt(&In1P->old_stateCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 592) + ((4 * In1P->old_stateCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__codeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception(&In0P->exception, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__exception__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_t__code(&In0P->code, In0P->NDR.int_rep, In0P->codeCnt);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__code__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor(&In1P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state(&In1P->old_state, In0P->NDR.int_rep, In1P->old_stateCnt);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_t__old_state__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined) || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined) || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception(&In0P->exception, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__exception__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_t__code(&In0P->code, In0P->NDR.char_rep, In0P->codeCnt);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__code__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor(&In1P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__flavor__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state(&In1P->old_state, In0P->NDR.char_rep, In1P->old_stateCnt);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_t__old_state__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined) || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined) || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception(&In0P->exception, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__exception__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_t__code(&In0P->code, In0P->NDR.float_rep, In0P->codeCnt);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__code__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor(&In1P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__flavor__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state(&In1P->old_state, In0P->NDR.float_rep, In1P->old_stateCnt);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_t__old_state__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_exception_raise_state_t__defined) */
#endif /* __MIG_check__Request__mach_exc_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_exception_raise_state */
mig_internal novalue _Xmach_exception_raise_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[144];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__mach_exception_raise_state_t __Request;
	typedef __Reply__mach_exception_raise_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__mach_exception_raise_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_exception_raise_state_t__defined */

	__DeclareRcvRpc(2406, "mach_exception_raise_state")
	__BeforeRcvRpc(2406, "mach_exception_raise_state")

#if	defined(__MIG_check__Request__mach_exception_raise_state_t__defined)
	check_result = __MIG_check__Request__mach_exception_raise_state_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_exception_raise_state_t__defined) */

	OutP->new_stateCnt = 144;

	OutP->RetCode = catch_mach_exception_raise_state(In0P->Head.msgh_request_port, In0P->exception, In0P->code, In0P->codeCnt, &In1P->flavor, In1P->old_state, In1P->old_stateCnt, OutP->new_state, &OutP->new_stateCnt);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;


	OutP->flavor = In1P->flavor;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 576) + (((4 * OutP->new_stateCnt)));

	__AfterRcvRpc(2406, "mach_exception_raise_state")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__mach_exc_subsystem__
#if !defined(__MIG_check__Request__mach_exception_raise_state_identity_t__defined)
#define __MIG_check__Request__mach_exception_raise_state_identity_t__defined
#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#if	defined(__NDR_convert__int_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__exception_type_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__int_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__int_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__int_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exception_data_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__int_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__int_rep__int64_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__int_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt(a, f) \
	__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#if	defined(__NDR_convert__int_rep__mach_exc__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__int_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__int_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#if	defined(__NDR_convert__int_rep__mach_exc__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__int_rep__mach_exc__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__thread_state_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__int_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__mach_exc__natural_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__mach_exc__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__mach_exc__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined */

#ifndef __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined
#if	defined(__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_exc__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined
#define	__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#if	defined(__NDR_convert__char_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__exception_type_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__char_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__char_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined
#if	defined(__NDR_convert__char_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__char_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exception_data_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__char_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__char_rep__int64_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__char_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#if	defined(__NDR_convert__char_rep__mach_exc__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__char_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__char_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined */

#ifndef __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#if	defined(__NDR_convert__char_rep__mach_exc__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__char_rep__mach_exc__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__thread_state_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__char_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__mach_exc__natural_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__mach_exc__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__mach_exc__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#if	defined(__NDR_convert__float_rep__mach_exc__exception_type_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__exception_type_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__float_rep__exception_type_t((exception_type_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__float_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined
#if	defined(__NDR_convert__float_rep__mach_exc__mach_exception_data_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__float_rep__mach_exc__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exception_data_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__float_rep__mach_exception_data_t((mach_exception_data_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exc__int64_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__int64_t)
#elif	defined(__NDR_convert__float_rep__int64_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code(a, f, c) \
	__NDR_convert__ARRAY((int64_t *)(a), f, c, __NDR_convert__float_rep__int64_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#if	defined(__NDR_convert__float_rep__mach_exc__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__float_rep__mach_exc__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_exc__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__float_rep__mach_exc__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#if	defined(__NDR_convert__float_rep__mach_exc__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__float_rep__mach_exc__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__thread_state_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__float_rep__thread_state_t((thread_state_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__mach_exc__natural_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__mach_exc__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__mach_exc__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined
#define	__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined */


mig_internal kern_return_t __MIG_check__Request__mach_exception_raise_state_identity_t(__Request__mach_exception_raise_state_identity_t *In0P, __Request__mach_exception_raise_state_identity_t **In1PP)
{

	typedef __Request__mach_exception_raise_state_identity_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 2) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 592)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->thread.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->thread.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->task.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->task.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt(&In0P->codeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined */
	msgh_size_delta = (8 * In0P->codeCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 592) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 16);

#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt(&In1P->old_stateCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 592) + ((4 * In1P->old_stateCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__codeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined) || \
	defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_stateCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception(&In0P->exception, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__exception__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code(&In0P->code, In0P->NDR.int_rep, In0P->codeCnt);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__code__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor(&In1P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined)
		__NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state(&In1P->old_state, In0P->NDR.int_rep, In1P->old_stateCnt);
#endif	/* __NDR_convert__int_rep__Request__mach_exception_raise_state_identity_t__old_state__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined) || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined) || \
	defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception(&In0P->exception, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__exception__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code(&In0P->code, In0P->NDR.char_rep, In0P->codeCnt);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__code__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor(&In1P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__flavor__defined */
#if defined(__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined)
		__NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state(&In1P->old_state, In0P->NDR.char_rep, In1P->old_stateCnt);
#endif	/* __NDR_convert__char_rep__Request__mach_exception_raise_state_identity_t__old_state__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined) || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined) || \
	defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception(&In0P->exception, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__exception__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code(&In0P->code, In0P->NDR.float_rep, In0P->codeCnt);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__code__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor(&In1P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__flavor__defined */
#if defined(__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined)
		__NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state(&In1P->old_state, In0P->NDR.float_rep, In1P->old_stateCnt);
#endif	/* __NDR_convert__float_rep__Request__mach_exception_raise_state_identity_t__old_state__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__mach_exception_raise_state_identity_t__defined) */
#endif /* __MIG_check__Request__mach_exc_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_exception_raise_state_identity */
mig_internal novalue _Xmach_exception_raise_state_identity
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t thread;
		mach_msg_port_descriptor_t task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		exception_type_t exception;
		mach_msg_type_number_t codeCnt;
		int64_t code[2];
		int flavor;
		mach_msg_type_number_t old_stateCnt;
		natural_t old_state[144];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__mach_exception_raise_state_identity_t __Request;
	typedef __Reply__mach_exception_raise_state_identity_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__mach_exception_raise_state_identity_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__mach_exception_raise_state_identity_t__defined */

	__DeclareRcvRpc(2407, "mach_exception_raise_state_identity")
	__BeforeRcvRpc(2407, "mach_exception_raise_state_identity")

#if	defined(__MIG_check__Request__mach_exception_raise_state_identity_t__defined)
	check_result = __MIG_check__Request__mach_exception_raise_state_identity_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__mach_exception_raise_state_identity_t__defined) */

	OutP->new_stateCnt = 144;

	OutP->RetCode = catch_mach_exception_raise_state_identity(In0P->Head.msgh_request_port, In0P->thread.name, In0P->task.name, In0P->exception, In0P->code, In0P->codeCnt, &In1P->flavor, In1P->old_state, In1P->old_stateCnt, OutP->new_state, &OutP->new_stateCnt);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	OutP->NDR = NDR_record;


	OutP->flavor = In1P->flavor;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 576) + (((4 * OutP->new_stateCnt)));

	__AfterRcvRpc(2407, "mach_exception_raise_state_identity")
}



/* Description of this subsystem, for use in direct RPC */
const struct catch_mach_exc_subsystem catch_mach_exc_subsystem = {
	mach_exc_server_routine,
	2405,
	2408,
	(mach_msg_size_t)sizeof(union __ReplyUnion__catch_mach_exc_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xmach_exception_raise, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__mach_exception_raise_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xmach_exception_raise_state, 9, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__mach_exception_raise_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xmach_exception_raise_state_identity, 11, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__mach_exception_raise_state_identity_t)},
	}
};

mig_external boolean_t mach_exc_server
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

	if ((InHeadP->msgh_id > 2407) || (InHeadP->msgh_id < 2405) ||
	    ((routine = catch_mach_exc_subsystem.routine[InHeadP->msgh_id - 2405].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t mach_exc_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 2405;

	if ((msgh_id > 2) || (msgh_id < 0))
		return 0;

	return catch_mach_exc_subsystem.routine[msgh_id].stub_routine;
}
