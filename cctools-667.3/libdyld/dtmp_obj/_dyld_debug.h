#ifndef	__dyld_debug_user_
#define	__dyld_debug_user_

/* Module _dyld_debug */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry 	*function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	_dyld_debug_MSG_COUNT
#define	_dyld_debug_MSG_COUNT	6
#endif	/* _dyld_debug_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach-o/dyld_debug.h>
#include "dyld_debug_defs.h"

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine _dyld_debug_defining_module */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t user_dyld_debug_defining_module
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	string_t name,
	mach_msg_type_number_t nameCnt,
	module_t *module,
	dyld_debug_return_t *retval
);

/* Routine _dyld_debug_is_module_bound */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t user_dyld_debug_is_module_bound
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	module_t module,
	boolean_t *bound,
	dyld_debug_return_t *retval
);

/* Routine _dyld_debug_bind_module */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t user_dyld_debug_bind_module
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	module_t module,
	dyld_debug_return_t *retval
);

/* Routine _dyld_debug_add_event_subscriber */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t user_dyld_debug_add_event_subscriber
(
	mach_port_t debug_port,
	long rcv_timeout,
	boolean_t inconsistent_data_ok,
	mach_port_t subscriber,
	dyld_debug_return_t *retval
);

/* Routine _dyld_debug_module_name */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t user_dyld_debug_module_name
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
);

/* Routine _dyld_debug_monoutput */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t user_dyld_debug_monoutput
(
	mach_port_t debug_port,
	long rcv_timeout,
	dyld_debug_return_t *retval
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request___dyld_debug_subsystem__defined
#define __Request___dyld_debug_subsystem__defined

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
	} __Request___dyld_debug_defining_module_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		module_t module;
	} __Request___dyld_debug_is_module_bound_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		module_t module;
	} __Request___dyld_debug_bind_module_t;
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
		mach_msg_port_descriptor_t subscriber;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
	} __Request___dyld_debug_add_event_subscriber_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		boolean_t inconsistent_data_ok;
		module_t module;
	} __Request___dyld_debug_module_name_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request___dyld_debug_monoutput_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request___dyld_debug_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__user_dyld_debug_subsystem__defined
#define __RequestUnion__user_dyld_debug_subsystem__defined
union __RequestUnion__user_dyld_debug_subsystem {
	__Request___dyld_debug_defining_module_t Request_user_dyld_debug_defining_module;
	__Request___dyld_debug_is_module_bound_t Request_user_dyld_debug_is_module_bound;
	__Request___dyld_debug_bind_module_t Request_user_dyld_debug_bind_module;
	__Request___dyld_debug_add_event_subscriber_t Request_user_dyld_debug_add_event_subscriber;
	__Request___dyld_debug_module_name_t Request_user_dyld_debug_module_name;
	__Request___dyld_debug_monoutput_t Request_user_dyld_debug_monoutput;
};
#endif /* !__RequestUnion__user_dyld_debug_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply___dyld_debug_subsystem__defined
#define __Reply___dyld_debug_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		module_t module;
		dyld_debug_return_t retval;
	} __Reply___dyld_debug_defining_module_t;
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
	} __Reply___dyld_debug_is_module_bound_t;
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
	} __Reply___dyld_debug_bind_module_t;
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
	} __Reply___dyld_debug_add_event_subscriber_t;
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
	} __Reply___dyld_debug_module_name_t;
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
	} __Reply___dyld_debug_monoutput_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply___dyld_debug_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__user_dyld_debug_subsystem__defined
#define __ReplyUnion__user_dyld_debug_subsystem__defined
union __ReplyUnion__user_dyld_debug_subsystem {
	__Reply___dyld_debug_defining_module_t Reply_user_dyld_debug_defining_module;
	__Reply___dyld_debug_is_module_bound_t Reply_user_dyld_debug_is_module_bound;
	__Reply___dyld_debug_bind_module_t Reply_user_dyld_debug_bind_module;
	__Reply___dyld_debug_add_event_subscriber_t Reply_user_dyld_debug_add_event_subscriber;
	__Reply___dyld_debug_module_name_t Reply_user_dyld_debug_module_name;
	__Reply___dyld_debug_monoutput_t Reply_user_dyld_debug_monoutput;
};
#endif /* !__RequestUnion__user_dyld_debug_subsystem__defined */

#ifndef subsystem_to_name_map__dyld_debug
#define subsystem_to_name_map__dyld_debug \
    { "_dyld_debug_defining_module", 100 },\
    { "_dyld_debug_is_module_bound", 101 },\
    { "_dyld_debug_bind_module", 102 },\
    { "_dyld_debug_add_event_subscriber", 103 },\
    { "_dyld_debug_module_name", 104 },\
    { "_dyld_debug_monoutput", 105 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* __dyld_debug_user_ */
