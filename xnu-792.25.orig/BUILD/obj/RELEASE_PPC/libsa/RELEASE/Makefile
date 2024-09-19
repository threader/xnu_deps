SOURCE_DIR=/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20
IDENT=-DLIBSA
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
CFLAGS+= -DKERNEL -DLIBSA_KERNEL_PRIVATE \
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

OBJS=bootstrap.cpo catalogue.cpo c++rem3.o dgraph.o kld_patch.o kext.cpo \
	load.o mach.o misc.o mkext.o vers_rsrc.o bsearch.o malloc.o \
	sort.o strrchr.o strstr.o setjmp.o 

CFILES=\
	$(SOURCE_DIR)/libsa/c++rem3.c \
	$(SOURCE_DIR)/libsa/dgraph.c \
	$(SOURCE_DIR)/libsa/kld_patch.c \
	$(SOURCE_DIR)/libsa/load.c \
	$(SOURCE_DIR)/libsa/mach.c \
	$(SOURCE_DIR)/libsa/misc.c \
	$(SOURCE_DIR)/libsa/mkext.c \
	$(SOURCE_DIR)/libsa/vers_rsrc.c \
	$(SOURCE_DIR)/libsa/bsearch.c \
	$(SOURCE_DIR)/libsa/malloc.c \
	$(SOURCE_DIR)/libsa/sort.c \
	$(SOURCE_DIR)/libsa/strrchr.c \
	$(SOURCE_DIR)/libsa/strstr.c 
COBJS=c++rem3.o dgraph.o kld_patch.o load.o mach.o misc.o mkext.o \
	vers_rsrc.o bsearch.o malloc.o sort.o strrchr.o strstr.o 

MFILES=MOBJS=

SFILES=\
	$(SOURCE_DIR)/libsa/ppc/setjmp.s 
SOBJS=setjmp.o 

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
	@echo [ updating $(COMPONENT).o ${LIBSA_KERNEL_CONFIG} ]
	$(LD)  $(LDFLAGS_COMPONENT) -o $(COMPONENT).o ${LDOBJS} /usr/local/lib/libkld.a
	$(SEG_HACK) __KLD $(COMPONENT).o -o $(COMPONENT)_kld.o
	mv $(COMPONENT)_kld.o $(COMPONENT).o

do_all: $(COMPONENT).o

do_depend: do_all
	${MD} -u Makedep -f -d `ls *.d`
	
do_build_all: do_depend 

bootstrap.cpo: $(SOURCE_DIR)/libsa/bootstrap.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libsa/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

catalogue.cpo: $(SOURCE_DIR)/libsa/catalogue.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libsa/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

c++rem3.o: $(SOURCE_DIR)/libsa/c++rem3.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dgraph.o: $(SOURCE_DIR)/libsa/dgraph.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kld_patch.o: $(SOURCE_DIR)/libsa/kld_patch.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kext.cpo: $(SOURCE_DIR)/libsa/kext.cpp
	${P_RULE_1A}$(SOURCE_DIR)/libsa/${P_RULE_1B}
	${P_RULE_2}
	${P_RULE_3}
	${P_RULE_4}

load.o: $(SOURCE_DIR)/libsa/load.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach.o: $(SOURCE_DIR)/libsa/mach.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

misc.o: $(SOURCE_DIR)/libsa/misc.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mkext.o: $(SOURCE_DIR)/libsa/mkext.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vers_rsrc.o: $(SOURCE_DIR)/libsa/vers_rsrc.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bsearch.o: $(SOURCE_DIR)/libsa/bsearch.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

malloc.o: $(SOURCE_DIR)/libsa/malloc.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sort.o: $(SOURCE_DIR)/libsa/sort.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

strrchr.o: $(SOURCE_DIR)/libsa/strrchr.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

strstr.o: $(SOURCE_DIR)/libsa/strstr.c
	${C_RULE_1A}$(SOURCE_DIR)/libsa/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

setjmp.o: $(SOURCE_DIR)/libsa/ppc/setjmp.s
	${S_RULE_1A}$(SOURCE_DIR)/libsa/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}


include $(MakeInc_rule)
include $(MakeInc_dir)

