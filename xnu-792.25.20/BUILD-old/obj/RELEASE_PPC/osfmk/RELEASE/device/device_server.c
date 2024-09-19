/*
 * IDENTIFICATION:
 * stub generated Tue Jan 28 08:11:27 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelServer
 */

/* Module iokit */

#define	__MIG_check__Request__iokit_subsystem__ 1
#define	__NDR_convert__Request__iokit_subsystem__ 1

#include "device_server.h"

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


mig_internal novalue _Xio_object_get_class
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_object_conforms_to
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_iterator_next
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_iterator_reset
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_get_matching_services
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_property
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_create_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_iterator_enter_entry
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_iterator_exit_entry
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_from_path
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_name
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_properties
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_property_bytes
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_child_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_parent_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_open
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_close
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_get_service
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_set_notification_port
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_map_memory
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_add_client
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_set_properties
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_method_scalarI_scalarO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_method_scalarI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_method_scalarI_structureI
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_method_structureI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_path
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_get_root_entry
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_set_properties
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_in_plane
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_object_get_retain_count
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_get_busy_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_wait_quiet
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_create_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_iterator_is_valid
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_make_matching
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_catalog_send_data
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_catalog_terminate
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_catalog_get_data
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_catalog_get_gen_count
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_catalog_module_loaded
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_catalog_reset
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_request_probe
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_name_in_plane
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_match_property_table
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_async_method_scalarI_scalarO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_async_method_scalarI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_async_method_scalarI_structureI
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_async_method_structureI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_add_notification
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_add_interest_notification
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_acknowledge_notification
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_get_notification_semaphore
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_connect_unmap_memory
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_location_in_plane
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_registry_entry_get_property_recursively
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_get_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_get_matching_services_ool
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_match_property_table_ool
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_add_notification_ool
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_object_get_superclass
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_object_get_bundle_identifier
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xio_service_open_extended
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_object_get_class_t__defined)
#define __MIG_check__Request__io_object_get_class_t__defined

mig_internal kern_return_t __MIG_check__Request__io_object_get_class_t(__Request__io_object_get_class_t *In0P)
{

	typedef __Request__io_object_get_class_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_object_get_class_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_class */
mig_internal novalue _Xio_object_get_class
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_object_get_class_t __Request;
	typedef __Reply__io_object_get_class_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_object_get_class_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_object_get_class_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t object;

	__DeclareRcvRpc(2800, "io_object_get_class")
	__BeforeRcvRpc(2800, "io_object_get_class")

#if	defined(__MIG_check__Request__io_object_get_class_t__defined)
	check_result = __MIG_check__Request__io_object_get_class_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_object_get_class_t__defined) */

	object = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_object_get_class(object, OutP->className);
	iokit_remove_reference(object);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->classNameCnt = strlen(OutP->className) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 128) + (_WALIGN_((OutP->classNameCnt + 3) & ~3));

	__AfterRcvRpc(2800, "io_object_get_class")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_object_conforms_to_t__defined)
#define __MIG_check__Request__io_object_conforms_to_t__defined
#ifndef __NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__className(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__className(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined */

#ifndef __NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined
#define	__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined
#define	__NDR_convert__char_rep__Request__io_object_conforms_to_t__className(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined
#define	__NDR_convert__char_rep__Request__io_object_conforms_to_t__className(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined */

#ifndef __NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined
#define	__NDR_convert__float_rep__Request__io_object_conforms_to_t__className(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined
#define	__NDR_convert__float_rep__Request__io_object_conforms_to_t__className(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined */


mig_internal kern_return_t __MIG_check__Request__io_object_conforms_to_t(__Request__io_object_conforms_to_t *In0P)
{

	typedef __Request__io_object_conforms_to_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt(&In0P->classNameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->classNameCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined) || \
	defined(__NDR_convert__int_rep__Request__io_object_conforms_to_t__classNameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined)
		__NDR_convert__int_rep__Request__io_object_conforms_to_t__className(&In0P->className, In0P->NDR.int_rep, In0P->classNameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_object_conforms_to_t__className__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined)
		__NDR_convert__char_rep__Request__io_object_conforms_to_t__className(&In0P->className, In0P->NDR.char_rep, In0P->classNameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_object_conforms_to_t__className__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined)
		__NDR_convert__float_rep__Request__io_object_conforms_to_t__className(&In0P->className, In0P->NDR.float_rep, In0P->classNameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_object_conforms_to_t__className__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_object_conforms_to_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_conforms_to */
mig_internal novalue _Xio_object_conforms_to
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t classNameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t classNameCnt;
		char className[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_object_conforms_to_t __Request;
	typedef __Reply__io_object_conforms_to_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_object_conforms_to_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_object_conforms_to_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t object;

	__DeclareRcvRpc(2801, "io_object_conforms_to")
	__BeforeRcvRpc(2801, "io_object_conforms_to")

#if	defined(__MIG_check__Request__io_object_conforms_to_t__defined)
	check_result = __MIG_check__Request__io_object_conforms_to_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_object_conforms_to_t__defined) */

	object = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_object_conforms_to(object, In0P->className, &OutP->conforms);
	iokit_remove_reference(object);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2801, "io_object_conforms_to")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_iterator_next_t__defined)
#define __MIG_check__Request__io_iterator_next_t__defined

mig_internal kern_return_t __MIG_check__Request__io_iterator_next_t(__Request__io_iterator_next_t *In0P)
{

	typedef __Request__io_iterator_next_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_iterator_next_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_iterator_next */
mig_internal novalue _Xio_iterator_next
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_iterator_next_t __Request;
	typedef __Reply__io_iterator_next_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_iterator_next_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_iterator_next_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t objectTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t objectTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t iterator;
	io_object_t object;

	__DeclareRcvRpc(2802, "io_iterator_next")
	__BeforeRcvRpc(2802, "io_iterator_next")

#if	defined(__MIG_check__Request__io_iterator_next_t__defined)
	check_result = __MIG_check__Request__io_iterator_next_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_iterator_next_t__defined) */

#if	UseStaticTemplates
	OutP->object = objectTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->object.disposition = 17;
#else
	OutP->object.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->object.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	iterator = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_iterator_next(iterator, &object);
	iokit_remove_reference(iterator);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->object.name = (mach_port_t)iokit_make_object_port(object);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2802, "io_iterator_next")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_iterator_reset_t__defined)
#define __MIG_check__Request__io_iterator_reset_t__defined

mig_internal kern_return_t __MIG_check__Request__io_iterator_reset_t(__Request__io_iterator_reset_t *In0P)
{

	typedef __Request__io_iterator_reset_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_iterator_reset_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_iterator_reset */
mig_internal novalue _Xio_iterator_reset
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_iterator_reset_t __Request;
	typedef __Reply__io_iterator_reset_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_iterator_reset_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_iterator_reset_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t iterator;

	__DeclareRcvRpc(2803, "io_iterator_reset")
	__BeforeRcvRpc(2803, "io_iterator_reset")

#if	defined(__MIG_check__Request__io_iterator_reset_t__defined)
	check_result = __MIG_check__Request__io_iterator_reset_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_iterator_reset_t__defined) */

	iterator = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_iterator_reset(iterator);
	iokit_remove_reference(iterator);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2803, "io_iterator_reset")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_get_matching_services_t__defined)
#define __MIG_check__Request__io_service_get_matching_services_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_get_matching_services_t(__Request__io_service_get_matching_services_t *In0P)
{

	typedef __Request__io_service_get_matching_services_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 512)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt(&In0P->matchingCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 512) + (_WALIGN_(In0P->matchingCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined)
		__NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching(&In0P->matching, In0P->NDR.int_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_get_matching_services_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined)
		__NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching(&In0P->matching, In0P->NDR.char_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_get_matching_services_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined)
		__NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching(&In0P->matching, In0P->NDR.float_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_get_matching_services_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_get_matching_services_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_matching_services */
mig_internal novalue _Xio_service_get_matching_services
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_get_matching_services_t __Request;
	typedef __Reply__io_service_get_matching_services_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_get_matching_services_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_get_matching_services_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t existingTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t existingTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t existing;

	__DeclareRcvRpc(2804, "io_service_get_matching_services")
	__BeforeRcvRpc(2804, "io_service_get_matching_services")

#if	defined(__MIG_check__Request__io_service_get_matching_services_t__defined)
	check_result = __MIG_check__Request__io_service_get_matching_services_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_get_matching_services_t__defined) */

#if	UseStaticTemplates
	OutP->existing = existingTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->existing.disposition = 17;
#else
	OutP->existing.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->existing.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_service_get_matching_services(In0P->Head.msgh_request_port, In0P->matching, &existing);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->existing.name = (mach_port_t)iokit_make_object_port(existing);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2804, "io_service_get_matching_services")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_property_t__defined)
#define __MIG_check__Request__io_registry_entry_get_property_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_property_t(__Request__io_registry_entry_get_property_t *In0P)
{

	typedef __Request__io_registry_entry_get_property_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt(&In0P->property_nameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->property_nameCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name(&In0P->property_name, In0P->NDR.int_rep, In0P->property_nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_t__property_name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name(&In0P->property_name, In0P->NDR.char_rep, In0P->property_nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_property_t__property_name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name(&In0P->property_name, In0P->NDR.float_rep, In0P->property_nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_property_t__property_name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_property_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_property */
mig_internal novalue _Xio_registry_entry_get_property
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_property_t __Request;
	typedef __Reply__io_registry_entry_get_property_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_property_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_property_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;

	__DeclareRcvRpc(2805, "io_registry_entry_get_property")
	__BeforeRcvRpc(2805, "io_registry_entry_get_property")

#if	defined(__MIG_check__Request__io_registry_entry_get_property_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_property_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_property_t__defined) */

#if	UseStaticTemplates
	OutP->properties = propertiesTemplate;
#else	/* UseStaticTemplates */
	OutP->properties.deallocate =  FALSE;
	OutP->properties.copy = MACH_MSG_PHYSICAL_COPY;
	OutP->properties.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_registry_entry_get_property(registry_entry, In0P->property_name, (io_buf_ptr_t *)&(OutP->properties.address), &OutP->propertiesCnt);
	iokit_remove_reference(registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->properties.size = OutP->propertiesCnt;


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2805, "io_registry_entry_get_property")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_create_iterator_t__defined)
#define __MIG_check__Request__io_registry_create_iterator_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_create_iterator_t(__Request__io_registry_create_iterator_t *In0P, __Request__io_registry_create_iterator_t **In1PP)
{

	typedef __Request__io_registry_create_iterator_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->planeCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if	defined(__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_create_iterator_t__planeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_create_iterator_t__plane__defined */
#if defined(__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined)
		__NDR_convert__int_rep__Request__io_registry_create_iterator_t__options(&In1P->options, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_create_iterator_t__options__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_create_iterator_t__plane__defined */
#if defined(__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined)
		__NDR_convert__char_rep__Request__io_registry_create_iterator_t__options(&In1P->options, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_registry_create_iterator_t__options__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_create_iterator_t__plane__defined */
#if defined(__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined)
		__NDR_convert__float_rep__Request__io_registry_create_iterator_t__options(&In1P->options, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_registry_create_iterator_t__options__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_create_iterator_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_create_iterator */
mig_internal novalue _Xio_registry_create_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		int options;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_create_iterator_t __Request;
	typedef __Reply__io_registry_create_iterator_t Reply;

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
#ifdef	__MIG_check__Request__io_registry_create_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_create_iterator_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t iterator;

	__DeclareRcvRpc(2806, "io_registry_create_iterator")
	__BeforeRcvRpc(2806, "io_registry_create_iterator")

#if	defined(__MIG_check__Request__io_registry_create_iterator_t__defined)
	check_result = __MIG_check__Request__io_registry_create_iterator_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_create_iterator_t__defined) */

#if	UseStaticTemplates
	OutP->iterator = iteratorTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->iterator.disposition = 17;
#else
	OutP->iterator.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->iterator.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_registry_create_iterator(In0P->Head.msgh_request_port, In0P->plane, In1P->options, &iterator);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->iterator.name = (mach_port_t)iokit_make_object_port(iterator);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2806, "io_registry_create_iterator")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_iterator_enter_entry_t__defined)
#define __MIG_check__Request__io_registry_iterator_enter_entry_t__defined

mig_internal kern_return_t __MIG_check__Request__io_registry_iterator_enter_entry_t(__Request__io_registry_iterator_enter_entry_t *In0P)
{

	typedef __Request__io_registry_iterator_enter_entry_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_iterator_enter_entry_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_iterator_enter_entry */
mig_internal novalue _Xio_registry_iterator_enter_entry
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_iterator_enter_entry_t __Request;
	typedef __Reply__io_registry_iterator_enter_entry_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_iterator_enter_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_iterator_enter_entry_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t iterator;

	__DeclareRcvRpc(2807, "io_registry_iterator_enter_entry")
	__BeforeRcvRpc(2807, "io_registry_iterator_enter_entry")

#if	defined(__MIG_check__Request__io_registry_iterator_enter_entry_t__defined)
	check_result = __MIG_check__Request__io_registry_iterator_enter_entry_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_iterator_enter_entry_t__defined) */

	iterator = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_iterator_enter_entry(iterator);
	iokit_remove_reference(iterator);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2807, "io_registry_iterator_enter_entry")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_iterator_exit_entry_t__defined)
#define __MIG_check__Request__io_registry_iterator_exit_entry_t__defined

mig_internal kern_return_t __MIG_check__Request__io_registry_iterator_exit_entry_t(__Request__io_registry_iterator_exit_entry_t *In0P)
{

	typedef __Request__io_registry_iterator_exit_entry_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_iterator_exit_entry_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_iterator_exit_entry */
mig_internal novalue _Xio_registry_iterator_exit_entry
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_iterator_exit_entry_t __Request;
	typedef __Reply__io_registry_iterator_exit_entry_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_iterator_exit_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_iterator_exit_entry_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t iterator;

	__DeclareRcvRpc(2808, "io_registry_iterator_exit_entry")
	__BeforeRcvRpc(2808, "io_registry_iterator_exit_entry")

#if	defined(__MIG_check__Request__io_registry_iterator_exit_entry_t__defined)
	check_result = __MIG_check__Request__io_registry_iterator_exit_entry_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_iterator_exit_entry_t__defined) */

	iterator = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_iterator_exit_entry(iterator);
	iokit_remove_reference(iterator);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2808, "io_registry_iterator_exit_entry")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_from_path_t__defined)
#define __MIG_check__Request__io_registry_entry_from_path_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined
#if	defined(__NDR_convert__int_rep__iokit__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path(a, f, c) \
	__NDR_convert__int_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path(a, f, c) \
	__NDR_convert__int_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined
#if	defined(__NDR_convert__char_rep__iokit__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path(a, f, c) \
	__NDR_convert__char_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path(a, f, c) \
	__NDR_convert__char_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined
#if	defined(__NDR_convert__float_rep__iokit__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path(a, f, c) \
	__NDR_convert__float_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path(a, f, c) \
	__NDR_convert__float_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_from_path_t(__Request__io_registry_entry_from_path_t *In0P)
{

	typedef __Request__io_registry_entry_from_path_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 512)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt(&In0P->pathCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 512) + (_WALIGN_(In0P->pathCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__pathCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path(&In0P->path, In0P->NDR.int_rep, In0P->pathCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_from_path_t__path__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path(&In0P->path, In0P->NDR.char_rep, In0P->pathCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_from_path_t__path__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path(&In0P->path, In0P->NDR.float_rep, In0P->pathCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_from_path_t__path__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_from_path_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_from_path */
mig_internal novalue _Xio_registry_entry_from_path
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t pathOffset; /* MiG doesn't use it */
		mach_msg_type_number_t pathCnt;
		char path[512];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_from_path_t __Request;
	typedef __Reply__io_registry_entry_from_path_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_from_path_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_from_path_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t registry_entryTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t registry_entryTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;

	__DeclareRcvRpc(2809, "io_registry_entry_from_path")
	__BeforeRcvRpc(2809, "io_registry_entry_from_path")

#if	defined(__MIG_check__Request__io_registry_entry_from_path_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_from_path_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_from_path_t__defined) */

#if	UseStaticTemplates
	OutP->registry_entry = registry_entryTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->registry_entry.disposition = 17;
#else
	OutP->registry_entry.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->registry_entry.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_registry_entry_from_path(In0P->Head.msgh_request_port, In0P->path, &registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->registry_entry.name = (mach_port_t)iokit_make_object_port(registry_entry);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2809, "io_registry_entry_from_path")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_name_t__defined)
#define __MIG_check__Request__io_registry_entry_get_name_t__defined

mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_name_t(__Request__io_registry_entry_get_name_t *In0P)
{

	typedef __Request__io_registry_entry_get_name_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_name_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_name */
mig_internal novalue _Xio_registry_entry_get_name
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_name_t __Request;
	typedef __Reply__io_registry_entry_get_name_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_name_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_name_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2810, "io_registry_entry_get_name")
	__BeforeRcvRpc(2810, "io_registry_entry_get_name")

#if	defined(__MIG_check__Request__io_registry_entry_get_name_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_name_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_name_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_entry_get_name(registry_entry, OutP->name);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->nameCnt = strlen(OutP->name) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 128) + (_WALIGN_((OutP->nameCnt + 3) & ~3));

	__AfterRcvRpc(2810, "io_registry_entry_get_name")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_properties_t__defined)
#define __MIG_check__Request__io_registry_entry_get_properties_t__defined

mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_properties_t(__Request__io_registry_entry_get_properties_t *In0P)
{

	typedef __Request__io_registry_entry_get_properties_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_properties_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_properties */
mig_internal novalue _Xio_registry_entry_get_properties
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_properties_t __Request;
	typedef __Reply__io_registry_entry_get_properties_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_properties_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_properties_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;

	__DeclareRcvRpc(2811, "io_registry_entry_get_properties")
	__BeforeRcvRpc(2811, "io_registry_entry_get_properties")

#if	defined(__MIG_check__Request__io_registry_entry_get_properties_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_properties_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_properties_t__defined) */

#if	UseStaticTemplates
	OutP->properties = propertiesTemplate;
#else	/* UseStaticTemplates */
	OutP->properties.deallocate =  FALSE;
	OutP->properties.copy = MACH_MSG_PHYSICAL_COPY;
	OutP->properties.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_registry_entry_get_properties(registry_entry, (io_buf_ptr_t *)&(OutP->properties.address), &OutP->propertiesCnt);
	iokit_remove_reference(registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->properties.size = OutP->propertiesCnt;


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2811, "io_registry_entry_get_properties")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_property_bytes_t__defined)
#define __MIG_check__Request__io_registry_entry_get_property_bytes_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_property_bytes_t(__Request__io_registry_entry_get_property_bytes_t *In0P, __Request__io_registry_entry_get_property_bytes_t **In1PP)
{

	typedef __Request__io_registry_entry_get_property_bytes_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt(&In0P->property_nameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->property_nameCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_nameCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name(&In0P->property_name, In0P->NDR.int_rep, In0P->property_nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined */
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt(&In1P->dataCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_bytes_t__dataCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name(&In0P->property_name, In0P->NDR.char_rep, In0P->property_nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name(&In0P->property_name, In0P->NDR.float_rep, In0P->property_nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_property_bytes_t__property_name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_property_bytes_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_property_bytes */
mig_internal novalue _Xio_registry_entry_get_property_bytes
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		mach_msg_type_number_t dataCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_property_bytes_t __Request;
	typedef __Reply__io_registry_entry_get_property_bytes_t Reply;

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
#ifdef	__MIG_check__Request__io_registry_entry_get_property_bytes_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_property_bytes_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2812, "io_registry_entry_get_property_bytes")
	__BeforeRcvRpc(2812, "io_registry_entry_get_property_bytes")

#if	defined(__MIG_check__Request__io_registry_entry_get_property_bytes_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_property_bytes_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_property_bytes_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->dataCnt = 4096;
	if (In1P->dataCnt < OutP->dataCnt)
		OutP->dataCnt = In1P->dataCnt;

	OutP->RetCode = is_io_registry_entry_get_property_bytes(registry_entry, In0P->property_name, OutP->data, &OutP->dataCnt);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 4096) + (_WALIGN_((OutP->dataCnt + 3) & ~3));

	__AfterRcvRpc(2812, "io_registry_entry_get_property_bytes")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_child_iterator_t__defined)
#define __MIG_check__Request__io_registry_entry_get_child_iterator_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_child_iterator_t(__Request__io_registry_entry_get_child_iterator_t *In0P)
{

	typedef __Request__io_registry_entry_get_child_iterator_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->planeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_child_iterator_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_child_iterator_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_child_iterator */
mig_internal novalue _Xio_registry_entry_get_child_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_child_iterator_t __Request;
	typedef __Reply__io_registry_entry_get_child_iterator_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_child_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_child_iterator_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;
	io_object_t iterator;

	__DeclareRcvRpc(2813, "io_registry_entry_get_child_iterator")
	__BeforeRcvRpc(2813, "io_registry_entry_get_child_iterator")

#if	defined(__MIG_check__Request__io_registry_entry_get_child_iterator_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_child_iterator_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_child_iterator_t__defined) */

#if	UseStaticTemplates
	OutP->iterator = iteratorTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->iterator.disposition = 17;
#else
	OutP->iterator.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->iterator.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_registry_entry_get_child_iterator(registry_entry, In0P->plane, &iterator);
	iokit_remove_reference(registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->iterator.name = (mach_port_t)iokit_make_object_port(iterator);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2813, "io_registry_entry_get_child_iterator")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined)
#define __MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_parent_iterator_t(__Request__io_registry_entry_get_parent_iterator_t *In0P)
{

	typedef __Request__io_registry_entry_get_parent_iterator_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->planeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_parent_iterator_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_parent_iterator */
mig_internal novalue _Xio_registry_entry_get_parent_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_parent_iterator_t __Request;
	typedef __Reply__io_registry_entry_get_parent_iterator_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;
	io_object_t iterator;

	__DeclareRcvRpc(2814, "io_registry_entry_get_parent_iterator")
	__BeforeRcvRpc(2814, "io_registry_entry_get_parent_iterator")

#if	defined(__MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_parent_iterator_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_parent_iterator_t__defined) */

#if	UseStaticTemplates
	OutP->iterator = iteratorTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->iterator.disposition = 17;
#else
	OutP->iterator.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->iterator.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_registry_entry_get_parent_iterator(registry_entry, In0P->plane, &iterator);
	iokit_remove_reference(registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->iterator.name = (mach_port_t)iokit_make_object_port(iterator);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2814, "io_registry_entry_get_parent_iterator")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_open_t__defined)
#define __MIG_check__Request__io_service_open_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_t__connect_type(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_open_t(__Request__io_service_open_t *In0P)
{

	typedef __Request__io_service_open_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->owningTask.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->owningTask.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined)
		__NDR_convert__int_rep__Request__io_service_open_t__connect_type(&In0P->connect_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_open_t__connect_type__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined)
		__NDR_convert__char_rep__Request__io_service_open_t__connect_type(&In0P->connect_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_open_t__connect_type__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined)
		__NDR_convert__float_rep__Request__io_service_open_t__connect_type(&In0P->connect_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_open_t__connect_type__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_open_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_open */
mig_internal novalue _Xio_service_open
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t owningTask;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int connect_type;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_open_t __Request;
	typedef __Reply__io_service_open_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_open_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_open_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t connectionTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t connectionTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t service;
	task_t owningTask;
	io_connect_t connection;

	__DeclareRcvRpc(2815, "io_service_open")
	__BeforeRcvRpc(2815, "io_service_open")

#if	defined(__MIG_check__Request__io_service_open_t__defined)
	check_result = __MIG_check__Request__io_service_open_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_open_t__defined) */

#if	UseStaticTemplates
	OutP->connection = connectionTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->connection.disposition = 17;
#else
	OutP->connection.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->connection.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	owningTask = convert_port_to_task(In0P->owningTask.name);

	RetCode = is_io_service_open(service, owningTask, In0P->connect_type, &connection);
	task_deallocate(owningTask);
	iokit_remove_reference(service);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode

	if (IP_VALID((ipc_port_t)In0P->owningTask.name))
		ipc_port_release_send((ipc_port_t)In0P->owningTask.name);
#endif /* __MigKernelSpecificCode */
	OutP->connection.name = (mach_port_t)iokit_make_connect_port(connection);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2815, "io_service_open")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_close_t__defined)
#define __MIG_check__Request__io_service_close_t__defined

mig_internal kern_return_t __MIG_check__Request__io_service_close_t(__Request__io_service_close_t *In0P)
{

	typedef __Request__io_service_close_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_close_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_close */
mig_internal novalue _Xio_service_close
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_close_t __Request;
	typedef __Reply__io_service_close_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_close_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_close_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2816, "io_service_close")
	__BeforeRcvRpc(2816, "io_service_close")

#if	defined(__MIG_check__Request__io_service_close_t__defined)
	check_result = __MIG_check__Request__io_service_close_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_close_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_close(connection);
	iokit_remove_reference(connection);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2816, "io_service_close")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_get_service_t__defined)
#define __MIG_check__Request__io_connect_get_service_t__defined

mig_internal kern_return_t __MIG_check__Request__io_connect_get_service_t(__Request__io_connect_get_service_t *In0P)
{

	typedef __Request__io_connect_get_service_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_get_service_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_get_service */
mig_internal novalue _Xio_connect_get_service
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_get_service_t __Request;
	typedef __Reply__io_connect_get_service_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_get_service_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_get_service_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t serviceTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t serviceTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_connect_t connection;
	io_object_t service;

	__DeclareRcvRpc(2817, "io_connect_get_service")
	__BeforeRcvRpc(2817, "io_connect_get_service")

#if	defined(__MIG_check__Request__io_connect_get_service_t__defined)
	check_result = __MIG_check__Request__io_connect_get_service_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_get_service_t__defined) */

#if	UseStaticTemplates
	OutP->service = serviceTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->service.disposition = 17;
#else
	OutP->service.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->service.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	RetCode = is_io_connect_get_service(connection, &service);
	iokit_remove_reference(connection);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->service.name = (mach_port_t)iokit_make_object_port(service);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2817, "io_connect_get_service")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_set_notification_port_t__defined)
#define __MIG_check__Request__io_connect_set_notification_port_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_set_notification_port_t(__Request__io_connect_set_notification_port_t *In0P)
{

	typedef __Request__io_connect_set_notification_port_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined)
		__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type(&In0P->notification_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_set_notification_port_t__notification_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined)
		__NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference(&In0P->reference, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_set_notification_port_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined)
		__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type(&In0P->notification_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_set_notification_port_t__notification_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined)
		__NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference(&In0P->reference, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_set_notification_port_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined)
		__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type(&In0P->notification_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_set_notification_port_t__notification_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined)
		__NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference(&In0P->reference, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_set_notification_port_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_set_notification_port_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_set_notification_port */
mig_internal novalue _Xio_connect_set_notification_port
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int notification_type;
		int reference;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_set_notification_port_t __Request;
	typedef __Reply__io_connect_set_notification_port_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_set_notification_port_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_set_notification_port_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2818, "io_connect_set_notification_port")
	__BeforeRcvRpc(2818, "io_connect_set_notification_port")

#if	defined(__MIG_check__Request__io_connect_set_notification_port_t__defined)
	check_result = __MIG_check__Request__io_connect_set_notification_port_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_set_notification_port_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_connect_set_notification_port(connection, In0P->notification_type, In0P->port.name, In0P->reference);
	iokit_remove_reference(connection);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2818, "io_connect_set_notification_port")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_map_memory_t__defined)
#define __MIG_check__Request__io_connect_map_memory_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#if	defined(__NDR_convert__int_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#if	defined(__NDR_convert__int_rep__iokit__vm_size_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__iokit__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#if	defined(__NDR_convert__char_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#if	defined(__NDR_convert__char_rep__iokit__vm_size_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__iokit__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#if	defined(__NDR_convert__float_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#if	defined(__NDR_convert__float_rep__iokit__vm_size_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__iokit__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined
#define	__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_map_memory_t(__Request__io_connect_map_memory_t *In0P)
{

	typedef __Request__io_connect_map_memory_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->into_task.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->into_task.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined)
		__NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type(&In0P->memory_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_map_memory_t__memory_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined)
		__NDR_convert__int_rep__Request__io_connect_map_memory_t__address(&In0P->address, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_map_memory_t__address__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined)
		__NDR_convert__int_rep__Request__io_connect_map_memory_t__size(&In0P->size, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_map_memory_t__size__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined)
		__NDR_convert__int_rep__Request__io_connect_map_memory_t__flags(&In0P->flags, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_map_memory_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined)
		__NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type(&In0P->memory_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_map_memory_t__memory_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined)
		__NDR_convert__char_rep__Request__io_connect_map_memory_t__address(&In0P->address, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_map_memory_t__address__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined)
		__NDR_convert__char_rep__Request__io_connect_map_memory_t__size(&In0P->size, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_map_memory_t__size__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined)
		__NDR_convert__char_rep__Request__io_connect_map_memory_t__flags(&In0P->flags, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_map_memory_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined)
		__NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type(&In0P->memory_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_map_memory_t__memory_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined)
		__NDR_convert__float_rep__Request__io_connect_map_memory_t__address(&In0P->address, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_map_memory_t__address__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined)
		__NDR_convert__float_rep__Request__io_connect_map_memory_t__size(&In0P->size, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_map_memory_t__size__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined)
		__NDR_convert__float_rep__Request__io_connect_map_memory_t__flags(&In0P->flags, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_map_memory_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_map_memory_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_map_memory */
mig_internal novalue _Xio_connect_map_memory
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int memory_type;
		vm_address_t address;
		vm_size_t size;
		int flags;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_map_memory_t __Request;
	typedef __Reply__io_connect_map_memory_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_map_memory_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_map_memory_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;
	task_t into_task;

	__DeclareRcvRpc(2819, "io_connect_map_memory")
	__BeforeRcvRpc(2819, "io_connect_map_memory")

#if	defined(__MIG_check__Request__io_connect_map_memory_t__defined)
	check_result = __MIG_check__Request__io_connect_map_memory_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_map_memory_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	into_task = convert_port_to_task(In0P->into_task.name);

	OutP->RetCode = is_io_connect_map_memory(connection, In0P->memory_type, into_task, &In0P->address, &In0P->size, In0P->flags);
	task_deallocate(into_task);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode

	if (IP_VALID((ipc_port_t)In0P->into_task.name))
		ipc_port_release_send((ipc_port_t)In0P->into_task.name);
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->address = In0P->address;

	OutP->size = In0P->size;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2819, "io_connect_map_memory")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_add_client_t__defined)
#define __MIG_check__Request__io_connect_add_client_t__defined

mig_internal kern_return_t __MIG_check__Request__io_connect_add_client_t(__Request__io_connect_add_client_t *In0P)
{

	typedef __Request__io_connect_add_client_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->connect_to.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->connect_to.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_add_client_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_add_client */
mig_internal novalue _Xio_connect_add_client
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t connect_to;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_add_client_t __Request;
	typedef __Reply__io_connect_add_client_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_add_client_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_add_client_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;
	io_connect_t connect_to;

	__DeclareRcvRpc(2820, "io_connect_add_client")
	__BeforeRcvRpc(2820, "io_connect_add_client")

#if	defined(__MIG_check__Request__io_connect_add_client_t__defined)
	check_result = __MIG_check__Request__io_connect_add_client_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_add_client_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	connect_to = iokit_lookup_connect_port(In0P->connect_to.name);

	OutP->RetCode = is_io_connect_add_client(connection, connect_to);
	iokit_remove_reference(connect_to);
	iokit_remove_reference(connection);
#if	__MigKernelSpecificCode
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	if (IP_VALID((ipc_port_t)In0P->connect_to.name))
		ipc_port_release_send((ipc_port_t)In0P->connect_to.name);
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2820, "io_connect_add_client")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_set_properties_t__defined)
#define __MIG_check__Request__io_connect_set_properties_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined
#define	__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined
#define	__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_set_properties_t(__Request__io_connect_set_properties_t *In0P)
{

	typedef __Request__io_connect_set_properties_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->properties.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined)
		__NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt(&In0P->propertiesCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_set_properties_t__propertiesCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined)
		__NDR_convert__int_rep__Request__io_connect_set_properties_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.int_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__int_rep__Request__io_connect_set_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined)
		__NDR_convert__char_rep__Request__io_connect_set_properties_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.char_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__char_rep__Request__io_connect_set_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined)
		__NDR_convert__float_rep__Request__io_connect_set_properties_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.float_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__float_rep__Request__io_connect_set_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_set_properties_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_set_properties */
mig_internal novalue _Xio_connect_set_properties
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_set_properties_t __Request;
	typedef __Reply__io_connect_set_properties_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_set_properties_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_set_properties_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2821, "io_connect_set_properties")
	__BeforeRcvRpc(2821, "io_connect_set_properties")

#if	defined(__MIG_check__Request__io_connect_set_properties_t__defined)
	check_result = __MIG_check__Request__io_connect_set_properties_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_set_properties_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_connect_set_properties(connection, (io_buf_ptr_t)(In0P->properties.address), In0P->propertiesCnt, &OutP->result);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2821, "io_connect_set_properties")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined)
#define __MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_method_scalarI_scalarO_t(__Request__io_connect_method_scalarI_scalarO_t *In0P, __Request__io_connect_method_scalarI_scalarO_t **In1PP)
{

	typedef __Request__io_connect_method_scalarI_scalarO_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 64)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt(&In0P->inputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined */
	msgh_size_delta = (4 * In0P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 64) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 64);

#if	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector(&In0P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input(&In0P->input, In0P->NDR.int_rep, In0P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt(&In1P->outputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_scalarO_t__outputCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector(&In0P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input(&In0P->input, In0P->NDR.char_rep, In0P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector(&In0P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input(&In0P->input, In0P->NDR.float_rep, In0P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_scalarO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_scalarI_scalarO */
mig_internal novalue _Xio_connect_method_scalarI_scalarO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_method_scalarI_scalarO_t __Request;
	typedef __Reply__io_connect_method_scalarI_scalarO_t Reply;

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
#ifdef	__MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2822, "io_connect_method_scalarI_scalarO")
	__BeforeRcvRpc(2822, "io_connect_method_scalarI_scalarO")

#if	defined(__MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined)
	check_result = __MIG_check__Request__io_connect_method_scalarI_scalarO_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_method_scalarI_scalarO_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->outputCnt = 16;
	if (In1P->outputCnt < OutP->outputCnt)
		OutP->outputCnt = In1P->outputCnt;

	OutP->RetCode = is_io_connect_method_scalarI_scalarO(connection, In0P->selector, In0P->input, In0P->inputCnt, OutP->output, &OutP->outputCnt);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 64) + (((4 * OutP->outputCnt)));

	__AfterRcvRpc(2822, "io_connect_method_scalarI_scalarO")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_method_scalarI_structureO_t__defined)
#define __MIG_check__Request__io_connect_method_scalarI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_method_scalarI_structureO_t(__Request__io_connect_method_scalarI_structureO_t *In0P, __Request__io_connect_method_scalarI_structureO_t **In1PP)
{

	typedef __Request__io_connect_method_scalarI_structureO_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 64)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt(&In0P->inputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined */
	msgh_size_delta = (4 * In0P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 64) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 64);

#if	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector(&In0P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input(&In0P->input, In0P->NDR.int_rep, In0P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt(&In1P->outputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureO_t__outputCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector(&In0P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input(&In0P->input, In0P->NDR.char_rep, In0P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector(&In0P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input(&In0P->input, In0P->NDR.float_rep, In0P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_method_scalarI_structureO_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_scalarI_structureO */
mig_internal novalue _Xio_connect_method_scalarI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_method_scalarI_structureO_t __Request;
	typedef __Reply__io_connect_method_scalarI_structureO_t Reply;

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
#ifdef	__MIG_check__Request__io_connect_method_scalarI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_method_scalarI_structureO_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2823, "io_connect_method_scalarI_structureO")
	__BeforeRcvRpc(2823, "io_connect_method_scalarI_structureO")

#if	defined(__MIG_check__Request__io_connect_method_scalarI_structureO_t__defined)
	check_result = __MIG_check__Request__io_connect_method_scalarI_structureO_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_method_scalarI_structureO_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->outputCnt = 4096;
	if (In1P->outputCnt < OutP->outputCnt)
		OutP->outputCnt = In1P->outputCnt;

	OutP->RetCode = is_io_connect_method_scalarI_structureO(connection, In0P->selector, In0P->input, In0P->inputCnt, OutP->output, &OutP->outputCnt);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 4096) + (_WALIGN_((OutP->outputCnt + 3) & ~3));

	__AfterRcvRpc(2823, "io_connect_method_scalarI_structureO")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_method_scalarI_structureI_t__defined)
#define __MIG_check__Request__io_connect_method_scalarI_structureI_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_method_scalarI_structureI_t(__Request__io_connect_method_scalarI_structureI_t *In0P, __Request__io_connect_method_scalarI_structureI_t **In1PP)
{

	typedef __Request__io_connect_method_scalarI_structureI_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4160)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt(&In0P->inputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined */
	msgh_size_delta = (4 * In0P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4160) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 64);

#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt(&In1P->inputStructCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 4160) + (_WALIGN_(In1P->inputStructCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStructCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector(&In0P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input(&In0P->input, In0P->NDR.int_rep, In0P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined)
		__NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(&In1P->inputStruct, In0P->NDR.int_rep, In1P->inputStructCnt);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector(&In0P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input(&In0P->input, In0P->NDR.char_rep, In0P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__input__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined)
		__NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(&In1P->inputStruct, In0P->NDR.char_rep, In1P->inputStructCnt);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector(&In0P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input(&In0P->input, In0P->NDR.float_rep, In0P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__input__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined)
		__NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct(&In1P->inputStruct, In0P->NDR.float_rep, In1P->inputStructCnt);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_scalarI_structureI_t__inputStruct__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_method_scalarI_structureI_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_scalarI_structureI */
mig_internal novalue _Xio_connect_method_scalarI_structureI
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t inputStructCnt;
		char inputStruct[4096];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_method_scalarI_structureI_t __Request;
	typedef __Reply__io_connect_method_scalarI_structureI_t Reply;

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
#ifdef	__MIG_check__Request__io_connect_method_scalarI_structureI_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_method_scalarI_structureI_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2824, "io_connect_method_scalarI_structureI")
	__BeforeRcvRpc(2824, "io_connect_method_scalarI_structureI")

#if	defined(__MIG_check__Request__io_connect_method_scalarI_structureI_t__defined)
	check_result = __MIG_check__Request__io_connect_method_scalarI_structureI_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_method_scalarI_structureI_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_connect_method_scalarI_structureI(connection, In0P->selector, In0P->input, In0P->inputCnt, In1P->inputStruct, In1P->inputStructCnt);
	iokit_remove_reference(connection);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2824, "io_connect_method_scalarI_structureI")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_method_structureI_structureO_t__defined)
#define __MIG_check__Request__io_connect_method_structureI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_method_structureI_structureO_t(__Request__io_connect_method_structureI_structureO_t *In0P, __Request__io_connect_method_structureI_structureO_t **In1PP)
{

	typedef __Request__io_connect_method_structureI_structureO_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4096)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt(&In0P->inputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 4096) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 4096);

#if	defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined)
		__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector(&In0P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined)
		__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input(&In0P->input, In0P->NDR.int_rep, In0P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined)
		__NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt(&In1P->outputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_method_structureI_structureO_t__outputCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined)
		__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector(&In0P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined)
		__NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input(&In0P->input, In0P->NDR.char_rep, In0P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_connect_method_structureI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined)
		__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector(&In0P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined)
		__NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input(&In0P->input, In0P->NDR.float_rep, In0P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_connect_method_structureI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_method_structureI_structureO_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_method_structureI_structureO */
mig_internal novalue _Xio_connect_method_structureI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int selector;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_type_number_t outputCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_method_structureI_structureO_t __Request;
	typedef __Reply__io_connect_method_structureI_structureO_t Reply;

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
#ifdef	__MIG_check__Request__io_connect_method_structureI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_method_structureI_structureO_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2825, "io_connect_method_structureI_structureO")
	__BeforeRcvRpc(2825, "io_connect_method_structureI_structureO")

#if	defined(__MIG_check__Request__io_connect_method_structureI_structureO_t__defined)
	check_result = __MIG_check__Request__io_connect_method_structureI_structureO_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_method_structureI_structureO_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->outputCnt = 4096;
	if (In1P->outputCnt < OutP->outputCnt)
		OutP->outputCnt = In1P->outputCnt;

	OutP->RetCode = is_io_connect_method_structureI_structureO(connection, In0P->selector, In0P->input, In0P->inputCnt, OutP->output, &OutP->outputCnt);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 4096) + (_WALIGN_((OutP->outputCnt + 3) & ~3));

	__AfterRcvRpc(2825, "io_connect_method_structureI_structureO")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_path_t__defined)
#define __MIG_check__Request__io_registry_entry_get_path_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_path_t(__Request__io_registry_entry_get_path_t *In0P)
{

	typedef __Request__io_registry_entry_get_path_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->planeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_path_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_path_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_path_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_path_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_path */
mig_internal novalue _Xio_registry_entry_get_path
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_path_t __Request;
	typedef __Reply__io_registry_entry_get_path_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_path_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_path_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2826, "io_registry_entry_get_path")
	__BeforeRcvRpc(2826, "io_registry_entry_get_path")

#if	defined(__MIG_check__Request__io_registry_entry_get_path_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_path_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_path_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_entry_get_path(registry_entry, In0P->plane, OutP->path);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->pathCnt = strlen(OutP->path) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 512) + (_WALIGN_((OutP->pathCnt + 3) & ~3));

	__AfterRcvRpc(2826, "io_registry_entry_get_path")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_get_root_entry_t__defined)
#define __MIG_check__Request__io_registry_get_root_entry_t__defined

mig_internal kern_return_t __MIG_check__Request__io_registry_get_root_entry_t(__Request__io_registry_get_root_entry_t *In0P)
{

	typedef __Request__io_registry_get_root_entry_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_get_root_entry_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_get_root_entry */
mig_internal novalue _Xio_registry_get_root_entry
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_get_root_entry_t __Request;
	typedef __Reply__io_registry_get_root_entry_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_get_root_entry_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_get_root_entry_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t rootTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t rootTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t root;

	__DeclareRcvRpc(2827, "io_registry_get_root_entry")
	__BeforeRcvRpc(2827, "io_registry_get_root_entry")

#if	defined(__MIG_check__Request__io_registry_get_root_entry_t__defined)
	check_result = __MIG_check__Request__io_registry_get_root_entry_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_get_root_entry_t__defined) */

#if	UseStaticTemplates
	OutP->root = rootTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->root.disposition = 17;
#else
	OutP->root.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->root.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_registry_get_root_entry(In0P->Head.msgh_request_port, &root);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->root.name = (mach_port_t)iokit_make_object_port(root);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2827, "io_registry_get_root_entry")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_set_properties_t__defined)
#define __MIG_check__Request__io_registry_entry_set_properties_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_set_properties_t(__Request__io_registry_entry_set_properties_t *In0P)
{

	typedef __Request__io_registry_entry_set_properties_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->properties.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt(&In0P->propertiesCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__propertiesCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.int_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_set_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.char_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_set_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.float_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_set_properties_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_set_properties_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_set_properties */
mig_internal novalue _Xio_registry_entry_set_properties
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t propertiesCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_set_properties_t __Request;
	typedef __Reply__io_registry_entry_set_properties_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_set_properties_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_set_properties_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2828, "io_registry_entry_set_properties")
	__BeforeRcvRpc(2828, "io_registry_entry_set_properties")

#if	defined(__MIG_check__Request__io_registry_entry_set_properties_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_set_properties_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_set_properties_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_entry_set_properties(registry_entry, (io_buf_ptr_t)(In0P->properties.address), In0P->propertiesCnt, &OutP->result);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2828, "io_registry_entry_set_properties")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_in_plane_t__defined)
#define __MIG_check__Request__io_registry_entry_in_plane_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_in_plane_t(__Request__io_registry_entry_in_plane_t *In0P)
{

	typedef __Request__io_registry_entry_in_plane_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->planeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_in_plane_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_in_plane */
mig_internal novalue _Xio_registry_entry_in_plane
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_in_plane_t __Request;
	typedef __Reply__io_registry_entry_in_plane_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_in_plane_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_in_plane_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2829, "io_registry_entry_in_plane")
	__BeforeRcvRpc(2829, "io_registry_entry_in_plane")

#if	defined(__MIG_check__Request__io_registry_entry_in_plane_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_in_plane_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_in_plane_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_entry_in_plane(registry_entry, In0P->plane, &OutP->inPlane);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2829, "io_registry_entry_in_plane")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_object_get_retain_count_t__defined)
#define __MIG_check__Request__io_object_get_retain_count_t__defined

mig_internal kern_return_t __MIG_check__Request__io_object_get_retain_count_t(__Request__io_object_get_retain_count_t *In0P)
{

	typedef __Request__io_object_get_retain_count_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_object_get_retain_count_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_retain_count */
mig_internal novalue _Xio_object_get_retain_count
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_object_get_retain_count_t __Request;
	typedef __Reply__io_object_get_retain_count_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_object_get_retain_count_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_object_get_retain_count_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t object;

	__DeclareRcvRpc(2830, "io_object_get_retain_count")
	__BeforeRcvRpc(2830, "io_object_get_retain_count")

#if	defined(__MIG_check__Request__io_object_get_retain_count_t__defined)
	check_result = __MIG_check__Request__io_object_get_retain_count_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_object_get_retain_count_t__defined) */

	object = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_object_get_retain_count(object, &OutP->retainCount);
	iokit_remove_reference(object);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2830, "io_object_get_retain_count")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_get_busy_state_t__defined)
#define __MIG_check__Request__io_service_get_busy_state_t__defined

mig_internal kern_return_t __MIG_check__Request__io_service_get_busy_state_t(__Request__io_service_get_busy_state_t *In0P)
{

	typedef __Request__io_service_get_busy_state_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_get_busy_state_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_busy_state */
mig_internal novalue _Xio_service_get_busy_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_get_busy_state_t __Request;
	typedef __Reply__io_service_get_busy_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_get_busy_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_get_busy_state_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2831, "io_service_get_busy_state")
	__BeforeRcvRpc(2831, "io_service_get_busy_state")

#if	defined(__MIG_check__Request__io_service_get_busy_state_t__defined)
	check_result = __MIG_check__Request__io_service_get_busy_state_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_get_busy_state_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_get_busy_state(service, &OutP->busyState);
	iokit_remove_reference(service);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2831, "io_service_get_busy_state")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_wait_quiet_t__defined)
#define __MIG_check__Request__io_service_wait_quiet_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_timespec_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__int_rep__iokit__mach_timespec_t((mach_timespec_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_timespec_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__int_rep__mach_timespec_t((mach_timespec_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int *)(a), f, 2, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int *)(a), f, 2, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#if	defined(__NDR_convert__char_rep__iokit__mach_timespec_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__char_rep__iokit__mach_timespec_t((mach_timespec_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__mach_timespec_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__char_rep__mach_timespec_t((mach_timespec_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int *)(a), f, 2, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int *)(a), f, 2, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#if	defined(__NDR_convert__float_rep__iokit__mach_timespec_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__float_rep__iokit__mach_timespec_t((mach_timespec_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__mach_timespec_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__float_rep__mach_timespec_t((mach_timespec_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int *)(a), f, 2, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int *)(a), f, 2, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined
#define	__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(a, f) \
	__NDR_convert__ARRAY((int32_t *)(a), f, 2, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_wait_quiet_t(__Request__io_service_wait_quiet_t *In0P)
{

	typedef __Request__io_service_wait_quiet_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined)
		__NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time(&In0P->wait_time, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_wait_quiet_t__wait_time__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined)
		__NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time(&In0P->wait_time, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_wait_quiet_t__wait_time__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined)
		__NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time(&In0P->wait_time, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_wait_quiet_t__wait_time__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_wait_quiet_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_wait_quiet */
mig_internal novalue _Xio_service_wait_quiet
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_timespec_t wait_time;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_wait_quiet_t __Request;
	typedef __Reply__io_service_wait_quiet_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_wait_quiet_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_wait_quiet_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2832, "io_service_wait_quiet")
	__BeforeRcvRpc(2832, "io_service_wait_quiet")

#if	defined(__MIG_check__Request__io_service_wait_quiet_t__defined)
	check_result = __MIG_check__Request__io_service_wait_quiet_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_wait_quiet_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_wait_quiet(service, In0P->wait_time);
	iokit_remove_reference(service);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2832, "io_service_wait_quiet")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_create_iterator_t__defined)
#define __MIG_check__Request__io_registry_entry_create_iterator_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_create_iterator_t(__Request__io_registry_entry_create_iterator_t *In0P, __Request__io_registry_entry_create_iterator_t **In1PP)
{

	typedef __Request__io_registry_entry_create_iterator_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->planeCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__planeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__plane__defined */
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options(&In1P->options, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_create_iterator_t__options__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__plane__defined */
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options(&In1P->options, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_create_iterator_t__options__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__plane__defined */
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options(&In1P->options, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_create_iterator_t__options__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_create_iterator_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_create_iterator */
mig_internal novalue _Xio_registry_entry_create_iterator
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		int options;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_create_iterator_t __Request;
	typedef __Reply__io_registry_entry_create_iterator_t Reply;

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
#ifdef	__MIG_check__Request__io_registry_entry_create_iterator_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_create_iterator_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t iteratorTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;
	io_object_t iterator;

	__DeclareRcvRpc(2833, "io_registry_entry_create_iterator")
	__BeforeRcvRpc(2833, "io_registry_entry_create_iterator")

#if	defined(__MIG_check__Request__io_registry_entry_create_iterator_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_create_iterator_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_create_iterator_t__defined) */

#if	UseStaticTemplates
	OutP->iterator = iteratorTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->iterator.disposition = 17;
#else
	OutP->iterator.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->iterator.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_registry_entry_create_iterator(registry_entry, In0P->plane, In1P->options, &iterator);
	iokit_remove_reference(registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->iterator.name = (mach_port_t)iokit_make_object_port(iterator);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2833, "io_registry_entry_create_iterator")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_iterator_is_valid_t__defined)
#define __MIG_check__Request__io_iterator_is_valid_t__defined

mig_internal kern_return_t __MIG_check__Request__io_iterator_is_valid_t(__Request__io_iterator_is_valid_t *In0P)
{

	typedef __Request__io_iterator_is_valid_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_iterator_is_valid_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_iterator_is_valid */
mig_internal novalue _Xio_iterator_is_valid
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_iterator_is_valid_t __Request;
	typedef __Reply__io_iterator_is_valid_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_iterator_is_valid_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_iterator_is_valid_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t iterator;

	__DeclareRcvRpc(2834, "io_iterator_is_valid")
	__BeforeRcvRpc(2834, "io_iterator_is_valid")

#if	defined(__MIG_check__Request__io_iterator_is_valid_t__defined)
	check_result = __MIG_check__Request__io_iterator_is_valid_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_iterator_is_valid_t__defined) */

	iterator = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_iterator_is_valid(iterator, &OutP->is_valid);
	iokit_remove_reference(iterator);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2834, "io_iterator_is_valid")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_make_matching_t__defined)
#define __MIG_check__Request__io_make_matching_t__defined
#ifndef __NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_make_matching_t__options__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_make_matching_t__options__defined */

#ifndef __NDR_convert__int_rep__Request__io_make_matching_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_make_matching_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_make_matching_t__options__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_make_matching_t__options__defined */

#ifndef __NDR_convert__char_rep__Request__io_make_matching_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__char_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_make_matching_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__of_type(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_make_matching_t__options__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__options(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_make_matching_t__options__defined */

#ifndef __NDR_convert__float_rep__Request__io_make_matching_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input__defined
#define	__NDR_convert__float_rep__Request__io_make_matching_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_make_matching_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_make_matching_t(__Request__io_make_matching_t *In0P)
{

	typedef __Request__io_make_matching_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4096)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt(&In0P->inputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 4096) + (_WALIGN_(In0P->inputCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_make_matching_t__options__defined) || \
	defined(__NDR_convert__int_rep__Request__io_make_matching_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_make_matching_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined)
		__NDR_convert__int_rep__Request__io_make_matching_t__of_type(&In0P->of_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_make_matching_t__of_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_make_matching_t__options__defined)
		__NDR_convert__int_rep__Request__io_make_matching_t__options(&In0P->options, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_make_matching_t__options__defined */
#if defined(__NDR_convert__int_rep__Request__io_make_matching_t__input__defined)
		__NDR_convert__int_rep__Request__io_make_matching_t__input(&In0P->input, In0P->NDR.int_rep, In0P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_make_matching_t__input__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined) || \
	defined(__NDR_convert__char_rep__Request__io_make_matching_t__options__defined) || \
	defined(__NDR_convert__char_rep__Request__io_make_matching_t__input__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined)
		__NDR_convert__char_rep__Request__io_make_matching_t__of_type(&In0P->of_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_make_matching_t__of_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_make_matching_t__options__defined)
		__NDR_convert__char_rep__Request__io_make_matching_t__options(&In0P->options, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_make_matching_t__options__defined */
#if defined(__NDR_convert__char_rep__Request__io_make_matching_t__input__defined)
		__NDR_convert__char_rep__Request__io_make_matching_t__input(&In0P->input, In0P->NDR.char_rep, In0P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_make_matching_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined) || \
	defined(__NDR_convert__float_rep__Request__io_make_matching_t__options__defined) || \
	defined(__NDR_convert__float_rep__Request__io_make_matching_t__input__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined)
		__NDR_convert__float_rep__Request__io_make_matching_t__of_type(&In0P->of_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_make_matching_t__of_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_make_matching_t__options__defined)
		__NDR_convert__float_rep__Request__io_make_matching_t__options(&In0P->options, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_make_matching_t__options__defined */
#if defined(__NDR_convert__float_rep__Request__io_make_matching_t__input__defined)
		__NDR_convert__float_rep__Request__io_make_matching_t__input(&In0P->input, In0P->NDR.float_rep, In0P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_make_matching_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_make_matching_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_make_matching */
mig_internal novalue _Xio_make_matching
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int of_type;
		int options;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_make_matching_t __Request;
	typedef __Reply__io_make_matching_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_make_matching_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_make_matching_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2835, "io_make_matching")
	__BeforeRcvRpc(2835, "io_make_matching")

#if	defined(__MIG_check__Request__io_make_matching_t__defined)
	check_result = __MIG_check__Request__io_make_matching_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_make_matching_t__defined) */

	OutP->RetCode = is_io_make_matching(In0P->Head.msgh_request_port, In0P->of_type, In0P->options, In0P->input, In0P->inputCnt, OutP->matching);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->matchingCnt = strlen(OutP->matching) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 512) + (_WALIGN_((OutP->matchingCnt + 3) & ~3));

	__AfterRcvRpc(2835, "io_make_matching")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_catalog_send_data_t__defined)
#define __MIG_check__Request__io_catalog_send_data_t__defined
#ifndef __NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined */

#ifndef __NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined */

#ifndef __NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined
#define	__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined
#define	__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined
#define	__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined */


mig_internal kern_return_t __MIG_check__Request__io_catalog_send_data_t(__Request__io_catalog_send_data_t *In0P)
{

	typedef __Request__io_catalog_send_data_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->inData.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined) || \
	defined(__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined) || \
	defined(__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined)
		__NDR_convert__int_rep__Request__io_catalog_send_data_t__flag(&In0P->flag, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_send_data_t__flag__defined */
#if defined(__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined)
		__NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt(&In0P->inDataCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_send_data_t__inDataCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined)
		__NDR_convert__int_rep__Request__io_catalog_send_data_t__inData((io_buf_ptr_t)(In0P->inData.address), In0P->NDR.int_rep, In0P->inDataCnt);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_send_data_t__inData__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined) || \
	defined(__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined)
		__NDR_convert__char_rep__Request__io_catalog_send_data_t__flag(&In0P->flag, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_send_data_t__flag__defined */
#if defined(__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined)
		__NDR_convert__char_rep__Request__io_catalog_send_data_t__inData((io_buf_ptr_t)(In0P->inData.address), In0P->NDR.char_rep, In0P->inDataCnt);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_send_data_t__inData__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined) || \
	defined(__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined)
		__NDR_convert__float_rep__Request__io_catalog_send_data_t__flag(&In0P->flag, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_send_data_t__flag__defined */
#if defined(__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined)
		__NDR_convert__float_rep__Request__io_catalog_send_data_t__inData((io_buf_ptr_t)(In0P->inData.address), In0P->NDR.float_rep, In0P->inDataCnt);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_send_data_t__inData__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_catalog_send_data_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_send_data */
mig_internal novalue _Xio_catalog_send_data
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t inData;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int flag;
		mach_msg_type_number_t inDataCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_catalog_send_data_t __Request;
	typedef __Reply__io_catalog_send_data_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_catalog_send_data_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_catalog_send_data_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2836, "io_catalog_send_data")
	__BeforeRcvRpc(2836, "io_catalog_send_data")

#if	defined(__MIG_check__Request__io_catalog_send_data_t__defined)
	check_result = __MIG_check__Request__io_catalog_send_data_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_catalog_send_data_t__defined) */

	OutP->RetCode = is_io_catalog_send_data(In0P->Head.msgh_request_port, In0P->flag, (io_buf_ptr_t)(In0P->inData.address), In0P->inDataCnt, &OutP->result);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2836, "io_catalog_send_data")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_catalog_terminate_t__defined)
#define __MIG_check__Request__io_catalog_terminate_t__defined
#ifndef __NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined */

#ifndef __NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined */

#ifndef __NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined
#define	__NDR_convert__char_rep__Request__io_catalog_terminate_t__name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined
#define	__NDR_convert__float_rep__Request__io_catalog_terminate_t__name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined */


mig_internal kern_return_t __MIG_check__Request__io_catalog_terminate_t(__Request__io_catalog_terminate_t *In0P)
{

	typedef __Request__io_catalog_terminate_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt(&In0P->nameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->nameCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined) || \
	defined(__NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_catalog_terminate_t__nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined)
		__NDR_convert__int_rep__Request__io_catalog_terminate_t__flag(&In0P->flag, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_terminate_t__flag__defined */
#if defined(__NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined)
		__NDR_convert__int_rep__Request__io_catalog_terminate_t__name(&In0P->name, In0P->NDR.int_rep, In0P->nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_terminate_t__name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined) || \
	defined(__NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined)
		__NDR_convert__char_rep__Request__io_catalog_terminate_t__flag(&In0P->flag, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_terminate_t__flag__defined */
#if defined(__NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined)
		__NDR_convert__char_rep__Request__io_catalog_terminate_t__name(&In0P->name, In0P->NDR.char_rep, In0P->nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_terminate_t__name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined) || \
	defined(__NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined)
		__NDR_convert__float_rep__Request__io_catalog_terminate_t__flag(&In0P->flag, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_terminate_t__flag__defined */
#if defined(__NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined)
		__NDR_convert__float_rep__Request__io_catalog_terminate_t__name(&In0P->name, In0P->NDR.float_rep, In0P->nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_terminate_t__name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_catalog_terminate_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_terminate */
mig_internal novalue _Xio_catalog_terminate
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flag;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_catalog_terminate_t __Request;
	typedef __Reply__io_catalog_terminate_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_catalog_terminate_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_catalog_terminate_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2837, "io_catalog_terminate")
	__BeforeRcvRpc(2837, "io_catalog_terminate")

#if	defined(__MIG_check__Request__io_catalog_terminate_t__defined)
	check_result = __MIG_check__Request__io_catalog_terminate_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_catalog_terminate_t__defined) */

	OutP->RetCode = is_io_catalog_terminate(In0P->Head.msgh_request_port, In0P->flag, In0P->name);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2837, "io_catalog_terminate")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_catalog_get_data_t__defined)
#define __MIG_check__Request__io_catalog_get_data_t__defined
#ifndef __NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined */


mig_internal kern_return_t __MIG_check__Request__io_catalog_get_data_t(__Request__io_catalog_get_data_t *In0P)
{

	typedef __Request__io_catalog_get_data_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined)
		__NDR_convert__int_rep__Request__io_catalog_get_data_t__flag(&In0P->flag, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_get_data_t__flag__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined)
		__NDR_convert__char_rep__Request__io_catalog_get_data_t__flag(&In0P->flag, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_get_data_t__flag__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined)
		__NDR_convert__float_rep__Request__io_catalog_get_data_t__flag(&In0P->flag, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_get_data_t__flag__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_catalog_get_data_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_get_data */
mig_internal novalue _Xio_catalog_get_data
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flag;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_catalog_get_data_t __Request;
	typedef __Reply__io_catalog_get_data_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_catalog_get_data_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_catalog_get_data_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t outDataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t outDataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	__DeclareRcvRpc(2838, "io_catalog_get_data")
	__BeforeRcvRpc(2838, "io_catalog_get_data")

#if	defined(__MIG_check__Request__io_catalog_get_data_t__defined)
	check_result = __MIG_check__Request__io_catalog_get_data_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_catalog_get_data_t__defined) */

#if	UseStaticTemplates
	OutP->outData = outDataTemplate;
#else	/* UseStaticTemplates */
	OutP->outData.deallocate =  FALSE;
	OutP->outData.copy = MACH_MSG_VIRTUAL_COPY;
	OutP->outData.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_catalog_get_data(In0P->Head.msgh_request_port, In0P->flag, (io_buf_ptr_t *)&(OutP->outData.address), &OutP->outDataCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->outData.size = OutP->outDataCnt;


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2838, "io_catalog_get_data")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_catalog_get_gen_count_t__defined)
#define __MIG_check__Request__io_catalog_get_gen_count_t__defined

mig_internal kern_return_t __MIG_check__Request__io_catalog_get_gen_count_t(__Request__io_catalog_get_gen_count_t *In0P)
{

	typedef __Request__io_catalog_get_gen_count_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_catalog_get_gen_count_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_get_gen_count */
mig_internal novalue _Xio_catalog_get_gen_count
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_catalog_get_gen_count_t __Request;
	typedef __Reply__io_catalog_get_gen_count_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_catalog_get_gen_count_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_catalog_get_gen_count_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2839, "io_catalog_get_gen_count")
	__BeforeRcvRpc(2839, "io_catalog_get_gen_count")

#if	defined(__MIG_check__Request__io_catalog_get_gen_count_t__defined)
	check_result = __MIG_check__Request__io_catalog_get_gen_count_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_catalog_get_gen_count_t__defined) */

	OutP->RetCode = is_io_catalog_get_gen_count(In0P->Head.msgh_request_port, &OutP->genCount);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2839, "io_catalog_get_gen_count")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_catalog_module_loaded_t__defined)
#define __MIG_check__Request__io_catalog_module_loaded_t__defined
#ifndef __NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined */

#ifndef __NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined
#define	__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined
#define	__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined
#define	__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined
#define	__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined */


mig_internal kern_return_t __MIG_check__Request__io_catalog_module_loaded_t(__Request__io_catalog_module_loaded_t *In0P)
{

	typedef __Request__io_catalog_module_loaded_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt(&In0P->nameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->nameCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined)
		__NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name(&In0P->name, In0P->NDR.int_rep, In0P->nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_module_loaded_t__name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined)
		__NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name(&In0P->name, In0P->NDR.char_rep, In0P->nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_module_loaded_t__name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined)
		__NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name(&In0P->name, In0P->NDR.float_rep, In0P->nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_module_loaded_t__name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_catalog_module_loaded_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_module_loaded */
mig_internal novalue _Xio_catalog_module_loaded
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t nameCnt;
		char name[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_catalog_module_loaded_t __Request;
	typedef __Reply__io_catalog_module_loaded_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_catalog_module_loaded_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_catalog_module_loaded_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2840, "io_catalog_module_loaded")
	__BeforeRcvRpc(2840, "io_catalog_module_loaded")

#if	defined(__MIG_check__Request__io_catalog_module_loaded_t__defined)
	check_result = __MIG_check__Request__io_catalog_module_loaded_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_catalog_module_loaded_t__defined) */

	OutP->RetCode = is_io_catalog_module_loaded(In0P->Head.msgh_request_port, In0P->name);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2840, "io_catalog_module_loaded")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_catalog_reset_t__defined)
#define __MIG_check__Request__io_catalog_reset_t__defined
#ifndef __NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__int_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined */

#ifndef __NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__char_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined */

#ifndef __NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined
#define	__NDR_convert__float_rep__Request__io_catalog_reset_t__flag(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined */


mig_internal kern_return_t __MIG_check__Request__io_catalog_reset_t(__Request__io_catalog_reset_t *In0P)
{

	typedef __Request__io_catalog_reset_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined)
		__NDR_convert__int_rep__Request__io_catalog_reset_t__flag(&In0P->flag, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_catalog_reset_t__flag__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined)
		__NDR_convert__char_rep__Request__io_catalog_reset_t__flag(&In0P->flag, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_catalog_reset_t__flag__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined)
		__NDR_convert__float_rep__Request__io_catalog_reset_t__flag(&In0P->flag, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_catalog_reset_t__flag__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_catalog_reset_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_catalog_reset */
mig_internal novalue _Xio_catalog_reset
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flag;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_catalog_reset_t __Request;
	typedef __Reply__io_catalog_reset_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_catalog_reset_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_catalog_reset_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2841, "io_catalog_reset")
	__BeforeRcvRpc(2841, "io_catalog_reset")

#if	defined(__MIG_check__Request__io_catalog_reset_t__defined)
	check_result = __MIG_check__Request__io_catalog_reset_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_catalog_reset_t__defined) */

	OutP->RetCode = is_io_catalog_reset(In0P->Head.msgh_request_port, In0P->flag);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2841, "io_catalog_reset")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_request_probe_t__defined)
#define __MIG_check__Request__io_service_request_probe_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__int_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__char_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined
#define	__NDR_convert__float_rep__Request__io_service_request_probe_t__options(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_request_probe_t(__Request__io_service_request_probe_t *In0P)
{

	typedef __Request__io_service_request_probe_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined)
		__NDR_convert__int_rep__Request__io_service_request_probe_t__options(&In0P->options, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_request_probe_t__options__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined)
		__NDR_convert__char_rep__Request__io_service_request_probe_t__options(&In0P->options, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_request_probe_t__options__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined)
		__NDR_convert__float_rep__Request__io_service_request_probe_t__options(&In0P->options, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_request_probe_t__options__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_request_probe_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_request_probe */
mig_internal novalue _Xio_service_request_probe
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int options;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_request_probe_t __Request;
	typedef __Reply__io_service_request_probe_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_request_probe_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_request_probe_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2842, "io_service_request_probe")
	__BeforeRcvRpc(2842, "io_service_request_probe")

#if	defined(__MIG_check__Request__io_service_request_probe_t__defined)
	check_result = __MIG_check__Request__io_service_request_probe_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_request_probe_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_request_probe(service, In0P->options);
	iokit_remove_reference(service);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2842, "io_service_request_probe")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined)
#define __MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_name_in_plane_t(__Request__io_registry_entry_get_name_in_plane_t *In0P)
{

	typedef __Request__io_registry_entry_get_name_in_plane_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->planeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_name_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_name_in_plane */
mig_internal novalue _Xio_registry_entry_get_name_in_plane
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_name_in_plane_t __Request;
	typedef __Reply__io_registry_entry_get_name_in_plane_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2843, "io_registry_entry_get_name_in_plane")
	__BeforeRcvRpc(2843, "io_registry_entry_get_name_in_plane")

#if	defined(__MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_name_in_plane_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_name_in_plane_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_entry_get_name_in_plane(registry_entry, In0P->plane, OutP->name);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->nameCnt = strlen(OutP->name) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 128) + (_WALIGN_((OutP->nameCnt + 3) & ~3));

	__AfterRcvRpc(2843, "io_registry_entry_get_name_in_plane")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_match_property_table_t__defined)
#define __MIG_check__Request__io_service_match_property_table_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_match_property_table_t(__Request__io_service_match_property_table_t *In0P)
{

	typedef __Request__io_service_match_property_table_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 512)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt(&In0P->matchingCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 512) + (_WALIGN_(In0P->matchingCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_match_property_table_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined)
		__NDR_convert__int_rep__Request__io_service_match_property_table_t__matching(&In0P->matching, In0P->NDR.int_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_match_property_table_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined)
		__NDR_convert__char_rep__Request__io_service_match_property_table_t__matching(&In0P->matching, In0P->NDR.char_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_match_property_table_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined)
		__NDR_convert__float_rep__Request__io_service_match_property_table_t__matching(&In0P->matching, In0P->NDR.float_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_match_property_table_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_match_property_table_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_match_property_table */
mig_internal novalue _Xio_service_match_property_table
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_match_property_table_t __Request;
	typedef __Reply__io_service_match_property_table_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_match_property_table_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_match_property_table_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2844, "io_service_match_property_table")
	__BeforeRcvRpc(2844, "io_service_match_property_table")

#if	defined(__MIG_check__Request__io_service_match_property_table_t__defined)
	check_result = __MIG_check__Request__io_service_match_property_table_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_match_property_table_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_match_property_table(service, In0P->matching, &OutP->matches);
	iokit_remove_reference(service);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2844, "io_service_match_property_table")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_async_method_scalarI_scalarO_t__defined)
#define __MIG_check__Request__io_async_method_scalarI_scalarO_t__defined
#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_async_method_scalarI_scalarO_t(__Request__io_async_method_scalarI_scalarO_t *In0P, __Request__io_async_method_scalarI_scalarO_t **In1PP, __Request__io_async_method_scalarI_scalarO_t **In2PP)
{

	typedef __Request__io_async_method_scalarI_scalarO_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 96)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt(&In0P->referenceCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined */
	msgh_size_delta = (4 * In0P->referenceCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 96) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 32);

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt(&In1P->inputCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined */
	msgh_size_delta = (4 * In1P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 96) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 64);

#if	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__referenceCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference(&In0P->reference, In0P->NDR.int_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector(&In1P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input(&In1P->input, In0P->NDR.int_rep, In1P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt(&In2P->outputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_scalarO_t__outputCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference(&In0P->reference, In0P->NDR.char_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector(&In1P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input(&In1P->input, In0P->NDR.char_rep, In1P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_scalarO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference(&In0P->reference, In0P->NDR.float_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__reference__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector(&In1P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input(&In1P->input, In0P->NDR.float_rep, In1P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_scalarO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_async_method_scalarI_scalarO_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_scalarI_scalarO */
mig_internal novalue _Xio_async_method_scalarI_scalarO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		int selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_async_method_scalarI_scalarO_t __Request;
	typedef __Reply__io_async_method_scalarI_scalarO_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_async_method_scalarI_scalarO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_async_method_scalarI_scalarO_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2845, "io_async_method_scalarI_scalarO")
	__BeforeRcvRpc(2845, "io_async_method_scalarI_scalarO")

#if	defined(__MIG_check__Request__io_async_method_scalarI_scalarO_t__defined)
	check_result = __MIG_check__Request__io_async_method_scalarI_scalarO_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_async_method_scalarI_scalarO_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->outputCnt = 16;
	if (In2P->outputCnt < OutP->outputCnt)
		OutP->outputCnt = In2P->outputCnt;

	OutP->RetCode = is_io_async_method_scalarI_scalarO(connection, In0P->wake_port.name, In0P->reference, In0P->referenceCnt, In1P->selector, In1P->input, In1P->inputCnt, OutP->output, &OutP->outputCnt);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 64) + (((4 * OutP->outputCnt)));

	__AfterRcvRpc(2845, "io_async_method_scalarI_scalarO")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_async_method_scalarI_structureO_t__defined)
#define __MIG_check__Request__io_async_method_scalarI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_async_method_scalarI_structureO_t(__Request__io_async_method_scalarI_structureO_t *In0P, __Request__io_async_method_scalarI_structureO_t **In1PP, __Request__io_async_method_scalarI_structureO_t **In2PP)
{

	typedef __Request__io_async_method_scalarI_structureO_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 96)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt(&In0P->referenceCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined */
	msgh_size_delta = (4 * In0P->referenceCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 96) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 32);

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt(&In1P->inputCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined */
	msgh_size_delta = (4 * In1P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 96) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 64);

#if	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__referenceCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference(&In0P->reference, In0P->NDR.int_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__reference__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector(&In1P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input(&In1P->input, In0P->NDR.int_rep, In1P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt(&In2P->outputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureO_t__outputCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference(&In0P->reference, In0P->NDR.char_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__reference__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector(&In1P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input(&In1P->input, In0P->NDR.char_rep, In1P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference(&In0P->reference, In0P->NDR.float_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__reference__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector(&In1P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input(&In1P->input, In0P->NDR.float_rep, In1P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_async_method_scalarI_structureO_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_scalarI_structureO */
mig_internal novalue _Xio_async_method_scalarI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		int selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t outputCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_async_method_scalarI_structureO_t __Request;
	typedef __Reply__io_async_method_scalarI_structureO_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_async_method_scalarI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_async_method_scalarI_structureO_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2846, "io_async_method_scalarI_structureO")
	__BeforeRcvRpc(2846, "io_async_method_scalarI_structureO")

#if	defined(__MIG_check__Request__io_async_method_scalarI_structureO_t__defined)
	check_result = __MIG_check__Request__io_async_method_scalarI_structureO_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_async_method_scalarI_structureO_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->outputCnt = 4096;
	if (In2P->outputCnt < OutP->outputCnt)
		OutP->outputCnt = In2P->outputCnt;

	OutP->RetCode = is_io_async_method_scalarI_structureO(connection, In0P->wake_port.name, In0P->reference, In0P->referenceCnt, In1P->selector, In1P->input, In1P->inputCnt, OutP->output, &OutP->outputCnt);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 4096) + (_WALIGN_((OutP->outputCnt + 3) & ~3));

	__AfterRcvRpc(2846, "io_async_method_scalarI_structureO")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_async_method_scalarI_structureI_t__defined)
#define __MIG_check__Request__io_async_method_scalarI_structureI_t__defined
#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__int_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__iokit__int)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__int_rep__int)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__iokit__int32_t)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__int_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__char_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__iokit__int)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__char_rep__int)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__iokit__int32_t)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__char_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_scalar_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__float_rep__io_scalar_inband_t((io_scalar_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__iokit__int)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int *)(a), f, c, __NDR_convert__float_rep__int)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__iokit__int32_t)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(a, f, c) \
	__NDR_convert__ARRAY((int32_t *)(a), f, c, __NDR_convert__float_rep__int32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined
#define	__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined */


mig_internal kern_return_t __MIG_check__Request__io_async_method_scalarI_structureI_t(__Request__io_async_method_scalarI_structureI_t *In0P, __Request__io_async_method_scalarI_structureI_t **In1PP, __Request__io_async_method_scalarI_structureI_t **In2PP)
{

	typedef __Request__io_async_method_scalarI_structureI_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4192)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt(&In0P->referenceCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined */
	msgh_size_delta = (4 * In0P->referenceCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4192) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 32);

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt(&In1P->inputCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined */
	msgh_size_delta = (4 * In1P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4192) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 64);

#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt(&In2P->inputStructCnt, In2P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 4192) + (_WALIGN_(In2P->inputStructCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__referenceCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStructCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference(&In0P->reference, In0P->NDR.int_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__reference__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector(&In1P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input(&In1P->input, In0P->NDR.int_rep, In1P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined)
		__NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(&In2P->inputStruct, In0P->NDR.int_rep, In2P->inputStructCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference(&In0P->reference, In0P->NDR.char_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__reference__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector(&In1P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input(&In1P->input, In0P->NDR.char_rep, In1P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__input__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined)
		__NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(&In2P->inputStruct, In0P->NDR.char_rep, In2P->inputStructCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference(&In0P->reference, In0P->NDR.float_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__reference__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector(&In1P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input(&In1P->input, In0P->NDR.float_rep, In1P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__input__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined)
		__NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct(&In2P->inputStruct, In0P->NDR.float_rep, In2P->inputStructCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_scalarI_structureI_t__inputStruct__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_async_method_scalarI_structureI_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_scalarI_structureI */
mig_internal novalue _Xio_async_method_scalarI_structureI
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		int selector;
		mach_msg_type_number_t inputCnt;
		int input[16];
		mach_msg_type_number_t inputStructCnt;
		char inputStruct[4096];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_async_method_scalarI_structureI_t __Request;
	typedef __Reply__io_async_method_scalarI_structureI_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_async_method_scalarI_structureI_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_async_method_scalarI_structureI_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2847, "io_async_method_scalarI_structureI")
	__BeforeRcvRpc(2847, "io_async_method_scalarI_structureI")

#if	defined(__MIG_check__Request__io_async_method_scalarI_structureI_t__defined)
	check_result = __MIG_check__Request__io_async_method_scalarI_structureI_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_async_method_scalarI_structureI_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_async_method_scalarI_structureI(connection, In0P->wake_port.name, In0P->reference, In0P->referenceCnt, In1P->selector, In1P->input, In1P->inputCnt, In2P->inputStruct, In2P->inputStructCnt);
	iokit_remove_reference(connection);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2847, "io_async_method_scalarI_structureI")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_async_method_structureI_structureO_t__defined)
#define __MIG_check__Request__io_async_method_structureI_structureO_t__defined
#ifndef __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined
#if	defined(__NDR_convert__int_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_struct_inband_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__int_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined
#define	__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined */

#ifndef __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined
#if	defined(__NDR_convert__char_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_struct_inband_t__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__char_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined */

#ifndef __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined
#if	defined(__NDR_convert__float_rep__iokit__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__iokit__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_struct_inband_t__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__float_rep__io_struct_inband_t((io_struct_inband_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined
#define	__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input(a, f, c) \
	__NDR_convert__ARRAY((char *)(a), f, c, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined */


mig_internal kern_return_t __MIG_check__Request__io_async_method_structureI_structureO_t(__Request__io_async_method_structureI_structureO_t *In0P, __Request__io_async_method_structureI_structureO_t **In1PP, __Request__io_async_method_structureI_structureO_t **In2PP)
{

	typedef __Request__io_async_method_structureI_structureO_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt(&In0P->referenceCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined */
	msgh_size_delta = (4 * In0P->referenceCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4128) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 32);

#if defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt(&In1P->inputCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined */
	msgh_size_delta = _WALIGN_(In1P->inputCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 4128) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 4096);

#if	defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__referenceCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__inputCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined)
		__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference(&In0P->reference, In0P->NDR.int_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__reference__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined)
		__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector(&In1P->selector, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__selector__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined)
		__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input(&In1P->input, In0P->NDR.int_rep, In1P->inputCnt);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__input__defined */
#if defined(__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined)
		__NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt(&In2P->outputCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_async_method_structureI_structureO_t__outputCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined) || \
	defined(__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined)
		__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference(&In0P->reference, In0P->NDR.char_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__reference__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined)
		__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector(&In1P->selector, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__selector__defined */
#if defined(__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined)
		__NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input(&In1P->input, In0P->NDR.char_rep, In1P->inputCnt);
#endif	/* __NDR_convert__char_rep__Request__io_async_method_structureI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined) || \
	defined(__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined) || \
	0 || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined)
		__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference(&In0P->reference, In0P->NDR.float_rep, In0P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__reference__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined)
		__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector(&In1P->selector, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__selector__defined */
#if defined(__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined)
		__NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input(&In1P->input, In0P->NDR.float_rep, In1P->inputCnt);
#endif	/* __NDR_convert__float_rep__Request__io_async_method_structureI_structureO_t__input__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_async_method_structureI_structureO_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_async_method_structureI_structureO */
mig_internal novalue _Xio_async_method_structureI_structureO
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		int selector;
		mach_msg_type_number_t inputCnt;
		char input[4096];
		mach_msg_type_number_t outputCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_async_method_structureI_structureO_t __Request;
	typedef __Reply__io_async_method_structureI_structureO_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_async_method_structureI_structureO_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_async_method_structureI_structureO_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;

	__DeclareRcvRpc(2848, "io_async_method_structureI_structureO")
	__BeforeRcvRpc(2848, "io_async_method_structureI_structureO")

#if	defined(__MIG_check__Request__io_async_method_structureI_structureO_t__defined)
	check_result = __MIG_check__Request__io_async_method_structureI_structureO_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_async_method_structureI_structureO_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	OutP->outputCnt = 4096;
	if (In2P->outputCnt < OutP->outputCnt)
		OutP->outputCnt = In2P->outputCnt;

	OutP->RetCode = is_io_async_method_structureI_structureO(connection, In0P->wake_port.name, In0P->reference, In0P->referenceCnt, In1P->selector, In1P->input, In1P->inputCnt, OutP->output, &OutP->outputCnt);
	iokit_remove_reference(connection);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 4096) + (_WALIGN_((OutP->outputCnt + 3) & ~3));

	__AfterRcvRpc(2848, "io_async_method_structureI_structureO")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_add_notification_t__defined)
#define __MIG_check__Request__io_service_add_notification_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_string_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_string_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_string_t((io_string_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_string_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_string_t((io_string_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_add_notification_t(__Request__io_service_add_notification_t *In0P, __Request__io_service_add_notification_t **In1PP, __Request__io_service_add_notification_t **In2PP)
{

	typedef __Request__io_service_add_notification_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 672)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt(&In0P->notification_typeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->notification_typeCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 672) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt(&In1P->matchingCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined */
	msgh_size_delta = _WALIGN_(In1P->matchingCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 672) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 512);

#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt(&In2P->referenceCnt, In2P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 672) + ((4 * In2P->referenceCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_typeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__matchingCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type(&In0P->notification_type, In0P->NDR.int_rep, In0P->notification_typeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_t__notification_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_t__matching(&In1P->matching, In0P->NDR.int_rep, In1P->matchingCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_t__matching__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_t__reference(&In2P->reference, In0P->NDR.int_rep, In2P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined)
		__NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type(&In0P->notification_type, In0P->NDR.char_rep, In0P->notification_typeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_notification_t__notification_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined)
		__NDR_convert__char_rep__Request__io_service_add_notification_t__matching(&In1P->matching, In0P->NDR.char_rep, In1P->matchingCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_notification_t__matching__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined)
		__NDR_convert__char_rep__Request__io_service_add_notification_t__reference(&In2P->reference, In0P->NDR.char_rep, In2P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_notification_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined)
		__NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type(&In0P->notification_type, In0P->NDR.float_rep, In0P->notification_typeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_notification_t__notification_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined)
		__NDR_convert__float_rep__Request__io_service_add_notification_t__matching(&In1P->matching, In0P->NDR.float_rep, In1P->matchingCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_notification_t__matching__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined)
		__NDR_convert__float_rep__Request__io_service_add_notification_t__reference(&In2P->reference, In0P->NDR.float_rep, In2P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_notification_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_add_notification_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_add_notification */
mig_internal novalue _Xio_service_add_notification
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingOffset; /* MiG doesn't use it */
		mach_msg_type_number_t matchingCnt;
		char matching[512];
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_add_notification_t __Request;
	typedef __Reply__io_service_add_notification_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_add_notification_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_add_notification_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t notificationTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t notificationTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t notification;

	__DeclareRcvRpc(2849, "io_service_add_notification")
	__BeforeRcvRpc(2849, "io_service_add_notification")

#if	defined(__MIG_check__Request__io_service_add_notification_t__defined)
	check_result = __MIG_check__Request__io_service_add_notification_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_add_notification_t__defined) */

#if	UseStaticTemplates
	OutP->notification = notificationTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->notification.disposition = 17;
#else
	OutP->notification.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->notification.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_service_add_notification(In0P->Head.msgh_request_port, In0P->notification_type, In1P->matching, In0P->wake_port.name, In2P->reference, In2P->referenceCnt, &notification);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->notification.name = (mach_port_t)iokit_make_object_port(notification);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2849, "io_service_add_notification")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_add_interest_notification_t__defined)
#define __MIG_check__Request__io_service_add_interest_notification_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_add_interest_notification_t(__Request__io_service_add_interest_notification_t *In0P, __Request__io_service_add_interest_notification_t **In1PP)
{

	typedef __Request__io_service_add_interest_notification_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 160)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt(&In0P->type_of_interestCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->type_of_interestCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 160) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt(&In1P->referenceCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 160) + ((4 * In1P->referenceCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interestCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined)
		__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest(&In0P->type_of_interest, In0P->NDR.int_rep, In0P->type_of_interestCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined)
		__NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference(&In1P->reference, In0P->NDR.int_rep, In1P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_interest_notification_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined)
		__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest(&In0P->type_of_interest, In0P->NDR.char_rep, In0P->type_of_interestCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined)
		__NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference(&In1P->reference, In0P->NDR.char_rep, In1P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_interest_notification_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined)
		__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest(&In0P->type_of_interest, In0P->NDR.float_rep, In0P->type_of_interestCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_interest_notification_t__type_of_interest__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined)
		__NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference(&In1P->reference, In0P->NDR.float_rep, In1P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_interest_notification_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_add_interest_notification_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_add_interest_notification */
mig_internal novalue _Xio_service_add_interest_notification
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t type_of_interestOffset; /* MiG doesn't use it */
		mach_msg_type_number_t type_of_interestCnt;
		char type_of_interest[128];
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_add_interest_notification_t __Request;
	typedef __Reply__io_service_add_interest_notification_t Reply;

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
#ifdef	__MIG_check__Request__io_service_add_interest_notification_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_add_interest_notification_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t notificationTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t notificationTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t service;
	io_object_t notification;

	__DeclareRcvRpc(2850, "io_service_add_interest_notification")
	__BeforeRcvRpc(2850, "io_service_add_interest_notification")

#if	defined(__MIG_check__Request__io_service_add_interest_notification_t__defined)
	check_result = __MIG_check__Request__io_service_add_interest_notification_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_add_interest_notification_t__defined) */

#if	UseStaticTemplates
	OutP->notification = notificationTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->notification.disposition = 17;
#else
	OutP->notification.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->notification.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_service_add_interest_notification(service, In0P->type_of_interest, In0P->wake_port.name, In1P->reference, In1P->referenceCnt, &notification);
	iokit_remove_reference(service);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->notification.name = (mach_port_t)iokit_make_object_port(notification);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2850, "io_service_add_interest_notification")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_acknowledge_notification_t__defined)
#define __MIG_check__Request__io_service_acknowledge_notification_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#if	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined
#if	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#if	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined
#if	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#if	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined
#if	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined
#define	__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_acknowledge_notification_t(__Request__io_service_acknowledge_notification_t *In0P)
{

	typedef __Request__io_service_acknowledge_notification_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined)
		__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref(&In0P->notify_ref, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined)
		__NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response(&In0P->response, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_acknowledge_notification_t__response__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined) || \
	defined(__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined)
		__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref(&In0P->notify_ref, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined)
		__NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response(&In0P->response, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_acknowledge_notification_t__response__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined) || \
	defined(__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined)
		__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref(&In0P->notify_ref, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__notify_ref__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined)
		__NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response(&In0P->response, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_acknowledge_notification_t__response__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_acknowledge_notification_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_acknowledge_notification */
mig_internal novalue _Xio_service_acknowledge_notification
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		natural_t notify_ref;
		natural_t response;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_acknowledge_notification_t __Request;
	typedef __Reply__io_service_acknowledge_notification_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_acknowledge_notification_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_acknowledge_notification_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2851, "io_service_acknowledge_notification")
	__BeforeRcvRpc(2851, "io_service_acknowledge_notification")

#if	defined(__MIG_check__Request__io_service_acknowledge_notification_t__defined)
	check_result = __MIG_check__Request__io_service_acknowledge_notification_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_acknowledge_notification_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_acknowledge_notification(service, In0P->notify_ref, In0P->response);
	iokit_remove_reference(service);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2851, "io_service_acknowledge_notification")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_get_notification_semaphore_t__defined)
#define __MIG_check__Request__io_connect_get_notification_semaphore_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#if	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#if	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#if	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_get_notification_semaphore_t(__Request__io_connect_get_notification_semaphore_t *In0P)
{

	typedef __Request__io_connect_get_notification_semaphore_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined)
		__NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type(&In0P->notification_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined)
		__NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type(&In0P->notification_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined)
		__NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type(&In0P->notification_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_get_notification_semaphore_t__notification_type__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_get_notification_semaphore_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_get_notification_semaphore */
mig_internal novalue _Xio_connect_get_notification_semaphore
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		natural_t notification_type;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_get_notification_semaphore_t __Request;
	typedef __Reply__io_connect_get_notification_semaphore_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_get_notification_semaphore_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_get_notification_semaphore_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t semaphoreTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t semaphoreTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_connect_t connection;
	semaphore_t semaphore;

	__DeclareRcvRpc(2852, "io_connect_get_notification_semaphore")
	__BeforeRcvRpc(2852, "io_connect_get_notification_semaphore")

#if	defined(__MIG_check__Request__io_connect_get_notification_semaphore_t__defined)
	check_result = __MIG_check__Request__io_connect_get_notification_semaphore_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_get_notification_semaphore_t__defined) */

#if	UseStaticTemplates
	OutP->semaphore = semaphoreTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->semaphore.disposition = 17;
#else
	OutP->semaphore.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->semaphore.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	RetCode = is_io_connect_get_notification_semaphore(connection, In0P->notification_type, &semaphore);
	iokit_remove_reference(connection);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->semaphore.name = (mach_port_t)convert_semaphore_to_port(semaphore);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2852, "io_connect_get_notification_semaphore")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_connect_unmap_memory_t__defined)
#define __MIG_check__Request__io_connect_unmap_memory_t__defined
#ifndef __NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#if	defined(__NDR_convert__int_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_address_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__int_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__int_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#if	defined(__NDR_convert__char_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_address_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__char_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__char_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#if	defined(__NDR_convert__float_rep__iokit__vm_address_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_address_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__float_rep__vm_address_t((vm_address_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__float_rep__iokit__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined
#define	__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined */


mig_internal kern_return_t __MIG_check__Request__io_connect_unmap_memory_t(__Request__io_connect_unmap_memory_t *In0P)
{

	typedef __Request__io_connect_unmap_memory_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->into_task.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->into_task.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined)
		__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type(&In0P->memory_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_unmap_memory_t__memory_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined)
		__NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address(&In0P->address, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_connect_unmap_memory_t__address__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined) || \
	defined(__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined)
		__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type(&In0P->memory_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_unmap_memory_t__memory_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined)
		__NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address(&In0P->address, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_connect_unmap_memory_t__address__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined) || \
	defined(__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined)
		__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type(&In0P->memory_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_unmap_memory_t__memory_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined)
		__NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address(&In0P->address, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_connect_unmap_memory_t__address__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_connect_unmap_memory_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_connect_unmap_memory */
mig_internal novalue _Xio_connect_unmap_memory
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t into_task;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int memory_type;
		vm_address_t address;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_connect_unmap_memory_t __Request;
	typedef __Reply__io_connect_unmap_memory_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_connect_unmap_memory_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_connect_unmap_memory_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_connect_t connection;
	task_t into_task;

	__DeclareRcvRpc(2853, "io_connect_unmap_memory")
	__BeforeRcvRpc(2853, "io_connect_unmap_memory")

#if	defined(__MIG_check__Request__io_connect_unmap_memory_t__defined)
	check_result = __MIG_check__Request__io_connect_unmap_memory_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_connect_unmap_memory_t__defined) */

	connection = iokit_lookup_connect_port(In0P->Head.msgh_request_port);

	into_task = convert_port_to_task(In0P->into_task.name);

	OutP->RetCode = is_io_connect_unmap_memory(connection, In0P->memory_type, into_task, In0P->address);
	task_deallocate(into_task);
	iokit_remove_reference(connection);
#if	__MigKernelSpecificCode
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}

	if (IP_VALID((ipc_port_t)In0P->into_task.name))
		ipc_port_release_send((ipc_port_t)In0P->into_task.name);
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2853, "io_connect_unmap_memory")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined)
#define __MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_location_in_plane_t(__Request__io_registry_entry_get_location_in_plane_t *In0P)
{

	typedef __Request__io_registry_entry_get_location_in_plane_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->planeCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_location_in_plane_t__plane__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_location_in_plane */
mig_internal novalue _Xio_registry_entry_get_location_in_plane
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_location_in_plane_t __Request;
	typedef __Reply__io_registry_entry_get_location_in_plane_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t registry_entry;

	__DeclareRcvRpc(2854, "io_registry_entry_get_location_in_plane")
	__BeforeRcvRpc(2854, "io_registry_entry_get_location_in_plane")

#if	defined(__MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_location_in_plane_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_location_in_plane_t__defined) */

	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_registry_entry_get_location_in_plane(registry_entry, In0P->plane, OutP->location);
	iokit_remove_reference(registry_entry);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->locationCnt = strlen(OutP->location) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 128) + (_WALIGN_((OutP->locationCnt + 3) & ~3));

	__AfterRcvRpc(2854, "io_registry_entry_get_location_in_plane")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_registry_entry_get_property_recursively_t__defined)
#define __MIG_check__Request__io_registry_entry_get_property_recursively_t__defined
#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined */

#ifndef __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined */

#ifndef __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined
#define	__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined */


mig_internal kern_return_t __MIG_check__Request__io_registry_entry_get_property_recursively_t(__Request__io_registry_entry_get_property_recursively_t *In0P, __Request__io_registry_entry_get_property_recursively_t **In1PP, __Request__io_registry_entry_get_property_recursively_t **In2PP)
{

	typedef __Request__io_registry_entry_get_property_recursively_t __Request;
	__Request *In1P;
	__Request *In2P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 256)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt(&In0P->planeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->planeCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 256) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt(&In1P->property_nameCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined */
	msgh_size_delta = _WALIGN_(In1P->property_nameCnt);
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 256) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	*In2PP = In2P = (__Request *) ((pointer_t) In1P + msgh_size_delta - 128);

#if	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__planeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_nameCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane(&In0P->plane, In0P->NDR.int_rep, In0P->planeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined */
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name(&In1P->property_name, In0P->NDR.int_rep, In1P->property_nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined */
#if defined(__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined)
		__NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options(&In2P->options, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_registry_entry_get_property_recursively_t__options__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane(&In0P->plane, In0P->NDR.char_rep, In0P->planeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined */
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name(&In1P->property_name, In0P->NDR.char_rep, In1P->property_nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined */
#if defined(__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined)
		__NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options(&In2P->options, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_registry_entry_get_property_recursively_t__options__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane(&In0P->plane, In0P->NDR.float_rep, In0P->planeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__plane__defined */
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name(&In1P->property_name, In0P->NDR.float_rep, In1P->property_nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__property_name__defined */
#if defined(__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined)
		__NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options(&In2P->options, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_registry_entry_get_property_recursively_t__options__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_registry_entry_get_property_recursively_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_registry_entry_get_property_recursively */
mig_internal novalue _Xio_registry_entry_get_property_recursively
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t planeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t planeCnt;
		char plane[128];
		mach_msg_type_number_t property_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t property_nameCnt;
		char property_name[128];
		int options;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_registry_entry_get_property_recursively_t __Request;
	typedef __Reply__io_registry_entry_get_property_recursively_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Request *In1P;
	Request *In2P;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_registry_entry_get_property_recursively_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_registry_entry_get_property_recursively_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t propertiesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t registry_entry;

	__DeclareRcvRpc(2855, "io_registry_entry_get_property_recursively")
	__BeforeRcvRpc(2855, "io_registry_entry_get_property_recursively")

#if	defined(__MIG_check__Request__io_registry_entry_get_property_recursively_t__defined)
	check_result = __MIG_check__Request__io_registry_entry_get_property_recursively_t((__Request *)In0P, (__Request **)&In1P, (__Request **)&In2P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_registry_entry_get_property_recursively_t__defined) */

#if	UseStaticTemplates
	OutP->properties = propertiesTemplate;
#else	/* UseStaticTemplates */
	OutP->properties.deallocate =  FALSE;
	OutP->properties.copy = MACH_MSG_PHYSICAL_COPY;
	OutP->properties.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	registry_entry = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	RetCode = is_io_registry_entry_get_property_recursively(registry_entry, In0P->plane, In1P->property_name, In2P->options, (io_buf_ptr_t *)&(OutP->properties.address), &OutP->propertiesCnt);
	iokit_remove_reference(registry_entry);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->properties.size = OutP->propertiesCnt;


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2855, "io_registry_entry_get_property_recursively")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_get_state_t__defined)
#define __MIG_check__Request__io_service_get_state_t__defined

mig_internal kern_return_t __MIG_check__Request__io_service_get_state_t(__Request__io_service_get_state_t *In0P)
{

	typedef __Request__io_service_get_state_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_get_state_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_state */
mig_internal novalue _Xio_service_get_state
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_get_state_t __Request;
	typedef __Reply__io_service_get_state_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_get_state_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_get_state_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2856, "io_service_get_state")
	__BeforeRcvRpc(2856, "io_service_get_state")

#if	defined(__MIG_check__Request__io_service_get_state_t__defined)
	check_result = __MIG_check__Request__io_service_get_state_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_get_state_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_get_state(service, &OutP->state);
	iokit_remove_reference(service);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2856, "io_service_get_state")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_get_matching_services_ool_t__defined)
#define __MIG_check__Request__io_service_get_matching_services_ool_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_get_matching_services_ool_t(__Request__io_service_get_matching_services_ool_t *In0P)
{

	typedef __Request__io_service_get_matching_services_ool_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->matching.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined)
		__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt(&In0P->matchingCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matchingCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined)
		__NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.int_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_get_matching_services_ool_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined)
		__NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.char_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_get_matching_services_ool_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined)
		__NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.float_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_get_matching_services_ool_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_get_matching_services_ool_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_get_matching_services_ool */
mig_internal novalue _Xio_service_get_matching_services_ool
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_get_matching_services_ool_t __Request;
	typedef __Reply__io_service_get_matching_services_ool_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_get_matching_services_ool_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_get_matching_services_ool_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t existingTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t existingTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t existing;

	__DeclareRcvRpc(2857, "io_service_get_matching_services_ool")
	__BeforeRcvRpc(2857, "io_service_get_matching_services_ool")

#if	defined(__MIG_check__Request__io_service_get_matching_services_ool_t__defined)
	check_result = __MIG_check__Request__io_service_get_matching_services_ool_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_get_matching_services_ool_t__defined) */

#if	UseStaticTemplates
	OutP->existing = existingTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->existing.disposition = 17;
#else
	OutP->existing.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->existing.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_service_get_matching_services_ool(In0P->Head.msgh_request_port, (io_buf_ptr_t)(In0P->matching.address), In0P->matchingCnt, &OutP->result, &existing);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->existing.name = (mach_port_t)iokit_make_object_port(existing);


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2857, "io_service_get_matching_services_ool")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_match_property_table_ool_t__defined)
#define __MIG_check__Request__io_service_match_property_table_ool_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_match_property_table_ool_t(__Request__io_service_match_property_table_ool_t *In0P)
{

	typedef __Request__io_service_match_property_table_ool_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->matching.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined)
		__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt(&In0P->matchingCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matchingCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined)
		__NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.int_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_match_property_table_ool_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined)
		__NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.char_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_match_property_table_ool_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined)
		__NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.float_rep, In0P->matchingCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_match_property_table_ool_t__matching__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_match_property_table_ool_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_match_property_table_ool */
mig_internal novalue _Xio_service_match_property_table_ool
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t matchingCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_match_property_table_ool_t __Request;
	typedef __Reply__io_service_match_property_table_ool_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_match_property_table_ool_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_match_property_table_ool_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	io_object_t service;

	__DeclareRcvRpc(2858, "io_service_match_property_table_ool")
	__BeforeRcvRpc(2858, "io_service_match_property_table_ool")

#if	defined(__MIG_check__Request__io_service_match_property_table_ool_t__defined)
	check_result = __MIG_check__Request__io_service_match_property_table_ool_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_match_property_table_ool_t__defined) */

	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	OutP->RetCode = is_io_service_match_property_table_ool(service, (io_buf_ptr_t)(In0P->matching.address), In0P->matchingCnt, &OutP->result, &OutP->matches);
	iokit_remove_reference(service);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2858, "io_service_match_property_table_ool")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_add_notification_ool_t__defined)
#define __MIG_check__Request__io_service_add_notification_ool_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#if	defined(__NDR_convert__int_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__int_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_async_ref_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__int_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__iokit__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__iokit__natural_t)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__int_rep__natural_t)
#elif	defined(__NDR_convert__int_rep__iokit__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__int_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#if	defined(__NDR_convert__char_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__char_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_async_ref_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__char_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__iokit__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__iokit__natural_t)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__char_rep__natural_t)
#elif	defined(__NDR_convert__char_rep__iokit__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__char_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#if	defined(__NDR_convert__float_rep__iokit__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__float_rep__iokit__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_async_ref_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__float_rep__io_async_ref_t((io_async_ref_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__iokit__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__iokit__natural_t)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((natural_t *)(a), f, c, __NDR_convert__float_rep__natural_t)
#elif	defined(__NDR_convert__float_rep__iokit__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__iokit__uint32_t)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined
#define	__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(a, f, c) \
	__NDR_convert__ARRAY((uint32_t *)(a), f, c, __NDR_convert__float_rep__uint32_t)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_add_notification_ool_t(__Request__io_service_add_notification_ool_t *In0P, __Request__io_service_add_notification_ool_t **In1PP)
{

	typedef __Request__io_service_add_notification_ool_t __Request;
	__Request *In1P;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	unsigned int msgh_size_delta;

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 2) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 160)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request))
)
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->matching.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->wake_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->wake_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt(&In0P->notification_typeCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined */
	msgh_size_delta = _WALIGN_(In0P->notification_typeCnt);
#if	__MigTypeCheck
	if (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 160) + msgh_size_delta)
		return MIG_BAD_ARGUMENTS;
	msgh_size -= msgh_size_delta;
#endif	/* __MigTypeCheck */

	*In1PP = In1P = (__Request *) ((pointer_t) In0P + msgh_size_delta - 128);

#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt(&In1P->referenceCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 160) + ((4 * In1P->referenceCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_typeCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__referenceCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type(&In0P->notification_type, In0P->NDR.int_rep, In0P->notification_typeCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__notification_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt(&In1P->matchingCnt, In1P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matchingCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.int_rep, In1P->matchingCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__matching__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined)
		__NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference(&In1P->reference, In0P->NDR.int_rep, In1P->referenceCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_add_notification_ool_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined) || \
	0 || \
	defined(__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined)
		__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type(&In0P->notification_type, In0P->NDR.char_rep, In0P->notification_typeCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__notification_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined)
		__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.char_rep, In1P->matchingCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__matching__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined)
		__NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference(&In1P->reference, In0P->NDR.char_rep, In1P->referenceCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_add_notification_ool_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined) || \
	0 || \
	defined(__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined)
		__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type(&In0P->notification_type, In0P->NDR.float_rep, In0P->notification_typeCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__notification_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined)
		__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching((io_buf_ptr_t)(In0P->matching.address), In0P->NDR.float_rep, In1P->matchingCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__matching__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined)
		__NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference(&In1P->reference, In0P->NDR.float_rep, In1P->referenceCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_add_notification_ool_t__reference__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_add_notification_ool_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_add_notification_ool */
mig_internal novalue _Xio_service_add_notification_ool
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t matching;
		mach_msg_port_descriptor_t wake_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t notification_typeOffset; /* MiG doesn't use it */
		mach_msg_type_number_t notification_typeCnt;
		char notification_type[128];
		mach_msg_type_number_t matchingCnt;
		mach_msg_type_number_t referenceCnt;
		natural_t reference[8];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_add_notification_ool_t __Request;
	typedef __Reply__io_service_add_notification_ool_t Reply;

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
#ifdef	__MIG_check__Request__io_service_add_notification_ool_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_add_notification_ool_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t notificationTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t notificationTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t notification;

	__DeclareRcvRpc(2859, "io_service_add_notification_ool")
	__BeforeRcvRpc(2859, "io_service_add_notification_ool")

#if	defined(__MIG_check__Request__io_service_add_notification_ool_t__defined)
	check_result = __MIG_check__Request__io_service_add_notification_ool_t((__Request *)In0P, (__Request **)&In1P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_add_notification_ool_t__defined) */

#if	UseStaticTemplates
	OutP->notification = notificationTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->notification.disposition = 17;
#else
	OutP->notification.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->notification.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = is_io_service_add_notification_ool(In0P->Head.msgh_request_port, In0P->notification_type, (io_buf_ptr_t)(In0P->matching.address), In1P->matchingCnt, In0P->wake_port.name, In1P->reference, In1P->referenceCnt, &OutP->result, &notification);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->notification.name = (mach_port_t)iokit_make_object_port(notification);


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2859, "io_service_add_notification_ool")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_object_get_superclass_t__defined)
#define __MIG_check__Request__io_object_get_superclass_t__defined
#ifndef __NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined */

#ifndef __NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined
#define	__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined
#define	__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined */

#ifndef __NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined
#define	__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined
#define	__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined */


mig_internal kern_return_t __MIG_check__Request__io_object_get_superclass_t(__Request__io_object_get_superclass_t *In0P)
{

	typedef __Request__io_object_get_superclass_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt(&In0P->obj_nameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->obj_nameCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined)
		__NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name(&In0P->obj_name, In0P->NDR.int_rep, In0P->obj_nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_object_get_superclass_t__obj_name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined)
		__NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name(&In0P->obj_name, In0P->NDR.char_rep, In0P->obj_nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_object_get_superclass_t__obj_name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined)
		__NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name(&In0P->obj_name, In0P->NDR.float_rep, In0P->obj_nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_object_get_superclass_t__obj_name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_object_get_superclass_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_superclass */
mig_internal novalue _Xio_object_get_superclass
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t obj_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t obj_nameCnt;
		char obj_name[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_object_get_superclass_t __Request;
	typedef __Reply__io_object_get_superclass_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_object_get_superclass_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_object_get_superclass_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2860, "io_object_get_superclass")
	__BeforeRcvRpc(2860, "io_object_get_superclass")

#if	defined(__MIG_check__Request__io_object_get_superclass_t__defined)
	check_result = __MIG_check__Request__io_object_get_superclass_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_object_get_superclass_t__defined) */

	OutP->RetCode = is_io_object_get_superclass(In0P->Head.msgh_request_port, In0P->obj_name, OutP->class_name);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->class_nameCnt = strlen(OutP->class_name) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 128) + (_WALIGN_((OutP->class_nameCnt + 3) & ~3));

	__AfterRcvRpc(2860, "io_object_get_superclass")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_object_get_bundle_identifier_t__defined)
#define __MIG_check__Request__io_object_get_bundle_identifier_t__defined
#ifndef __NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#if	defined(__NDR_convert__int_rep__iokit__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name(a, f, c) \
	__NDR_convert__int_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_name_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name(a, f, c) \
	__NDR_convert__int_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined */

#ifndef __NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined
#define	__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#if	defined(__NDR_convert__char_rep__iokit__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#define	__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name(a, f, c) \
	__NDR_convert__char_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_name_t__defined)
#define	__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#define	__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name(a, f, c) \
	__NDR_convert__char_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined */

#ifndef __NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#if	defined(__NDR_convert__float_rep__iokit__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#define	__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name(a, f, c) \
	__NDR_convert__float_rep__iokit__io_name_t((io_name_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_name_t__defined)
#define	__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined
#define	__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name(a, f, c) \
	__NDR_convert__float_rep__io_name_t((io_name_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined */


mig_internal kern_return_t __MIG_check__Request__io_object_get_bundle_identifier_t(__Request__io_object_get_bundle_identifier_t *In0P)
{

	typedef __Request__io_object_get_bundle_identifier_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 128)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt(&In0P->obj_nameCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined */
#if	__MigTypeCheck
	if (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 128) + (_WALIGN_(In0P->obj_nameCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined) || \
	defined(__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_nameCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined)
		__NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name(&In0P->obj_name, In0P->NDR.int_rep, In0P->obj_nameCnt);
#endif	/* __NDR_convert__int_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined)
		__NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name(&In0P->obj_name, In0P->NDR.char_rep, In0P->obj_nameCnt);
#endif	/* __NDR_convert__char_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined)
		__NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name(&In0P->obj_name, In0P->NDR.float_rep, In0P->obj_nameCnt);
#endif	/* __NDR_convert__float_rep__Request__io_object_get_bundle_identifier_t__obj_name__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_object_get_bundle_identifier_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_object_get_bundle_identifier */
mig_internal novalue _Xio_object_get_bundle_identifier
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t obj_nameOffset; /* MiG doesn't use it */
		mach_msg_type_number_t obj_nameCnt;
		char obj_name[128];
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_object_get_bundle_identifier_t __Request;
	typedef __Reply__io_object_get_bundle_identifier_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_object_get_bundle_identifier_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_object_get_bundle_identifier_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2861, "io_object_get_bundle_identifier")
	__BeforeRcvRpc(2861, "io_object_get_bundle_identifier")

#if	defined(__MIG_check__Request__io_object_get_bundle_identifier_t__defined)
	check_result = __MIG_check__Request__io_object_get_bundle_identifier_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_object_get_bundle_identifier_t__defined) */

	OutP->RetCode = is_io_object_get_bundle_identifier(In0P->Head.msgh_request_port, In0P->obj_name, OutP->class_name);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->class_nameCnt = strlen(OutP->class_name) + 1;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 128) + (_WALIGN_((OutP->class_nameCnt + 3) & ~3));

	__AfterRcvRpc(2861, "io_object_get_bundle_identifier")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__iokit_subsystem__
#if !defined(__MIG_check__Request__io_service_open_extended_t__defined)
#define __MIG_check__Request__io_service_open_extended_t__defined
#ifndef __NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined
#if	defined(__NDR_convert__int_rep__iokit__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__int_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__int_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined
#if	defined(__NDR_convert__int_rep__iokit__NDR_record_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__int_rep__iokit__NDR_record_t((NDR_record_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__NDR_record_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__int_rep__NDR_record_t((NDR_record_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__iokit__char__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__ARRAY((char *)(a), f, 8, __NDR_convert__int_rep__iokit__char)
#elif	defined(__NDR_convert__int_rep__char__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__ARRAY((char *)(a), f, 8, __NDR_convert__int_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined
#if	defined(__NDR_convert__int_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__properties(a, f, c) \
	__NDR_convert__int_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__int_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__properties(a, f, c) \
	__NDR_convert__int_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined */

#ifndef __NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined
#if	defined(__NDR_convert__int_rep__iokit__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__iokit__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined
#define	__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined
#if	defined(__NDR_convert__char_rep__iokit__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__char_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__char_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined
#if	defined(__NDR_convert__char_rep__iokit__NDR_record_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__char_rep__iokit__NDR_record_t((NDR_record_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__NDR_record_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__char_rep__NDR_record_t((NDR_record_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__iokit__char__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__ARRAY((char *)(a), f, 8, __NDR_convert__char_rep__iokit__char)
#elif	defined(__NDR_convert__char_rep__char__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__ARRAY((char *)(a), f, 8, __NDR_convert__char_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined */

#ifndef __NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined
#if	defined(__NDR_convert__char_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__properties(a, f, c) \
	__NDR_convert__char_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__char_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined
#define	__NDR_convert__char_rep__Request__io_service_open_extended_t__properties(a, f, c) \
	__NDR_convert__char_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined
#if	defined(__NDR_convert__float_rep__iokit__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__float_rep__iokit__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__float_rep__iokit__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined
#if	defined(__NDR_convert__float_rep__iokit__NDR_record_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__float_rep__iokit__NDR_record_t((NDR_record_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__NDR_record_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__float_rep__NDR_record_t((NDR_record_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__iokit__char__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__ARRAY((char *)(a), f, 8, __NDR_convert__float_rep__iokit__char)
#elif	defined(__NDR_convert__float_rep__char__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr(a, f) \
	__NDR_convert__ARRAY((char *)(a), f, 8, __NDR_convert__float_rep__char)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined */

#ifndef __NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined
#if	defined(__NDR_convert__float_rep__iokit__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__properties(a, f, c) \
	__NDR_convert__float_rep__iokit__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#elif	defined(__NDR_convert__float_rep__io_buf_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined
#define	__NDR_convert__float_rep__Request__io_service_open_extended_t__properties(a, f, c) \
	__NDR_convert__float_rep__io_buf_ptr_t((io_buf_ptr_t *)(a), f, c)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined */


mig_internal kern_return_t __MIG_check__Request__io_service_open_extended_t(__Request__io_service_open_extended_t *In0P)
{

	typedef __Request__io_service_open_extended_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 2) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->owningTask.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->owningTask.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->properties.type != MACH_MSG_OOL_DESCRIPTOR)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined) || \
	defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined)
		__NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type(&In0P->connect_type, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_open_extended_t__connect_type__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined)
		__NDR_convert__int_rep__Request__io_service_open_extended_t__ndr(&In0P->ndr, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_open_extended_t__ndr__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined)
		__NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt(&In0P->propertiesCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__io_service_open_extended_t__propertiesCnt__defined */
#if defined(__NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined)
		__NDR_convert__int_rep__Request__io_service_open_extended_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.int_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__int_rep__Request__io_service_open_extended_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined) || \
	defined(__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined) || \
	defined(__NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined)
		__NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type(&In0P->connect_type, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_open_extended_t__connect_type__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined)
		__NDR_convert__char_rep__Request__io_service_open_extended_t__ndr(&In0P->ndr, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__io_service_open_extended_t__ndr__defined */
#if defined(__NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined)
		__NDR_convert__char_rep__Request__io_service_open_extended_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.char_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__char_rep__Request__io_service_open_extended_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined) || \
	defined(__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined) || \
	defined(__NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined)
		__NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type(&In0P->connect_type, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_open_extended_t__connect_type__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined)
		__NDR_convert__float_rep__Request__io_service_open_extended_t__ndr(&In0P->ndr, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__io_service_open_extended_t__ndr__defined */
#if defined(__NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined)
		__NDR_convert__float_rep__Request__io_service_open_extended_t__properties((io_buf_ptr_t)(In0P->properties.address), In0P->NDR.float_rep, In0P->propertiesCnt);
#endif	/* __NDR_convert__float_rep__Request__io_service_open_extended_t__properties__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__io_service_open_extended_t__defined) */
#endif /* __MIG_check__Request__iokit_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine io_service_open_extended */
mig_internal novalue _Xio_service_open_extended
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t owningTask;
		mach_msg_ool_descriptor_t properties;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int connect_type;
		NDR_record_t ndr;
		mach_msg_type_number_t propertiesCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__io_service_open_extended_t __Request;
	typedef __Reply__io_service_open_extended_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__io_service_open_extended_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__io_service_open_extended_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t connectionTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t connectionTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	io_object_t service;
	task_t owningTask;
	io_connect_t connection;

	__DeclareRcvRpc(2862, "io_service_open_extended")
	__BeforeRcvRpc(2862, "io_service_open_extended")

#if	defined(__MIG_check__Request__io_service_open_extended_t__defined)
	check_result = __MIG_check__Request__io_service_open_extended_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__io_service_open_extended_t__defined) */

#if	UseStaticTemplates
	OutP->connection = connectionTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->connection.disposition = 17;
#else
	OutP->connection.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->connection.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	service = iokit_lookup_object_port(In0P->Head.msgh_request_port);

	owningTask = convert_port_to_task(In0P->owningTask.name);

	RetCode = is_io_service_open_extended(service, owningTask, In0P->connect_type, In0P->ndr, (io_buf_ptr_t)(In0P->properties.address), In0P->propertiesCnt, &OutP->result, &connection);
	task_deallocate(owningTask);
	iokit_remove_reference(service);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode

	if (IP_VALID((ipc_port_t)In0P->owningTask.name))
		ipc_port_release_send((ipc_port_t)In0P->owningTask.name);
#endif /* __MigKernelSpecificCode */
	OutP->connection.name = (mach_port_t)iokit_make_connect_port(connection);


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2862, "io_service_open_extended")
}



/* Description of this subsystem, for use in direct RPC */
const struct is_iokit_subsystem is_iokit_subsystem = {
	iokit_server_routine,
	2800,
	2863,
	(mach_msg_size_t)sizeof(union __ReplyUnion__is_iokit_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_object_get_class, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_object_get_class_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_object_conforms_to, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_object_conforms_to_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_iterator_next, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_iterator_next_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_iterator_reset, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_iterator_reset_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_get_matching_services, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_get_matching_services_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_property, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_property_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_create_iterator, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_create_iterator_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_iterator_enter_entry, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_iterator_enter_entry_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_iterator_exit_entry, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_iterator_exit_entry_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_from_path, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_from_path_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_name, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_name_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_properties, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_properties_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_property_bytes, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_property_bytes_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_child_iterator, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_child_iterator_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_parent_iterator, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_parent_iterator_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_open, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_open_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_close, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_close_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_get_service, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_get_service_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_set_notification_port, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_set_notification_port_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_map_memory, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_map_memory_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_add_client, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_add_client_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_set_properties, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_set_properties_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_method_scalarI_scalarO, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_method_scalarI_scalarO_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_method_scalarI_structureO, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_method_scalarI_structureO_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_method_scalarI_structureI, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_method_scalarI_structureI_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_method_structureI_structureO, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_method_structureI_structureO_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_path, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_path_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_get_root_entry, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_get_root_entry_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_set_properties, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_set_properties_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_in_plane, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_in_plane_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_object_get_retain_count, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_object_get_retain_count_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_get_busy_state, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_get_busy_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_wait_quiet, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_wait_quiet_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_create_iterator, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_create_iterator_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_iterator_is_valid, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_iterator_is_valid_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_make_matching, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_make_matching_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_catalog_send_data, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_catalog_send_data_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_catalog_terminate, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_catalog_terminate_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_catalog_get_data, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_catalog_get_data_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_catalog_get_gen_count, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_catalog_get_gen_count_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_catalog_module_loaded, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_catalog_module_loaded_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_catalog_reset, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_catalog_reset_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_request_probe, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_request_probe_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_name_in_plane, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_name_in_plane_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_match_property_table, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_match_property_table_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_async_method_scalarI_scalarO, 9, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_async_method_scalarI_scalarO_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_async_method_scalarI_structureO, 9, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_async_method_scalarI_structureO_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_async_method_scalarI_structureI, 9, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_async_method_scalarI_structureI_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_async_method_structureI_structureO, 9, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_async_method_structureI_structureO_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_add_notification, 7, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_add_notification_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_add_interest_notification, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_add_interest_notification_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_acknowledge_notification, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_acknowledge_notification_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_get_notification_semaphore, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_get_notification_semaphore_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_connect_unmap_memory, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_connect_unmap_memory_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_location_in_plane, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_location_in_plane_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_registry_entry_get_property_recursively, 6, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_registry_entry_get_property_recursively_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_get_state, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_get_state_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_get_matching_services_ool, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_get_matching_services_ool_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_match_property_table_ool, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_match_property_table_ool_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_add_notification_ool, 9, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_add_notification_ool_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_object_get_superclass, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_object_get_superclass_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_object_get_bundle_identifier, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_object_get_bundle_identifier_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xio_service_open_extended, 8, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__io_service_open_extended_t)},
	}
};

mig_external boolean_t iokit_server
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

	if ((InHeadP->msgh_id > 2862) || (InHeadP->msgh_id < 2800) ||
	    ((routine = is_iokit_subsystem.routine[InHeadP->msgh_id - 2800].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t iokit_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 2800;

	if ((msgh_id > 62) || (msgh_id < 0))
		return 0;

	return is_iokit_subsystem.routine[msgh_id].stub_routine;
}
