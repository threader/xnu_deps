SOURCE_DIR=/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20
IDENT=-DLIBKERN
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
INCFLAGS_MAKEFILE=  

export MakeInc_cmd=${SRCROOT}/makedefs/MakeInc.cmd
export MakeInc_def=${SRCROOT}/makedefs/MakeInc.def
export MakeInc_rule=${SRCROOT}/makedefs/MakeInc.rule
export MakeInc_dir=${SRCROOT}/makedefs/MakeInc.dir

include $(MakeInc_cmd)
include $(MakeInc_def)

#
# XXX: CFLAGS
#
CFLAGS+= -DKERNEL -DLIBKERN_KERNEL_PRIVATE -DOSALLOCDEBUG=1 \
         -Wall -Wno-four-char-constants -fno-common

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

OBJS=OSAtomicOperations.o OSDebug.cpo OSMetaClass.cpo OSObject.cpo \
	OSArray.cpo OSBoolean.cpo OSCollection.cpo \
	OSCollectionIterator.cpo OSData.cpo OSDictionary.cpo \
	OSIterator.cpo OSNumber.cpo OSOrderedSet.cpo OSRuntime.cpo \
	OSRuntimeSupport.o OSSerialize.cpo OSSet.cpo OSString.cpo \
	OSSymbol.cpo OSUnserialize.cpo OSUnserializeXML.cpo scanf.o \
	uuid.o OSAtomic.o bcmp.o memcmp.o strlen.o OSObjectAsm.o 

CFILES=\
	$(SOURCE_DIR)/libkern/gen/OSAtomicOperations.c \
	$(SOURCE_DIR)/libkern/c++/OSRuntimeSupport.c \
	$(SOURCE_DIR)/libkern/stdio/scanf.c \
	$(SOURCE_DIR)/libkern/uuid/uuid.c 
COBJS=OSAtomicOperations.o OSRuntimeSupport.o scanf.o uuid.o 

MFILES=MOBJS=

SFILES=\
	$(SOURCE_DIR)/libkern/ppc/OSAtomic.s \
	$(SOURCE_DIR)/libkern/ppc/bcmp.s \
	$(SOURCE_DIR)/libkern/ppc/memcmp.s \
	$(SOURCE_DIR)/libkern/ppc/strlen.s \
	$(SOURCE_DIR)/libkern/c++/OSObjectAsm.s 
SOBJS=OSAtomic.o bcmp.o memcmp.o strlen.o OSObjectAsm.o 

BFILES=
ORDERED=
######################################################################
#BEGIN	Machine dependent Makefile fragment for ppc
######################################################################


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

$(COMPONENT).o: $(LDOBJS)
	@echo "creating $(COMPONENT).o"
	@echo [ updating $(COMPONENT).o ${LIBKERN_KERNEL_CONFIG} ]
	$(LD)  $(LDFLAGS_COMPONENT) -o $(COMPONENT).o ${LDOBJS} 

do_all: $(COMPONENT).o

do_depend: do_all
	${MD} -u Makedep -f -d `ls *.d`
	
do_build_all: do_depend 

OSAtomicOperations.o: $(SOURCE_DIR)/libkern/gen/OSAtomicOperations.c
	${C_RULE_1A}$(SOURCE_DIR)/libkern/gen/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

OSDebug.cpo: $(SOURCE_DIR)/libkern/gen/OSDebug.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/gen/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSMetaClass.cpo: $(SOURCE_DIR)/libkern/c++/OSMetaClass.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSObject.cpo: $(SOURCE_DIR)/libkern/c++/OSObject.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSArray.cpo: $(SOURCE_DIR)/libkern/c++/OSArray.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSBoolean.cpo: $(SOURCE_DIR)/libkern/c++/OSBoolean.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSCollection.cpo: $(SOURCE_DIR)/libkern/c++/OSCollection.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSCollectionIterator.cpo: $(SOURCE_DIR)/libkern/c++/OSCollectionIterator.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSData.cpo: $(SOURCE_DIR)/libkern/c++/OSData.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSDictionary.cpo: $(SOURCE_DIR)/libkern/c++/OSDictionary.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSIterator.cpo: $(SOURCE_DIR)/libkern/c++/OSIterator.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSNumber.cpo: $(SOURCE_DIR)/libkern/c++/OSNumber.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSOrderedSet.cpo: $(SOURCE_DIR)/libkern/c++/OSOrderedSet.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSRuntime.cpo: $(SOURCE_DIR)/libkern/c++/OSRuntime.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSRuntimeSupport.o: $(SOURCE_DIR)/libkern/c++/OSRuntimeSupport.c
	${C_RULE_1A}$(SOURCE_DIR)/libkern/c++/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

OSSerialize.cpo: $(SOURCE_DIR)/libkern/c++/OSSerialize.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSSet.cpo: $(SOURCE_DIR)/libkern/c++/OSSet.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSString.cpo: $(SOURCE_DIR)/libkern/c++/OSString.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSSymbol.cpo: $(SOURCE_DIR)/libkern/c++/OSSymbol.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSUnserialize.cpo: $(SOURCE_DIR)/libkern/c++/OSUnserialize.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

OSUnserializeXML.cpo: $(SOURCE_DIR)/libkern/c++/OSUnserializeXML.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libkern/c++/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

scanf.o: $(SOURCE_DIR)/libkern/stdio/scanf.c
	${C_RULE_1A}$(SOURCE_DIR)/libkern/stdio/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uuid.o: $(SOURCE_DIR)/libkern/uuid/uuid.c
	${C_RULE_1A}$(SOURCE_DIR)/libkern/uuid/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

OSAtomic.o: $(SOURCE_DIR)/libkern/ppc/OSAtomic.s
	${S_RULE_1A}$(SOURCE_DIR)/libkern/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bcmp.o: $(SOURCE_DIR)/libkern/ppc/bcmp.s
	${S_RULE_1A}$(SOURCE_DIR)/libkern/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

memcmp.o: $(SOURCE_DIR)/libkern/ppc/memcmp.s
	${S_RULE_1A}$(SOURCE_DIR)/libkern/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

strlen.o: $(SOURCE_DIR)/libkern/ppc/strlen.s
	${S_RULE_1A}$(SOURCE_DIR)/libkern/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

OSObjectAsm.o: $(SOURCE_DIR)/libkern/c++/OSObjectAsm.s
	${S_RULE_1A}$(SOURCE_DIR)/libkern/c++/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}


include $(MakeInc_rule)
include $(MakeInc_dir)

