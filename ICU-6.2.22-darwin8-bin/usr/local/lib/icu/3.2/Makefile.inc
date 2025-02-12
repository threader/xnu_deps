# Generated automatically from Makefile.inc.in by configure.
## -*-makefile-*-
#******************************************************************************
#   Copyright (C) 1999-2004, International Business Machines
#   Corporation and others.  All Rights Reserved.
#******************************************************************************
# This Makefile.inc is designed to be included into projects which make use
# of the ICU.

# CONTENTS OF THIS FILE
# 1). Base configuration information and linkage
# 2). Variables giving access to ICU tools
# 3). Host information
# 4). Compiler flags and settings 
# 5). Data Packaging directives
# 6). Include of platform make fragment (mh-* file)

##################################################################
##################################################################
#
#       *1*  base configuration information and linkage
#
##################################################################
# The PREFIX is the base of where ICU is installed.
# Inside this directory you should find  bin, lib, include/unicode, 
# etc.  If ICU is not installed in this directory, you must change the
# following line.  There should exist $(prefix)/include/unicode/utypes.h
# for example.
prefix = /usr/local
exec_prefix = ${prefix}
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
bindir = ${exec_prefix}/bin
datadir = ${prefix}/share
sbindir = ${exec_prefix}/sbin

# about the ICU version
VERSION = 3.2
UNICODE_VERSION = 4.0.1

# The prefix for ICU libraries, normally 'icu'
ICUPREFIX = icu
PACKAGE = icu
LIBICU = lib$(ICUPREFIX)

# Static library prefix and file extension
STATIC_PREFIX = s
LIBSICU = lib$(STATIC_PREFIX)$(ICUPREFIX)
A = a

# Suffix at the end of libraries. Usually empty.
ICULIBSUFFIX = 
# ICULIBSUFFIX_VERSION  is non-empty if it is to contain a library
# version. For example, if it is 21, it means libraries are named
# libicuuc21.so for example.

# rpath links a library search path right into the binaries.
## mh-files MUST NOT override RPATHLDFLAGS unless they provide
## equivalent '#SH#' lines for icu-config fixup
ENABLE_RPATH = NO
ifeq ($(ENABLE_RPATH),YES)
RPATHLDFLAGS = $(LD_RPATH)$(LD_RPATH_PRE)$(libdir)
endif

#SH## icu-config version of above 'if':
#SH#case "$ENABLE_RPATH" in 
#SH#     [yY]*)
#SH# 	ENABLE_RPATH=YES
#SH# 	RPATHLDFLAGS="${LD_RPATH}${LD_RPATH_PRE}${libdir}"
#SH# 	;;
#SH#
#SH#     [nN]*)
#SH# 	ENABLE_RPATH=NO
#SH# 	RPATHLDFLAGS=""
#SH# 	;;
#SH#
#SH#     *)
#SH# 	echo $0: Unknown --enable-rpath value ${ENABLE_RPATH} 1>&2
#SH# 	exit 3
#SH# 	;;
#SH#esac


### To link your application with ICU:
# 1. use LDFLAGS, CFLAGS, etc from above
# 2. link with $(ICULIBS)
# 3. optionally, add one or more of:
#    - $(ICULIBS_I18N)    - i18n library, formatting, etc.
#    - $(ICULIBS_LAYOUT)  - ICU layout library. 
#    - $(ICULIBS_ICUIO)   - ICU stdio equivalent library

ICULIBS_COMMON = -l$(ICUPREFIX)uc$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_DATA   = -l$(ICUPREFIX)data$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_I18N   = -l$(ICUPREFIX)i18n$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_TOOLUTIL = -l$(ICUPREFIX)tu$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_CTESTFW = -l$(ICUPREFIX)ctestfw$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_ICUIO = -l$(ICUPREFIX)io$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_OBSOLETE = -l$(ICUPREFIX)obsolete$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_LAYOUT = -l$(ICUPREFIX)le$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_LAYOUTEX = -l$(ICUPREFIX)lx$(ICULIBSUFFIX)$(ICULIBSUFFIX_VERSION)
ICULIBS_BASE = $(LIBS) -L$(libdir)

# for icu-config to test with
ICULIBS_COMMON_LIB_NAME = ${LIBICU}uc${ICULIBSUFFIX}${ICULIBSUFFIX_VERSION}.${SO}

# ICULIBS is the set of libraries your application should link
# with usually. Many applications will want to add $(ICULIBS_I18N) as well. 
ICULIBS = $(ICULIBS_BASE) $(ICULIBS_I18N) $(ICULIBS_COMMON) $(ICULIBS_DATA) 

##################################################################
##################################################################
#
#       *2*  access to ICU tools
#
##################################################################
# Environment variable to set a runtime search path
#   (Overridden when necessary in -mh files)
LDLIBRARYPATH_ENVVAR = LD_LIBRARY_PATH

# Versioned target for a shared library
FINAL_SO_TARGET = $(SO_TARGET).$(SO_TARGET_VERSION)
MIDDLE_SO_TARGET = $(SO_TARGET).$(SO_TARGET_VERSION_MAJOR)

# Access to important ICU tools.
# Use as follows:  $(INVOKE) $(GENRB) arguments .. 
INVOKE = $(LDLIBRARYPATH_ENVVAR)=$(libdir):$$$(LDLIBRARYPATH_ENVVAR) $(LEAK_CHECKER)
GENCCODE = $(sbindir)/genccode
GENCMN   = $(sbindir)/gencmn
GENRB    = $(bindir)/genrb
PKGDATA  = $(bindir)/pkgdata

##################################################################
##################################################################
#
#       *3*  Information about the host
#
##################################################################

# Information about the host that 'configure' was run on.
host = powerpc-apple-darwin8.11.0
host_alias = powerpc-apple-darwin8.11.0
host_cpu = powerpc
host_vendor = apple
host_os = darwin8.11.0
# Our platform canonical name (as determined by configure)
# this is a #define value (i.e. U_XXXX or XXXX)
platform = U_DARWIN

##################################################################
##################################################################
#
#       *4*  compiler flags and misc. options
#
##################################################################
AIX_SHLIB = makeC++SharedLib_r
AR = /usr/bin/ar
CC = gcc-4
CFLAGS = -DICU_DATA_DIR="\"/usr/share/icu/\"" -g -Os -fno-exceptions $(THREADSCFLAGS) 
CPP = gcc-4 -E
CPPFLAGS =  $(THREADSCPPFLAGS) $(LIBCPPFLAGS) -I$(prefix)/include
CXX = c++
CXXFLAGS = -DICU_DATA_DIR="\"/usr/share/icu/\"" -g -Os -fno-exceptions -fno-rtti -fvisibility-inlines-hidden $(THREADSCXXFLAGS) 
DEFAULT_MODE = common
DEFS = -DHAVE_CONFIG_H 
FFLAGS = 
INSTALL  =  /usr/bin/install -c
INSTALL_DATA  =  ${INSTALL} -m 644
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM  =  ${INSTALL}
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL_PROGRAM}
LDFLAGS =  $(RPATHLDFLAGS)
LIBS = -lpthread -lm  
LIB_M = 
LIB_VERSION = 32.0
LIB_VERSION_MAJOR = 32
MKINSTALLDIRS = $(SHELL) $(pkgdatadir)/mkinstalldirs
RANLIB = ranlib
RMV = rm -rf
SHELL = /bin/sh
SHLIB.c=      $(CC) $(DEFS) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -shared
SHLIB.cc=     $(CXX) $(DEFS) $(CPPFLAGS) $(CXXFLAGS) $(LDFLAGS) -shared
U_IS_BIG_ENDIAN = 1
includedir = ${prefix}/include
infodir = ${prefix}/info
ld_rpath_suf = 
localstatedir = ${prefix}/var
mandir = ${prefix}/man
oldincludedir = /usr/include
program_transform_name = s,x,x,
sharedstatedir = ${prefix}/com
sysconfdir = ${prefix}/etc
INSTALL-L = ${INSTALL_DATA}


##################################################################
##################################################################
#
#       *5* packaging options and directories
#
##################################################################

pkgdatadir = $(datadir)/$(PACKAGE)$(ICULIBSUFFIX)/$(VERSION)
pkglibdir = $(libdir)/$(PACKAGE)$(ICULIBSUFFIX)/$(VERSION)

# The basename of the ICU data file (i.e. icudt21b )
ICUDATA_NAME = icudt32b

# Defaults for pkgdata's mode and directories
# The default data dir changes depending on what packaging mode 
# is being used
ifeq ($(strip $(PKGDATA_MODE)),)
#SH# if [ "x$PKGDATA_MODE" = "x" ];
#SH# then
PKGDATA_MODE=common
#SH# fi
endif

#SH# case "$PKGDATA_MODE" in
ifeq ($(PKGDATA_MODE),common)
#SH# common)
ICUDATA_DIR = $(pkgdatadir)
ICUPKGDATA_DIR = $(ICUDATA_DIR)
#SH# ;;
else
ifeq ($(PKGDATA_MODE),dll)
#SH# dll)
ICUDATA_DIR = $(pkgdatadir)
ICUPKGDATA_DIR = $(libdir)
#SH# ;;
else
#SH# *)
ICUDATA_DIR = $(pkgdatadir)
ICUPKGDATA_DIR = $(ICUDATA_DIR)
#SH# ;;
endif
endif

#SH# esac

GENCCODE_ASSEMBLY = 

##################################################################
##################################################################
#
#       *6* Inclusion of platform make fragment (mh-* file)
#
##################################################################
# The mh- file ("make fragment") for the platform is included here. 
# It may override the above settings.
# It is put last so that the mh-file can override anything.

include $(pkgdatadir)/config/mh-darwin

