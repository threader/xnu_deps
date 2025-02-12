#ifndef	_host_notify_reply_user_
#define	_host_notify_reply_user_

/* Module host_notify_reply */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
#if	(__MigKernelSpecificCode) || (_MIG_KERNEL_SPECIFIC_CODE_)
#include <kern/ipc_mig.h>
#endif /* __MigKernelSpecificCode */

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

#ifndef	host_notify_reply_MSG_COUNT
#define	host_notify_reply_MSG_COUNT	1
#endif	/* host_notify_reply_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* SimpleRoutine host_calendar_changed */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t host_calendar_changed
(
	mach_port_t notify_port
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

#ifndef __Request__host_notify_reply_subsystem__defined
#define __Request__host_notify_reply_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__host_calendar_changed_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__host_notify_reply_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__host_notify_reply_subsystem__defined
#define __RequestUnion__host_notify_reply_subsystem__defined
union __RequestUnion__host_notify_reply_subsystem {
	__Request__host_calendar_changed_t Request_host_calendar_changed;
};
#endif /* !__RequestUnion__host_notify_reply_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__host_notify_reply_subsystem__defined
#define __Reply__host_notify_reply_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__host_calendar_changed_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__host_notify_reply_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__host_notify_reply_subsystem__defined
#define __ReplyUnion__host_notify_reply_subsystem__defined
union __ReplyUnion__host_notify_reply_subsystem {
	__Reply__host_calendar_changed_t Reply_host_calendar_changed;
};
#endif /* !__RequestUnion__host_notify_reply_subsystem__defined */

#ifndef subsystem_to_name_map_host_notify_reply
#define subsystem_to_name_map_host_notify_reply \
    { "host_calendar_changed", 950 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _host_notify_reply_user_ */
