/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 11:20:38 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 */
#define	__MIG_check__Reply__vm_map_subsystem__ 1
#define	__NDR_convert__Reply__vm_map_subsystem__ 1
#define	__NDR_convert__mig_reply_error_subsystem__ 1

#include "vm_map.h"


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
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_region_t__defined)
#define __MIG_check__Reply__vm_region_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_region_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__address__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_t__size__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__size__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_t__info__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_region_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_region_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__vm_map__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__info__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__infoCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_t__infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_t__address__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_t__size__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_t__size__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_t__info__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_region_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_region_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__vm_map__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_t__info__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_region_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_t__address__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_t__size__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_t__size__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_t__info__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_region_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_region_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__vm_map__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_t__info__defined */




mig_internal kern_return_t __MIG_check__Reply__vm_region_t(__Reply__vm_region_t *Out0P)
{

	typedef __Reply__vm_region_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 3900) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 40) || msgh_size > (mach_msg_size_t)sizeof(__Reply)) &&
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
	if (Out0P->object_name.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->object_name.disposition != 17)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_region_t__infoCnt(&Out0P->infoCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 40) + ((4 * Out0P->infoCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__vm_region_t__address__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_t__size__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_t__info__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_region_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_region_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__address__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_t__size__defined)
		__NDR_convert__int_rep__Reply__vm_region_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__size__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_t__info__defined)
		__NDR_convert__int_rep__Reply__vm_region_t__info(&Out0P->info, Out0P->NDR.int_rep, Out0P->infoCnt);
#endif /* __NDR_convert__int_rep__Reply__vm_region_t__info__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__vm_region_t__address__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_t__size__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_t__info__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_region_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_region_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_t__address__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_t__size__defined)
		__NDR_convert__char_rep__Reply__vm_region_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_t__size__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_t__info__defined)
		__NDR_convert__char_rep__Reply__vm_region_t__info(&Out0P->info, Out0P->NDR.char_rep, Out0P->infoCnt);
#endif /* __NDR_convert__char_rep__Reply__vm_region_t__info__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__vm_region_t__address__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_t__size__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_t__info__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_region_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_region_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_t__address__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_t__size__defined)
		__NDR_convert__float_rep__Reply__vm_region_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_t__size__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_t__info__defined)
		__NDR_convert__float_rep__Reply__vm_region_t__info(&Out0P->info, Out0P->NDR.float_rep, Out0P->infoCnt);
#endif /* __NDR_convert__float_rep__Reply__vm_region_t__info__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_region_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_region */
mig_external kern_return_t vm_region
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t *size,
	vm_region_flavor_t flavor,
	vm_region_info_t info,
	mach_msg_type_number_t *infoCnt,
	mach_port_t *object_name
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_region_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
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
		mach_msg_port_descriptor_t object_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
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
		mach_msg_port_descriptor_t object_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
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

#ifdef	__MIG_check__Reply__vm_region_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_region_t__defined */

	__DeclareSendRpc(3800, "vm_region")

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->flavor = flavor;

	if (*infoCnt < 10)
		InP->infoCnt = *infoCnt;
	else
		InP->infoCnt = 10;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3800;

	__BeforeSendRpc(3800, "vm_region")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3800, "vm_region")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_region_t__defined)
	check_result = __MIG_check__Reply__vm_region_t((__Reply__vm_region_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_region_t__defined) */

	*address = Out0P->address;

	*size = Out0P->size;

	if (Out0P->infoCnt > *infoCnt) {
		(void)memcpy((char *) info, (const char *) Out0P->info, 4 *  *infoCnt);
		*infoCnt = Out0P->infoCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) info, (const char *) Out0P->info, 4 * Out0P->infoCnt);

	*infoCnt = Out0P->infoCnt;

	*object_name = Out0P->object_name.name;
	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_allocate_t__defined)
#define __MIG_check__Reply__vm_allocate_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_allocate_t__address__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_allocate_t__address__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_allocate_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_allocate_t__address__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_allocate_t(__Reply__vm_allocate_t *Out0P)
{

	typedef __Reply__vm_allocate_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3901) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_allocate_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_allocate_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_allocate_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_allocate_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_allocate_t__address__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_allocate_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_allocate_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_allocate_t__address__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_allocate_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_allocate_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_allocate_t__address__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_allocate_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_allocate */
mig_external kern_return_t vm_allocate
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t size,
	int flags
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		int flags;
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
		vm_address_t address;
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
		vm_address_t address;
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

#ifdef	__MIG_check__Reply__vm_allocate_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_allocate_t__defined */

	__DeclareSendRpc(3801, "vm_allocate")

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->size = size;

	InP->flags = flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3801;

	__BeforeSendRpc(3801, "vm_allocate")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3801, "vm_allocate")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_allocate_t__defined)
	check_result = __MIG_check__Reply__vm_allocate_t((__Reply__vm_allocate_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_allocate_t__defined) */

	*address = Out0P->address;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_deallocate_t__defined)
#define __MIG_check__Reply__vm_deallocate_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_deallocate_t(__Reply__vm_deallocate_t *Out0P)
{

	typedef __Reply__vm_deallocate_t __Reply;
	if (Out0P->Head.msgh_id != 3902) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_deallocate_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_deallocate_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_deallocate */
mig_external kern_return_t vm_deallocate
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
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

#ifdef	__MIG_check__Reply__vm_deallocate_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_deallocate_t__defined */

	__DeclareSendRpc(3802, "vm_deallocate")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3802;

	__BeforeSendRpc(3802, "vm_deallocate")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3802, "vm_deallocate")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_deallocate_t__defined)
	check_result = __MIG_check__Reply__vm_deallocate_t((__Reply__vm_deallocate_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_deallocate_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_protect_t__defined)
#define __MIG_check__Reply__vm_protect_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_protect_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_protect_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_protect_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_protect_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_protect_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_protect_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_protect_t(__Reply__vm_protect_t *Out0P)
{

	typedef __Reply__vm_protect_t __Reply;
	if (Out0P->Head.msgh_id != 3903) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_protect_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_protect_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_protect_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_protect_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_protect */
mig_external kern_return_t vm_protect
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
	boolean_t set_maximum,
	vm_prot_t new_protection
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		boolean_t set_maximum;
		vm_prot_t new_protection;
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

#ifdef	__MIG_check__Reply__vm_protect_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_protect_t__defined */

	__DeclareSendRpc(3803, "vm_protect")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->set_maximum = set_maximum;

	InP->new_protection = new_protection;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3803;

	__BeforeSendRpc(3803, "vm_protect")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3803, "vm_protect")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_protect_t__defined)
	check_result = __MIG_check__Reply__vm_protect_t((__Reply__vm_protect_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_protect_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_inherit_t__defined)
#define __MIG_check__Reply__vm_inherit_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_inherit_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_inherit_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_inherit_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_inherit_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_inherit_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_inherit_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_inherit_t(__Reply__vm_inherit_t *Out0P)
{

	typedef __Reply__vm_inherit_t __Reply;
	if (Out0P->Head.msgh_id != 3904) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_inherit_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_inherit_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_inherit_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_inherit_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_inherit */
mig_external kern_return_t vm_inherit
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_inherit_t new_inheritance
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		vm_inherit_t new_inheritance;
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

#ifdef	__MIG_check__Reply__vm_inherit_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_inherit_t__defined */

	__DeclareSendRpc(3804, "vm_inherit")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->new_inheritance = new_inheritance;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3804;

	__BeforeSendRpc(3804, "vm_inherit")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3804, "vm_inherit")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_inherit_t__defined)
	check_result = __MIG_check__Reply__vm_inherit_t((__Reply__vm_inherit_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_inherit_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_read_t__defined)
#define __MIG_check__Reply__vm_read_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_read_t__data__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_t__data__defined
#define	__NDR_convert__int_rep__Reply__vm_read_t__data(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_offset_t((vm_offset_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_t__data__defined
#define	__NDR_convert__int_rep__Reply__vm_read_t__data(a, f, c) \
	__NDR_convert__int_rep__vm_offset_t((vm_offset_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_read_t__data__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_read_t__dataCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_read_t__dataCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_read_t__data__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_t__data__defined
#define	__NDR_convert__char_rep__Reply__vm_read_t__data(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_offset_t((vm_offset_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_t__data__defined
#define	__NDR_convert__char_rep__Reply__vm_read_t__data(a, f, c) \
	__NDR_convert__char_rep__vm_offset_t((vm_offset_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_read_t__data__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_read_t__data__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_t__data__defined
#define	__NDR_convert__float_rep__Reply__vm_read_t__data(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_offset_t((vm_offset_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_t__data__defined
#define	__NDR_convert__float_rep__Reply__vm_read_t__data(a, f, c) \
	__NDR_convert__float_rep__vm_offset_t((vm_offset_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_read_t__data__defined */




mig_internal kern_return_t __MIG_check__Reply__vm_read_t(__Reply__vm_read_t *Out0P)
{

	typedef __Reply__vm_read_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3905) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
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
	if (Out0P->data.type != MACH_MSG_OOL_DESCRIPTOR)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__vm_read_t__data__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined)
		__NDR_convert__int_rep__Reply__vm_read_t__dataCnt(&Out0P->dataCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_read_t__dataCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_read_t__data__defined)
		__NDR_convert__int_rep__Reply__vm_read_t__data((vm_offset_t)(Out0P->data.address), Out0P->NDR.int_rep, Out0P->dataCnt);
#endif /* __NDR_convert__int_rep__Reply__vm_read_t__data__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__vm_read_t__data__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_read_t__data__defined)
		__NDR_convert__char_rep__Reply__vm_read_t__data((vm_offset_t)(Out0P->data.address), Out0P->NDR.char_rep, Out0P->dataCnt);
#endif /* __NDR_convert__char_rep__Reply__vm_read_t__data__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__vm_read_t__data__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_read_t__data__defined)
		__NDR_convert__float_rep__Reply__vm_read_t__data((vm_offset_t)(Out0P->data.address), Out0P->NDR.float_rep, Out0P->dataCnt);
#endif /* __NDR_convert__float_rep__Reply__vm_read_t__data__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_read_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_read */
mig_external kern_return_t vm_read
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_offset_t *data,
	mach_msg_type_number_t *dataCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t dataCnt;
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

#ifdef	__MIG_check__Reply__vm_read_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_read_t__defined */

	__DeclareSendRpc(3805, "vm_read")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3805;

	__BeforeSendRpc(3805, "vm_read")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3805, "vm_read")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_read_t__defined)
	check_result = __MIG_check__Reply__vm_read_t((__Reply__vm_read_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_read_t__defined) */

	*data = (vm_offset_t)(Out0P->data.address);
	*dataCnt = Out0P->dataCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_read_list_t__defined)
#define __MIG_check__Reply__vm_read_list_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_read_entry_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__int_rep__vm_map__vm_read_entry_t((vm_read_entry_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_read_entry_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__int_rep__vm_read_entry_t((vm_read_entry_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__vm_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((vm_offset_t *)(a), f, 512, __NDR_convert__int_rep__vm_map__vm_offset_t)
#elif	defined(__NDR_convert__int_rep__vm_offset_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((vm_offset_t *)(a), f, 512, __NDR_convert__int_rep__vm_offset_t)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 512, __NDR_convert__int_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 512, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 512, __NDR_convert__int_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 512, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_read_entry_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__char_rep__vm_map__vm_read_entry_t((vm_read_entry_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_read_entry_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__char_rep__vm_read_entry_t((vm_read_entry_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__vm_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((vm_offset_t *)(a), f, 512, __NDR_convert__char_rep__vm_map__vm_offset_t)
#elif	defined(__NDR_convert__char_rep__vm_offset_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((vm_offset_t *)(a), f, 512, __NDR_convert__char_rep__vm_offset_t)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 512, __NDR_convert__char_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 512, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 512, __NDR_convert__char_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 512, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_read_entry_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__float_rep__vm_map__vm_read_entry_t((vm_read_entry_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_read_entry_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__float_rep__vm_read_entry_t((vm_read_entry_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__vm_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((vm_offset_t *)(a), f, 512, __NDR_convert__float_rep__vm_map__vm_offset_t)
#elif	defined(__NDR_convert__float_rep__vm_offset_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((vm_offset_t *)(a), f, 512, __NDR_convert__float_rep__vm_offset_t)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 512, __NDR_convert__float_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 512, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 512, __NDR_convert__float_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined
#define	__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 512, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_read_list_t(__Reply__vm_read_list_t *Out0P)
{

	typedef __Reply__vm_read_list_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3906) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_read_list_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_read_list_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined)
		__NDR_convert__int_rep__Reply__vm_read_list_t__data_list(&Out0P->data_list, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_read_list_t__data_list__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined)
		__NDR_convert__char_rep__Reply__vm_read_list_t__data_list(&Out0P->data_list, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_read_list_t__data_list__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined)
		__NDR_convert__float_rep__Reply__vm_read_list_t__data_list(&Out0P->data_list, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_read_list_t__data_list__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_read_list_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_read_list */
mig_external kern_return_t vm_read_list
(
	vm_map_t target_task,
	vm_read_entry_t data_list,
	natural_t count
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_read_entry_t data_list;
		natural_t count;
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
		vm_read_entry_t data_list;
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
		vm_read_entry_t data_list;
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

	union vm_read_listMessU {
		Request In;
		Reply Out;
	} *Mess = (union vm_read_listMessU *) mig_user_allocate(sizeof(*Mess));

	Request *InP = &Mess->In;
	Reply *Out0P = &Mess->Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__vm_read_list_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_read_list_t__defined */

	__DeclareSendRpc(3806, "vm_read_list")

	InP->NDR = NDR_record;

	{   typedef struct { char data[2048]; } *sp;
	    * (sp) InP->data_list = * (sp) data_list;
	}

	InP->count = count;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3806;

	__BeforeSendRpc(3806, "vm_read_list")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3806, "vm_read_list")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_read_list_t__defined)
	check_result = __MIG_check__Reply__vm_read_list_t((__Reply__vm_read_list_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ mig_user_deallocate((char *) Mess, (mach_msg_size_t)sizeof(*Mess)); return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_read_list_t__defined) */

	{   typedef struct { char data[2048]; } *sp;
	    * (sp) data_list = * (sp) Out0P->data_list;
	}

	{ mig_user_deallocate((char *) Mess, sizeof(*Mess)); return KERN_SUCCESS; }
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_write_t__defined)
#define __MIG_check__Reply__vm_write_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_write_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_write_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_write_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_write_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_write_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_write_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_write_t(__Reply__vm_write_t *Out0P)
{

	typedef __Reply__vm_write_t __Reply;
	if (Out0P->Head.msgh_id != 3907) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_write_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_write_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_write_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_write_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_write */
mig_external kern_return_t vm_write
(
	vm_map_t target_task,
	vm_address_t address,
	vm_offset_t data,
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
		mach_msg_ool_descriptor_t data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		mach_msg_type_number_t dataCnt;
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

#ifdef	__MIG_check__Reply__vm_write_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_write_t__defined */

	__DeclareSendRpc(3807, "vm_write")

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

	InP->msgh_body.msgh_descriptor_count = 1;
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

	InP->address = address;

	InP->dataCnt = dataCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3807;

	__BeforeSendRpc(3807, "vm_write")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3807, "vm_write")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_write_t__defined)
	check_result = __MIG_check__Reply__vm_write_t((__Reply__vm_write_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_write_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_copy_t__defined)
#define __MIG_check__Reply__vm_copy_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_copy_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_copy_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_copy_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_copy_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_copy_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_copy_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_copy_t(__Reply__vm_copy_t *Out0P)
{

	typedef __Reply__vm_copy_t __Reply;
	if (Out0P->Head.msgh_id != 3908) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_copy_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_copy_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_copy_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_copy_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_copy */
mig_external kern_return_t vm_copy
(
	vm_map_t target_task,
	vm_address_t source_address,
	vm_size_t size,
	vm_address_t dest_address
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t source_address;
		vm_size_t size;
		vm_address_t dest_address;
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

#ifdef	__MIG_check__Reply__vm_copy_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_copy_t__defined */

	__DeclareSendRpc(3808, "vm_copy")

	InP->NDR = NDR_record;

	InP->source_address = source_address;

	InP->size = size;

	InP->dest_address = dest_address;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3808;

	__BeforeSendRpc(3808, "vm_copy")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3808, "vm_copy")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_copy_t__defined)
	check_result = __MIG_check__Reply__vm_copy_t((__Reply__vm_copy_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_copy_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_read_overwrite_t__defined)
#define __MIG_check__Reply__vm_read_overwrite_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__int_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__char_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__float_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined
#define	__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_read_overwrite_t(__Reply__vm_read_overwrite_t *Out0P)
{

	typedef __Reply__vm_read_overwrite_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3909) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_read_overwrite_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined)
		__NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize(&Out0P->outsize, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_read_overwrite_t__outsize__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined)
		__NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize(&Out0P->outsize, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_read_overwrite_t__outsize__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined)
		__NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize(&Out0P->outsize, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_read_overwrite_t__outsize__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_read_overwrite_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_read_overwrite */
mig_external kern_return_t vm_read_overwrite
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_address_t data,
	vm_size_t *outsize
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		vm_address_t data;
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
		vm_size_t outsize;
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
		vm_size_t outsize;
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

#ifdef	__MIG_check__Reply__vm_read_overwrite_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_read_overwrite_t__defined */

	__DeclareSendRpc(3809, "vm_read_overwrite")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->data = data;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3809;

	__BeforeSendRpc(3809, "vm_read_overwrite")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3809, "vm_read_overwrite")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_read_overwrite_t__defined)
	check_result = __MIG_check__Reply__vm_read_overwrite_t((__Reply__vm_read_overwrite_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_read_overwrite_t__defined) */

	*outsize = Out0P->outsize;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_msync_t__defined)
#define __MIG_check__Reply__vm_msync_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_msync_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_msync_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_msync_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_msync_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_msync_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_msync_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_msync_t(__Reply__vm_msync_t *Out0P)
{

	typedef __Reply__vm_msync_t __Reply;
	if (Out0P->Head.msgh_id != 3910) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_msync_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_msync_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_msync_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_msync_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_msync */
mig_external kern_return_t vm_msync
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
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
		vm_address_t address;
		vm_size_t size;
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

#ifdef	__MIG_check__Reply__vm_msync_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_msync_t__defined */

	__DeclareSendRpc(3810, "vm_msync")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->sync_flags = sync_flags;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3810;

	__BeforeSendRpc(3810, "vm_msync")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3810, "vm_msync")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_msync_t__defined)
	check_result = __MIG_check__Reply__vm_msync_t((__Reply__vm_msync_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_msync_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_behavior_set_t__defined)
#define __MIG_check__Reply__vm_behavior_set_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__vm_behavior_set_t(__Reply__vm_behavior_set_t *Out0P)
{

	typedef __Reply__vm_behavior_set_t __Reply;
	if (Out0P->Head.msgh_id != 3911) {
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

#if defined(__NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_behavior_set_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__vm_behavior_set_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_behavior_set */
mig_external kern_return_t vm_behavior_set
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_behavior_t new_behavior
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		vm_behavior_t new_behavior;
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

#ifdef	__MIG_check__Reply__vm_behavior_set_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_behavior_set_t__defined */

	__DeclareSendRpc(3811, "vm_behavior_set")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->new_behavior = new_behavior;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3811;

	__BeforeSendRpc(3811, "vm_behavior_set")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3811, "vm_behavior_set")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_behavior_set_t__defined)
	check_result = __MIG_check__Reply__vm_behavior_set_t((__Reply__vm_behavior_set_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_behavior_set_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_map_t__defined)
#define __MIG_check__Reply__vm_map_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_map_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_t__address__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_map_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_map_t__address__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_map_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_map_t__address__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_map_t(__Reply__vm_map_t *Out0P)
{

	typedef __Reply__vm_map_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3912) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_map_t__address__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_map_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_map_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_map_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_t__address__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_map_t__address__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_map_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_map_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_map_t__address__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_map_t__address__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_map_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_map_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_map_t__address__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_map_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_map */
mig_external kern_return_t vm_map
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t size,
	vm_address_t mask,
	int flags,
	mem_entry_name_port_t object,
	vm_offset_t offset,
	boolean_t copy,
	vm_prot_t cur_protection,
	vm_prot_t max_protection,
	vm_inherit_t inheritance
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
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		vm_address_t mask;
		int flags;
		vm_offset_t offset;
		boolean_t copy;
		vm_prot_t cur_protection;
		vm_prot_t max_protection;
		vm_inherit_t inheritance;
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
		vm_address_t address;
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
		vm_address_t address;
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

#ifdef	__MIG_check__Reply__vm_map_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_map_t__defined */

	__DeclareSendRpc(3812, "vm_map")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t objectTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->object = objectTemplate;
	InP->object.name = object;
#else	/* UseStaticTemplates */
	InP->object.name = object;
	InP->object.disposition = 19;
	InP->object.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->size = size;

	InP->mask = mask;

	InP->flags = flags;

	InP->offset = offset;

	InP->copy = copy;

	InP->cur_protection = cur_protection;

	InP->max_protection = max_protection;

	InP->inheritance = inheritance;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3812;

	__BeforeSendRpc(3812, "vm_map")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3812, "vm_map")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_map_t__defined)
	check_result = __MIG_check__Reply__vm_map_t((__Reply__vm_map_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_map_t__defined) */

	*address = Out0P->address;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_machine_attribute_t__defined)
#define __MIG_check__Reply__vm_machine_attribute_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_machine_attribute_val_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__int_rep__vm_map__vm_machine_attribute_val_t((vm_machine_attribute_val_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_machine_attribute_val_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__int_rep__vm_machine_attribute_val_t((vm_machine_attribute_val_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__int_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__int_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_machine_attribute_val_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__char_rep__vm_map__vm_machine_attribute_val_t((vm_machine_attribute_val_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_machine_attribute_val_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__char_rep__vm_machine_attribute_val_t((vm_machine_attribute_val_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__char_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__char_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_machine_attribute_val_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__float_rep__vm_map__vm_machine_attribute_val_t((vm_machine_attribute_val_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_machine_attribute_val_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__float_rep__vm_machine_attribute_val_t((vm_machine_attribute_val_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__float_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__float_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined
#define	__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_machine_attribute_t(__Reply__vm_machine_attribute_t *Out0P)
{

	typedef __Reply__vm_machine_attribute_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3913) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_machine_attribute_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined)
		__NDR_convert__int_rep__Reply__vm_machine_attribute_t__value(&Out0P->value, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_machine_attribute_t__value__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined)
		__NDR_convert__char_rep__Reply__vm_machine_attribute_t__value(&Out0P->value, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_machine_attribute_t__value__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined)
		__NDR_convert__float_rep__Reply__vm_machine_attribute_t__value(&Out0P->value, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_machine_attribute_t__value__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_machine_attribute_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_machine_attribute */
mig_external kern_return_t vm_machine_attribute
(
	vm_map_t target_task,
	vm_address_t address,
	vm_size_t size,
	vm_machine_attribute_t attribute,
	vm_machine_attribute_val_t *value
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		vm_machine_attribute_t attribute;
		vm_machine_attribute_val_t value;
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
		vm_machine_attribute_val_t value;
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
		vm_machine_attribute_val_t value;
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

#ifdef	__MIG_check__Reply__vm_machine_attribute_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_machine_attribute_t__defined */

	__DeclareSendRpc(3813, "vm_machine_attribute")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->size = size;

	InP->attribute = attribute;

	InP->value = *value;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3813;

	__BeforeSendRpc(3813, "vm_machine_attribute")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3813, "vm_machine_attribute")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_machine_attribute_t__defined)
	check_result = __MIG_check__Reply__vm_machine_attribute_t((__Reply__vm_machine_attribute_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_machine_attribute_t__defined) */

	*value = Out0P->value;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_remap_t__defined)
#define __MIG_check__Reply__vm_remap_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_prot_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__int_rep__vm_map__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_prot_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__int_rep__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__int_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__int_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_prot_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__int_rep__vm_map__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_prot_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__int_rep__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__int_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__int_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_prot_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__char_rep__vm_map__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_prot_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__char_rep__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__char_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__char_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_prot_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__char_rep__vm_map__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_prot_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__char_rep__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__char_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__char_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__target_address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_prot_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__float_rep__vm_map__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_prot_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__float_rep__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__float_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__float_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_prot_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__float_rep__vm_map__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_prot_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__float_rep__vm_prot_t((vm_prot_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__float_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__float_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined
#define	__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_remap_t(__Reply__vm_remap_t *Out0P)
{

	typedef __Reply__vm_remap_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3914) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_remap_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined)
		__NDR_convert__int_rep__Reply__vm_remap_t__target_address(&Out0P->target_address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__target_address__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined)
		__NDR_convert__int_rep__Reply__vm_remap_t__cur_protection(&Out0P->cur_protection, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__cur_protection__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined)
		__NDR_convert__int_rep__Reply__vm_remap_t__max_protection(&Out0P->max_protection, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_remap_t__max_protection__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined)
		__NDR_convert__char_rep__Reply__vm_remap_t__target_address(&Out0P->target_address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_remap_t__target_address__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined)
		__NDR_convert__char_rep__Reply__vm_remap_t__cur_protection(&Out0P->cur_protection, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_remap_t__cur_protection__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined)
		__NDR_convert__char_rep__Reply__vm_remap_t__max_protection(&Out0P->max_protection, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_remap_t__max_protection__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined)
		__NDR_convert__float_rep__Reply__vm_remap_t__target_address(&Out0P->target_address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_remap_t__target_address__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined)
		__NDR_convert__float_rep__Reply__vm_remap_t__cur_protection(&Out0P->cur_protection, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_remap_t__cur_protection__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined)
		__NDR_convert__float_rep__Reply__vm_remap_t__max_protection(&Out0P->max_protection, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_remap_t__max_protection__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_remap_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_remap */
mig_external kern_return_t vm_remap
(
	vm_map_t target_task,
	vm_address_t *target_address,
	vm_size_t size,
	vm_address_t mask,
	boolean_t anywhere,
	vm_map_t src_task,
	vm_address_t src_address,
	boolean_t copy,
	vm_prot_t *cur_protection,
	vm_prot_t *max_protection,
	vm_inherit_t inheritance
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
		mach_msg_port_descriptor_t src_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t target_address;
		vm_size_t size;
		vm_address_t mask;
		boolean_t anywhere;
		vm_address_t src_address;
		boolean_t copy;
		vm_inherit_t inheritance;
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
		vm_address_t target_address;
		vm_prot_t cur_protection;
		vm_prot_t max_protection;
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
		vm_address_t target_address;
		vm_prot_t cur_protection;
		vm_prot_t max_protection;
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

#ifdef	__MIG_check__Reply__vm_remap_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_remap_t__defined */

	__DeclareSendRpc(3814, "vm_remap")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t src_taskTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->src_task = src_taskTemplate;
	InP->src_task.name = src_task;
#else	/* UseStaticTemplates */
	InP->src_task.name = src_task;
	InP->src_task.disposition = 19;
	InP->src_task.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->target_address = *target_address;

	InP->size = size;

	InP->mask = mask;

	InP->anywhere = anywhere;

	InP->src_address = src_address;

	InP->copy = copy;

	InP->inheritance = inheritance;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3814;

	__BeforeSendRpc(3814, "vm_remap")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3814, "vm_remap")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_remap_t__defined)
	check_result = __MIG_check__Reply__vm_remap_t((__Reply__vm_remap_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_remap_t__defined) */

	*target_address = Out0P->target_address;

	*cur_protection = Out0P->cur_protection;

	*max_protection = Out0P->max_protection;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__task_wire_t__defined)
#define __MIG_check__Reply__task_wire_t__defined
#ifndef __NDR_convert__int_rep__Reply__task_wire_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__task_wire_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__task_wire_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__task_wire_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__task_wire_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__task_wire_t__RetCode__defined */





mig_internal kern_return_t __MIG_check__Reply__task_wire_t(__Reply__task_wire_t *Out0P)
{

	typedef __Reply__task_wire_t __Reply;
	if (Out0P->Head.msgh_id != 3915) {
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

#if defined(__NDR_convert__int_rep__Reply__task_wire_t__RetCode__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__task_wire_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__task_wire_t__RetCode__defined */
	{		return Out0P->RetCode;
	}
}
#endif /* !defined(__MIG_check__Reply__task_wire_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine task_wire */
mig_external kern_return_t task_wire
(
	vm_map_t target_task,
	boolean_t must_wire
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t must_wire;
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

#ifdef	__MIG_check__Reply__task_wire_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__task_wire_t__defined */

	__DeclareSendRpc(3815, "task_wire")

	InP->NDR = NDR_record;

	InP->must_wire = must_wire;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3815;

	__BeforeSendRpc(3815, "task_wire")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3815, "task_wire")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__task_wire_t__defined)
	check_result = __MIG_check__Reply__task_wire_t((__Reply__task_wire_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__task_wire_t__defined) */

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__mach_make_memory_entry_t__defined)
#define __MIG_check__Reply__mach_make_memory_entry_t__defined
#ifndef __NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined */


#ifndef __NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined */


#ifndef __NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined */



mig_internal kern_return_t __MIG_check__Reply__mach_make_memory_entry_t(__Reply__mach_make_memory_entry_t *Out0P)
{

	typedef __Reply__mach_make_memory_entry_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3916) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
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
	if (Out0P->object_handle.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->object_handle.disposition != 17)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined)
		__NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__mach_make_memory_entry_t__size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined)
		__NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__mach_make_memory_entry_t__size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined)
		__NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__mach_make_memory_entry_t__size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__mach_make_memory_entry_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_make_memory_entry */
mig_external kern_return_t mach_make_memory_entry
(
	vm_map_t target_task,
	vm_size_t *size,
	vm_offset_t offset,
	vm_prot_t permission,
	mem_entry_name_port_t *object_handle,
	mem_entry_name_port_t parent_entry
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
		mach_msg_port_descriptor_t parent_entry;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_size_t size;
		vm_offset_t offset;
		vm_prot_t permission;
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
		mach_msg_port_descriptor_t object_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_size_t size;
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
		mach_msg_port_descriptor_t object_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_size_t size;
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

#ifdef	__MIG_check__Reply__mach_make_memory_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_make_memory_entry_t__defined */

	__DeclareSendRpc(3816, "mach_make_memory_entry")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t parent_entryTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->parent_entry = parent_entryTemplate;
	InP->parent_entry.name = parent_entry;
#else	/* UseStaticTemplates */
	InP->parent_entry.name = parent_entry;
	InP->parent_entry.disposition = 19;
	InP->parent_entry.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->size = *size;

	InP->offset = offset;

	InP->permission = permission;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3816;

	__BeforeSendRpc(3816, "mach_make_memory_entry")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3816, "mach_make_memory_entry")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__mach_make_memory_entry_t__defined)
	check_result = __MIG_check__Reply__mach_make_memory_entry_t((__Reply__mach_make_memory_entry_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__mach_make_memory_entry_t__defined) */

	*size = Out0P->size;

	*object_handle = Out0P->object_handle.name;
	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_map_page_query_t__defined)
#define __MIG_check__Reply__vm_map_page_query_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined
#if	defined(__NDR_convert__int_rep__vm_map__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__int_rep__vm_map__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__int_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__int_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined
#if	defined(__NDR_convert__int_rep__vm_map__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__int_rep__vm_map__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__int_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__int_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined
#if	defined(__NDR_convert__char_rep__vm_map__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__char_rep__vm_map__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__char_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__char_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined
#if	defined(__NDR_convert__char_rep__vm_map__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__char_rep__vm_map__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__char_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__char_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined
#if	defined(__NDR_convert__float_rep__vm_map__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__float_rep__vm_map__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__float_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__float_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined
#if	defined(__NDR_convert__float_rep__vm_map__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__float_rep__vm_map__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__float_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__float_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined
#define	__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_map_page_query_t(__Reply__vm_map_page_query_t *Out0P)
{

	typedef __Reply__vm_map_page_query_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3917) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_page_query_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined)
		__NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition(&Out0P->disposition, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_page_query_t__disposition__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined)
		__NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count(&Out0P->ref_count, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_page_query_t__ref_count__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined)
		__NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition(&Out0P->disposition, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_map_page_query_t__disposition__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined)
		__NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count(&Out0P->ref_count, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_map_page_query_t__ref_count__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined)
		__NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition(&Out0P->disposition, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_map_page_query_t__disposition__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined)
		__NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count(&Out0P->ref_count, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_map_page_query_t__ref_count__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_map_page_query_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_map_page_query */
mig_external kern_return_t vm_map_page_query
(
	vm_map_t target_map,
	vm_offset_t offset,
	integer_t *disposition,
	integer_t *ref_count
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_offset_t offset;
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
		integer_t disposition;
		integer_t ref_count;
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
		integer_t disposition;
		integer_t ref_count;
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

#ifdef	__MIG_check__Reply__vm_map_page_query_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_map_page_query_t__defined */

	__DeclareSendRpc(3817, "vm_map_page_query")

	InP->NDR = NDR_record;

	InP->offset = offset;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_map;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3817;

	__BeforeSendRpc(3817, "vm_map_page_query")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3817, "vm_map_page_query")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_map_page_query_t__defined)
	check_result = __MIG_check__Reply__vm_map_page_query_t((__Reply__vm_map_page_query_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_map_page_query_t__defined) */

	*disposition = Out0P->disposition;

	*ref_count = Out0P->ref_count;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__mach_vm_region_info_t__defined)
#define __MIG_check__Reply__mach_vm_region_info_t__defined
#ifndef __NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_info_region_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__int_rep__vm_map__vm_info_region_t((vm_info_region_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_info_region_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__int_rep__vm_info_region_t((vm_info_region_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 10, __NDR_convert__int_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 10, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 10, __NDR_convert__int_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 10, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined */


#ifndef __NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_info_object_array_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_info_object_array_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__int_rep__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__vm_info_object_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__int_rep__vm_map__vm_info_object_t)
#elif	defined(__NDR_convert__int_rep__vm_info_object_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__int_rep__vm_info_object_t)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__int_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__int_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined */


#ifndef __NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_info_region_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__char_rep__vm_map__vm_info_region_t((vm_info_region_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_info_region_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__char_rep__vm_info_region_t((vm_info_region_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 10, __NDR_convert__char_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 10, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 10, __NDR_convert__char_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 10, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined */


#ifndef __NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_info_object_array_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_info_object_array_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__char_rep__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__vm_info_object_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__char_rep__vm_map__vm_info_object_t)
#elif	defined(__NDR_convert__char_rep__vm_info_object_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__char_rep__vm_info_object_t)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__char_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__char_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined */



#ifndef __NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_info_region_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__float_rep__vm_map__vm_info_region_t((vm_info_region_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_info_region_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__float_rep__vm_info_region_t((vm_info_region_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 10, __NDR_convert__float_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 10, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 10, __NDR_convert__float_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 10, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined */


#ifndef __NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_info_object_array_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_info_object_array_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__float_rep__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__vm_info_object_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__float_rep__vm_map__vm_info_object_t)
#elif	defined(__NDR_convert__float_rep__vm_info_object_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__float_rep__vm_info_object_t)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__float_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__float_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined */




mig_internal kern_return_t __MIG_check__Reply__mach_vm_region_info_t(__Reply__mach_vm_region_info_t *Out0P)
{

	typedef __Reply__mach_vm_region_info_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3918) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
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
	if (Out0P->objects.type != MACH_MSG_OOL_DESCRIPTOR)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined) || \
	defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined) || \
	defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined)
		__NDR_convert__int_rep__Reply__mach_vm_region_info_t__region(&Out0P->region, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_t__region__defined */
#if defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined)
		__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt(&Out0P->objectsCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__mach_vm_region_info_t__objectsCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined)
		__NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects((vm_info_object_array_t)(Out0P->objects.address), Out0P->NDR.int_rep, Out0P->objectsCnt);
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_t__objects__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined) || \
	defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined)
		__NDR_convert__char_rep__Reply__mach_vm_region_info_t__region(&Out0P->region, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_t__region__defined */
#if defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined)
		__NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects((vm_info_object_array_t)(Out0P->objects.address), Out0P->NDR.char_rep, Out0P->objectsCnt);
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_t__objects__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined) || \
	defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined)
		__NDR_convert__float_rep__Reply__mach_vm_region_info_t__region(&Out0P->region, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_t__region__defined */
#if defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined)
		__NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects((vm_info_object_array_t)(Out0P->objects.address), Out0P->NDR.float_rep, Out0P->objectsCnt);
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_t__objects__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__mach_vm_region_info_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_vm_region_info */
mig_external kern_return_t mach_vm_region_info
(
	vm_map_t task,
	vm_address_t address,
	vm_info_region_t *region,
	vm_info_object_array_t *objects,
	mach_msg_type_number_t *objectsCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
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
		mach_msg_ool_descriptor_t objects;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_info_region_t region;
		mach_msg_type_number_t objectsCnt;
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
		mach_msg_ool_descriptor_t objects;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_info_region_t region;
		mach_msg_type_number_t objectsCnt;
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

#ifdef	__MIG_check__Reply__mach_vm_region_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_vm_region_info_t__defined */

	__DeclareSendRpc(3818, "mach_vm_region_info")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3818;

	__BeforeSendRpc(3818, "mach_vm_region_info")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3818, "mach_vm_region_info")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__mach_vm_region_info_t__defined)
	check_result = __MIG_check__Reply__mach_vm_region_info_t((__Reply__mach_vm_region_info_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__mach_vm_region_info_t__defined) */

	*region = Out0P->region;

	*objects = (vm_info_object_array_t)(Out0P->objects.address);
	*objectsCnt = Out0P->objectsCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_mapped_pages_info_t__defined)
#define __MIG_check__Reply__vm_mapped_pages_info_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#if	defined(__NDR_convert__int_rep__vm_map__page_address_array_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__int_rep__vm_map__page_address_array_t((page_address_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__page_address_array_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__int_rep__page_address_array_t((page_address_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__vm_map__integer_t)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__int_rep__integer_t)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#if	defined(__NDR_convert__char_rep__vm_map__page_address_array_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__char_rep__vm_map__page_address_array_t((page_address_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__page_address_array_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__char_rep__page_address_array_t((page_address_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__vm_map__integer_t)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__char_rep__integer_t)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#if	defined(__NDR_convert__float_rep__vm_map__page_address_array_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__float_rep__vm_map__page_address_array_t((page_address_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__page_address_array_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__float_rep__page_address_array_t((page_address_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__vm_map__integer_t)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((integer_t *)(a), f, c, __NDR_convert__float_rep__integer_t)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined
#define	__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined */




mig_internal kern_return_t __MIG_check__Reply__vm_mapped_pages_info_t(__Reply__vm_mapped_pages_info_t *Out0P)
{

	typedef __Reply__vm_mapped_pages_info_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3919) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
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
	if (Out0P->pages.type != MACH_MSG_OOL_DESCRIPTOR)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined)
		__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt(&Out0P->pagesCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pagesCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined)
		__NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages((page_address_array_t)(Out0P->pages.address), Out0P->NDR.int_rep, Out0P->pagesCnt);
#endif /* __NDR_convert__int_rep__Reply__vm_mapped_pages_info_t__pages__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined)
		__NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages((page_address_array_t)(Out0P->pages.address), Out0P->NDR.char_rep, Out0P->pagesCnt);
#endif /* __NDR_convert__char_rep__Reply__vm_mapped_pages_info_t__pages__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined)
		__NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages((page_address_array_t)(Out0P->pages.address), Out0P->NDR.float_rep, Out0P->pagesCnt);
#endif /* __NDR_convert__float_rep__Reply__vm_mapped_pages_info_t__pages__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_mapped_pages_info_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_mapped_pages_info */
mig_external kern_return_t vm_mapped_pages_info
(
	vm_map_t task,
	page_address_array_t *pages,
	mach_msg_type_number_t *pagesCnt
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
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t pages;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t pagesCnt;
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
		mach_msg_ool_descriptor_t pages;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t pagesCnt;
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

#ifdef	__MIG_check__Reply__vm_mapped_pages_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_mapped_pages_info_t__defined */

	__DeclareSendRpc(3819, "vm_mapped_pages_info")

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3819;

	__BeforeSendRpc(3819, "vm_mapped_pages_info")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3819, "vm_mapped_pages_info")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_mapped_pages_info_t__defined)
	check_result = __MIG_check__Reply__vm_mapped_pages_info_t((__Reply__vm_mapped_pages_info_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_mapped_pages_info_t__defined) */

	*pages = (page_address_array_t)(Out0P->pages.address);
	*pagesCnt = Out0P->pagesCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_region_recurse_t__defined)
#define __MIG_check__Reply__vm_region_recurse_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#if	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_region_recurse_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_region_recurse_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__vm_map__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#if	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_region_recurse_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_region_recurse_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__vm_map__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined */




#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#if	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_region_recurse_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_region_recurse_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__vm_map__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined */




mig_internal kern_return_t __MIG_check__Reply__vm_region_recurse_t(__Reply__vm_region_recurse_t *Out0P)
{

	typedef __Reply__vm_region_recurse_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 3921) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 76)) &&
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

#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt(&Out0P->infoCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 76) + ((4 * Out0P->infoCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__address__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__size__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth(&Out0P->nesting_depth, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__nesting_depth__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_t__info(&Out0P->info, Out0P->NDR.int_rep, Out0P->infoCnt);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_t__info__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__address__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__size__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth(&Out0P->nesting_depth, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__nesting_depth__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_t__info(&Out0P->info, Out0P->NDR.char_rep, Out0P->infoCnt);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_t__info__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__address__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__size__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth(&Out0P->nesting_depth, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__nesting_depth__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_t__info(&Out0P->info, Out0P->NDR.float_rep, Out0P->infoCnt);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_t__info__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_region_recurse_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_region_recurse */
mig_external kern_return_t vm_region_recurse
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t *size,
	natural_t *nesting_depth,
	vm_region_recurse_info_t info,
	mach_msg_type_number_t *infoCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
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
		vm_address_t address;
		vm_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
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
		vm_address_t address;
		vm_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
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

#ifdef	__MIG_check__Reply__vm_region_recurse_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_region_recurse_t__defined */

	__DeclareSendRpc(3821, "vm_region_recurse")

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->nesting_depth = *nesting_depth;

	if (*infoCnt < 19)
		InP->infoCnt = *infoCnt;
	else
		InP->infoCnt = 19;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3821;

	__BeforeSendRpc(3821, "vm_region_recurse")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3821, "vm_region_recurse")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_region_recurse_t__defined)
	check_result = __MIG_check__Reply__vm_region_recurse_t((__Reply__vm_region_recurse_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_region_recurse_t__defined) */

	*address = Out0P->address;

	*size = Out0P->size;

	*nesting_depth = Out0P->nesting_depth;

	if (Out0P->infoCnt > *infoCnt) {
		(void)memcpy((char *) info, (const char *) Out0P->info, 4 *  *infoCnt);
		*infoCnt = Out0P->infoCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) info, (const char *) Out0P->info, 4 * Out0P->infoCnt);

	*infoCnt = Out0P->infoCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_region_recurse_64_t__defined)
#define __MIG_check__Reply__vm_region_recurse_64_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#if	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_region_recurse_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_region_recurse_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__vm_map__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#if	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_region_recurse_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_region_recurse_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__vm_map__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined */




#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#if	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_region_recurse_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_region_recurse_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_region_recurse_info_t((vm_region_recurse_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__vm_map__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined */




mig_internal kern_return_t __MIG_check__Reply__vm_region_recurse_64_t(__Reply__vm_region_recurse_64_t *Out0P)
{

	typedef __Reply__vm_region_recurse_64_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 3922) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size > (mach_msg_size_t)sizeof(__Reply) || msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 76)) &&
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

#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt(&Out0P->infoCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 76) + ((4 * Out0P->infoCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__address__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__size__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth(&Out0P->nesting_depth, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined)
		__NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info(&Out0P->info, Out0P->NDR.int_rep, Out0P->infoCnt);
#endif /* __NDR_convert__int_rep__Reply__vm_region_recurse_64_t__info__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__address__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__size__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth(&Out0P->nesting_depth, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined)
		__NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info(&Out0P->info, Out0P->NDR.char_rep, Out0P->infoCnt);
#endif /* __NDR_convert__char_rep__Reply__vm_region_recurse_64_t__info__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__address__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__size__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth(&Out0P->nesting_depth, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__nesting_depth__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined)
		__NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info(&Out0P->info, Out0P->NDR.float_rep, Out0P->infoCnt);
#endif /* __NDR_convert__float_rep__Reply__vm_region_recurse_64_t__info__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_region_recurse_64_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_region_recurse_64 */
mig_external kern_return_t vm_region_recurse_64
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t *size,
	natural_t *nesting_depth,
	vm_region_recurse_info_t info,
	mach_msg_type_number_t *infoCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
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
		vm_address_t address;
		vm_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
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
		vm_address_t address;
		vm_size_t size;
		natural_t nesting_depth;
		mach_msg_type_number_t infoCnt;
		int info[19];
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

#ifdef	__MIG_check__Reply__vm_region_recurse_64_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_region_recurse_64_t__defined */

	__DeclareSendRpc(3822, "vm_region_recurse_64")

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->nesting_depth = *nesting_depth;

	if (*infoCnt < 19)
		InP->infoCnt = *infoCnt;
	else
		InP->infoCnt = 19;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3822;

	__BeforeSendRpc(3822, "vm_region_recurse_64")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3822, "vm_region_recurse_64")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_region_recurse_64_t__defined)
	check_result = __MIG_check__Reply__vm_region_recurse_64_t((__Reply__vm_region_recurse_64_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_region_recurse_64_t__defined) */

	*address = Out0P->address;

	*size = Out0P->size;

	*nesting_depth = Out0P->nesting_depth;

	if (Out0P->infoCnt > *infoCnt) {
		(void)memcpy((char *) info, (const char *) Out0P->info, 4 *  *infoCnt);
		*infoCnt = Out0P->infoCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) info, (const char *) Out0P->info, 4 * Out0P->infoCnt);

	*infoCnt = Out0P->infoCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__mach_vm_region_info_64_t__defined)
#define __MIG_check__Reply__mach_vm_region_info_64_t__defined
#ifndef __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_info_region_64_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__int_rep__vm_map__vm_info_region_64_t((vm_info_region_64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_info_region_64_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__int_rep__vm_info_region_64_t((vm_info_region_64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 11, __NDR_convert__int_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 11, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 11, __NDR_convert__int_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 11, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined */


#ifndef __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_info_object_array_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_info_object_array_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__int_rep__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__vm_info_object_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__int_rep__vm_map__vm_info_object_t)
#elif	defined(__NDR_convert__int_rep__vm_info_object_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__int_rep__vm_info_object_t)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__int_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__int_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined */


#ifndef __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined
#define	__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_info_region_64_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__char_rep__vm_map__vm_info_region_64_t((vm_info_region_64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_info_region_64_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__char_rep__vm_info_region_64_t((vm_info_region_64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 11, __NDR_convert__char_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 11, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 11, __NDR_convert__char_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 11, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined */


#ifndef __NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_info_object_array_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_info_object_array_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__char_rep__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__vm_info_object_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__char_rep__vm_map__vm_info_object_t)
#elif	defined(__NDR_convert__char_rep__vm_info_object_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__char_rep__vm_info_object_t)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__char_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__char_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined */



#ifndef __NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_info_region_64_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__float_rep__vm_map__vm_info_region_64_t((vm_info_region_64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_info_region_64_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__float_rep__vm_info_region_64_t((vm_info_region_64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 11, __NDR_convert__float_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 11, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 11, __NDR_convert__float_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(a, f) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 11, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined */


#ifndef __NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_info_object_array_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_info_object_array_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__float_rep__vm_info_object_array_t((vm_info_object_array_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__vm_info_object_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__float_rep__vm_map__vm_info_object_t)
#elif	defined(__NDR_convert__float_rep__vm_info_object_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((vm_info_object_t *)(a), f, c, __NDR_convert__float_rep__vm_info_object_t)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__float_rep__vm_map__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, 21 * (c), __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__float_rep__vm_map__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined
#define	__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, 21 * (c), __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined */




mig_internal kern_return_t __MIG_check__Reply__mach_vm_region_info_64_t(__Reply__mach_vm_region_info_64_t *Out0P)
{

	typedef __Reply__mach_vm_region_info_64_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3923) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
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
	if (Out0P->objects.type != MACH_MSG_OOL_DESCRIPTOR)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined) || \
	defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined) || \
	defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined)
		__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region(&Out0P->region, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__region__defined */
#if defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined)
		__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt(&Out0P->objectsCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objectsCnt__defined */
#if defined(__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined)
		__NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects((vm_info_object_array_t)(Out0P->objects.address), Out0P->NDR.int_rep, Out0P->objectsCnt);
#endif /* __NDR_convert__int_rep__Reply__mach_vm_region_info_64_t__objects__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined) || \
	defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined)
		__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region(&Out0P->region, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__region__defined */
#if defined(__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined)
		__NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects((vm_info_object_array_t)(Out0P->objects.address), Out0P->NDR.char_rep, Out0P->objectsCnt);
#endif /* __NDR_convert__char_rep__Reply__mach_vm_region_info_64_t__objects__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined) || \
	defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined)
		__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region(&Out0P->region, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__region__defined */
#if defined(__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined)
		__NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects((vm_info_object_array_t)(Out0P->objects.address), Out0P->NDR.float_rep, Out0P->objectsCnt);
#endif /* __NDR_convert__float_rep__Reply__mach_vm_region_info_64_t__objects__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__mach_vm_region_info_64_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_vm_region_info_64 */
mig_external kern_return_t mach_vm_region_info_64
(
	vm_map_t task,
	vm_address_t address,
	vm_info_region_64_t *region,
	vm_info_object_array_t *objects,
	mach_msg_type_number_t *objectsCnt
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
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
		mach_msg_ool_descriptor_t objects;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_info_region_64_t region;
		mach_msg_type_number_t objectsCnt;
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
		mach_msg_ool_descriptor_t objects;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_info_region_64_t region;
		mach_msg_type_number_t objectsCnt;
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

#ifdef	__MIG_check__Reply__mach_vm_region_info_64_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_vm_region_info_64_t__defined */

	__DeclareSendRpc(3823, "mach_vm_region_info_64")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3823;

	__BeforeSendRpc(3823, "mach_vm_region_info_64")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3823, "mach_vm_region_info_64")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__mach_vm_region_info_64_t__defined)
	check_result = __MIG_check__Reply__mach_vm_region_info_64_t((__Reply__mach_vm_region_info_64_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__mach_vm_region_info_64_t__defined) */

	*region = Out0P->region;

	*objects = (vm_info_object_array_t)(Out0P->objects.address);
	*objectsCnt = Out0P->objectsCnt;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_region_64_t__defined)
#define __MIG_check__Reply__vm_region_64_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__address__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__size__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_region_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_map__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_region_info_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__int_rep__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__vm_map__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__info__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined
#if	defined(__NDR_convert__int_rep__vm_map__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt(a, f) \
	__NDR_convert__int_rep__vm_map__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined
#define	__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_64_t__address__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_64_t__size__defined */


#ifndef __NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_region_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_map__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_region_info_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__char_rep__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__vm_map__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__char_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_region_64_t__info__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_64_t__address__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_64_t__size__defined */


#ifndef __NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_region_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_map__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_region_info_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__float_rep__vm_region_info_t((vm_region_info_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__vm_map__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__vm_map__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined
#define	__NDR_convert__float_rep__Reply__vm_region_64_t__info(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_region_64_t__info__defined */




mig_internal kern_return_t __MIG_check__Reply__vm_region_64_t(__Reply__vm_region_64_t *Out0P)
{

	typedef __Reply__vm_region_64_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

	if (Out0P->Head.msgh_id != 3924) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size < (mach_msg_size_t)(sizeof(__Reply) - 40) || msgh_size > (mach_msg_size_t)sizeof(__Reply)) &&
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
	if (Out0P->object_name.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->object_name.disposition != 17)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt(&Out0P->infoCnt, Out0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Reply) - 40) + ((4 * Out0P->infoCnt)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_region_64_t__infoCnt__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_region_64_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_region_64_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__address__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_64_t__size__defined)
		__NDR_convert__int_rep__Reply__vm_region_64_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__size__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_region_64_t__info__defined)
		__NDR_convert__int_rep__Reply__vm_region_64_t__info(&Out0P->info, Out0P->NDR.int_rep, Out0P->infoCnt);
#endif /* __NDR_convert__int_rep__Reply__vm_region_64_t__info__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined) || \
	defined(__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined) || \
	0
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_region_64_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_region_64_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_64_t__address__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_64_t__size__defined)
		__NDR_convert__char_rep__Reply__vm_region_64_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_region_64_t__size__defined */
#if defined(__NDR_convert__char_rep__Reply__vm_region_64_t__info__defined)
		__NDR_convert__char_rep__Reply__vm_region_64_t__info(&Out0P->info, Out0P->NDR.char_rep, Out0P->infoCnt);
#endif /* __NDR_convert__char_rep__Reply__vm_region_64_t__info__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined) || \
	defined(__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined) || \
	0
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_region_64_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_region_64_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_64_t__address__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_64_t__size__defined)
		__NDR_convert__float_rep__Reply__vm_region_64_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_region_64_t__size__defined */
#if defined(__NDR_convert__float_rep__Reply__vm_region_64_t__info__defined)
		__NDR_convert__float_rep__Reply__vm_region_64_t__info(&Out0P->info, Out0P->NDR.float_rep, Out0P->infoCnt);
#endif /* __NDR_convert__float_rep__Reply__vm_region_64_t__info__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_region_64_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_region_64 */
mig_external kern_return_t vm_region_64
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t *size,
	vm_region_flavor_t flavor,
	vm_region_info_t info,
	mach_msg_type_number_t *infoCnt,
	mach_port_t *object_name
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_region_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
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
		mach_msg_port_descriptor_t object_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
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
		mach_msg_port_descriptor_t object_name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		mach_msg_type_number_t infoCnt;
		int info[10];
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

#ifdef	__MIG_check__Reply__vm_region_64_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_region_64_t__defined */

	__DeclareSendRpc(3824, "vm_region_64")

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->flavor = flavor;

	if (*infoCnt < 10)
		InP->infoCnt = *infoCnt;
	else
		InP->infoCnt = 10;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3824;

	__BeforeSendRpc(3824, "vm_region_64")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3824, "vm_region_64")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_region_64_t__defined)
	check_result = __MIG_check__Reply__vm_region_64_t((__Reply__vm_region_64_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_region_64_t__defined) */

	*address = Out0P->address;

	*size = Out0P->size;

	if (Out0P->infoCnt > *infoCnt) {
		(void)memcpy((char *) info, (const char *) Out0P->info, 4 *  *infoCnt);
		*infoCnt = Out0P->infoCnt;
		{ return MIG_ARRAY_TOO_LARGE; }
	}
	(void)memcpy((char *) info, (const char *) Out0P->info, 4 * Out0P->infoCnt);

	*infoCnt = Out0P->infoCnt;

	*object_name = Out0P->object_name.name;
	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__mach_make_memory_entry_64_t__defined)
#define __MIG_check__Reply__mach_make_memory_entry_64_t__defined
#ifndef __NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined
#if	defined(__NDR_convert__int_rep__vm_map__memory_object_size_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__memory_object_size_t((memory_object_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__memory_object_size_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__int_rep__memory_object_size_t((memory_object_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__int_rep__vm_map__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint64_t__defined)
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__int_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined */


#ifndef __NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined
#if	defined(__NDR_convert__char_rep__vm_map__memory_object_size_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__memory_object_size_t((memory_object_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__memory_object_size_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__char_rep__memory_object_size_t((memory_object_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__char_rep__vm_map__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint64_t__defined)
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__char_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined */


#ifndef __NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined
#if	defined(__NDR_convert__float_rep__vm_map__memory_object_size_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__memory_object_size_t((memory_object_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__memory_object_size_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__float_rep__memory_object_size_t((memory_object_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__float_rep__vm_map__uint64_t((uint64_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint64_t__defined)
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined
#define	__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size(a, f) \
	__NDR_convert__float_rep__uint64_t((uint64_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined */



mig_internal kern_return_t __MIG_check__Reply__mach_make_memory_entry_64_t(__Reply__mach_make_memory_entry_64_t *Out0P)
{

	typedef __Reply__mach_make_memory_entry_64_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3925) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
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
	if (Out0P->object_handle.type != MACH_MSG_PORT_DESCRIPTOR ||
	    Out0P->object_handle.disposition != 17)
		{ return MIG_TYPE_ERROR; }
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined)
		__NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size(&Out0P->size, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__mach_make_memory_entry_64_t__size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined)
		__NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size(&Out0P->size, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__mach_make_memory_entry_64_t__size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined)
		__NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size(&Out0P->size, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__mach_make_memory_entry_64_t__size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__mach_make_memory_entry_64_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine mach_make_memory_entry_64 */
mig_external kern_return_t mach_make_memory_entry_64
(
	vm_map_t target_task,
	memory_object_size_t *size,
	memory_object_offset_t offset,
	vm_prot_t permission,
	mach_port_t *object_handle,
	mem_entry_name_port_t parent_entry
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
		mach_msg_port_descriptor_t parent_entry;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		memory_object_size_t size;
		memory_object_offset_t offset;
		vm_prot_t permission;
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
		mach_msg_port_descriptor_t object_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		memory_object_size_t size;
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
		mach_msg_port_descriptor_t object_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		memory_object_size_t size;
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

#ifdef	__MIG_check__Reply__mach_make_memory_entry_64_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__mach_make_memory_entry_64_t__defined */

	__DeclareSendRpc(3825, "mach_make_memory_entry_64")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t parent_entryTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->parent_entry = parent_entryTemplate;
	InP->parent_entry.name = parent_entry;
#else	/* UseStaticTemplates */
	InP->parent_entry.name = parent_entry;
	InP->parent_entry.disposition = 19;
	InP->parent_entry.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->size = *size;

	InP->offset = offset;

	InP->permission = permission;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3825;

	__BeforeSendRpc(3825, "mach_make_memory_entry_64")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3825, "mach_make_memory_entry_64")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__mach_make_memory_entry_64_t__defined)
	check_result = __MIG_check__Reply__mach_make_memory_entry_64_t((__Reply__mach_make_memory_entry_64_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__mach_make_memory_entry_64_t__defined) */

	*size = Out0P->size;

	*object_handle = Out0P->object_handle.name;
	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_map_64_t__defined)
#define __MIG_check__Reply__vm_map_64_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#if	defined(__NDR_convert__int_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__int_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__int_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_map_64_t__address__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#if	defined(__NDR_convert__char_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__char_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__char_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_map_64_t__address__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#if	defined(__NDR_convert__float_rep__vm_map__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__float_rep__vm_map__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined
#define	__NDR_convert__float_rep__Reply__vm_map_64_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_map_64_t__address__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_map_64_t(__Reply__vm_map_64_t *Out0P)
{

	typedef __Reply__vm_map_64_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3926) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_map_64_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_64_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_map_64_t__address__defined)
		__NDR_convert__int_rep__Reply__vm_map_64_t__address(&Out0P->address, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_map_64_t__address__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_map_64_t__address__defined)
		__NDR_convert__char_rep__Reply__vm_map_64_t__address(&Out0P->address, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_map_64_t__address__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_map_64_t__address__defined)
		__NDR_convert__float_rep__Reply__vm_map_64_t__address(&Out0P->address, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_map_64_t__address__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_map_64_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_map_64 */
mig_external kern_return_t vm_map_64
(
	vm_map_t target_task,
	vm_address_t *address,
	vm_size_t size,
	vm_address_t mask,
	int flags,
	mem_entry_name_port_t object,
	memory_object_offset_t offset,
	boolean_t copy,
	vm_prot_t cur_protection,
	vm_prot_t max_protection,
	vm_inherit_t inheritance
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
		mach_msg_port_descriptor_t object;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		vm_address_t address;
		vm_size_t size;
		vm_address_t mask;
		int flags;
		memory_object_offset_t offset;
		boolean_t copy;
		vm_prot_t cur_protection;
		vm_prot_t max_protection;
		vm_inherit_t inheritance;
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
		vm_address_t address;
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
		vm_address_t address;
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

#ifdef	__MIG_check__Reply__vm_map_64_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_map_64_t__defined */

	__DeclareSendRpc(3826, "vm_map_64")

#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t objectTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 1;
#if	UseStaticTemplates
	InP->object = objectTemplate;
	InP->object.name = object;
#else	/* UseStaticTemplates */
	InP->object.name = object;
	InP->object.disposition = 19;
	InP->object.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->address = *address;

	InP->size = size;

	InP->mask = mask;

	InP->flags = flags;

	InP->offset = offset;

	InP->copy = copy;

	InP->cur_protection = cur_protection;

	InP->max_protection = max_protection;

	InP->inheritance = inheritance;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3826;

	__BeforeSendRpc(3826, "vm_map_64")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3826, "vm_map_64")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_map_64_t__defined)
	check_result = __MIG_check__Reply__vm_map_64_t((__Reply__vm_map_64_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_map_64_t__defined) */

	*address = Out0P->address;

	return KERN_SUCCESS;
    }
}

#if ( __MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Reply__vm_map_subsystem__
#if !defined(__MIG_check__Reply__vm_purgable_control_t__defined)
#define __MIG_check__Reply__vm_purgable_control_t__defined
#ifndef __NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined
#if	defined(__NDR_convert__int_rep__vm_map__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode(a, f) \
	__NDR_convert__int_rep__vm_map__kern_return_t((kern_return_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__kern_return_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode(a, f) \
	__NDR_convert__int_rep__kern_return_t((kern_return_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined */


#ifndef __NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined
#if	defined(__NDR_convert__int_rep__vm_map__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__int_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_map__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__int_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__int_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined */



#ifndef __NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined
#if	defined(__NDR_convert__char_rep__vm_map__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__char_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_map__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__char_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__char_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined */



#ifndef __NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined
#if	defined(__NDR_convert__float_rep__vm_map__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__float_rep__vm_map__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_map__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__float_rep__vm_map__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined
#define	__NDR_convert__float_rep__Reply__vm_purgable_control_t__state(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined */



mig_internal kern_return_t __MIG_check__Reply__vm_purgable_control_t(__Reply__vm_purgable_control_t *Out0P)
{

	typedef __Reply__vm_purgable_control_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 3930) {
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

#if	defined(__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined) || \
	defined(__NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined)
	if (Out0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined)
		__NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode(&Out0P->RetCode, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_purgable_control_t__RetCode__defined */
#if defined(__NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined)
		__NDR_convert__int_rep__Reply__vm_purgable_control_t__state(&Out0P->state, Out0P->NDR.int_rep);
#endif /* __NDR_convert__int_rep__Reply__vm_purgable_control_t__state__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	0 || \
	defined(__NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined)
	if (Out0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined)
		__NDR_convert__char_rep__Reply__vm_purgable_control_t__state(&Out0P->state, Out0P->NDR.char_rep);
#endif /* __NDR_convert__char_rep__Reply__vm_purgable_control_t__state__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	0 || \
	defined(__NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined)
	if (Out0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined)
		__NDR_convert__float_rep__Reply__vm_purgable_control_t__state(&Out0P->state, Out0P->NDR.float_rep);
#endif /* __NDR_convert__float_rep__Reply__vm_purgable_control_t__state__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__vm_purgable_control_t__defined) */
#endif /* __MIG_check__Reply__vm_map_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine vm_purgable_control */
mig_external kern_return_t vm_purgable_control
(
	vm_map_t target_task,
	vm_address_t address,
	vm_purgable_t control,
	int *state
)
{
    {

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_address_t address;
		vm_purgable_t control;
		int state;
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
		int state;
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
		int state;
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

#ifdef	__MIG_check__Reply__vm_purgable_control_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__vm_purgable_control_t__defined */

	__DeclareSendRpc(3830, "vm_purgable_control")

	InP->NDR = NDR_record;

	InP->address = address;

	InP->control = control;

	InP->state = *state;

	InP->Head.msgh_bits =
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = target_task;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 3830;

	__BeforeSendRpc(3830, "vm_purgable_control")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(3830, "vm_purgable_control")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__vm_purgable_control_t__defined)
	check_result = __MIG_check__Reply__vm_purgable_control_t((__Reply__vm_purgable_control_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__vm_purgable_control_t__defined) */

	*state = Out0P->state;

	return KERN_SUCCESS;
    }
}
