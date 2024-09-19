/*
 * IDENTIFICATION:
 * stub generated Thu Jan 23 03:22:00 2014
 * with a MiG generated Fri Apr 20 02:06:14 PDT 2007 by root@b42.apple.com
 * OPTIONS: 
 */

/* Module _dyld_event */

#define	__MIG_check__Request___dyld_event_subsystem__ 1
#define	__NDR_convert__Request___dyld_event_subsystem__ 1

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach-o/dyld_debug.h>
#include "dyld_event_defs.h"

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

/* typedefs for all requests */

#ifndef __Request___dyld_event_subsystem__defined
#define __Request___dyld_event_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		event_t event;
	} __Request___dyld_event_server_callback_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request___dyld_event_subsystem__defined */

/* typedefs for all replies */

#ifndef __Reply___dyld_event_subsystem__defined
#define __Reply___dyld_event_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply___dyld_event_server_callback_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply___dyld_event_subsystem__defined */


/* union of all replies */

#ifndef __ReplyUnion___dyld_event_subsystem__defined
#define __ReplyUnion___dyld_event_subsystem__defined
union __ReplyUnion___dyld_event_subsystem {
	__Reply___dyld_event_server_callback_t Reply__dyld_event_server_callback;
};
#endif /* __RequestUnion___dyld_event_subsystem__defined */
/* Forward Declarations */


mig_internal novalue _X_dyld_event_server_callback
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request___dyld_event_subsystem__
#if !defined(__MIG_check__Request___dyld_event_server_callback_t__defined)
#define __MIG_check__Request___dyld_event_server_callback_t__defined
#ifndef __NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined
#if	defined(__NDR_convert__int_rep___dyld_event__event_t__defined)
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__int_rep___dyld_event__event_t((event_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__event_t__defined)
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__int_rep__event_t((event_t *)(a), f)
#elif	defined(__NDR_convert__int_rep___dyld_event__long__defined)
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 7, __NDR_convert__int_rep___dyld_event__long)
#elif	defined(__NDR_convert__int_rep__long__defined)
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 7, __NDR_convert__int_rep__long)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined */

#ifndef __NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined
#if	defined(__NDR_convert__char_rep___dyld_event__event_t__defined)
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__char_rep___dyld_event__event_t((event_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__event_t__defined)
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__char_rep__event_t((event_t *)(a), f)
#elif	defined(__NDR_convert__char_rep___dyld_event__long__defined)
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 7, __NDR_convert__char_rep___dyld_event__long)
#elif	defined(__NDR_convert__char_rep__long__defined)
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 7, __NDR_convert__char_rep__long)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined */

#ifndef __NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined
#if	defined(__NDR_convert__float_rep___dyld_event__event_t__defined)
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__float_rep___dyld_event__event_t((event_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__event_t__defined)
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__float_rep__event_t((event_t *)(a), f)
#elif	defined(__NDR_convert__float_rep___dyld_event__long__defined)
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 7, __NDR_convert__float_rep___dyld_event__long)
#elif	defined(__NDR_convert__float_rep__long__defined)
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined
#define	__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event(a, f) \
	__NDR_convert__ARRAY((long *)(a), f, 7, __NDR_convert__float_rep__long)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined */


mig_internal kern_return_t __MIG_check__Request___dyld_event_server_callback_t(__Request___dyld_event_server_callback_t *In0P)
{

	typedef __Request___dyld_event_server_callback_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined)
		__NDR_convert__int_rep__Request___dyld_event_server_callback_t__event(&In0P->event, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request___dyld_event_server_callback_t__event__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined)
		__NDR_convert__char_rep__Request___dyld_event_server_callback_t__event(&In0P->event, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request___dyld_event_server_callback_t__event__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined)
		__NDR_convert__float_rep__Request___dyld_event_server_callback_t__event(&In0P->event, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request___dyld_event_server_callback_t__event__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request___dyld_event_server_callback_t__defined) */
#endif /* __MIG_check__Request___dyld_event_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* SimpleRoutine _dyld_event_server_callback */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t _dyld_event_server_callback
(
	mach_port_t subscriber,
	event_t event
);

/* SimpleRoutine _dyld_event_server_callback */
mig_internal novalue _X_dyld_event_server_callback
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		event_t event;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request___dyld_event_server_callback_t __Request;
	typedef __Reply___dyld_event_server_callback_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request___dyld_event_server_callback_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request___dyld_event_server_callback_t__defined */

	__DeclareRcvSimple(200, "_dyld_event_server_callback")
	__BeforeRcvSimple(200, "_dyld_event_server_callback")

#if	defined(__MIG_check__Request___dyld_event_server_callback_t__defined)
	check_result = __MIG_check__Request___dyld_event_server_callback_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request___dyld_event_server_callback_t__defined) */

	OutP->RetCode = _dyld_event_server_callback(In0P->Head.msgh_request_port, In0P->event);
	__AfterRcvSimple(200, "_dyld_event_server_callback")
}


extern boolean_t _dyld_event_server(
		mach_msg_header_t *InHeadP,
		mach_msg_header_t *OutHeadP);

extern mig_routine_t _dyld_event_server_routine(
		mach_msg_header_t *InHeadP);


/* Description of this subsystem, for use in direct RPC */
const struct _dyld_event_subsystem {
	mig_server_routine_t 	server;	/* Server routine */
	mach_msg_id_t	start;	/* Min routine number */
	mach_msg_id_t	end;	/* Max routine number + 1 */
	unsigned int	maxsize;	/* Max msg size */
	vm_address_t	reserved;	/* Reserved */
	struct routine_descriptor	/*Array of routine descriptors */
		routine[1];
} _dyld_event_subsystem = {
	_dyld_event_server_routine,
	200,
	201,
	(mach_msg_size_t)sizeof(union __ReplyUnion___dyld_event_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _X_dyld_event_server_callback, 8, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply___dyld_event_server_callback_t)},
	}
};

mig_external boolean_t _dyld_event_server
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

	if ((InHeadP->msgh_id > 200) || (InHeadP->msgh_id < 200) ||
	    ((routine = _dyld_event_subsystem.routine[InHeadP->msgh_id - 200].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t _dyld_event_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 200;

	if ((msgh_id > 0) || (msgh_id < 0))
		return 0;

	return _dyld_event_subsystem.routine[msgh_id].stub_routine;
}
