SOURCE_DIR=/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20
IDENT=-DMACH -DMACH_KERNEL -DMACH_LOAD -DMACH_BSD -DIOKIT -DMACH_PE -DPOWERMAC
#
# Mach Operating System
# Copyright (c) 1986 Carnegie-Mellon University
# All rights reserved.  The CMU software License Agreement specifies
# the terms and conditions for use and redistribution.
#

#
# Export IDENT for sub-makefiles
#
export IDENT

#
# XXX: INCFLAGS to include libsa prototypes
#
INCFLAGS_MAKEFILE= -I$(SOURCE)libsa

export MakeInc_cmd=${SRCROOT}/makedefs/MakeInc.cmd
export MakeInc_def=${SRCROOT}/makedefs/MakeInc.def
export MakeInc_rule=${SRCROOT}/makedefs/MakeInc.rule
export MakeInc_dir=${SRCROOT}/makedefs/MakeInc.dir

include $(MakeInc_cmd)
include $(MakeInc_def)

#
# XXX: CFLAGS
#
CFLAGS+= -DMACH_KERNEL_PRIVATE

#
# Directories for mig generated files
#
COMP_SUBDIRS = \
	default_pager \
	device \
	mach_debug \
	mach \
	UserNotification

COMP_SUBDIRS_I386 = \
	mach

#
#  Make sure we don't remove this by accident if interrupted at the wrong
#  time.
#
.PRECIOUS: Makefile

#
#  Theses macros are filled in by the config program depending on the
#  current configuration.  The MACHDEP macro is replaced by the
#  contents of the machine dependent makefile template and the others
#  are replaced by the corresponding symbol definitions for the
#  configuration.
#

OBJS=default_pager.o dp_backing_store.o dp_memory_object.o \
	default_pager_alerts_user.o default_pager_object_server.o \
	UNDRequest.o UNDReplyServer.o KUNCUserNotifications.o \
	db_ext_symtab.o kdp.o kdp_udp.o ipc_entry.o ipc_hash.o \
	ipc_init.o ipc_kmsg.o ipc_mqueue.o ipc_notify.o ipc_object.o \
	ipc_port.o ipc_pset.o ipc_right.o ipc_space.o ipc_splay.o \
	ipc_table.o mach_debug.o mach_msg.o mach_port.o ast.o clock.o \
	clock_oldops.o counters.o debug.o etimer.o exception.o host.o \
	host_notify.o ipc_clock.o ipc_host.o ipc_kobject.o ipc_mig.o \
	ipc_sync.o ipc_tt.o kalloc.o ledger.o locks.o mach_clock.o \
	machine.o mk_sp.o mk_timer.o pms.o page_decrypt.o profile.o \
	printf.o priority.o processor.o processor_data.o queue.o \
	sched_average.o sched_prim.o stack.o startup.o sync_lock.o \
	sync_sema.o syscall_emulation.o syscall_subr.o syscall_sw.o \
	task.o task_policy.o task_swap.o thread.o thread_act.o \
	thread_call.o thread_policy.o timer.o timer_call.o wait_queue.o \
	zalloc.o bsd_kern.o hibernate.o clock_server.o \
	clock_priv_server.o clock_reply_user.o exc_user.o exc_server.o \
	host_priv_server.o host_security_server.o ledger_server.o \
	lock_set_server.o mach_host_server.o mach_notify_user.o \
	mach_port_server.o mach_vm_server.o memory_object_server.o \
	memory_object_control_server.o memory_object_default_server.o \
	memory_object_name_server.o upl_server.o audit_triggers_user.o \
	processor_server.o processor_set_server.o semaphore_server.o \
	task_server.o thread_act_server.o vm_map_server.o mach_header.o \
	device_vm.o memory_object.o task_working_set.o vm_debug.o \
	vm_external.o vm_fault.o vm_init.o vm_kern.o vm_map.o \
	vm_object.o vm_pageout.o vm_resident.o vm_shared_memory_server.o \
	vm_user.o bsd_vm.o iokit_rpc.o device_server.o device_init.o \
	kmod.o subrs.o chud_cpu.o chud_glue.o chud_memory.o \
	chud_osfmk_callback.o chud_thread.o serial_general.o \
	lowmem_vectors.o start.o _setjmp.o cpu.o ppc_init.o \
	ppc_vm_init.o model_dep.o locks_ppc.o pmap.o mappings.o \
	savearea.o savearea_asm.o hw_vm.o skiplists.o hw_lock.o \
	misc_asm.o status.o io_map.o trap.o pcb.o bits.o cswtch.o \
	cache.o movc.o hw_exception.o bzero.o bcopy.o atomic_switch.o \
	PseudoKernel.o interrupt.o machine_routines.o \
	machine_routines_asm.o Emulate.o Emulate64.o AltiAssist.o conf.o \
	rtclock.o Diagnostics.o PPCcalls.o vmachmon.o vmachmon_asm.o \
	pmsCPU.o Firmware.o FirmwareC.o aligned_data.o hw_perfmon.o \
	commpage.o commpage_asm.o bcopy_g3.o bcopy_g4.o bcopy_970.o \
	bcopy_64.o bzero_32.o bzero_128.o cacheflush.o gettimeofday.o \
	mach_absolute_time.o pthread.o spinlocks.o bigcopy_970.o \
	atomic.o memset_64.o memset_g3.o memset_g4.o memset_g5.o \
	chud_cpu_asm.o chud_cpu_ppc.o chud_osfmk_callback_ppc.o \
	chud_thread_ppc.o kdp_machdep.o kdp_vm.o kdp_misc.o \
	serial_console.o serial_io.o panic_dialog.o video_console.o \
	video_scroll.o hibernate_ppc.o hibernate_restore.o 

CFILES=\
	$(SOURCE_DIR)/osfmk/default_pager/default_pager.c \
	$(SOURCE_DIR)/osfmk/default_pager/dp_backing_store.c \
	$(SOURCE_DIR)/osfmk/default_pager/dp_memory_object.c \
	./default_pager/default_pager_alerts_user.c \
	./default_pager/default_pager_object_server.c \
	./UserNotification/UNDRequest.c \
	./UserNotification/UNDReplyServer.c \
	$(SOURCE_DIR)/osfmk/UserNotification/KUNCUserNotifications.c \
	$(SOURCE_DIR)/osfmk/ddb/db_ext_symtab.c \
	$(SOURCE_DIR)/osfmk/kdp/kdp.c \
	$(SOURCE_DIR)/osfmk/kdp/kdp_udp.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_entry.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_hash.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_init.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_kmsg.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_mqueue.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_notify.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_object.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_port.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_pset.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_right.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_space.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_splay.c \
	$(SOURCE_DIR)/osfmk/ipc/ipc_table.c \
	$(SOURCE_DIR)/osfmk/ipc/mach_debug.c \
	$(SOURCE_DIR)/osfmk/ipc/mach_msg.c \
	$(SOURCE_DIR)/osfmk/ipc/mach_port.c \
	$(SOURCE_DIR)/osfmk/kern/ast.c \
	$(SOURCE_DIR)/osfmk/kern/clock.c \
	$(SOURCE_DIR)/osfmk/kern/clock_oldops.c \
	$(SOURCE_DIR)/osfmk/kern/counters.c \
	$(SOURCE_DIR)/osfmk/kern/debug.c \
	$(SOURCE_DIR)/osfmk/kern/etimer.c \
	$(SOURCE_DIR)/osfmk/kern/exception.c \
	$(SOURCE_DIR)/osfmk/kern/host.c \
	$(SOURCE_DIR)/osfmk/kern/host_notify.c \
	$(SOURCE_DIR)/osfmk/kern/ipc_clock.c \
	$(SOURCE_DIR)/osfmk/kern/ipc_host.c \
	$(SOURCE_DIR)/osfmk/kern/ipc_kobject.c \
	$(SOURCE_DIR)/osfmk/kern/ipc_mig.c \
	$(SOURCE_DIR)/osfmk/kern/ipc_sync.c \
	$(SOURCE_DIR)/osfmk/kern/ipc_tt.c \
	$(SOURCE_DIR)/osfmk/kern/kalloc.c \
	$(SOURCE_DIR)/osfmk/kern/ledger.c \
	$(SOURCE_DIR)/osfmk/kern/locks.c \
	$(SOURCE_DIR)/osfmk/kern/mach_clock.c \
	$(SOURCE_DIR)/osfmk/kern/machine.c \
	$(SOURCE_DIR)/osfmk/kern/mk_sp.c \
	$(SOURCE_DIR)/osfmk/kern/mk_timer.c \
	$(SOURCE_DIR)/osfmk/kern/pms.c \
	$(SOURCE_DIR)/osfmk/kern/page_decrypt.c \
	$(SOURCE_DIR)/osfmk/kern/profile.c \
	$(SOURCE_DIR)/osfmk/kern/printf.c \
	$(SOURCE_DIR)/osfmk/kern/priority.c \
	$(SOURCE_DIR)/osfmk/kern/processor.c \
	$(SOURCE_DIR)/osfmk/kern/processor_data.c \
	$(SOURCE_DIR)/osfmk/kern/queue.c \
	$(SOURCE_DIR)/osfmk/kern/sched_average.c \
	$(SOURCE_DIR)/osfmk/kern/sched_prim.c \
	$(SOURCE_DIR)/osfmk/kern/stack.c \
	$(SOURCE_DIR)/osfmk/kern/startup.c \
	$(SOURCE_DIR)/osfmk/kern/sync_lock.c \
	$(SOURCE_DIR)/osfmk/kern/sync_sema.c \
	$(SOURCE_DIR)/osfmk/kern/syscall_emulation.c \
	$(SOURCE_DIR)/osfmk/kern/syscall_subr.c \
	$(SOURCE_DIR)/osfmk/kern/syscall_sw.c \
	$(SOURCE_DIR)/osfmk/kern/task.c \
	$(SOURCE_DIR)/osfmk/kern/task_policy.c \
	$(SOURCE_DIR)/osfmk/kern/task_swap.c \
	$(SOURCE_DIR)/osfmk/kern/thread.c \
	$(SOURCE_DIR)/osfmk/kern/thread_act.c \
	$(SOURCE_DIR)/osfmk/kern/thread_call.c \
	$(SOURCE_DIR)/osfmk/kern/thread_policy.c \
	$(SOURCE_DIR)/osfmk/kern/timer.c \
	$(SOURCE_DIR)/osfmk/kern/timer_call.c \
	$(SOURCE_DIR)/osfmk/kern/wait_queue.c \
	$(SOURCE_DIR)/osfmk/kern/zalloc.c \
	$(SOURCE_DIR)/osfmk/kern/bsd_kern.c \
	$(SOURCE_DIR)/osfmk/kern/hibernate.c \
	./mach/clock_server.c \
	./mach/clock_priv_server.c \
	./mach/clock_reply_user.c \
	./mach/exc_user.c \
	./mach/exc_server.c \
	./mach/host_priv_server.c \
	./mach/host_security_server.c \
	./mach/ledger_server.c \
	./mach/lock_set_server.c \
	./mach/mach_host_server.c \
	./mach/mach_notify_user.c \
	./mach/mach_port_server.c \
	./mach/mach_vm_server.c \
	./mach/memory_object_server.c \
	./mach/memory_object_control_server.c \
	./mach/memory_object_default_server.c \
	./mach/memory_object_name_server.c \
	./mach/upl_server.c \
	./mach/audit_triggers_user.c \
	./mach/processor_server.c \
	./mach/processor_set_server.c \
	./mach/semaphore_server.c \
	./mach/task_server.c \
	./mach/thread_act_server.c \
	./mach/vm_map_server.c \
	$(SOURCE_DIR)/osfmk/mach-o/mach_header.c \
	$(SOURCE_DIR)/osfmk/vm/device_vm.c \
	$(SOURCE_DIR)/osfmk/vm/memory_object.c \
	$(SOURCE_DIR)/osfmk/vm/task_working_set.c \
	$(SOURCE_DIR)/osfmk/vm/vm_debug.c \
	$(SOURCE_DIR)/osfmk/vm/vm_external.c \
	$(SOURCE_DIR)/osfmk/vm/vm_fault.c \
	$(SOURCE_DIR)/osfmk/vm/vm_init.c \
	$(SOURCE_DIR)/osfmk/vm/vm_kern.c \
	$(SOURCE_DIR)/osfmk/vm/vm_map.c \
	$(SOURCE_DIR)/osfmk/vm/vm_object.c \
	$(SOURCE_DIR)/osfmk/vm/vm_pageout.c \
	$(SOURCE_DIR)/osfmk/vm/vm_resident.c \
	$(SOURCE_DIR)/osfmk/vm/vm_shared_memory_server.c \
	$(SOURCE_DIR)/osfmk/vm/vm_user.c \
	$(SOURCE_DIR)/osfmk/vm/bsd_vm.c \
	$(SOURCE_DIR)/osfmk/device/iokit_rpc.c \
	./device/device_server.c \
	$(SOURCE_DIR)/osfmk/device/device_init.c \
	$(SOURCE_DIR)/osfmk/kern/kmod.c \
	$(SOURCE_DIR)/osfmk/device/subrs.c \
	$(SOURCE_DIR)/osfmk/chud/chud_cpu.c \
	$(SOURCE_DIR)/osfmk/chud/chud_glue.c \
	$(SOURCE_DIR)/osfmk/chud/chud_memory.c \
	$(SOURCE_DIR)/osfmk/chud/chud_osfmk_callback.c \
	$(SOURCE_DIR)/osfmk/chud/chud_thread.c \
	$(SOURCE_DIR)/osfmk/console/serial_general.c \
	$(SOURCE_DIR)/osfmk/ppc/cpu.c \
	$(SOURCE_DIR)/osfmk/ppc/ppc_init.c \
	$(SOURCE_DIR)/osfmk/ppc/ppc_vm_init.c \
	$(SOURCE_DIR)/osfmk/ppc/model_dep.c \
	$(SOURCE_DIR)/osfmk/ppc/locks_ppc.c \
	$(SOURCE_DIR)/osfmk/ppc/pmap.c \
	$(SOURCE_DIR)/osfmk/ppc/mappings.c \
	$(SOURCE_DIR)/osfmk/ppc/savearea.c \
	$(SOURCE_DIR)/osfmk/ppc/status.c \
	$(SOURCE_DIR)/osfmk/ppc/io_map.c \
	$(SOURCE_DIR)/osfmk/ppc/trap.c \
	$(SOURCE_DIR)/osfmk/ppc/pcb.c \
	$(SOURCE_DIR)/osfmk/ppc/PseudoKernel.c \
	$(SOURCE_DIR)/osfmk/ppc/interrupt.c \
	$(SOURCE_DIR)/osfmk/ppc/machine_routines.c \
	$(SOURCE_DIR)/osfmk/ppc/conf.c \
	$(SOURCE_DIR)/osfmk/ppc/rtclock.c \
	$(SOURCE_DIR)/osfmk/ppc/Diagnostics.c \
	$(SOURCE_DIR)/osfmk/ppc/PPCcalls.c \
	$(SOURCE_DIR)/osfmk/ppc/vmachmon.c \
	$(SOURCE_DIR)/osfmk/ppc/pmsCPU.c \
	$(SOURCE_DIR)/osfmk/ppc/FirmwareC.c \
	$(SOURCE_DIR)/osfmk/ppc/hw_perfmon.c \
	$(SOURCE_DIR)/osfmk/ppc/commpage/commpage.c \
	$(SOURCE_DIR)/osfmk/chud/ppc/chud_cpu_ppc.c \
	$(SOURCE_DIR)/osfmk/chud/ppc/chud_osfmk_callback_ppc.c \
	$(SOURCE_DIR)/osfmk/chud/ppc/chud_thread_ppc.c \
	$(SOURCE_DIR)/osfmk/kdp/ml/ppc/kdp_machdep.c \
	$(SOURCE_DIR)/osfmk/kdp/ml/ppc/kdp_vm.c \
	$(SOURCE_DIR)/osfmk/console/ppc/serial_console.c \
	$(SOURCE_DIR)/osfmk/ppc/serial_io.c \
	$(SOURCE_DIR)/osfmk/console/panic_dialog.c \
	$(SOURCE_DIR)/osfmk/console/video_console.c \
	$(SOURCE_DIR)/osfmk/ppc/hibernate_ppc.c 
COBJS=default_pager.o dp_backing_store.o dp_memory_object.o \
	default_pager_alerts_user.o default_pager_object_server.o \
	UNDRequest.o UNDReplyServer.o KUNCUserNotifications.o \
	db_ext_symtab.o kdp.o kdp_udp.o ipc_entry.o ipc_hash.o \
	ipc_init.o ipc_kmsg.o ipc_mqueue.o ipc_notify.o ipc_object.o \
	ipc_port.o ipc_pset.o ipc_right.o ipc_space.o ipc_splay.o \
	ipc_table.o mach_debug.o mach_msg.o mach_port.o ast.o clock.o \
	clock_oldops.o counters.o debug.o etimer.o exception.o host.o \
	host_notify.o ipc_clock.o ipc_host.o ipc_kobject.o ipc_mig.o \
	ipc_sync.o ipc_tt.o kalloc.o ledger.o locks.o mach_clock.o \
	machine.o mk_sp.o mk_timer.o pms.o page_decrypt.o profile.o \
	printf.o priority.o processor.o processor_data.o queue.o \
	sched_average.o sched_prim.o stack.o startup.o sync_lock.o \
	sync_sema.o syscall_emulation.o syscall_subr.o syscall_sw.o \
	task.o task_policy.o task_swap.o thread.o thread_act.o \
	thread_call.o thread_policy.o timer.o timer_call.o wait_queue.o \
	zalloc.o bsd_kern.o hibernate.o clock_server.o \
	clock_priv_server.o clock_reply_user.o exc_user.o exc_server.o \
	host_priv_server.o host_security_server.o ledger_server.o \
	lock_set_server.o mach_host_server.o mach_notify_user.o \
	mach_port_server.o mach_vm_server.o memory_object_server.o \
	memory_object_control_server.o memory_object_default_server.o \
	memory_object_name_server.o upl_server.o audit_triggers_user.o \
	processor_server.o processor_set_server.o semaphore_server.o \
	task_server.o thread_act_server.o vm_map_server.o mach_header.o \
	device_vm.o memory_object.o task_working_set.o vm_debug.o \
	vm_external.o vm_fault.o vm_init.o vm_kern.o vm_map.o \
	vm_object.o vm_pageout.o vm_resident.o vm_shared_memory_server.o \
	vm_user.o bsd_vm.o iokit_rpc.o device_server.o device_init.o \
	kmod.o subrs.o chud_cpu.o chud_glue.o chud_memory.o \
	chud_osfmk_callback.o chud_thread.o serial_general.o cpu.o \
	ppc_init.o ppc_vm_init.o model_dep.o locks_ppc.o pmap.o \
	mappings.o savearea.o status.o io_map.o trap.o pcb.o \
	PseudoKernel.o interrupt.o machine_routines.o conf.o rtclock.o \
	Diagnostics.o PPCcalls.o vmachmon.o pmsCPU.o FirmwareC.o \
	hw_perfmon.o commpage.o chud_cpu_ppc.o chud_osfmk_callback_ppc.o \
	chud_thread_ppc.o kdp_machdep.o kdp_vm.o serial_console.o \
	serial_io.o panic_dialog.o video_console.o hibernate_ppc.o 

MFILES=MOBJS=

SFILES=\
	$(SOURCE_DIR)/osfmk/ppc/lowmem_vectors.s \
	$(SOURCE_DIR)/osfmk/ppc/start.s \
	$(SOURCE_DIR)/osfmk/ppc/_setjmp.s \
	$(SOURCE_DIR)/osfmk/ppc/savearea_asm.s \
	$(SOURCE_DIR)/osfmk/ppc/hw_vm.s \
	$(SOURCE_DIR)/osfmk/ppc/skiplists.s \
	$(SOURCE_DIR)/osfmk/ppc/hw_lock.s \
	$(SOURCE_DIR)/osfmk/ppc/misc_asm.s \
	$(SOURCE_DIR)/osfmk/ppc/bits.s \
	$(SOURCE_DIR)/osfmk/ppc/cswtch.s \
	$(SOURCE_DIR)/osfmk/ppc/cache.s \
	$(SOURCE_DIR)/osfmk/ppc/movc.s \
	$(SOURCE_DIR)/osfmk/ppc/hw_exception.s \
	$(SOURCE_DIR)/osfmk/ppc/bzero.s \
	$(SOURCE_DIR)/osfmk/ppc/bcopy.s \
	$(SOURCE_DIR)/osfmk/ppc/atomic_switch.s \
	$(SOURCE_DIR)/osfmk/ppc/machine_routines_asm.s \
	$(SOURCE_DIR)/osfmk/ppc/Emulate.s \
	$(SOURCE_DIR)/osfmk/ppc/Emulate64.s \
	$(SOURCE_DIR)/osfmk/ppc/AltiAssist.s \
	$(SOURCE_DIR)/osfmk/ppc/vmachmon_asm.s \
	$(SOURCE_DIR)/osfmk/ppc/Firmware.s \
	$(SOURCE_DIR)/osfmk/ppc/aligned_data.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/commpage_asm.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_g3.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_g4.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_970.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_64.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bzero_32.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bzero_128.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/cacheflush.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/gettimeofday.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/mach_absolute_time.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/pthread.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/spinlocks.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/bigcopy_970.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/atomic.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/memset_64.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/memset_g3.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/memset_g4.s \
	$(SOURCE_DIR)/osfmk/ppc/commpage/memset_g5.s \
	$(SOURCE_DIR)/osfmk/chud/ppc/chud_cpu_asm.s \
	$(SOURCE_DIR)/osfmk/kdp/ml/ppc/kdp_misc.s \
	$(SOURCE_DIR)/osfmk/console/ppc/video_scroll.s \
	$(SOURCE_DIR)/osfmk/ppc/hibernate_restore.s 
SOBJS=lowmem_vectors.o start.o _setjmp.o savearea_asm.o hw_vm.o \
	skiplists.o hw_lock.o misc_asm.o bits.o cswtch.o cache.o movc.o \
	hw_exception.o bzero.o bcopy.o atomic_switch.o \
	machine_routines_asm.o Emulate.o Emulate64.o AltiAssist.o \
	vmachmon_asm.o Firmware.o aligned_data.o commpage_asm.o \
	bcopy_g3.o bcopy_g4.o bcopy_970.o bcopy_64.o bzero_32.o \
	bzero_128.o cacheflush.o gettimeofday.o mach_absolute_time.o \
	pthread.o spinlocks.o bigcopy_970.o atomic.o memset_64.o \
	memset_g3.o memset_g4.o memset_g5.o chud_cpu_asm.o kdp_misc.o \
	video_scroll.o hibernate_restore.o 

BFILES=
ORDERED=
######################################################################
#BEGIN	Machine dependent Makefile fragment for ppc
######################################################################

#
# KDB support
#

makedis: $(SRCROOT)/osfmk/ddb/makedis.c
	$(CC) -o $@ $<

ppc_disasm.o_CFLAGS_ADD = -Dperror=db_printf -Dexit=db_error -Dmalloc=db_disasm_malloc

ppc_disasm.c ppc_disasm.h : $(SRCROOT)/osfmk/ppc/ppc_disasm.i makedis
	./makedis -w -h ./ppc_disasm.h $(SOURCE_DIR)/osfmk/ppc/ppc_disasm.i > ./ppc_disasm.c


db_disasm.o : ppc_disasm.h

# Files that must go in the __HIB segment:
HIB_FILES=                              \
           hibernate_restore.o

######################################################################
#END	Machine dependent Makefile fragment for ppc
######################################################################

#
#  OBJSDEPS is the set of files (defined in the machine dependent
#  template if necessary) which all objects depend on (such as an
#  in-line assembler expansion filter)
#
${OBJS}: ${OBJSDEPS}


LOAD =

all: includelinks ${LOAD}


LDOBJS = $(OBJS)

$(COMPONENT).o: $(LDOBJS) assym.s
	@echo "[ creating $(COMPONENT).o ]"
	for hib_file in ${HIB_FILES};		\
	do	\
                $(SEG_HACK) __HIB $${hib_file} -o $${hib_file}__; \
                mv $${hib_file}__ $${hib_file} ; \
	done;
	@echo [ updating $(COMPONENT).o ${OSFMK_KERNEL_CONFIG} ]
	$(LD)  $(LDFLAGS_COMPONENT)  -o $(COMPONENT).o ${LDOBJS}

do_all: $(COMPONENT).o

do_depend: do_all
	${MD} -u Makedep -f -d `ls *.d`;
	
do_build_all: do_depend

# genassym.o actually is an assembly file,
# we name it genassym.o to help with the automatic
# dependency generation

genassym.o: $(SOURCE_DIR)/$(COMPONENT)/$(ARCH_CONFIG_LC)/genassym.c
	${KCC} ${CFLAGS} -MD ${_HOST_EXTRA_CFLAGS} -S -o ${@} -c ${INCFLAGS} $<

assym.s: genassym.o
	sed -e '/#DEFINITION#/!d' -e 's/^.*#DEFINITION#//' -e 's/\$$//' genassym.o > ${@}

${SOBJS}: assym.s


default_pager.o: $(SOURCE_DIR)/osfmk/default_pager/default_pager.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/default_pager/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dp_backing_store.o: $(SOURCE_DIR)/osfmk/default_pager/dp_backing_store.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/default_pager/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dp_memory_object.o: $(SOURCE_DIR)/osfmk/default_pager/dp_memory_object.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/default_pager/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

default_pager_alerts_user.o: default_pager/default_pager_alerts_user.c
	${C_RULE_1A}default_pager/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

default_pager_object_server.o: default_pager/default_pager_object_server.c
	${C_RULE_1A}default_pager/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

UNDRequest.o: UserNotification/UNDRequest.c
	${C_RULE_1A}UserNotification/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

UNDReplyServer.o: UserNotification/UNDReplyServer.c
	${C_RULE_1A}UserNotification/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

KUNCUserNotifications.o: $(SOURCE_DIR)/osfmk/UserNotification/KUNCUserNotifications.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/UserNotification/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

db_ext_symtab.o: $(SOURCE_DIR)/osfmk/ddb/db_ext_symtab.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ddb/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kdp.o: $(SOURCE_DIR)/osfmk/kdp/kdp.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kdp/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kdp_udp.o: $(SOURCE_DIR)/osfmk/kdp/kdp_udp.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kdp/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_entry.o: $(SOURCE_DIR)/osfmk/ipc/ipc_entry.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_hash.o: $(SOURCE_DIR)/osfmk/ipc/ipc_hash.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_init.o: $(SOURCE_DIR)/osfmk/ipc/ipc_init.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_kmsg.o: $(SOURCE_DIR)/osfmk/ipc/ipc_kmsg.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_mqueue.o: $(SOURCE_DIR)/osfmk/ipc/ipc_mqueue.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_notify.o: $(SOURCE_DIR)/osfmk/ipc/ipc_notify.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_object.o: $(SOURCE_DIR)/osfmk/ipc/ipc_object.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_port.o: $(SOURCE_DIR)/osfmk/ipc/ipc_port.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_pset.o: $(SOURCE_DIR)/osfmk/ipc/ipc_pset.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_right.o: $(SOURCE_DIR)/osfmk/ipc/ipc_right.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_space.o: $(SOURCE_DIR)/osfmk/ipc/ipc_space.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_splay.o: $(SOURCE_DIR)/osfmk/ipc/ipc_splay.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_table.o: $(SOURCE_DIR)/osfmk/ipc/ipc_table.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_debug.o: $(SOURCE_DIR)/osfmk/ipc/mach_debug.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_msg.o: $(SOURCE_DIR)/osfmk/ipc/mach_msg.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_port.o: $(SOURCE_DIR)/osfmk/ipc/mach_port.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ipc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ast.o: $(SOURCE_DIR)/osfmk/kern/ast.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

clock.o: $(SOURCE_DIR)/osfmk/kern/clock.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

clock_oldops.o: $(SOURCE_DIR)/osfmk/kern/clock_oldops.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

counters.o: $(SOURCE_DIR)/osfmk/kern/counters.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

debug.o: $(SOURCE_DIR)/osfmk/kern/debug.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

etimer.o: $(SOURCE_DIR)/osfmk/kern/etimer.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

exception.o: $(SOURCE_DIR)/osfmk/kern/exception.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

host.o: $(SOURCE_DIR)/osfmk/kern/host.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

host_notify.o: $(SOURCE_DIR)/osfmk/kern/host_notify.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_clock.o: $(SOURCE_DIR)/osfmk/kern/ipc_clock.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_host.o: $(SOURCE_DIR)/osfmk/kern/ipc_host.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_kobject.o: $(SOURCE_DIR)/osfmk/kern/ipc_kobject.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_mig.o: $(SOURCE_DIR)/osfmk/kern/ipc_mig.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_sync.o: $(SOURCE_DIR)/osfmk/kern/ipc_sync.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipc_tt.o: $(SOURCE_DIR)/osfmk/kern/ipc_tt.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kalloc.o: $(SOURCE_DIR)/osfmk/kern/kalloc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ledger.o: $(SOURCE_DIR)/osfmk/kern/ledger.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

locks.o: $(SOURCE_DIR)/osfmk/kern/locks.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_clock.o: $(SOURCE_DIR)/osfmk/kern/mach_clock.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

machine.o: $(SOURCE_DIR)/osfmk/kern/machine.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mk_sp.o: $(SOURCE_DIR)/osfmk/kern/mk_sp.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mk_timer.o: $(SOURCE_DIR)/osfmk/kern/mk_timer.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pms.o: $(SOURCE_DIR)/osfmk/kern/pms.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

page_decrypt.o: $(SOURCE_DIR)/osfmk/kern/page_decrypt.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

profile.o: $(SOURCE_DIR)/osfmk/kern/profile.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

printf.o: $(SOURCE_DIR)/osfmk/kern/printf.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

priority.o: $(SOURCE_DIR)/osfmk/kern/priority.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

processor.o: $(SOURCE_DIR)/osfmk/kern/processor.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

processor_data.o: $(SOURCE_DIR)/osfmk/kern/processor_data.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

queue.o: $(SOURCE_DIR)/osfmk/kern/queue.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sched_average.o: $(SOURCE_DIR)/osfmk/kern/sched_average.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sched_prim.o: $(SOURCE_DIR)/osfmk/kern/sched_prim.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

stack.o: $(SOURCE_DIR)/osfmk/kern/stack.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

startup.o: $(SOURCE_DIR)/osfmk/kern/startup.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sync_lock.o: $(SOURCE_DIR)/osfmk/kern/sync_lock.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sync_sema.o: $(SOURCE_DIR)/osfmk/kern/sync_sema.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

syscall_emulation.o: $(SOURCE_DIR)/osfmk/kern/syscall_emulation.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

syscall_subr.o: $(SOURCE_DIR)/osfmk/kern/syscall_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

syscall_sw.o: $(SOURCE_DIR)/osfmk/kern/syscall_sw.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

task.o: $(SOURCE_DIR)/osfmk/kern/task.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

task_policy.o: $(SOURCE_DIR)/osfmk/kern/task_policy.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

task_swap.o: $(SOURCE_DIR)/osfmk/kern/task_swap.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

thread.o: $(SOURCE_DIR)/osfmk/kern/thread.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

thread_act.o: $(SOURCE_DIR)/osfmk/kern/thread_act.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

thread_call.o: $(SOURCE_DIR)/osfmk/kern/thread_call.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

thread_policy.o: $(SOURCE_DIR)/osfmk/kern/thread_policy.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

timer.o: $(SOURCE_DIR)/osfmk/kern/timer.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

timer_call.o: $(SOURCE_DIR)/osfmk/kern/timer_call.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

wait_queue.o: $(SOURCE_DIR)/osfmk/kern/wait_queue.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

zalloc.o: $(SOURCE_DIR)/osfmk/kern/zalloc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bsd_kern.o: $(SOURCE_DIR)/osfmk/kern/bsd_kern.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hibernate.o: $(SOURCE_DIR)/osfmk/kern/hibernate.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

clock_server.o: mach/clock_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

clock_priv_server.o: mach/clock_priv_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

clock_reply_user.o: mach/clock_reply_user.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

exc_user.o: mach/exc_user.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

exc_server.o: mach/exc_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

host_priv_server.o: mach/host_priv_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

host_security_server.o: mach/host_security_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ledger_server.o: mach/ledger_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

lock_set_server.o: mach/lock_set_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_host_server.o: mach/mach_host_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_notify_user.o: mach/mach_notify_user.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_port_server.o: mach/mach_port_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_vm_server.o: mach/mach_vm_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

memory_object_server.o: mach/memory_object_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

memory_object_control_server.o: mach/memory_object_control_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

memory_object_default_server.o: mach/memory_object_default_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

memory_object_name_server.o: mach/memory_object_name_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

upl_server.o: mach/upl_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

audit_triggers_user.o: mach/audit_triggers_user.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

processor_server.o: mach/processor_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

processor_set_server.o: mach/processor_set_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

semaphore_server.o: mach/semaphore_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

task_server.o: mach/task_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

thread_act_server.o: mach/thread_act_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_map_server.o: mach/vm_map_server.c
	${C_RULE_1A}mach/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_header.o: $(SOURCE_DIR)/osfmk/mach-o/mach_header.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/mach-o/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

device_vm.o: $(SOURCE_DIR)/osfmk/vm/device_vm.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

memory_object.o: $(SOURCE_DIR)/osfmk/vm/memory_object.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

task_working_set.o: $(SOURCE_DIR)/osfmk/vm/task_working_set.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_debug.o: $(SOURCE_DIR)/osfmk/vm/vm_debug.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_external.o: $(SOURCE_DIR)/osfmk/vm/vm_external.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_fault.o: $(SOURCE_DIR)/osfmk/vm/vm_fault.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_init.o: $(SOURCE_DIR)/osfmk/vm/vm_init.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_kern.o: $(SOURCE_DIR)/osfmk/vm/vm_kern.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_map.o: $(SOURCE_DIR)/osfmk/vm/vm_map.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_object.o: $(SOURCE_DIR)/osfmk/vm/vm_object.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_pageout.o: $(SOURCE_DIR)/osfmk/vm/vm_pageout.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_resident.o: $(SOURCE_DIR)/osfmk/vm/vm_resident.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_shared_memory_server.o: $(SOURCE_DIR)/osfmk/vm/vm_shared_memory_server.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_user.o: $(SOURCE_DIR)/osfmk/vm/vm_user.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bsd_vm.o: $(SOURCE_DIR)/osfmk/vm/bsd_vm.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

iokit_rpc.o: $(SOURCE_DIR)/osfmk/device/iokit_rpc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/device/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

device_server.o: device/device_server.c
	${C_RULE_1A}device/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

device_init.o: $(SOURCE_DIR)/osfmk/device/device_init.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/device/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kmod.o: $(SOURCE_DIR)/osfmk/kern/kmod.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

subrs.o: $(SOURCE_DIR)/osfmk/device/subrs.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/device/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_cpu.o: $(SOURCE_DIR)/osfmk/chud/chud_cpu.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_glue.o: $(SOURCE_DIR)/osfmk/chud/chud_glue.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_memory.o: $(SOURCE_DIR)/osfmk/chud/chud_memory.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_osfmk_callback.o: $(SOURCE_DIR)/osfmk/chud/chud_osfmk_callback.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_thread.o: $(SOURCE_DIR)/osfmk/chud/chud_thread.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

serial_general.o: $(SOURCE_DIR)/osfmk/console/serial_general.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/console/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

lowmem_vectors.o: $(SOURCE_DIR)/osfmk/ppc/lowmem_vectors.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

start.o: $(SOURCE_DIR)/osfmk/ppc/start.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

_setjmp.o: $(SOURCE_DIR)/osfmk/ppc/_setjmp.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

cpu.o: $(SOURCE_DIR)/osfmk/ppc/cpu.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ppc_init.o: $(SOURCE_DIR)/osfmk/ppc/ppc_init.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ppc_vm_init.o: $(SOURCE_DIR)/osfmk/ppc/ppc_vm_init.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

model_dep.o: $(SOURCE_DIR)/osfmk/ppc/model_dep.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

locks_ppc.o: $(SOURCE_DIR)/osfmk/ppc/locks_ppc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pmap.o: $(SOURCE_DIR)/osfmk/ppc/pmap.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mappings.o: $(SOURCE_DIR)/osfmk/ppc/mappings.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

savearea.o: $(SOURCE_DIR)/osfmk/ppc/savearea.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

savearea_asm.o: $(SOURCE_DIR)/osfmk/ppc/savearea_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

hw_vm.o: $(SOURCE_DIR)/osfmk/ppc/hw_vm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

skiplists.o: $(SOURCE_DIR)/osfmk/ppc/skiplists.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

hw_lock.o: $(SOURCE_DIR)/osfmk/ppc/hw_lock.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

misc_asm.o: $(SOURCE_DIR)/osfmk/ppc/misc_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

status.o: $(SOURCE_DIR)/osfmk/ppc/status.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

io_map.o: $(SOURCE_DIR)/osfmk/ppc/io_map.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

trap.o: $(SOURCE_DIR)/osfmk/ppc/trap.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pcb.o: $(SOURCE_DIR)/osfmk/ppc/pcb.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bits.o: $(SOURCE_DIR)/osfmk/ppc/bits.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

cswtch.o: $(SOURCE_DIR)/osfmk/ppc/cswtch.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

cache.o: $(SOURCE_DIR)/osfmk/ppc/cache.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

movc.o: $(SOURCE_DIR)/osfmk/ppc/movc.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

hw_exception.o: $(SOURCE_DIR)/osfmk/ppc/hw_exception.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bzero.o: $(SOURCE_DIR)/osfmk/ppc/bzero.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bcopy.o: $(SOURCE_DIR)/osfmk/ppc/bcopy.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

atomic_switch.o: $(SOURCE_DIR)/osfmk/ppc/atomic_switch.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

PseudoKernel.o: $(SOURCE_DIR)/osfmk/ppc/PseudoKernel.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

interrupt.o: $(SOURCE_DIR)/osfmk/ppc/interrupt.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

machine_routines.o: $(SOURCE_DIR)/osfmk/ppc/machine_routines.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

machine_routines_asm.o: $(SOURCE_DIR)/osfmk/ppc/machine_routines_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

Emulate.o: $(SOURCE_DIR)/osfmk/ppc/Emulate.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

Emulate64.o: $(SOURCE_DIR)/osfmk/ppc/Emulate64.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

AltiAssist.o: $(SOURCE_DIR)/osfmk/ppc/AltiAssist.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

conf.o: $(SOURCE_DIR)/osfmk/ppc/conf.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

rtclock.o: $(SOURCE_DIR)/osfmk/ppc/rtclock.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

Diagnostics.o: $(SOURCE_DIR)/osfmk/ppc/Diagnostics.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

PPCcalls.o: $(SOURCE_DIR)/osfmk/ppc/PPCcalls.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vmachmon.o: $(SOURCE_DIR)/osfmk/ppc/vmachmon.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vmachmon_asm.o: $(SOURCE_DIR)/osfmk/ppc/vmachmon_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

pmsCPU.o: $(SOURCE_DIR)/osfmk/ppc/pmsCPU.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

Firmware.o: $(SOURCE_DIR)/osfmk/ppc/Firmware.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

FirmwareC.o: $(SOURCE_DIR)/osfmk/ppc/FirmwareC.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aligned_data.o: $(SOURCE_DIR)/osfmk/ppc/aligned_data.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

hw_perfmon.o: $(SOURCE_DIR)/osfmk/ppc/hw_perfmon.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

commpage.o: $(SOURCE_DIR)/osfmk/ppc/commpage/commpage.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

commpage_asm.o: $(SOURCE_DIR)/osfmk/ppc/commpage/commpage_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bcopy_g3.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_g3.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bcopy_g4.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_g4.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bcopy_970.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_970.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bcopy_64.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bcopy_64.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bzero_32.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bzero_32.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bzero_128.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bzero_128.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

cacheflush.o: $(SOURCE_DIR)/osfmk/ppc/commpage/cacheflush.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

gettimeofday.o: $(SOURCE_DIR)/osfmk/ppc/commpage/gettimeofday.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

mach_absolute_time.o: $(SOURCE_DIR)/osfmk/ppc/commpage/mach_absolute_time.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

pthread.o: $(SOURCE_DIR)/osfmk/ppc/commpage/pthread.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

spinlocks.o: $(SOURCE_DIR)/osfmk/ppc/commpage/spinlocks.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bigcopy_970.o: $(SOURCE_DIR)/osfmk/ppc/commpage/bigcopy_970.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

atomic.o: $(SOURCE_DIR)/osfmk/ppc/commpage/atomic.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

memset_64.o: $(SOURCE_DIR)/osfmk/ppc/commpage/memset_64.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

memset_g3.o: $(SOURCE_DIR)/osfmk/ppc/commpage/memset_g3.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

memset_g4.o: $(SOURCE_DIR)/osfmk/ppc/commpage/memset_g4.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

memset_g5.o: $(SOURCE_DIR)/osfmk/ppc/commpage/memset_g5.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/commpage/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

chud_cpu_asm.o: $(SOURCE_DIR)/osfmk/chud/ppc/chud_cpu_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/chud/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

chud_cpu_ppc.o: $(SOURCE_DIR)/osfmk/chud/ppc/chud_cpu_ppc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_osfmk_callback_ppc.o: $(SOURCE_DIR)/osfmk/chud/ppc/chud_osfmk_callback_ppc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_thread_ppc.o: $(SOURCE_DIR)/osfmk/chud/ppc/chud_thread_ppc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/chud/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kdp_machdep.o: $(SOURCE_DIR)/osfmk/kdp/ml/ppc/kdp_machdep.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kdp/ml/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kdp_vm.o: $(SOURCE_DIR)/osfmk/kdp/ml/ppc/kdp_vm.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/kdp/ml/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kdp_misc.o: $(SOURCE_DIR)/osfmk/kdp/ml/ppc/kdp_misc.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/kdp/ml/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

serial_console.o: $(SOURCE_DIR)/osfmk/console/ppc/serial_console.c
	${C_RULE_1A_D}$(SOURCE_DIR)/osfmk/console/ppc/${C_RULE_1B_D}
	${C_RULE_2_D}
	${C_RULE_3_D}
	${C_RULE_4_D}

serial_io.o: $(SOURCE_DIR)/osfmk/ppc/serial_io.c
	${C_RULE_1A_D}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B_D}
	${C_RULE_2_D}
	${C_RULE_3_D}
	${C_RULE_4_D}

panic_dialog.o: $(SOURCE_DIR)/osfmk/console/panic_dialog.c
	${C_RULE_1A_D}$(SOURCE_DIR)/osfmk/console/${C_RULE_1B_D}
	${C_RULE_2_D}
	${C_RULE_3_D}
	${C_RULE_4_D}

video_console.o: $(SOURCE_DIR)/osfmk/console/video_console.c
	${C_RULE_1A_D}$(SOURCE_DIR)/osfmk/console/${C_RULE_1B_D}
	${C_RULE_2_D}
	${C_RULE_3_D}
	${C_RULE_4_D}

video_scroll.o: $(SOURCE_DIR)/osfmk/console/ppc/video_scroll.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/console/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

hibernate_ppc.o: $(SOURCE_DIR)/osfmk/ppc/hibernate_ppc.c
	${C_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hibernate_restore.o: $(SOURCE_DIR)/osfmk/ppc/hibernate_restore.s
	${S_RULE_1A}$(SOURCE_DIR)/osfmk/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}


include $(MakeInc_rule)
include $(MakeInc_dir)

