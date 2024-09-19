/*
 * IDENTIFICATION:
 * stub generated Sun Jan 26 13:37:01 2014
 * with a MiG generated Fri Jan 24 17:00:42 CET 2014 by root@mike-mikes-powerbook-g4-15.local
 * OPTIONS: 
 *	KernelServer
 */

/* Module default_pager_object */

#define	__MIG_check__Request__default_pager_object_subsystem__ 1
#define	__NDR_convert__Request__default_pager_object_subsystem__ 1

#include "default_pager_object_server.h"

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


mig_internal novalue _Xdefault_pager_object_create
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_info
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_objects
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_object_pages
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_backing_store_create
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_backing_store_delete
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_backing_store_info
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_add_file
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_triggers
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xdefault_pager_info_64
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_object_create_t__defined)
#define __MIG_check__Request__default_pager_object_create_t__defined
#ifndef __NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__vm_size_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__int_rep__default_pager_object__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__natural_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__int_rep__default_pager_object__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__int_rep__default_pager_object__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__vm_size_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__char_rep__default_pager_object__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__natural_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__char_rep__default_pager_object__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__char_rep__default_pager_object__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__vm_size_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__float_rep__default_pager_object__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__natural_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__float_rep__default_pager_object__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__float_rep__default_pager_object__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined */


mig_internal kern_return_t __MIG_check__Request__default_pager_object_create_t(__Request__default_pager_object_create_t *In0P)
{

	typedef __Request__default_pager_object_create_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined)
		__NDR_convert__int_rep__Request__default_pager_object_create_t__object_size(&In0P->object_size, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_object_create_t__object_size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined)
		__NDR_convert__char_rep__Request__default_pager_object_create_t__object_size(&In0P->object_size, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_object_create_t__object_size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined)
		__NDR_convert__float_rep__Request__default_pager_object_create_t__object_size(&In0P->object_size, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_object_create_t__object_size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_object_create_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_object_create */
mig_internal novalue _Xdefault_pager_object_create
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vm_size_t object_size;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__default_pager_object_create_t __Request;
	typedef __Reply__default_pager_object_create_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_object_create_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_object_create_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t memory_objectTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t memory_objectTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		19,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	memory_object_t memory_object;

	__DeclareRcvRpc(2275, "default_pager_object_create")
	__BeforeRcvRpc(2275, "default_pager_object_create")

#if	defined(__MIG_check__Request__default_pager_object_create_t__defined)
	check_result = __MIG_check__Request__default_pager_object_create_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_object_create_t__defined) */

#if	UseStaticTemplates
	OutP->memory_object = memory_objectTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->memory_object.disposition = 17;
#else
	OutP->memory_object.disposition = 19;
#endif /* __MigKernelSpecificCode */
	OutP->memory_object.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = default_pager_object_create(In0P->Head.msgh_request_port, In0P->object_size, &memory_object);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->memory_object.name = (mach_port_t)convert_memory_object_to_port(memory_object);


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2275, "default_pager_object_create")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_info_t__defined)
#define __MIG_check__Request__default_pager_info_t__defined

mig_internal kern_return_t __MIG_check__Request__default_pager_info_t(__Request__default_pager_info_t *In0P)
{

	typedef __Request__default_pager_info_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_info_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_info */
mig_internal novalue _Xdefault_pager_info
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
	typedef __Request__default_pager_info_t __Request;
	typedef __Reply__default_pager_info_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_info_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2276, "default_pager_info")
	__BeforeRcvRpc(2276, "default_pager_info")

#if	defined(__MIG_check__Request__default_pager_info_t__defined)
	check_result = __MIG_check__Request__default_pager_info_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_info_t__defined) */

	OutP->RetCode = default_pager_info(In0P->Head.msgh_request_port, &OutP->info);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2276, "default_pager_info")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_objects_t__defined)
#define __MIG_check__Request__default_pager_objects_t__defined

mig_internal kern_return_t __MIG_check__Request__default_pager_objects_t(__Request__default_pager_objects_t *In0P)
{

	typedef __Request__default_pager_objects_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_objects_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_objects */
mig_internal novalue _Xdefault_pager_objects
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
	typedef __Request__default_pager_objects_t __Request;
	typedef __Reply__default_pager_objects_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_objects_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_objects_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t objectsTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		TRUE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t portsTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		TRUE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		17,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t objectsTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		TRUE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_ports_descriptor_t portsTemplate = {
		/* addr = */		(void *)0,
		/* coun = */		0,
		/* deal = */		TRUE,
		/* copy is meaningful only in overwrite mode */
		/* copy = */		MACH_MSG_PHYSICAL_COPY,
		/* disp = */		17,
		/* type = */		MACH_MSG_OOL_PORTS_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	__DeclareRcvRpc(2277, "default_pager_objects")
	__BeforeRcvRpc(2277, "default_pager_objects")

#if	defined(__MIG_check__Request__default_pager_objects_t__defined)
	check_result = __MIG_check__Request__default_pager_objects_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_objects_t__defined) */

#if	UseStaticTemplates
	OutP->objects = objectsTemplate;
#else	/* UseStaticTemplates */
	OutP->objects.deallocate =  TRUE;
	OutP->objects.copy = MACH_MSG_VIRTUAL_COPY;
	OutP->objects.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */


#if	UseStaticTemplates
	OutP->ports = portsTemplate;
#else	/* UseStaticTemplates */
#if	__MigKernelSpecificCode
	OutP->ports.disposition = 17;
#else
	OutP->ports.disposition = 17;
#endif /* __MigKernelSpecificCode */
	OutP->ports.deallocate =  TRUE;
	OutP->ports.type = MACH_MSG_OOL_PORTS_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	OutP->objectsCnt = 0;

	OutP->portsCnt = 0;

	RetCode = default_pager_objects(In0P->Head.msgh_request_port, (default_pager_object_array_t *)&(OutP->objects.address), &OutP->objectsCnt, (mach_port_array_t *)&(OutP->ports.address), &OutP->portsCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->objects.size = OutP->objectsCnt * 8;

	OutP->ports.count = OutP->portsCnt;


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 2;
	__AfterRcvRpc(2277, "default_pager_objects")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_object_pages_t__defined)
#define __MIG_check__Request__default_pager_object_pages_t__defined

mig_internal kern_return_t __MIG_check__Request__default_pager_object_pages_t(__Request__default_pager_object_pages_t *In0P)
{

	typedef __Request__default_pager_object_pages_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->memory_object.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->memory_object.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_object_pages_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_object_pages */
mig_internal novalue _Xdefault_pager_object_pages
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t memory_object;
		/* end of the kernel processed data */
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__default_pager_object_pages_t __Request;
	typedef __Reply__default_pager_object_pages_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_object_pages_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_object_pages_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t pagesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		TRUE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t pagesTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		TRUE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	__DeclareRcvRpc(2278, "default_pager_object_pages")
	__BeforeRcvRpc(2278, "default_pager_object_pages")

#if	defined(__MIG_check__Request__default_pager_object_pages_t__defined)
	check_result = __MIG_check__Request__default_pager_object_pages_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_object_pages_t__defined) */

#if	UseStaticTemplates
	OutP->pages = pagesTemplate;
#else	/* UseStaticTemplates */
	OutP->pages.deallocate =  TRUE;
	OutP->pages.copy = MACH_MSG_VIRTUAL_COPY;
	OutP->pages.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	OutP->pagesCnt = 0;

	RetCode = default_pager_object_pages(In0P->Head.msgh_request_port, In0P->memory_object.name, (default_pager_page_array_t *)&(OutP->pages.address), &OutP->pagesCnt);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */
	OutP->pages.size = OutP->pagesCnt * 4;


	OutP->NDR = NDR_record;


	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2278, "default_pager_object_pages")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_backing_store_create_t__defined)
#define __MIG_check__Request__default_pager_backing_store_create_t__defined
#ifndef __NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined */

#ifndef __NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined */


mig_internal kern_return_t __MIG_check__Request__default_pager_backing_store_create_t(__Request__default_pager_backing_store_create_t *In0P)
{

	typedef __Request__default_pager_backing_store_create_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined) || \
	defined(__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined)
		__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority(&In0P->priority, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_backing_store_create_t__priority__defined */
#if defined(__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined)
		__NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize(&In0P->clsize, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_backing_store_create_t__clsize__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined) || \
	defined(__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined)
		__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority(&In0P->priority, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_backing_store_create_t__priority__defined */
#if defined(__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined)
		__NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize(&In0P->clsize, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_backing_store_create_t__clsize__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined) || \
	defined(__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined)
		__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority(&In0P->priority, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_backing_store_create_t__priority__defined */
#if defined(__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined)
		__NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize(&In0P->clsize, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_backing_store_create_t__clsize__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_backing_store_create_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_backing_store_create */
mig_internal novalue _Xdefault_pager_backing_store_create
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int priority;
		int clsize;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__default_pager_backing_store_create_t __Request;
	typedef __Reply__default_pager_backing_store_create_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_backing_store_create_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_backing_store_create_t__defined */

#if	__MigKernelSpecificCode
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t backing_storeTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		17,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#else
#if	UseStaticTemplates
	const static mach_msg_port_descriptor_t backing_storeTemplate = {
		/* name = */		MACH_PORT_NULL,
		/* pad1 = */		0,
		/* pad2 = */		0,
		/* disp = */		20,
		/* type = */		MACH_MSG_PORT_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#endif /* __MigKernelSpecificCode */
	kern_return_t RetCode;
	__DeclareRcvRpc(2280, "default_pager_backing_store_create")
	__BeforeRcvRpc(2280, "default_pager_backing_store_create")

#if	defined(__MIG_check__Request__default_pager_backing_store_create_t__defined)
	check_result = __MIG_check__Request__default_pager_backing_store_create_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_backing_store_create_t__defined) */

#if	UseStaticTemplates
	OutP->backing_store = backing_storeTemplate;
#else	/* UseStaticTemplates */
#if __MigKernelSpecificCode
	OutP->backing_store.disposition = 17;
#else
	OutP->backing_store.disposition = 20;
#endif /* __MigKernelSpecificCode */
	OutP->backing_store.type = MACH_MSG_PORT_DESCRIPTOR;
#endif	/* UseStaticTemplates */


	RetCode = default_pager_backing_store_create(In0P->Head.msgh_request_port, In0P->priority, In0P->clsize, &OutP->backing_store.name);
	if (RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->Head.msgh_bits |= MACH_MSGH_BITS_COMPLEX;
	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	OutP->msgh_body.msgh_descriptor_count = 1;
	__AfterRcvRpc(2280, "default_pager_backing_store_create")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_backing_store_delete_t__defined)
#define __MIG_check__Request__default_pager_backing_store_delete_t__defined

mig_internal kern_return_t __MIG_check__Request__default_pager_backing_store_delete_t(__Request__default_pager_backing_store_delete_t *In0P)
{

	typedef __Request__default_pager_backing_store_delete_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_backing_store_delete_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_backing_store_delete */
mig_internal novalue _Xdefault_pager_backing_store_delete
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
	typedef __Request__default_pager_backing_store_delete_t __Request;
	typedef __Reply__default_pager_backing_store_delete_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_backing_store_delete_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_backing_store_delete_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2281, "default_pager_backing_store_delete")
	__BeforeRcvRpc(2281, "default_pager_backing_store_delete")

#if	defined(__MIG_check__Request__default_pager_backing_store_delete_t__defined)
	check_result = __MIG_check__Request__default_pager_backing_store_delete_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_backing_store_delete_t__defined) */

	OutP->RetCode = default_pager_backing_store_delete(In0P->Head.msgh_request_port);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2281, "default_pager_backing_store_delete")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_backing_store_info_t__defined)
#define __MIG_check__Request__default_pager_backing_store_info_t__defined
#ifndef __NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__backing_store_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__int_rep__default_pager_object__backing_store_flavor_t((backing_store_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__backing_store_flavor_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__int_rep__backing_store_flavor_t((backing_store_flavor_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__integer_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__int_rep__default_pager_object__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__integer_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__int_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined */

#ifndef __NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt(a, f) \
	__NDR_convert__int_rep__default_pager_object__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__mach_msg_type_number_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined
#define	__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt(a, f) \
	__NDR_convert__int_rep__mach_msg_type_number_t((mach_msg_type_number_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__backing_store_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__char_rep__default_pager_object__backing_store_flavor_t((backing_store_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__backing_store_flavor_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__char_rep__backing_store_flavor_t((backing_store_flavor_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__integer_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__char_rep__default_pager_object__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__integer_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__char_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__backing_store_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__float_rep__default_pager_object__backing_store_flavor_t((backing_store_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__backing_store_flavor_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__float_rep__backing_store_flavor_t((backing_store_flavor_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__integer_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__float_rep__default_pager_object__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__integer_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__float_rep__integer_t((integer_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined
#define	__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined */


mig_internal kern_return_t __MIG_check__Request__default_pager_backing_store_info_t(__Request__default_pager_backing_store_info_t *In0P)
{

	typedef __Request__default_pager_backing_store_info_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined) || \
	defined(__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined)
		__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor(&In0P->flavor, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_backing_store_info_t__flavor__defined */
#if defined(__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined)
		__NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt(&In0P->infoCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_backing_store_info_t__infoCnt__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined) || \
	0
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined)
		__NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor(&In0P->flavor, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_backing_store_info_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined) || \
	0
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined)
		__NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor(&In0P->flavor, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_backing_store_info_t__flavor__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_backing_store_info_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_backing_store_info */
mig_internal novalue _Xdefault_pager_backing_store_info
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		backing_store_flavor_t flavor;
		mach_msg_type_number_t infoCnt;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__default_pager_backing_store_info_t __Request;
	typedef __Reply__default_pager_backing_store_info_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_backing_store_info_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_backing_store_info_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2282, "default_pager_backing_store_info")
	__BeforeRcvRpc(2282, "default_pager_backing_store_info")

#if	defined(__MIG_check__Request__default_pager_backing_store_info_t__defined)
	check_result = __MIG_check__Request__default_pager_backing_store_info_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_backing_store_info_t__defined) */

	OutP->infoCnt = 20;
	if (In0P->infoCnt < OutP->infoCnt)
		OutP->infoCnt = In0P->infoCnt;

	OutP->RetCode = default_pager_backing_store_info(In0P->Head.msgh_request_port, In0P->flavor, OutP->info, &OutP->infoCnt);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;

	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply) - 80) + (((4 * OutP->infoCnt)));

	__AfterRcvRpc(2282, "default_pager_backing_store_info")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_add_file_t__defined)
#define __MIG_check__Request__default_pager_add_file_t__defined
#ifndef __NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__vnode_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__default_pager_object__vnode_ptr_t((vnode_ptr_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vnode_ptr_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__vnode_ptr_t((vnode_ptr_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined */

#ifndef __NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined */

#ifndef __NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__vm_size_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__int_rep__default_pager_object__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__vm_size_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__int_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__natural_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__int_rep__default_pager_object__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__natural_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__int_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__int_rep__default_pager_object__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__uint32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__int_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__int_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__vnode_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__default_pager_object__vnode_ptr_t((vnode_ptr_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vnode_ptr_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__vnode_ptr_t((vnode_ptr_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__vm_size_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__char_rep__default_pager_object__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__vm_size_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__char_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__natural_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__char_rep__default_pager_object__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__natural_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__char_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__char_rep__default_pager_object__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__uint32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__char_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__char_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__vnode_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__default_pager_object__vnode_ptr_t((vnode_ptr_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vnode_ptr_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__vnode_ptr_t((vnode_ptr_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__vm_size_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__float_rep__default_pager_object__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__vm_size_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__float_rep__vm_size_t((vm_size_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__natural_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__float_rep__default_pager_object__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__natural_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__float_rep__natural_t((natural_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__float_rep__default_pager_object__uint32_t((uint32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__uint32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined
#define	__NDR_convert__float_rep__Request__default_pager_add_file_t__size(a, f) \
	__NDR_convert__float_rep__uint32_t((uint32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined */


mig_internal kern_return_t __MIG_check__Request__default_pager_add_file_t(__Request__default_pager_add_file_t *In0P)
{

	typedef __Request__default_pager_add_file_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined) || \
	defined(__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined) || \
	defined(__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined)
		__NDR_convert__int_rep__Request__default_pager_add_file_t__vnode(&In0P->vnode, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_add_file_t__vnode__defined */
#if defined(__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined)
		__NDR_convert__int_rep__Request__default_pager_add_file_t__record_size(&In0P->record_size, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_add_file_t__record_size__defined */
#if defined(__NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined)
		__NDR_convert__int_rep__Request__default_pager_add_file_t__size(&In0P->size, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_add_file_t__size__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined) || \
	defined(__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined) || \
	defined(__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined)
		__NDR_convert__char_rep__Request__default_pager_add_file_t__vnode(&In0P->vnode, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_add_file_t__vnode__defined */
#if defined(__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined)
		__NDR_convert__char_rep__Request__default_pager_add_file_t__record_size(&In0P->record_size, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_add_file_t__record_size__defined */
#if defined(__NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined)
		__NDR_convert__char_rep__Request__default_pager_add_file_t__size(&In0P->size, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_add_file_t__size__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined) || \
	defined(__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined) || \
	defined(__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined)
		__NDR_convert__float_rep__Request__default_pager_add_file_t__vnode(&In0P->vnode, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_add_file_t__vnode__defined */
#if defined(__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined)
		__NDR_convert__float_rep__Request__default_pager_add_file_t__record_size(&In0P->record_size, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_add_file_t__record_size__defined */
#if defined(__NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined)
		__NDR_convert__float_rep__Request__default_pager_add_file_t__size(&In0P->size, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_add_file_t__size__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_add_file_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_add_file */
mig_internal novalue _Xdefault_pager_add_file
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		vnode_ptr_t vnode;
		int record_size;
		vm_size_t size;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__default_pager_add_file_t __Request;
	typedef __Reply__default_pager_add_file_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_add_file_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_add_file_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2283, "default_pager_add_file")
	__BeforeRcvRpc(2283, "default_pager_add_file")

#if	defined(__MIG_check__Request__default_pager_add_file_t__defined)
	check_result = __MIG_check__Request__default_pager_add_file_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_add_file_t__defined) */

	OutP->RetCode = default_pager_add_file(In0P->Head.msgh_request_port, In0P->vnode, In0P->record_size, In0P->size);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2283, "default_pager_add_file")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_triggers_t__defined)
#define __MIG_check__Request__default_pager_triggers_t__defined
#ifndef __NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined */

#ifndef __NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined */

#ifndef __NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined
#if	defined(__NDR_convert__int_rep__default_pager_object__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__int_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__int__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__int_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__int_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__int_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__int_rep__int32_t__defined)
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__int_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__int_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined */

#ifndef __NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined
#if	defined(__NDR_convert__char_rep__default_pager_object__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__char_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__int__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__char_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__char_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__char_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__char_rep__int32_t__defined)
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__char_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__char_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined */

#ifndef __NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined
#if	defined(__NDR_convert__float_rep__default_pager_object__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__float_rep__default_pager_object__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__int__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__float_rep__int((int *)(a), f)
#elif	defined(__NDR_convert__float_rep__default_pager_object__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__float_rep__default_pager_object__int32_t((int32_t *)(a), f)
#elif	defined(__NDR_convert__float_rep__int32_t__defined)
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined
#define	__NDR_convert__float_rep__Request__default_pager_triggers_t__flags(a, f) \
	__NDR_convert__float_rep__int32_t((int32_t *)(a), f)
#endif /* defined(__NDR_convert__*__defined) */
#endif /* __NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined */


mig_internal kern_return_t __MIG_check__Request__default_pager_triggers_t(__Request__default_pager_triggers_t *In0P)
{

	typedef __Request__default_pager_triggers_t __Request;
#if	__MigTypeCheck
	if (!(In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->msgh_body.msgh_descriptor_count != 1) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	if (In0P->trigger_port.type != MACH_MSG_PORT_DESCRIPTOR ||
	    In0P->trigger_port.disposition != 17)
		return MIG_TYPE_ERROR;
#endif	/* __MigTypeCheck */

#if	defined(__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined) || \
	defined(__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined) || \
	defined(__NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep) {
#if defined(__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined)
		__NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat(&In0P->hi_wat, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_triggers_t__hi_wat__defined */
#if defined(__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined)
		__NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat(&In0P->lo_wat, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_triggers_t__lo_wat__defined */
#if defined(__NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined)
		__NDR_convert__int_rep__Request__default_pager_triggers_t__flags(&In0P->flags, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__default_pager_triggers_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__int_rep...) */

#if	defined(__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined) || \
	defined(__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined) || \
	defined(__NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined)
	if (In0P->NDR.char_rep != NDR_record.char_rep) {
#if defined(__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined)
		__NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat(&In0P->hi_wat, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_triggers_t__hi_wat__defined */
#if defined(__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined)
		__NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat(&In0P->lo_wat, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_triggers_t__lo_wat__defined */
#if defined(__NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined)
		__NDR_convert__char_rep__Request__default_pager_triggers_t__flags(&In0P->flags, In0P->NDR.char_rep);
#endif	/* __NDR_convert__char_rep__Request__default_pager_triggers_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__char_rep...) */

#if	defined(__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined) || \
	defined(__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined) || \
	defined(__NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined)
	if (In0P->NDR.float_rep != NDR_record.float_rep) {
#if defined(__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined)
		__NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat(&In0P->hi_wat, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_triggers_t__hi_wat__defined */
#if defined(__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined)
		__NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat(&In0P->lo_wat, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_triggers_t__lo_wat__defined */
#if defined(__NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined)
		__NDR_convert__float_rep__Request__default_pager_triggers_t__flags(&In0P->flags, In0P->NDR.float_rep);
#endif	/* __NDR_convert__float_rep__Request__default_pager_triggers_t__flags__defined */
	}
#endif	/* defined(__NDR_convert__float_rep...) */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_triggers_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_triggers */
mig_internal novalue _Xdefault_pager_triggers
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t trigger_port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		int hi_wat;
		int lo_wat;
		int flags;
		mach_msg_trailer_t trailer;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	typedef __Request__default_pager_triggers_t __Request;
	typedef __Reply__default_pager_triggers_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_triggers_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_triggers_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2284, "default_pager_triggers")
	__BeforeRcvRpc(2284, "default_pager_triggers")

#if	defined(__MIG_check__Request__default_pager_triggers_t__defined)
	check_result = __MIG_check__Request__default_pager_triggers_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_triggers_t__defined) */

	OutP->RetCode = default_pager_triggers(In0P->Head.msgh_request_port, In0P->hi_wat, In0P->lo_wat, In0P->flags, In0P->trigger_port.name);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(2284, "default_pager_triggers")
}

#if (__MigTypeCheck || __NDR_convert__ )
#if __MIG_check__Request__default_pager_object_subsystem__
#if !defined(__MIG_check__Request__default_pager_info_64_t__defined)
#define __MIG_check__Request__default_pager_info_64_t__defined

mig_internal kern_return_t __MIG_check__Request__default_pager_info_64_t(__Request__default_pager_info_64_t *In0P)
{

	typedef __Request__default_pager_info_64_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__default_pager_info_64_t__defined) */
#endif /* __MIG_check__Request__default_pager_object_subsystem__ */
#endif /* ( __MigTypeCheck || __NDR_convert__ ) */


/* Routine default_pager_info_64 */
mig_internal novalue _Xdefault_pager_info_64
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
	typedef __Request__default_pager_info_64_t __Request;
	typedef __Reply__default_pager_info_64_t Reply;

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__default_pager_info_64_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__default_pager_info_64_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(2285, "default_pager_info_64")
	__BeforeRcvRpc(2285, "default_pager_info_64")

#if	defined(__MIG_check__Request__default_pager_info_64_t__defined)
	check_result = __MIG_check__Request__default_pager_info_64_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__default_pager_info_64_t__defined) */

	OutP->RetCode = default_pager_info_64(In0P->Head.msgh_request_port, &OutP->info);
	if (OutP->RetCode != KERN_SUCCESS) {
		MIG_RETURN_ERROR(OutP, OutP->RetCode);
	}
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	OutP->Head.msgh_size = (mach_msg_size_t)(sizeof(Reply));
	__AfterRcvRpc(2285, "default_pager_info_64")
}



/* Description of this subsystem, for use in direct RPC */
const struct default_pager_object_subsystem default_pager_object_subsystem = {
	default_pager_object_server_routine,
	2275,
	2286,
	(mach_msg_size_t)sizeof(union __ReplyUnion__default_pager_object_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_object_create, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_object_create_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_info, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_info_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_objects, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_objects_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_object_pages, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_object_pages_t)},
		{0, 0, 0, 0, 0, 0},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_backing_store_create, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_backing_store_create_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_backing_store_delete, 1, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_backing_store_delete_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_backing_store_info, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_backing_store_info_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_add_file, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_add_file_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_triggers, 5, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_triggers_t)},
          { (mig_impl_routine_t) 0,
            (mig_stub_routine_t) _Xdefault_pager_info_64, 2, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__default_pager_info_64_t)},
	}
};

mig_external boolean_t default_pager_object_server
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

	if ((InHeadP->msgh_id > 2285) || (InHeadP->msgh_id < 2275) ||
	    ((routine = default_pager_object_subsystem.routine[InHeadP->msgh_id - 2275].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t default_pager_object_server_routine
	(mach_msg_header_t *InHeadP)
{
	register int msgh_id;

	msgh_id = InHeadP->msgh_id - 2275;

	if ((msgh_id > 10) || (msgh_id < 0))
		return 0;

	return default_pager_object_subsystem.routine[msgh_id].stub_routine;
}
