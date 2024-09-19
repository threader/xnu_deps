SOURCE_DIR=/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20
IDENT=-DPEXPERT -DMACH_PE -DMACH_KERNEL -DDEBUG
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
INCFLAGS_MAKEFILE=  $(INCFLAGS_POSIX)

export MakeInc_cmd=${SRCROOT}/makedefs/MakeInc.cmd
export MakeInc_def=${SRCROOT}/makedefs/MakeInc.def
export MakeInc_rule=${SRCROOT}/makedefs/MakeInc.rule
export MakeInc_dir=${SRCROOT}/makedefs/MakeInc.dir

include $(MakeInc_cmd)
include $(MakeInc_def)

#
# XXX: CFLAGS
#
# -D_KERNEL_BUILD -DKERNEL_BUILD -DARCH_PRIVATE -DBSD_BUILD -DMACH_KERNEL
#
CFLAGS+= -DPEXPERT_KERNEL_PRIVATE -DKERNEL -DDRIVER_PRIVATE 	\
	-Wall -Wno-four-char-constants -fno-common		\
	-DRelease3CompatibilityBuild

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

OBJS=device_tree.o bootargs.o pe_gen.o pe_init.o pe_bootargs.o \
	pe_identify_machine.o pe_kprintf.o pe_clock_speed.o \
	pe_clock_speed_asm.o 

CFILES=\
	$(SOURCE_DIR)/pexpert/gen/device_tree.c \
	$(SOURCE_DIR)/pexpert/gen/bootargs.c \
	$(SOURCE_DIR)/pexpert/gen/pe_gen.c \
	$(SOURCE_DIR)/pexpert/ppc/pe_init.c \
	$(SOURCE_DIR)/pexpert/ppc/pe_bootargs.c \
	$(SOURCE_DIR)/pexpert/ppc/pe_identify_machine.c \
	$(SOURCE_DIR)/pexpert/ppc/pe_kprintf.c \
	$(SOURCE_DIR)/pexpert/ppc/pe_clock_speed.c 
COBJS=device_tree.o bootargs.o pe_gen.o pe_init.o pe_bootargs.o \
	pe_identify_machine.o pe_kprintf.o pe_clock_speed.o 

MFILES=MOBJS=

SFILES=\
	$(SOURCE_DIR)/pexpert/ppc/pe_clock_speed_asm.s 
SOBJS=pe_clock_speed_asm.o 

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
	@echo [ updating $(COMPONENT).o ${PEXPERT_KERNEL_CONFIG} ]
	$(LD) $(LDFLAGS_COMPONENT) -o $(COMPONENT).o ${LDOBJS}

do_depend: do_all
	${MD} -u Makedep -f -d `ls *.d`;
	
do_all: $(COMPONENT).o

do_build_all: do_depend

device_tree.o: $(SOURCE_DIR)/pexpert/gen/device_tree.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/gen/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bootargs.o: $(SOURCE_DIR)/pexpert/gen/bootargs.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/gen/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_gen.o: $(SOURCE_DIR)/pexpert/gen/pe_gen.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/gen/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_init.o: $(SOURCE_DIR)/pexpert/ppc/pe_init.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_bootargs.o: $(SOURCE_DIR)/pexpert/ppc/pe_bootargs.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_identify_machine.o: $(SOURCE_DIR)/pexpert/ppc/pe_identify_machine.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_kprintf.o: $(SOURCE_DIR)/pexpert/ppc/pe_kprintf.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_clock_speed.o: $(SOURCE_DIR)/pexpert/ppc/pe_clock_speed.c
	${C_RULE_1A}$(SOURCE_DIR)/pexpert/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

pe_clock_speed_asm.o: $(SOURCE_DIR)/pexpert/ppc/pe_clock_speed_asm.s
	${S_RULE_1A}$(SOURCE_DIR)/pexpert/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}


include $(MakeInc_rule)
include $(MakeInc_dir)

