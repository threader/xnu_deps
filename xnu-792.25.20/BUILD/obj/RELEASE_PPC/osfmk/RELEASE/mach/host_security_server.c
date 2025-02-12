/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 11:20:39 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelServer
 */

/* Module host_security */

#define	__MIG_check__Request__host_security_subsystem__ 1
#define	__NDR_convert__Request__host_security_subsystem__ 1

#include "host_security_server.h"

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


mig_internal novalue _Xhost_security_create_task_token
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xhost_security_set_task_token
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__host_security_subsystem__
#if !defined(__MIG_check__Request__host_security_create_task_token_t__defined)
#define __MIG_check__Request__host_security_create_task_token_t__defined
#ifndef __NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined
#if	defined(__NDR_convert__int_rep__host_security__security_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__int_rep__host_security__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__security_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__int_rep__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__host_security__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__int_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined */

#ifndef __NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined
#if	defined(__NDR_convert__int_rep__host_security__audit_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__int_rep__host_security__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__audit_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__int_rep__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__host_security__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__int_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined */

#ifndef __NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined
#if	defined(__NDR_convert__int_rep__host_security__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt(a, f) \
	__NDR_convert__int_rep__host_security__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined */

#ifndef __NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#if	defined(__NDR_convert__int_rep__host_security__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory(a, f) \
	__NDR_convert__int_rep__host_security__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__boolean_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#define	__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory(a, f) \
	__NDR_convert__int_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined */

#ifndef __NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined
#if	defined(__NDR_convert__char_rep__host_security__security_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__char_rep__host_security__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__security_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__char_rep__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__host_security__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__char_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined */

#ifndef __NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined
#if	defined(__NDR_convert__char_rep__host_security__audit_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__char_rep__host_security__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__audit_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__char_rep__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__host_security__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__char_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined */

#ifndef __NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#if	defined(__NDR_convert__char_rep__host_security__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory(a, f) \
	__NDR_convert__char_rep__host_security__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__boolean_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#define	__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory(a, f) \
	__NDR_convert__char_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined */

#ifndef __NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined
#if	defined(__NDR_convert__float_rep__host_security__security_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__float_rep__host_security__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__security_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__float_rep__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__host_security__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__float_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined */

#ifndef __NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined
#if	defined(__NDR_convert__float_rep__host_security__audit_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__float_rep__host_security__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__audit_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__float_rep__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__host_security__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__float_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined */

#ifndef __NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#if	defined(__NDR_convert__float_rep__host_security__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory(a, f) \
	__NDR_convert__float_rep__host_security__boolean_t((boolean_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__boolean_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined
#define	__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory(a, f) \
	__NDR_convert__float_rep__boolean_t((boolean_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined */


mig_internal kern_return_t __MIG_check__Request__host_security_create_task_token_t(__Request__host_security_create_task_token_t *In0P)
{

	typedef __Request__host_security_create_task_token_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 3) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->parent_task.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->parent_task.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->host.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->host.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->ledgers.type != MACH_MSG_OOL_PORTS_DESCRIPTOR ||
	    In0P->ledgers.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined) || \
	defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined) || \
	defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined)
		__NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token(&In0P->sec_token, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__host_security_create_task_token_t__sec_token__defined */
#if defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined)
		__NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token(&In0P->audit_token, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__host_security_create_task_token_t__audit_token__defined */
#if defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined)
		__NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt(&In0P->ledgersCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__host_security_create_task_token_t__ledgersCnt__defined */
#if defined(__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined)
		__NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory(&In0P->inherit_memory, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__host_security_create_task_token_t__inherit_memory__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined) || \
	defined(__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined)
		__NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token(&In0P->sec_token, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__host_security_create_task_token_t__sec_token__defined */
#if defined(__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined)
		__NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token(&In0P->audit_token, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__host_security_create_task_token_t__audit_token__defined */
#if defined(__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined)
		__NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory(&In0P->inherit_memory, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__host_security_create_task_token_t__inherit_memory__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined) || \
	defined(__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined)
		__NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token(&In0P->sec_token, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__host_security_create_task_token_t__sec_token__defined */
#if defined(__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined)
		__NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token(&In0P->audit_token, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__host_security_create_task_token_t__audit_token__defined */
#if defined(__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined)
		__NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory(&In0P->inherit_memory, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__host_security_create_task_token_t__inherit_memory__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__host_security_create_task_token_t__defined) */
#endif /* __MIG_check__Request__host_security_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine host_security_create_task_token */
mig_internal novalue _Xhost_security_create_task_token
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t parent_task;
		mach_msg_port_descriptor_t host;
		mach_msg_ool_ports_descriptor_t ledgers;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		security_token_t sec_token;
		audit_token_t audit_token;
		mach_msg_type_number_t ledgersCnt;
		boolean_t inherit_memory;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__host_security_create_task_token_t __Request;
	typedef __Reply__host_security_create_task_token_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__host_security_create_task_token_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__host_security_create_task_token_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t child_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t child_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	task_t parent_task;
	task_t child_task;

	__DeclareRcvRpc(600, "host_security_create_task_token")
	__BeforeRcvRpc(600, "host_security_create_task_token")

#if	defined(__MIG_check__Request__host_security_create_task_token_t__defined)
	check_result = __MIG_check__Request__host_security_create_task_token_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__host_security_create_task_token_t__defined) */

#if	UseStaticTemplates
	OutP->child_task = child_taskTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->child_task.disposition = 17;
#else
	OutP->child_task.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->child_task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	parent_task = convert_port_to_task(In0P->parent_task.name);

	RetCode = host_security_create_task_token(convert_port_to_host_security(In0P->Head.msgh_request_port), parent_task, In0P->sec_token, In0P->audit_token, convert_port_to_host(In0P->host.name), (ledger_array_t)(In0P->ledgers.address), In0P->ledgersCnt, In0P->inherit_memory, &child_task);
	task_deallocate(parent_task);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode

	if (IP_VALID((ipc_port_t)In0P->host.name))
		ipc_port_release_send((ipc_port_t)In0P->host.name);

	if (IP_VALID((ipc_port_t)In0P->parent_task.name))
		ipc_port_release_send((ipc_port_t)In0P->parent_task.name);
#endif /* __MigKernelSpecificCode */
	OutP->child_task.name = (mach_port_t)convert_task_to_port(child_task);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(600, "host_security_create_task_token")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__host_security_subsystem__
#if !defined(__MIG_check__Request__host_security_set_task_token_t__defined)
#define __MIG_check__Request__host_security_set_task_token_t__defined
#ifndef __NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined
#if	defined(__NDR_convert__int_rep__host_security__security_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__int_rep__host_security__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__security_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__int_rep__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__host_security__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__int_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined */

#ifndef __NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined
#if	defined(__NDR_convert__int_rep__host_security__audit_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__int_rep__host_security__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__audit_token_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__int_rep__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__host_security__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__int_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined */

#ifndef __NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined
#if	defined(__NDR_convert__char_rep__host_security__security_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__char_rep__host_security__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__security_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__char_rep__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__host_security__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__char_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined */

#ifndef __NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined
#if	defined(__NDR_convert__char_rep__host_security__audit_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__char_rep__host_security__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__audit_token_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__char_rep__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__host_security__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__char_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined */

#ifndef __NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined
#if	defined(__NDR_convert__float_rep__host_security__security_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__float_rep__host_security__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__security_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__float_rep__security_token_t((security_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__host_security__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__float_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 2, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined */

#ifndef __NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined
#if	defined(__NDR_convert__float_rep__host_security__audit_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__float_rep__host_security__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__audit_token_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__float_rep__audit_token_t((audit_token_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__host_security__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__float_rep__host_security__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined
#define	__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 8, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined */


mig_internal kern_return_t __MIG_check__Request__host_security_set_task_token_t(__Request__host_security_set_task_token_t *In0P)
{

	typedef __Request__host_security_set_task_token_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 2) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->target_task.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->target_task.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->host.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->host.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined) || \
	defined(__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined)
		__NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token(&In0P->sec_token, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__host_security_set_task_token_t__sec_token__defined */
#if defined(__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined)
		__NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token(&In0P->audit_token, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__host_security_set_task_token_t__audit_token__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined) || \
	defined(__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined)
		__NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token(&In0P->sec_token, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__host_security_set_task_token_t__sec_token__defined */
#if defined(__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined)
		__NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token(&In0P->audit_token, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__host_security_set_task_token_t__audit_token__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined) || \
	defined(__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined)
		__NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token(&In0P->sec_token, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__host_security_set_task_token_t__sec_token__defined */
#if defined(__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined)
		__NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token(&In0P->audit_token, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__host_security_set_task_token_t__audit_token__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__host_security_set_task_token_t__defined) */
#endif /* __MIG_check__Request__host_security_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine host_security_set_task_token */
mig_internal novalue _Xhost_security_set_task_token
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t target_task;
		mach_msg_port_descriptor_t host;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		security_token_t sec_token;
		audit_token_t audit_token;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__host_security_set_task_token_t __Request;
	typedef __Reply__host_security_set_task_token_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__host_security_set_task_token_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__host_security_set_task_token_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	task_t target_task;

	__DeclareRcvRpc(601, "host_security_set_task_token")
	__BeforeRcvRpc(601, "host_security_set_task_token")

#if	defined(__MIG_check__Request__host_security_set_task_token_t__defined)
	check_result = __MIG_check__Request__host_security_set_task_token_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__host_security_set_task_token_t__defined) */

	target_task = convert_port_to_task(In0P->target_task.name);

	OutP->RetCode = host_security_set_task_token(convert_port_to_host_security(In0P->Head.msgh_request_port), target_task, In0P->sec_token, In0P->audit_token, convert_port_to_host(In0P->host.name));
	task_deallocate(target_task);
#if	__MigKernelSpecificCode
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	if (IP_VALID((ipc_port_t)In0P->host.name))
		ipc_port_release_send((ipc_port_t)In0P->host.name);

	if (IP_VALID((ipc_port_t)In0P->target_task.name))
		ipc_port_release_send((ipc_port_t)In0P->target_task.name);
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(601, "host_security_set_task_token")
}



/* Description of this subsystem, for use in direct RPC */
const struct host_security_subsystem host_security_subsystem = {
	host_security_server_routine,
	600,
	602,
	(mach_msg_size_t)sizeof(union __ReplyUnion__host_security_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xhost_security_create_task_token, 17, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__host_security_create_task_token_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xhost_security_set_task_token, 13, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__host_security_set_task_token_t)},
	}
};

mig_external boolean_t host_security_server
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

	if ((InHeadP->msgh_id > 601) || (InHeadP->msgh_id < 600) ||
	    ((routine = host_security_subsystem.routine[InHeadP->msgh_id - 600].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t host_security_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 600;

	if ((msgh_id > 1) || (msgh_id < 0))
		return 0;

	return host_security_subsystem.routine[msgh_id].stub_routine;
}
