SOURCE_DIR=/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20
IDENT=-DIOKIT
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
# XXX: INCFLAGS 
#
INCFLAGS_MAKEFILE=  $(INCFLAGS_POSIX) -I$(SOURCE) -I$(SOURCE)include

export MakeInc_cmd=${SRCROOT}/makedefs/MakeInc.cmd
export MakeInc_def=${SRCROOT}/makedefs/MakeInc.def
export MakeInc_rule=${SRCROOT}/makedefs/MakeInc.rule
export MakeInc_dir=${SRCROOT}/makedefs/MakeInc.dir

include $(MakeInc_cmd)
include $(MakeInc_def)

#
# XXX: CFLAGS
#
CFLAGS+= -DKERNEL -DDRIVER_PRIVATE				\
	-Wall -Wno-four-char-constants -fno-common		\
	-DIOMATCHDEBUG=1 -DIOALLOCDEBUG=1			\
#-DIOKITDEBUG=-1

CWARNFLAGS   += -Wno-unused-parameter -Wno-redundant-decls -Wno-nested-externs -Wno-write-strings
MWARNFLAGS   += -Wno-unused-parameter -Wno-redundant-decls -Wno-nested-externs -Wno-write-strings
CXXWARNFLAGS += -Wno-unused-parameter -Wno-redundant-decls -Wno-write-strings -Wno-cast-qual -Wno-shadow

CFLAGS_RELEASE += -DIOASSERT=0
CFLAGS_DEBUG += -DIOASSERT=1

SFLAGS+= -DKERNEL

#
# Directories for mig generated files
#
COMP_SUBDIRS = 

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

OBJS=WKdmCompress.o WKdmDecompress.o IOHibernateIO.cpo \
	IOHibernateRestoreKernel.o IOLib.cpo IOLocks.cpo \
	IOConditionLock.cpo IOSyncer.cpo IOStartIOKit.cpo \
	IODeviceTreeSupport.cpo IOPMWorkArbiter.cpo IORegistryEntry.cpo \
	IOService.cpo IOServicePM.cpo IOPMchangeNoteList.cpo \
	IOPMinformee.cpo IOPMinformeeList.cpo IOPMPowerStateQueue.cpo \
	IOCatalogue.cpo IOPMPowerSource.cpo IOPMPowerSourceList.cpo \
	IOWorkLoop.cpo IOEventSource.cpo IOInterruptEventSource.cpo \
	IOCommandGate.cpo IOCommand.cpo IOCommandPool.cpo \
	IOCommandQueue.cpo IOFilterInterruptEventSource.cpo \
	IOTimerEventSource.cpo IOBufferMemoryDescriptor.cpo \
	IODMACommand.cpo IODeviceMemory.cpo IOMapper.cpo \
	IOCopyMapper.cpo IOMemoryCursor.cpo IOMemoryDescriptor.cpo \
	IOMultiMemoryDescriptor.cpo IORangeAllocator.cpo \
	IOPlatformExpert.cpo IOCPU.cpo IONVRAM.cpo \
	IOInterruptController.cpo IOUserClient.cpo IOKitDebug.cpo \
	IODataQueue.cpo IOStringFuncs.o KernelConfigTables.cpo \
	IOKitBSDInit.cpo DINetBootHook.cpo RootDomainUserClient.cpo \
	IOPowerConnection.cpo IOWatchDogTimer.cpo IOAsmSupport.o \
	IODBDMA.cpo IOSharedLock.o IONVRAMController.cpo AppleNVRAM.cpo \
	ApplePlatformExpert.cpo AppleCPU.cpo IOPMrootDomain.cpo \
	AppleMacIO.cpo AppleNMI.cpo 

CFILES=\
	$(SOURCE_DIR)/iokit/Kernel/WKdmCompress.c \
	$(SOURCE_DIR)/iokit/Kernel/WKdmDecompress.c \
	$(SOURCE_DIR)/iokit/Kernel/IOHibernateRestoreKernel.c \
	$(SOURCE_DIR)/iokit/Kernel/IOStringFuncs.c 
COBJS=WKdmCompress.o WKdmDecompress.o IOHibernateRestoreKernel.o \
	IOStringFuncs.o 

MFILES=MOBJS=

SFILES=\
	$(SOURCE_DIR)/iokit/Kernel/ppc/IOAsmSupport.s \
	$(SOURCE_DIR)/iokit/Kernel/ppc/IOSharedLock.s 
SOBJS=IOAsmSupport.o IOSharedLock.o 

BFILES=
ORDERED=
######################################################################
#BEGIN  Machine dependent Makefile fragment for ppc
######################################################################
 
######################################################################
#END    Machine dependent Makefile fragment for ppc
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

$(COMPONENT).o: $(LDOBJS)
	@echo "creating $(COMPONENT).o"

	$(SEG_HACK) __HIB IOHibernateRestoreKernel.o -o _IOHibernateRestoreKernel.o
	mv _IOHibernateRestoreKernel.o IOHibernateRestoreKernel.o
	$(SEG_HACK) __HIB WKdmDecompress.o -o _WKdmDecompress.o
	mv _WKdmDecompress.o WKdmDecompress.o

	@echo [ updating $(COMPONENT).o ${IOKIT_KERNEL_CONFIG} ]
	$(LD)  $(LDFLAGS_COMPONENT) -o $(COMPONENT).o ${LDOBJS} 

do_depend: do_all
	${MD} -u Makedep -f -d `ls *.d`
	
	
do_all: $(COMPONENT).o

do_build_all: do_depend

WKdmCompress.o: $(SOURCE_DIR)/iokit/Kernel/WKdmCompress.c
	${C_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

WKdmDecompress.o: $(SOURCE_DIR)/iokit/Kernel/WKdmDecompress.c
	${C_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

IOHibernateIO.cpo: $(SOURCE_DIR)/iokit/Kernel/IOHibernateIO.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOHibernateRestoreKernel.o: $(SOURCE_DIR)/iokit/Kernel/IOHibernateRestoreKernel.c
	${C_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

IOLib.cpo: $(SOURCE_DIR)/iokit/Kernel/IOLib.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOLocks.cpo: $(SOURCE_DIR)/iokit/Kernel/IOLocks.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOConditionLock.cpo: $(SOURCE_DIR)/iokit/Kernel/IOConditionLock.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOSyncer.cpo: $(SOURCE_DIR)/iokit/Kernel/IOSyncer.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOStartIOKit.cpo: $(SOURCE_DIR)/iokit/Kernel/IOStartIOKit.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IODeviceTreeSupport.cpo: $(SOURCE_DIR)/iokit/Kernel/IODeviceTreeSupport.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMWorkArbiter.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMWorkArbiter.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IORegistryEntry.cpo: $(SOURCE_DIR)/iokit/Kernel/IORegistryEntry.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOService.cpo: $(SOURCE_DIR)/iokit/Kernel/IOService.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOServicePM.cpo: $(SOURCE_DIR)/iokit/Kernel/IOServicePM.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMchangeNoteList.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMchangeNoteList.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMinformee.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMinformee.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMinformeeList.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMinformeeList.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMPowerStateQueue.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMPowerStateQueue.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCatalogue.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCatalogue.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMPowerSource.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMPowerSource.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMPowerSourceList.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMPowerSourceList.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOWorkLoop.cpo: $(SOURCE_DIR)/iokit/Kernel/IOWorkLoop.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOEventSource.cpo: $(SOURCE_DIR)/iokit/Kernel/IOEventSource.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOInterruptEventSource.cpo: $(SOURCE_DIR)/iokit/Kernel/IOInterruptEventSource.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCommandGate.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCommandGate.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCommand.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCommand.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCommandPool.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCommandPool.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCommandQueue.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCommandQueue.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOFilterInterruptEventSource.cpo: $(SOURCE_DIR)/iokit/Kernel/IOFilterInterruptEventSource.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOTimerEventSource.cpo: $(SOURCE_DIR)/iokit/Kernel/IOTimerEventSource.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOBufferMemoryDescriptor.cpo: $(SOURCE_DIR)/iokit/Kernel/IOBufferMemoryDescriptor.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IODMACommand.cpo: $(SOURCE_DIR)/iokit/Kernel/IODMACommand.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IODeviceMemory.cpo: $(SOURCE_DIR)/iokit/Kernel/IODeviceMemory.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOMapper.cpo: $(SOURCE_DIR)/iokit/Kernel/IOMapper.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCopyMapper.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCopyMapper.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOMemoryCursor.cpo: $(SOURCE_DIR)/iokit/Kernel/IOMemoryCursor.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOMemoryDescriptor.cpo: $(SOURCE_DIR)/iokit/Kernel/IOMemoryDescriptor.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOMultiMemoryDescriptor.cpo: $(SOURCE_DIR)/iokit/Kernel/IOMultiMemoryDescriptor.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IORangeAllocator.cpo: $(SOURCE_DIR)/iokit/Kernel/IORangeAllocator.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPlatformExpert.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPlatformExpert.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOCPU.cpo: $(SOURCE_DIR)/iokit/Kernel/IOCPU.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IONVRAM.cpo: $(SOURCE_DIR)/iokit/Kernel/IONVRAM.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOInterruptController.cpo: $(SOURCE_DIR)/iokit/Kernel/IOInterruptController.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOUserClient.cpo: $(SOURCE_DIR)/iokit/Kernel/IOUserClient.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOKitDebug.cpo: $(SOURCE_DIR)/iokit/Kernel/IOKitDebug.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IODataQueue.cpo: $(SOURCE_DIR)/iokit/Kernel/IODataQueue.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOStringFuncs.o: $(SOURCE_DIR)/iokit/Kernel/IOStringFuncs.c
	${C_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

KernelConfigTables.cpo: $(SOURCE_DIR)/iokit/KernelConfigTables.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOKitBSDInit.cpo: $(SOURCE_DIR)/iokit/bsddev/IOKitBSDInit.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/bsddev/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

DINetBootHook.cpo: $(SOURCE_DIR)/iokit/bsddev/DINetBootHook.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/bsddev/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

RootDomainUserClient.cpo: $(SOURCE_DIR)/iokit/Kernel/RootDomainUserClient.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPowerConnection.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPowerConnection.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOWatchDogTimer.cpo: $(SOURCE_DIR)/iokit/Families/IOSystemManagement/IOWatchDogTimer.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Families/IOSystemManagement/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOAsmSupport.o: $(SOURCE_DIR)/iokit/Kernel/ppc/IOAsmSupport.s
	${S_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

IODBDMA.cpo: $(SOURCE_DIR)/iokit/Kernel/ppc/IODBDMA.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/ppc/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOSharedLock.o: $(SOURCE_DIR)/iokit/Kernel/ppc/IOSharedLock.s
	${S_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

IONVRAMController.cpo: $(SOURCE_DIR)/iokit/Families/IONVRAM/IONVRAMController.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Families/IONVRAM/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

AppleNVRAM.cpo: $(SOURCE_DIR)/iokit/Drivers/platform/drvAppleNVRAM/AppleNVRAM.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Drivers/platform/drvAppleNVRAM/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

ApplePlatformExpert.cpo: $(SOURCE_DIR)/iokit/Drivers/platform/drvApplePlatformExpert/ApplePlatformExpert.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Drivers/platform/drvApplePlatformExpert/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

AppleCPU.cpo: $(SOURCE_DIR)/iokit/Drivers/platform/drvApplePlatformExpert/AppleCPU.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Drivers/platform/drvApplePlatformExpert/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

IOPMrootDomain.cpo: $(SOURCE_DIR)/iokit/Kernel/IOPMrootDomain.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Kernel/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

AppleMacIO.cpo: $(SOURCE_DIR)/iokit/Drivers/platform/drvAppleMacIO/AppleMacIO.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Drivers/platform/drvAppleMacIO/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

AppleNMI.cpo: $(SOURCE_DIR)/iokit/Drivers/platform/drvAppleNMI/AppleNMI.cpp
	${P_RULE_1A}$(SOURCE_DIR)/iokit/Drivers/platform/drvAppleNMI/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}


include $(MakeInc_rule)
include $(MakeInc_dir)

