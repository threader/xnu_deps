#ifndef	_make_user_
#define	_make_user_

/* Module make */

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

#ifndef	make_MSG_COUNT
#define	make_MSG_COUNT	2
#endif	/* make_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include "make_defs.h"

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* SimpleRoutine alert_old */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t make_alert_old
(
	mach_port_t makePort,
	int eventType,
	make_string_t functionName,
	mach_msg_type_number_t functionNameCnt,
	make_string_t fileName,
	mach_msg_type_number_t fileNameCnt,
	int line,
	make_string_t message,
	mach_msg_type_number_t messageCnt
);

/* SimpleRoutine alert */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t make_alert
(
	mach_port_t makePort,
	int eventType,
	make_string_t functionName,
	mach_msg_type_number_t functionNameCnt,
	make_string_t fileName,
	mach_msg_type_number_t fileNameCnt,
	make_string_t directory,
	mach_msg_type_number_t directoryCnt,
	int line,
	make_string_t message,
	mach_msg_type_number_t messageCnt
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

#ifndef __Request__make_subsystem__defined
#define __Request__make_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int eventType;
		mach_msg_type_number_t functionNameCnt;
		char functionName[1024];
		mach_msg_type_number_t fileNameCnt;
		char fileName[1024];
		int line;
		mach_msg_type_number_t messageCnt;
		char message[1024];
	} __Request__alert_old_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		int eventType;
		mach_msg_type_number_t functionNameCnt;
		char functionName[1024];
		mach_msg_type_number_t fileNameCnt;
		char fileName[1024];
		mach_msg_type_number_t directoryCnt;
		char directory[1024];
		int line;
		mach_msg_type_number_t messageCnt;
		char message[1024];
	} __Request__alert_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__make_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__make_make_subsystem__defined
#define __RequestUnion__make_make_subsystem__defined
union __RequestUnion__make_make_subsystem {
	__Request__alert_old_t Request_make_alert_old;
	__Request__alert_t Request_make_alert;
};
#endif /* !__RequestUnion__make_make_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__make_subsystem__defined
#define __Reply__make_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
	} __Reply__alert_old_t;
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
	} __Reply__alert_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__make_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__make_make_subsystem__defined
#define __ReplyUnion__make_make_subsystem__defined
union __ReplyUnion__make_make_subsystem {
	__Reply__alert_old_t Reply_make_alert_old;
	__Reply__alert_t Reply_make_alert;
};
#endif /* !__RequestUnion__make_make_subsystem__defined */

#ifndef subsystem_to_name_map_make
#define subsystem_to_name_map_make \
    { "alert_old", 100 },\
    { "alert", 101 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _make_user_ */
