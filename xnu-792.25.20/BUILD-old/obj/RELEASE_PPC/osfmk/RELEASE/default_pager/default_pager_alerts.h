#ifndef	_default_pager_alerts_user_
#define	_default_pager_alerts_user_

/* Module default_pager_alerts */

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

#ifndef	default_pager_alerts_MSG_COUNT
#define	default_pager_alerts_MSG_COUNT	1
#endif	/* default_pager_alerts_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* SimpleRoutine default_pager_space_alert */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t default_pager_space_alert
(
	mach_port_t alert_port,
	int flags
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

#ifndef __Request__default_pager_alerts_subsystem__defined
#define __Request__default_pager_alerts_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int flags;
	} __Request__default_pager_space_alert_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__default_pager_alerts_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__default_pager_alerts_subsystem__defined
#define __RequestUnion__default_pager_alerts_subsystem__defined
union __RequestUnion__default_pager_alerts_subsystem {
	__Request__default_pager_space_alert_t Request_default_pager_space_alert;
};
#endif /* !__RequestUnion__default_pager_alerts_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__default_pager_alerts_subsystem__defined
#define __Reply__default_pager_alerts_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__default_pager_space_alert_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__default_pager_alerts_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__default_pager_alerts_subsystem__defined
#define __ReplyUnion__default_pager_alerts_subsystem__defined
union __ReplyUnion__default_pager_alerts_subsystem {
	__Reply__default_pager_space_alert_t Reply_default_pager_space_alert;
};
#endif /* !__RequestUnion__default_pager_alerts_subsystem__defined */

#ifndef subsystem_to_name_map_default_pager_alerts
#define subsystem_to_name_map_default_pager_alerts \
    { "default_pager_space_alert", 2295 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _default_pager_alerts_user_ */
