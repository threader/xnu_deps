srcdir = ../../gcc
VPATH = ../../gcc
EQ = =
objects = $(filter %.o,$^)

# Dependencies are accumulated as we go.
all: stmp-dirs
dirs = libgcc

vis_hide := $(strip $(subst @,-,\
    $(shell if echo 'void foo(void); void foo(void) {}' | \
          $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fvisibility=hidden -Werror \
          -c -xc - -o vis_temp_file$$$$.o 2> /dev/null; \
          then echo @fvisibility=hidden @DHIDE_EXPORTS; \
          rm vis_temp_file$$$$.o 2> /dev/null; \
          fi)))

ifneq (,$(vis_hide))
define gen-hide-list
$(NM_FOR_TARGET) -pg $< | \
  $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "	.private_extern", $$3 }' > $@T
mv -f $@T $@
endef
else
gen-hide-list = echo > $@
endif


#
# ml: .;@isysroot/Developer/SDKs/MacOSX10.4u.sdk@mmacosx-version-min=10.4
# dir: .
# flags: -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4
# libgcc_a: ./libgcc.a
# libgcov_a: ./libgcov.a
# libgcc_eh_a: ./libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: ./libgcc_s.dylib
# libunwind_so:
#

libgcc/./_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3_s.o
libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
./libgcc.a: libgcc/./_muldi3.o
./libgcc_s.dylib: libgcc/./_muldi3_s.o
libgcc/./libgcc.map: libgcc/./_muldi3_s.o
libgcc/./_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2_s.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
./libgcc.a: libgcc/./_negdi2.o
./libgcc_s.dylib: libgcc/./_negdi2_s.o
libgcc/./libgcc.map: libgcc/./_negdi2_s.o
libgcc/./_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3_s.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
./libgcc.a: libgcc/./_lshrdi3.o
./libgcc_s.dylib: libgcc/./_lshrdi3_s.o
libgcc/./libgcc.map: libgcc/./_lshrdi3_s.o
libgcc/./_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3_s.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
./libgcc.a: libgcc/./_ashldi3.o
./libgcc_s.dylib: libgcc/./_ashldi3_s.o
libgcc/./libgcc.map: libgcc/./_ashldi3_s.o
libgcc/./_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3_s.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
./libgcc.a: libgcc/./_ashrdi3.o
./libgcc_s.dylib: libgcc/./_ashrdi3_s.o
libgcc/./libgcc.map: libgcc/./_ashrdi3_s.o
libgcc/./_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2_s.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
./libgcc.a: libgcc/./_cmpdi2.o
./libgcc_s.dylib: libgcc/./_cmpdi2_s.o
libgcc/./libgcc.map: libgcc/./_cmpdi2_s.o
libgcc/./_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2_s.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
./libgcc.a: libgcc/./_ucmpdi2.o
./libgcc_s.dylib: libgcc/./_ucmpdi2_s.o
libgcc/./libgcc.map: libgcc/./_ucmpdi2_s.o
libgcc/./_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache_s.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
./libgcc.a: libgcc/./_clear_cache.o
./libgcc_s.dylib: libgcc/./_clear_cache_s.o
libgcc/./libgcc.map: libgcc/./_clear_cache_s.o
libgcc/./_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack_s.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
./libgcc.a: libgcc/./_enable_execute_stack.o
./libgcc_s.dylib: libgcc/./_enable_execute_stack_s.o
libgcc/./libgcc.map: libgcc/./_enable_execute_stack_s.o
libgcc/./_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline_s.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
./libgcc.a: libgcc/./_trampoline.o
./libgcc_s.dylib: libgcc/./_trampoline_s.o
libgcc/./libgcc.map: libgcc/./_trampoline_s.o
libgcc/./__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main_s.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
./libgcc.a: libgcc/./__main.o
./libgcc_s.dylib: libgcc/./__main_s.o
libgcc/./libgcc.map: libgcc/./__main_s.o
libgcc/./_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2_s.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
./libgcc.a: libgcc/./_absvsi2.o
./libgcc_s.dylib: libgcc/./_absvsi2_s.o
libgcc/./libgcc.map: libgcc/./_absvsi2_s.o
libgcc/./_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2_s.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
./libgcc.a: libgcc/./_absvdi2.o
./libgcc_s.dylib: libgcc/./_absvdi2_s.o
libgcc/./libgcc.map: libgcc/./_absvdi2_s.o
libgcc/./_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3_s.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
./libgcc.a: libgcc/./_addvsi3.o
./libgcc_s.dylib: libgcc/./_addvsi3_s.o
libgcc/./libgcc.map: libgcc/./_addvsi3_s.o
libgcc/./_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3_s.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
./libgcc.a: libgcc/./_addvdi3.o
./libgcc_s.dylib: libgcc/./_addvdi3_s.o
libgcc/./libgcc.map: libgcc/./_addvdi3_s.o
libgcc/./_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3_s.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
./libgcc.a: libgcc/./_subvsi3.o
./libgcc_s.dylib: libgcc/./_subvsi3_s.o
libgcc/./libgcc.map: libgcc/./_subvsi3_s.o
libgcc/./_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3_s.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
./libgcc.a: libgcc/./_subvdi3.o
./libgcc_s.dylib: libgcc/./_subvdi3_s.o
libgcc/./libgcc.map: libgcc/./_subvdi3_s.o
libgcc/./_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3_s.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
./libgcc.a: libgcc/./_mulvsi3.o
./libgcc_s.dylib: libgcc/./_mulvsi3_s.o
libgcc/./libgcc.map: libgcc/./_mulvsi3_s.o
libgcc/./_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3_s.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
./libgcc.a: libgcc/./_mulvdi3.o
./libgcc_s.dylib: libgcc/./_mulvdi3_s.o
libgcc/./libgcc.map: libgcc/./_mulvdi3_s.o
libgcc/./_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2_s.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
./libgcc.a: libgcc/./_negvsi2.o
./libgcc_s.dylib: libgcc/./_negvsi2_s.o
libgcc/./libgcc.map: libgcc/./_negvsi2_s.o
libgcc/./_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2_s.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
./libgcc.a: libgcc/./_negvdi2.o
./libgcc_s.dylib: libgcc/./_negvdi2_s.o
libgcc/./libgcc.map: libgcc/./_negvdi2_s.o
libgcc/./_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors_s.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
./libgcc.a: libgcc/./_ctors.o
./libgcc_s.dylib: libgcc/./_ctors_s.o
libgcc/./libgcc.map: libgcc/./_ctors_s.o
libgcc/./_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2_s.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
./libgcc.a: libgcc/./_ffssi2.o
./libgcc_s.dylib: libgcc/./_ffssi2_s.o
libgcc/./libgcc.map: libgcc/./_ffssi2_s.o
libgcc/./_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2_s.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
./libgcc.a: libgcc/./_ffsdi2.o
./libgcc_s.dylib: libgcc/./_ffsdi2_s.o
libgcc/./libgcc.map: libgcc/./_ffsdi2_s.o
libgcc/./_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz_s.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
./libgcc.a: libgcc/./_clz.o
./libgcc_s.dylib: libgcc/./_clz_s.o
libgcc/./libgcc.map: libgcc/./_clz_s.o
libgcc/./_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2_s.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
./libgcc.a: libgcc/./_clzsi2.o
./libgcc_s.dylib: libgcc/./_clzsi2_s.o
libgcc/./libgcc.map: libgcc/./_clzsi2_s.o
libgcc/./_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2_s.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
./libgcc.a: libgcc/./_clzdi2.o
./libgcc_s.dylib: libgcc/./_clzdi2_s.o
libgcc/./libgcc.map: libgcc/./_clzdi2_s.o
libgcc/./_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2_s.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
./libgcc.a: libgcc/./_ctzsi2.o
./libgcc_s.dylib: libgcc/./_ctzsi2_s.o
libgcc/./libgcc.map: libgcc/./_ctzsi2_s.o
libgcc/./_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2_s.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
./libgcc.a: libgcc/./_ctzdi2.o
./libgcc_s.dylib: libgcc/./_ctzdi2_s.o
libgcc/./libgcc.map: libgcc/./_ctzdi2_s.o
libgcc/./_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab_s.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
./libgcc.a: libgcc/./_popcount_tab.o
./libgcc_s.dylib: libgcc/./_popcount_tab_s.o
libgcc/./libgcc.map: libgcc/./_popcount_tab_s.o
libgcc/./_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2_s.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
./libgcc.a: libgcc/./_popcountsi2.o
./libgcc_s.dylib: libgcc/./_popcountsi2_s.o
libgcc/./libgcc.map: libgcc/./_popcountsi2_s.o
libgcc/./_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2_s.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
./libgcc.a: libgcc/./_popcountdi2.o
./libgcc_s.dylib: libgcc/./_popcountdi2_s.o
libgcc/./libgcc.map: libgcc/./_popcountdi2_s.o
libgcc/./_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2_s.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
./libgcc.a: libgcc/./_paritysi2.o
./libgcc_s.dylib: libgcc/./_paritysi2_s.o
libgcc/./libgcc.map: libgcc/./_paritysi2_s.o
libgcc/./_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2_s.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
./libgcc.a: libgcc/./_paritydi2.o
./libgcc_s.dylib: libgcc/./_paritydi2_s.o
libgcc/./libgcc.map: libgcc/./_paritydi2_s.o
libgcc/./_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2_s.o
libgcc/./_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powisf2.o
./libgcc.a: libgcc/./_powisf2.o
./libgcc_s.dylib: libgcc/./_powisf2_s.o
libgcc/./libgcc.map: libgcc/./_powisf2_s.o
libgcc/./_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2_s.o
libgcc/./_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powidf2.o
./libgcc.a: libgcc/./_powidf2.o
./libgcc_s.dylib: libgcc/./_powidf2_s.o
libgcc/./libgcc.map: libgcc/./_powidf2_s.o
libgcc/./_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2_s.o
libgcc/./_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powixf2.o
./libgcc.a: libgcc/./_powixf2.o
./libgcc_s.dylib: libgcc/./_powixf2_s.o
libgcc/./libgcc.map: libgcc/./_powixf2_s.o
libgcc/./_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2_s.o
libgcc/./_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_powitf2.o
./libgcc.a: libgcc/./_powitf2.o
./libgcc_s.dylib: libgcc/./_powitf2_s.o
libgcc/./libgcc.map: libgcc/./_powitf2_s.o
libgcc/./_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3_s.o
libgcc/./_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulsc3.o
./libgcc.a: libgcc/./_mulsc3.o
./libgcc_s.dylib: libgcc/./_mulsc3_s.o
libgcc/./libgcc.map: libgcc/./_mulsc3_s.o
libgcc/./_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3_s.o
libgcc/./_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_muldc3.o
./libgcc.a: libgcc/./_muldc3.o
./libgcc_s.dylib: libgcc/./_muldc3_s.o
libgcc/./libgcc.map: libgcc/./_muldc3_s.o
libgcc/./_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3_s.o
libgcc/./_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_mulxc3.o
./libgcc.a: libgcc/./_mulxc3.o
./libgcc_s.dylib: libgcc/./_mulxc3_s.o
libgcc/./libgcc.map: libgcc/./_mulxc3_s.o
libgcc/./_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/./_multc3_s.o
libgcc/./_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_multc3.o
./libgcc.a: libgcc/./_multc3.o
./libgcc_s.dylib: libgcc/./_multc3_s.o
libgcc/./libgcc.map: libgcc/./_multc3_s.o
libgcc/./_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3_s.o
libgcc/./_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divsc3.o
./libgcc.a: libgcc/./_divsc3.o
./libgcc_s.dylib: libgcc/./_divsc3_s.o
libgcc/./libgcc.map: libgcc/./_divsc3_s.o
libgcc/./_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3_s.o
libgcc/./_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divdc3.o
./libgcc.a: libgcc/./_divdc3.o
./libgcc_s.dylib: libgcc/./_divdc3_s.o
libgcc/./libgcc.map: libgcc/./_divdc3_s.o
libgcc/./_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3_s.o
libgcc/./_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divxc3.o
./libgcc.a: libgcc/./_divxc3.o
./libgcc_s.dylib: libgcc/./_divxc3_s.o
libgcc/./libgcc.map: libgcc/./_divxc3_s.o
libgcc/./_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3_s.o
libgcc/./_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divtc3.o
./libgcc.a: libgcc/./_divtc3.o
./libgcc_s.dylib: libgcc/./_divtc3_s.o
libgcc/./libgcc.map: libgcc/./_divtc3_s.o
libgcc/./_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_bswapsi2_s.o
libgcc/./_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_bswapsi2.o
./libgcc.a: libgcc/./_bswapsi2.o
./libgcc_s.dylib: libgcc/./_bswapsi2_s.o
libgcc/./libgcc.map: libgcc/./_bswapsi2_s.o
libgcc/./_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_bswapdi2_s.o
libgcc/./_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_bswapdi2.o
./libgcc.a: libgcc/./_bswapdi2.o
./libgcc_s.dylib: libgcc/./_bswapdi2_s.o
libgcc/./libgcc.map: libgcc/./_bswapdi2_s.o
libgcc/./_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi_s.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfsi.o
./libgcc.a: libgcc/./_fixunssfsi.o
./libgcc_s.dylib: libgcc/./_fixunssfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfsi_s.o
libgcc/./_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi_s.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfsi.o
./libgcc.a: libgcc/./_fixunsdfsi.o
./libgcc_s.dylib: libgcc/./_fixunsdfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfsi_s.o
libgcc/./_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi_s.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
./libgcc.a: libgcc/./_fixunsxfsi.o
./libgcc_s.dylib: libgcc/./_fixunsxfsi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfsi_s.o
libgcc/./_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi_s.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixsfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
./libgcc.a: libgcc/./_fixsfdi.o
./libgcc_s.dylib: libgcc/./_fixsfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixsfdi_s.o
libgcc/./_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi_s.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
./libgcc.a: libgcc/./_fixunssfdi.o
./libgcc_s.dylib: libgcc/./_fixunssfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunssfdi_s.o
libgcc/./_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf_s.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
./libgcc.a: libgcc/./_floatdisf.o
./libgcc_s.dylib: libgcc/./_floatdisf_s.o
libgcc/./libgcc.map: libgcc/./_floatdisf_s.o
libgcc/./_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatundisf_s.o
libgcc/./_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatundisf.o
./libgcc.a: libgcc/./_floatundisf.o
./libgcc_s.dylib: libgcc/./_floatundisf_s.o
libgcc/./libgcc.map: libgcc/./_floatundisf_s.o
libgcc/./_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi_s.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
./libgcc.a: libgcc/./_fixdfdi.o
./libgcc_s.dylib: libgcc/./_fixdfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixdfdi_s.o
libgcc/./_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi_s.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
./libgcc.a: libgcc/./_fixunsdfdi.o
./libgcc_s.dylib: libgcc/./_fixunsdfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsdfdi_s.o
libgcc/./_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf_s.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
./libgcc.a: libgcc/./_floatdidf.o
./libgcc_s.dylib: libgcc/./_floatdidf_s.o
libgcc/./libgcc.map: libgcc/./_floatdidf_s.o
libgcc/./_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatundidf_s.o
libgcc/./_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatundidf.o
./libgcc.a: libgcc/./_floatundidf.o
./libgcc_s.dylib: libgcc/./_floatundidf_s.o
libgcc/./libgcc.map: libgcc/./_floatundidf_s.o
libgcc/./_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi_s.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
./libgcc.a: libgcc/./_fixxfdi.o
./libgcc_s.dylib: libgcc/./_fixxfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixxfdi_s.o
libgcc/./_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi_s.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
./libgcc.a: libgcc/./_fixunsxfdi.o
./libgcc_s.dylib: libgcc/./_fixunsxfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunsxfdi_s.o
libgcc/./_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf_s.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
./libgcc.a: libgcc/./_floatdixf.o
./libgcc_s.dylib: libgcc/./_floatdixf_s.o
libgcc/./libgcc.map: libgcc/./_floatdixf_s.o
libgcc/./_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatundixf_s.o
libgcc/./_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatundixf.o
./libgcc.a: libgcc/./_floatundixf.o
./libgcc_s.dylib: libgcc/./_floatundixf_s.o
libgcc/./libgcc.map: libgcc/./_floatundixf_s.o
libgcc/./_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi_s.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixtfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
./libgcc.a: libgcc/./_fixtfdi.o
./libgcc_s.dylib: libgcc/./_fixtfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixtfdi_s.o
libgcc/./_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi_s.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunstfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
./libgcc.a: libgcc/./_fixunstfdi.o
./libgcc_s.dylib: libgcc/./_fixunstfdi_s.o
libgcc/./libgcc.map: libgcc/./_fixunstfdi_s.o
libgcc/./_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf_s.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
./libgcc.a: libgcc/./_floatditf.o
./libgcc_s.dylib: libgcc/./_floatditf_s.o
libgcc/./libgcc.map: libgcc/./_floatditf_s.o
libgcc/./_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatunditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatunditf_s.o
libgcc/./_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatunditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_floatunditf.o
./libgcc.a: libgcc/./_floatunditf.o
./libgcc_s.dylib: libgcc/./_floatunditf_s.o
libgcc/./libgcc.map: libgcc/./_floatunditf_s.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
./libgcc.a: libgcc/./_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
./libgcc.a: libgcc/./__gcc_bcmp.o
libgcc/./_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3_s.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_divdi3.o
./libgcc.a: libgcc/./_divdi3.o
./libgcc_s.dylib: libgcc/./_divdi3_s.o
libgcc/./libgcc.map: libgcc/./_divdi3_s.o
libgcc/./_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3_s.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_moddi3.o
./libgcc.a: libgcc/./_moddi3.o
./libgcc_s.dylib: libgcc/./_moddi3_s.o
libgcc/./libgcc.map: libgcc/./_moddi3_s.o
libgcc/./_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3_s.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_udivdi3.o
./libgcc.a: libgcc/./_udivdi3.o
./libgcc_s.dylib: libgcc/./_udivdi3_s.o
libgcc/./libgcc.map: libgcc/./_udivdi3_s.o
libgcc/./_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3_s.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_umoddi3.o
./libgcc.a: libgcc/./_umoddi3.o
./libgcc_s.dylib: libgcc/./_umoddi3_s.o
libgcc/./libgcc.map: libgcc/./_umoddi3_s.o
libgcc/./_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv_s.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_udiv_w_sdiv.o
./libgcc.a: libgcc/./_udiv_w_sdiv.o
./libgcc_s.dylib: libgcc/./_udiv_w_sdiv_s.o
libgcc/./libgcc.map: libgcc/./_udiv_w_sdiv_s.o
libgcc/./_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4_s.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/./_udivmoddi4.o
./libgcc.a: libgcc/./_udivmoddi4.o
./libgcc_s.dylib: libgcc/./_udivmoddi4_s.o
libgcc/./libgcc.map: libgcc/./_udivmoddi4_s.o
libgcc/./darwin-tramp_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/./darwin-tramp_s.o
libgcc/./darwin-tramp.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/./darwin-tramp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -include libgcc/./darwin-tramp.vis -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/./darwin-tramp.o
libgcc/./darwin-tramp.vis: libgcc/./darwin-tramp_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./darwin-tramp.o
./libgcc_s.dylib: libgcc/./darwin-tramp_s.o
libgcc/./libgcc.map: libgcc/./darwin-tramp_s.o
libgcc/./darwin-fpsave_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/./darwin-fpsave_s.o
libgcc/./darwin-fpsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/./darwin-fpsave.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -include libgcc/./darwin-fpsave.vis -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/./darwin-fpsave.o
libgcc/./darwin-fpsave.vis: libgcc/./darwin-fpsave_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./darwin-fpsave.o
./libgcc_s.dylib: libgcc/./darwin-fpsave_s.o
libgcc/./libgcc.map: libgcc/./darwin-fpsave_s.o
libgcc/./ppc64-fp_s.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/./ppc64-fp_s.o
libgcc/./ppc64-fp.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(vis_hide) -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/./ppc64-fp.o
./libgcc.a: libgcc/./ppc64-fp.o
./libgcc_s.dylib: libgcc/./ppc64-fp_s.o
libgcc/./libgcc.map: libgcc/./ppc64-fp_s.o
libgcc/./darwin-64_s.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -c ../../gcc/config/darwin-64.c -o libgcc/./darwin-64_s.o
libgcc/./darwin-64.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(vis_hide) -c ../../gcc/config/darwin-64.c -o libgcc/./darwin-64.o
./libgcc.a: libgcc/./darwin-64.o
./libgcc_s.dylib: libgcc/./darwin-64_s.o
libgcc/./libgcc.map: libgcc/./darwin-64_s.o
libgcc/./darwin-ldouble_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/./darwin-ldouble_s.o
libgcc/./darwin-ldouble.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(vis_hide) -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/./darwin-ldouble.o
./libgcc.a: libgcc/./darwin-ldouble.o
./libgcc_s.dylib: libgcc/./darwin-ldouble_s.o
libgcc/./libgcc.map: libgcc/./darwin-ldouble_s.o
libgcc/./darwin-world_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/./darwin-world_s.o
libgcc/./darwin-world.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/./darwin-world.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -include libgcc/./darwin-world.vis -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/./darwin-world.o
libgcc/./darwin-world.vis: libgcc/./darwin-world_s.o; $(gen-hide-list)
./libgcc.a: libgcc/./darwin-world.o
./libgcc_s.dylib: libgcc/./darwin-world_s.o
libgcc/./libgcc.map: libgcc/./darwin-world_s.o
libgcc/./darwin-vecsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-vecsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-vecsave.asm -o libgcc/./darwin-vecsave.o
./libgcc.a: libgcc/./darwin-vecsave.o
libgcc/./unwind-dw2.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
./libgcc_eh.a: libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde-darwin.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/./unwind-dw2-fde-darwin.o
./libgcc_eh.a: libgcc/./unwind-dw2-fde-darwin.o
libgcc/./unwind-sjlj.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
./libgcc_eh.a: libgcc/./unwind-sjlj.o
libgcc/./unwind-c.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-c.c -o libgcc/./unwind-c.o
./libgcc_eh.a: libgcc/./unwind-c.o
libgcc/./darwin-fallback.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/./darwin-fallback.o
./libgcc_eh.a: libgcc/./darwin-fallback.o
libgcc/./unwind-dw2_s.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-dw2.c -o libgcc/./unwind-dw2_s.o
./libgcc_s.dylib: libgcc/./unwind-dw2_s.o
libgcc/./libgcc.map: libgcc/./unwind-dw2_s.o
libgcc/./unwind-dw2-fde-darwin_s.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/./unwind-dw2-fde-darwin_s.o
./libgcc_s.dylib: libgcc/./unwind-dw2-fde-darwin_s.o
libgcc/./libgcc.map: libgcc/./unwind-dw2-fde-darwin_s.o
libgcc/./unwind-sjlj_s.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj_s.o
./libgcc_s.dylib: libgcc/./unwind-sjlj_s.o
libgcc/./libgcc.map: libgcc/./unwind-sjlj_s.o
libgcc/./unwind-c_s.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-c.c -o libgcc/./unwind-c_s.o
./libgcc_s.dylib: libgcc/./unwind-c_s.o
libgcc/./libgcc.map: libgcc/./unwind-c_s.o
libgcc/./darwin-fallback_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/./darwin-fallback_s.o
./libgcc_s.dylib: libgcc/./darwin-fallback_s.o
libgcc/./libgcc.map: libgcc/./darwin-fallback_s.o
libgcc/./_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/./_gcov.o
./libgcov.a: libgcc/./_gcov.o
libgcc/./_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_add.o
./libgcov.a: libgcc/./_gcov_merge_add.o
libgcc/./_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_single.o
./libgcov.a: libgcc/./_gcov_merge_single.o
libgcc/./_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_delta.o
./libgcov.a: libgcc/./_gcov_merge_delta.o
libgcc/./_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/./_gcov_fork.o
./libgcov.a: libgcc/./_gcov_fork.o
libgcc/./_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execl.o
./libgcov.a: libgcc/./_gcov_execl.o
libgcc/./_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execlp.o
./libgcov.a: libgcc/./_gcov_execlp.o
libgcc/./_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execle.o
./libgcov.a: libgcc/./_gcov_execle.o
libgcc/./_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execv.o
./libgcov.a: libgcc/./_gcov_execv.o
libgcc/./_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execvp.o
./libgcov.a: libgcc/./_gcov_execvp.o
libgcc/./_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/./_gcov_execve.o
./libgcov.a: libgcc/./_gcov_execve.o
libgcc/./_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/./_gcov_interval_profiler.o
./libgcov.a: libgcc/./_gcov_interval_profiler.o
libgcc/./_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/./_gcov_pow2_profiler.o
./libgcov.a: libgcc/./_gcov_pow2_profiler.o
libgcc/./_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/./_gcov_one_value_profiler.o
./libgcov.a: libgcc/./_gcov_one_value_profiler.o

extra: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4" T= crt3.o
all: extra
./libgcc_s.dylib: extra

libgcc/./libgcc.map: ../../gcc/mkmap-flat.awk ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -E -xassembler-with-cpp -; \
	} | $(AWK) -f ../../gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/./tmp-libgcc.map
	mv 'libgcc/./tmp-libgcc.map' $@
./libgcc_s.dylib: libgcc/./libgcc.map

./libgcc.a: stmp-dirs
	-rm -f ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcc.a
all: ./libgcc.a

./libgcov.a: stmp-dirs
	-rm -f ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcov.a
all: ./libgcov.a

./libgcc_eh.a: stmp-dirs
	-rm -f ./libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) ./libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) ./libgcc_eh.a
all: ./libgcc_eh.a

./libgcc_s.dylib: stmp-dirs 
	/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/./gcc/xgcc -B/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/./gcc/ -B/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//bin/ -B/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//lib/ -isystem /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//include -isystem /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//sys-include  -O2  -O2 -g -O2  -DIN_GCC    -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -isystem ./include  -Wa,-force_cpusubtype_ALL -pipe -g -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED  -dynamiclib -nodefaultlibs -install_name /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin/lib/libgcc_s`if test . = ppc64 ; then echo _. ; fi`.1.dylib -single_module -o ./libgcc_s.1.dylib.tmp -Wl,-exported_symbols_list,libgcc/./libgcc.map -compatibility_version 1 -current_version 1.0  -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(objects) -lc
all: ./libgcc_s.dylib

#
# ml: ppc64;@m64@isysroot/Developer/SDKs/MacOSX10.4u.sdk@mmacosx-version-min=10.4
# dir: ppc64
# flags: -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4
# libgcc_a: ppc64/libgcc.a
# libgcov_a: ppc64/libgcov.a
# libgcc_eh_a: ppc64/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual: /ppc64
# libgcc_s_so: ppc64/libgcc_s.dylib
# libunwind_so:
#

dirs += ppc64 libgcc/ppc64

libgcc/ppc64/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_muldi3_s.o
libgcc/ppc64/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_muldi3.o
ppc64/libgcc.a: libgcc/ppc64/_muldi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_muldi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_muldi3_s.o
libgcc/ppc64/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_negdi2_s.o
libgcc/ppc64/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_negdi2.o
ppc64/libgcc.a: libgcc/ppc64/_negdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_negdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_negdi2_s.o
libgcc/ppc64/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_lshrdi3_s.o
libgcc/ppc64/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_lshrdi3.o
ppc64/libgcc.a: libgcc/ppc64/_lshrdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_lshrdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_lshrdi3_s.o
libgcc/ppc64/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ashldi3_s.o
libgcc/ppc64/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ashldi3.o
ppc64/libgcc.a: libgcc/ppc64/_ashldi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ashldi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ashldi3_s.o
libgcc/ppc64/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ashrdi3_s.o
libgcc/ppc64/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ashrdi3.o
ppc64/libgcc.a: libgcc/ppc64/_ashrdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ashrdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ashrdi3_s.o
libgcc/ppc64/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_cmpdi2_s.o
libgcc/ppc64/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_cmpdi2.o
ppc64/libgcc.a: libgcc/ppc64/_cmpdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_cmpdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_cmpdi2_s.o
libgcc/ppc64/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ucmpdi2_s.o
libgcc/ppc64/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ucmpdi2.o
ppc64/libgcc.a: libgcc/ppc64/_ucmpdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ucmpdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ucmpdi2_s.o
libgcc/ppc64/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clear_cache_s.o
libgcc/ppc64/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clear_cache.o
ppc64/libgcc.a: libgcc/ppc64/_clear_cache.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_clear_cache_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_clear_cache_s.o
libgcc/ppc64/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_enable_execute_stack_s.o
libgcc/ppc64/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_enable_execute_stack.o
ppc64/libgcc.a: libgcc/ppc64/_enable_execute_stack.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_enable_execute_stack_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_enable_execute_stack_s.o
libgcc/ppc64/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_trampoline_s.o
libgcc/ppc64/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_trampoline.o
ppc64/libgcc.a: libgcc/ppc64/_trampoline.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_trampoline_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_trampoline_s.o
libgcc/ppc64/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL__main -c $(srcdir)/libgcc2.c -o libgcc/ppc64/__main_s.o
libgcc/ppc64/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/__main.o
ppc64/libgcc.a: libgcc/ppc64/__main.o
ppc64/libgcc_s.dylib: libgcc/ppc64/__main_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/__main_s.o
libgcc/ppc64/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_absvsi2_s.o
libgcc/ppc64/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_absvsi2.o
ppc64/libgcc.a: libgcc/ppc64/_absvsi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_absvsi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_absvsi2_s.o
libgcc/ppc64/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_absvdi2_s.o
libgcc/ppc64/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_absvdi2.o
ppc64/libgcc.a: libgcc/ppc64/_absvdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_absvdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_absvdi2_s.o
libgcc/ppc64/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_addvsi3_s.o
libgcc/ppc64/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_addvsi3.o
ppc64/libgcc.a: libgcc/ppc64/_addvsi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_addvsi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_addvsi3_s.o
libgcc/ppc64/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_addvdi3_s.o
libgcc/ppc64/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_addvdi3.o
ppc64/libgcc.a: libgcc/ppc64/_addvdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_addvdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_addvdi3_s.o
libgcc/ppc64/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_subvsi3_s.o
libgcc/ppc64/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_subvsi3.o
ppc64/libgcc.a: libgcc/ppc64/_subvsi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_subvsi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_subvsi3_s.o
libgcc/ppc64/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_subvdi3_s.o
libgcc/ppc64/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_subvdi3.o
ppc64/libgcc.a: libgcc/ppc64/_subvdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_subvdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_subvdi3_s.o
libgcc/ppc64/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulvsi3_s.o
libgcc/ppc64/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulvsi3.o
ppc64/libgcc.a: libgcc/ppc64/_mulvsi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_mulvsi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_mulvsi3_s.o
libgcc/ppc64/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulvdi3_s.o
libgcc/ppc64/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulvdi3.o
ppc64/libgcc.a: libgcc/ppc64/_mulvdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_mulvdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_mulvdi3_s.o
libgcc/ppc64/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_negvsi2_s.o
libgcc/ppc64/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_negvsi2.o
ppc64/libgcc.a: libgcc/ppc64/_negvsi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_negvsi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_negvsi2_s.o
libgcc/ppc64/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_negvdi2_s.o
libgcc/ppc64/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_negvdi2.o
ppc64/libgcc.a: libgcc/ppc64/_negvdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_negvdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_negvdi2_s.o
libgcc/ppc64/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ctors_s.o
libgcc/ppc64/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ctors.o
ppc64/libgcc.a: libgcc/ppc64/_ctors.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ctors_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ctors_s.o
libgcc/ppc64/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ffssi2_s.o
libgcc/ppc64/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ffssi2.o
ppc64/libgcc.a: libgcc/ppc64/_ffssi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ffssi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ffssi2_s.o
libgcc/ppc64/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ffsdi2_s.o
libgcc/ppc64/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ffsdi2.o
ppc64/libgcc.a: libgcc/ppc64/_ffsdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ffsdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ffsdi2_s.o
libgcc/ppc64/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clz_s.o
libgcc/ppc64/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clz.o
ppc64/libgcc.a: libgcc/ppc64/_clz.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_clz_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_clz_s.o
libgcc/ppc64/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clzsi2_s.o
libgcc/ppc64/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clzsi2.o
ppc64/libgcc.a: libgcc/ppc64/_clzsi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_clzsi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_clzsi2_s.o
libgcc/ppc64/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clzdi2_s.o
libgcc/ppc64/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_clzdi2.o
ppc64/libgcc.a: libgcc/ppc64/_clzdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_clzdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_clzdi2_s.o
libgcc/ppc64/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ctzsi2_s.o
libgcc/ppc64/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ctzsi2.o
ppc64/libgcc.a: libgcc/ppc64/_ctzsi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ctzsi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ctzsi2_s.o
libgcc/ppc64/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ctzdi2_s.o
libgcc/ppc64/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_ctzdi2.o
ppc64/libgcc.a: libgcc/ppc64/_ctzdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_ctzdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_ctzdi2_s.o
libgcc/ppc64/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_popcount_tab_s.o
libgcc/ppc64/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_popcount_tab.o
ppc64/libgcc.a: libgcc/ppc64/_popcount_tab.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_popcount_tab_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_popcount_tab_s.o
libgcc/ppc64/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_popcountsi2_s.o
libgcc/ppc64/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_popcountsi2.o
ppc64/libgcc.a: libgcc/ppc64/_popcountsi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_popcountsi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_popcountsi2_s.o
libgcc/ppc64/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_popcountdi2_s.o
libgcc/ppc64/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_popcountdi2.o
ppc64/libgcc.a: libgcc/ppc64/_popcountdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_popcountdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_popcountdi2_s.o
libgcc/ppc64/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_paritysi2_s.o
libgcc/ppc64/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_paritysi2.o
ppc64/libgcc.a: libgcc/ppc64/_paritysi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_paritysi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_paritysi2_s.o
libgcc/ppc64/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_paritydi2_s.o
libgcc/ppc64/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_paritydi2.o
ppc64/libgcc.a: libgcc/ppc64/_paritydi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_paritydi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_paritydi2_s.o
libgcc/ppc64/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powisf2_s.o
libgcc/ppc64/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powisf2.o
ppc64/libgcc.a: libgcc/ppc64/_powisf2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_powisf2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_powisf2_s.o
libgcc/ppc64/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powidf2_s.o
libgcc/ppc64/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powidf2.o
ppc64/libgcc.a: libgcc/ppc64/_powidf2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_powidf2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_powidf2_s.o
libgcc/ppc64/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powixf2_s.o
libgcc/ppc64/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powixf2.o
ppc64/libgcc.a: libgcc/ppc64/_powixf2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_powixf2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_powixf2_s.o
libgcc/ppc64/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powitf2_s.o
libgcc/ppc64/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_powitf2.o
ppc64/libgcc.a: libgcc/ppc64/_powitf2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_powitf2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_powitf2_s.o
libgcc/ppc64/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulsc3_s.o
libgcc/ppc64/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulsc3.o
ppc64/libgcc.a: libgcc/ppc64/_mulsc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_mulsc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_mulsc3_s.o
libgcc/ppc64/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_muldc3_s.o
libgcc/ppc64/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_muldc3.o
ppc64/libgcc.a: libgcc/ppc64/_muldc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_muldc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_muldc3_s.o
libgcc/ppc64/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulxc3_s.o
libgcc/ppc64/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_mulxc3.o
ppc64/libgcc.a: libgcc/ppc64/_mulxc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_mulxc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_mulxc3_s.o
libgcc/ppc64/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_multc3_s.o
libgcc/ppc64/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_multc3.o
ppc64/libgcc.a: libgcc/ppc64/_multc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_multc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_multc3_s.o
libgcc/ppc64/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divsc3_s.o
libgcc/ppc64/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divsc3.o
ppc64/libgcc.a: libgcc/ppc64/_divsc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_divsc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_divsc3_s.o
libgcc/ppc64/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divdc3_s.o
libgcc/ppc64/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divdc3.o
ppc64/libgcc.a: libgcc/ppc64/_divdc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_divdc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_divdc3_s.o
libgcc/ppc64/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divxc3_s.o
libgcc/ppc64/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divxc3.o
ppc64/libgcc.a: libgcc/ppc64/_divxc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_divxc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_divxc3_s.o
libgcc/ppc64/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divtc3_s.o
libgcc/ppc64/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divtc3.o
ppc64/libgcc.a: libgcc/ppc64/_divtc3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_divtc3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_divtc3_s.o
libgcc/ppc64/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_bswapsi2_s.o
libgcc/ppc64/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_bswapsi2.o
ppc64/libgcc.a: libgcc/ppc64/_bswapsi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_bswapsi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_bswapsi2_s.o
libgcc/ppc64/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_bswapdi2_s.o
libgcc/ppc64/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_bswapdi2.o
ppc64/libgcc.a: libgcc/ppc64/_bswapdi2.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_bswapdi2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_bswapdi2_s.o
libgcc/ppc64/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunssfsi_s.o
libgcc/ppc64/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunssfsi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunssfsi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunssfsi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunssfsi_s.o
libgcc/ppc64/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsdfsi_s.o
libgcc/ppc64/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsdfsi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunsdfsi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunsdfsi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunsdfsi_s.o
libgcc/ppc64/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsxfsi_s.o
libgcc/ppc64/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsxfsi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunsxfsi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunsxfsi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunsxfsi_s.o
libgcc/ppc64/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixsfdi_s.o
libgcc/ppc64/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixsfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixsfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixsfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixsfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixsfdi_s.o
libgcc/ppc64/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunssfdi_s.o
libgcc/ppc64/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunssfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunssfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunssfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunssfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunssfdi_s.o
libgcc/ppc64/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatdisf_s.o
libgcc/ppc64/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatdisf.o
ppc64/libgcc.a: libgcc/ppc64/_floatdisf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatdisf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatdisf_s.o
libgcc/ppc64/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundisf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatundisf_s.o
libgcc/ppc64/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatundisf.o
ppc64/libgcc.a: libgcc/ppc64/_floatundisf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatundisf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatundisf_s.o
libgcc/ppc64/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixdfdi_s.o
libgcc/ppc64/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixdfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixdfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixdfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixdfdi_s.o
libgcc/ppc64/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsdfdi_s.o
libgcc/ppc64/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsdfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunsdfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunsdfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunsdfdi_s.o
libgcc/ppc64/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatdidf_s.o
libgcc/ppc64/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatdidf.o
ppc64/libgcc.a: libgcc/ppc64/_floatdidf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatdidf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatdidf_s.o
libgcc/ppc64/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundidf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatundidf_s.o
libgcc/ppc64/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatundidf.o
ppc64/libgcc.a: libgcc/ppc64/_floatundidf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatundidf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatundidf_s.o
libgcc/ppc64/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixxfdi_s.o
libgcc/ppc64/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixxfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixxfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixxfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixxfdi_s.o
libgcc/ppc64/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsxfdi_s.o
libgcc/ppc64/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunsxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunsxfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunsxfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunsxfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunsxfdi_s.o
libgcc/ppc64/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatdixf_s.o
libgcc/ppc64/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatdixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatdixf.o
ppc64/libgcc.a: libgcc/ppc64/_floatdixf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatdixf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatdixf_s.o
libgcc/ppc64/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundixf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatundixf_s.o
libgcc/ppc64/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatundixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatundixf.o
ppc64/libgcc.a: libgcc/ppc64/_floatundixf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatundixf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatundixf_s.o
libgcc/ppc64/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixtfdi_s.o
libgcc/ppc64/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixtfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixtfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixtfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixtfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixtfdi_s.o
libgcc/ppc64/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunstfdi_s.o
libgcc/ppc64/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_fixunstfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_fixunstfdi.o
ppc64/libgcc.a: libgcc/ppc64/_fixunstfdi.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_fixunstfdi_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_fixunstfdi_s.o
libgcc/ppc64/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatditf_s.o
libgcc/ppc64/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatditf.o
ppc64/libgcc.a: libgcc/ppc64/_floatditf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatditf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatditf_s.o
libgcc/ppc64/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatunditf -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatunditf_s.o
libgcc/ppc64/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_floatunditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_floatunditf.o
ppc64/libgcc.a: libgcc/ppc64/_floatunditf.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_floatunditf_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_floatunditf_s.o
libgcc/ppc64/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_eprintf.o
ppc64/libgcc.a: libgcc/ppc64/_eprintf.o
libgcc/ppc64/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/__gcc_bcmp.o
ppc64/libgcc.a: libgcc/ppc64/__gcc_bcmp.o
libgcc/ppc64/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divdi3_s.o
libgcc/ppc64/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_divdi3.o
ppc64/libgcc.a: libgcc/ppc64/_divdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_divdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_divdi3_s.o
libgcc/ppc64/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_moddi3_s.o
libgcc/ppc64/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_moddi3.o
ppc64/libgcc.a: libgcc/ppc64/_moddi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_moddi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_moddi3_s.o
libgcc/ppc64/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_udivdi3_s.o
libgcc/ppc64/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_udivdi3.o
ppc64/libgcc.a: libgcc/ppc64/_udivdi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_udivdi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_udivdi3_s.o
libgcc/ppc64/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_umoddi3_s.o
libgcc/ppc64/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_umoddi3.o
ppc64/libgcc.a: libgcc/ppc64/_umoddi3.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_umoddi3_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_umoddi3_s.o
libgcc/ppc64/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_udiv_w_sdiv_s.o
libgcc/ppc64/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_udiv_w_sdiv.o
ppc64/libgcc.a: libgcc/ppc64/_udiv_w_sdiv.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_udiv_w_sdiv_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_udiv_w_sdiv_s.o
libgcc/ppc64/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_udivmoddi4_s.o
libgcc/ppc64/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/ppc64/_udivmoddi4.o
ppc64/libgcc.a: libgcc/ppc64/_udivmoddi4.o
ppc64/libgcc_s.dylib: libgcc/ppc64/_udivmoddi4_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/_udivmoddi4_s.o
libgcc/ppc64/darwin-tramp_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/ppc64/darwin-tramp_s.o
libgcc/ppc64/darwin-tramp.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/ppc64/darwin-tramp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -include libgcc/ppc64/darwin-tramp.vis -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/ppc64/darwin-tramp.o
libgcc/ppc64/darwin-tramp.vis: libgcc/ppc64/darwin-tramp_s.o; $(gen-hide-list)
ppc64/libgcc.a: libgcc/ppc64/darwin-tramp.o
ppc64/libgcc_s.dylib: libgcc/ppc64/darwin-tramp_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/darwin-tramp_s.o
libgcc/ppc64/darwin-fpsave_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/ppc64/darwin-fpsave_s.o
libgcc/ppc64/darwin-fpsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/ppc64/darwin-fpsave.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -include libgcc/ppc64/darwin-fpsave.vis -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/ppc64/darwin-fpsave.o
libgcc/ppc64/darwin-fpsave.vis: libgcc/ppc64/darwin-fpsave_s.o; $(gen-hide-list)
ppc64/libgcc.a: libgcc/ppc64/darwin-fpsave.o
ppc64/libgcc_s.dylib: libgcc/ppc64/darwin-fpsave_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/darwin-fpsave_s.o
libgcc/ppc64/ppc64-fp_s.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/ppc64/ppc64-fp_s.o
libgcc/ppc64/ppc64-fp.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(vis_hide) -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/ppc64/ppc64-fp.o
ppc64/libgcc.a: libgcc/ppc64/ppc64-fp.o
ppc64/libgcc_s.dylib: libgcc/ppc64/ppc64-fp_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/ppc64-fp_s.o
libgcc/ppc64/darwin-64_s.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -c ../../gcc/config/darwin-64.c -o libgcc/ppc64/darwin-64_s.o
libgcc/ppc64/darwin-64.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(vis_hide) -c ../../gcc/config/darwin-64.c -o libgcc/ppc64/darwin-64.o
ppc64/libgcc.a: libgcc/ppc64/darwin-64.o
ppc64/libgcc_s.dylib: libgcc/ppc64/darwin-64_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/darwin-64_s.o
libgcc/ppc64/darwin-ldouble_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/ppc64/darwin-ldouble_s.o
libgcc/ppc64/darwin-ldouble.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(vis_hide) -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/ppc64/darwin-ldouble.o
ppc64/libgcc.a: libgcc/ppc64/darwin-ldouble.o
ppc64/libgcc_s.dylib: libgcc/ppc64/darwin-ldouble_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/darwin-ldouble_s.o
libgcc/ppc64/darwin-world_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/ppc64/darwin-world_s.o
libgcc/ppc64/darwin-world.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/ppc64/darwin-world.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -include libgcc/ppc64/darwin-world.vis -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/ppc64/darwin-world.o
libgcc/ppc64/darwin-world.vis: libgcc/ppc64/darwin-world_s.o; $(gen-hide-list)
ppc64/libgcc.a: libgcc/ppc64/darwin-world.o
ppc64/libgcc_s.dylib: libgcc/ppc64/darwin-world_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/darwin-world_s.o
libgcc/ppc64/darwin-vecsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-vecsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-vecsave.asm -o libgcc/ppc64/darwin-vecsave.o
ppc64/libgcc.a: libgcc/ppc64/darwin-vecsave.o
libgcc/ppc64/unwind-dw2.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2.c -o libgcc/ppc64/unwind-dw2.o
ppc64/libgcc_eh.a: libgcc/ppc64/unwind-dw2.o
libgcc/ppc64/unwind-dw2-fde-darwin.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/ppc64/unwind-dw2-fde-darwin.o
ppc64/libgcc_eh.a: libgcc/ppc64/unwind-dw2-fde-darwin.o
libgcc/ppc64/unwind-sjlj.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-sjlj.c -o libgcc/ppc64/unwind-sjlj.o
ppc64/libgcc_eh.a: libgcc/ppc64/unwind-sjlj.o
libgcc/ppc64/unwind-c.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/unwind-c.c -o libgcc/ppc64/unwind-c.o
ppc64/libgcc_eh.a: libgcc/ppc64/unwind-c.o
libgcc/ppc64/darwin-fallback.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions $(vis_hide) -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/ppc64/darwin-fallback.o
ppc64/libgcc_eh.a: libgcc/ppc64/darwin-fallback.o
libgcc/ppc64/unwind-dw2_s.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-dw2.c -o libgcc/ppc64/unwind-dw2_s.o
ppc64/libgcc_s.dylib: libgcc/ppc64/unwind-dw2_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/unwind-dw2_s.o
libgcc/ppc64/unwind-dw2-fde-darwin_s.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/ppc64/unwind-dw2-fde-darwin_s.o
ppc64/libgcc_s.dylib: libgcc/ppc64/unwind-dw2-fde-darwin_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/unwind-dw2-fde-darwin_s.o
libgcc/ppc64/unwind-sjlj_s.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-sjlj.c -o libgcc/ppc64/unwind-sjlj_s.o
ppc64/libgcc_s.dylib: libgcc/ppc64/unwind-sjlj_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/unwind-sjlj_s.o
libgcc/ppc64/unwind-c_s.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/unwind-c.c -o libgcc/ppc64/unwind-c_s.o
ppc64/libgcc_s.dylib: libgcc/ppc64/unwind-c_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/unwind-c_s.o
libgcc/ppc64/darwin-fallback_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -fexceptions -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/ppc64/darwin-fallback_s.o
ppc64/libgcc_s.dylib: libgcc/ppc64/darwin-fallback_s.o
libgcc/ppc64/libgcc.map: libgcc/ppc64/darwin-fallback_s.o
libgcc/ppc64/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov.o
ppc64/libgcov.a: libgcc/ppc64/_gcov.o
libgcc/ppc64/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_merge_add.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_merge_add.o
libgcc/ppc64/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_merge_single.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_merge_single.o
libgcc/ppc64/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_merge_delta.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_merge_delta.o
libgcc/ppc64/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_fork.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_fork.o
libgcc/ppc64/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_execl.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_execl.o
libgcc/ppc64/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_execlp.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_execlp.o
libgcc/ppc64/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_execle.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_execle.o
libgcc/ppc64/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_execv.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_execv.o
libgcc/ppc64/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_execvp.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_execvp.o
libgcc/ppc64/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_execve.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_execve.o
libgcc/ppc64/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_interval_profiler.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_interval_profiler.o
libgcc/ppc64/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_pow2_profiler.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_pow2_profiler.o
libgcc/ppc64/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/ppc64/_gcov_one_value_profiler.o
ppc64/libgcov.a: libgcc/ppc64/_gcov_one_value_profiler.o

extrappc64: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4" T=ppc64/ ppc64/crt3.o
all: extrappc64
ppc64/libgcc_s.dylib: extrappc64

libgcc/ppc64/libgcc.map: ../../gcc/mkmap-flat.awk ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 -E -xassembler-with-cpp -; \
	} | $(AWK) -f ../../gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/ppc64/tmp-libgcc.map
	mv 'libgcc/ppc64/tmp-libgcc.map' $@
ppc64/libgcc_s.dylib: libgcc/ppc64/libgcc.map

ppc64/libgcc.a: stmp-dirs
	-rm -f ppc64/libgcc.a
	$(AR_CREATE_FOR_TARGET) ppc64/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) ppc64/libgcc.a
all: ppc64/libgcc.a

ppc64/libgcov.a: stmp-dirs
	-rm -f ppc64/libgcov.a
	$(AR_CREATE_FOR_TARGET) ppc64/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) ppc64/libgcov.a
all: ppc64/libgcov.a

ppc64/libgcc_eh.a: stmp-dirs
	-rm -f ppc64/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) ppc64/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) ppc64/libgcc_eh.a
all: ppc64/libgcc_eh.a

ppc64/libgcc_s.dylib: stmp-dirs 
	/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/./gcc/xgcc -B/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/./gcc/ -B/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//bin/ -B/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//lib/ -isystem /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//include -isystem /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin//sys-include  -O2  -O2 -g -O2  -DIN_GCC    -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -isystem ./include  -Wa,-force_cpusubtype_ALL -pipe -g -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED  -dynamiclib -nodefaultlibs -install_name /Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20-deps/llvm-gcc-4.2-2.9.source/obj/../install-bin/lib/libgcc_s`if test ppc64 = ppc64 ; then echo _ppc64 ; fi`.1.dylib -single_module -o ppc64/libgcc_s.1.dylib.tmp -Wl,-exported_symbols_list,libgcc/ppc64/libgcc.map -compatibility_version 1 -current_version 1.0  -m64 -isysroot/Developer/SDKs/MacOSX10.4u.sdk -mmacosx-version-min=10.4 $(objects) -lc
all: ppc64/libgcc_s.dylib

#
# ml: static;@static@fno-pic
# dir: static
# flags: -static -fno-pic
# libgcc_a: static/libgcc.a
# libgcov_a: static/libgcov.a
# libgcc_eh_a: static/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: static/libgcc_s.dylib
# libunwind_so:
#

dirs += static libgcc/static

libgcc/static/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_muldi3_s.o
libgcc/static/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_muldi3.o
static/libgcc.a: libgcc/static/_muldi3.o
static/libgcc_s.dylib: libgcc/static/_muldi3_s.o
libgcc/static/libgcc.map: libgcc/static/_muldi3_s.o
libgcc/static/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_negdi2_s.o
libgcc/static/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_negdi2.o
static/libgcc.a: libgcc/static/_negdi2.o
static/libgcc_s.dylib: libgcc/static/_negdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_negdi2_s.o
libgcc/static/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_lshrdi3_s.o
libgcc/static/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_lshrdi3.o
static/libgcc.a: libgcc/static/_lshrdi3.o
static/libgcc_s.dylib: libgcc/static/_lshrdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_lshrdi3_s.o
libgcc/static/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_ashldi3_s.o
libgcc/static/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ashldi3.o
static/libgcc.a: libgcc/static/_ashldi3.o
static/libgcc_s.dylib: libgcc/static/_ashldi3_s.o
libgcc/static/libgcc.map: libgcc/static/_ashldi3_s.o
libgcc/static/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_ashrdi3_s.o
libgcc/static/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ashrdi3.o
static/libgcc.a: libgcc/static/_ashrdi3.o
static/libgcc_s.dylib: libgcc/static/_ashrdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_ashrdi3_s.o
libgcc/static/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_cmpdi2_s.o
libgcc/static/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_cmpdi2.o
static/libgcc.a: libgcc/static/_cmpdi2.o
static/libgcc_s.dylib: libgcc/static/_cmpdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_cmpdi2_s.o
libgcc/static/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ucmpdi2_s.o
libgcc/static/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ucmpdi2.o
static/libgcc.a: libgcc/static/_ucmpdi2.o
static/libgcc_s.dylib: libgcc/static/_ucmpdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ucmpdi2_s.o
libgcc/static/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/static/_clear_cache_s.o
libgcc/static/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clear_cache.o
static/libgcc.a: libgcc/static/_clear_cache.o
static/libgcc_s.dylib: libgcc/static/_clear_cache_s.o
libgcc/static/libgcc.map: libgcc/static/_clear_cache_s.o
libgcc/static/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/static/_enable_execute_stack_s.o
libgcc/static/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_enable_execute_stack.o
static/libgcc.a: libgcc/static/_enable_execute_stack.o
static/libgcc_s.dylib: libgcc/static/_enable_execute_stack_s.o
libgcc/static/libgcc.map: libgcc/static/_enable_execute_stack_s.o
libgcc/static/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/static/_trampoline_s.o
libgcc/static/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_trampoline.o
static/libgcc.a: libgcc/static/_trampoline.o
static/libgcc_s.dylib: libgcc/static/_trampoline_s.o
libgcc/static/libgcc.map: libgcc/static/_trampoline_s.o
libgcc/static/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL__main -c $(srcdir)/libgcc2.c -o libgcc/static/__main_s.o
libgcc/static/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/__main.o
static/libgcc.a: libgcc/static/__main.o
static/libgcc_s.dylib: libgcc/static/__main_s.o
libgcc/static/libgcc.map: libgcc/static/__main_s.o
libgcc/static/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_absvsi2_s.o
libgcc/static/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_absvsi2.o
static/libgcc.a: libgcc/static/_absvsi2.o
static/libgcc_s.dylib: libgcc/static/_absvsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_absvsi2_s.o
libgcc/static/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_absvdi2_s.o
libgcc/static/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_absvdi2.o
static/libgcc.a: libgcc/static/_absvdi2.o
static/libgcc_s.dylib: libgcc/static/_absvdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_absvdi2_s.o
libgcc/static/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_addvsi3_s.o
libgcc/static/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_addvsi3.o
static/libgcc.a: libgcc/static/_addvsi3.o
static/libgcc_s.dylib: libgcc/static/_addvsi3_s.o
libgcc/static/libgcc.map: libgcc/static/_addvsi3_s.o
libgcc/static/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_addvdi3_s.o
libgcc/static/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_addvdi3.o
static/libgcc.a: libgcc/static/_addvdi3.o
static/libgcc_s.dylib: libgcc/static/_addvdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_addvdi3_s.o
libgcc/static/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_subvsi3_s.o
libgcc/static/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_subvsi3.o
static/libgcc.a: libgcc/static/_subvsi3.o
static/libgcc_s.dylib: libgcc/static/_subvsi3_s.o
libgcc/static/libgcc.map: libgcc/static/_subvsi3_s.o
libgcc/static/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_subvdi3_s.o
libgcc/static/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_subvdi3.o
static/libgcc.a: libgcc/static/_subvdi3.o
static/libgcc_s.dylib: libgcc/static/_subvdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_subvdi3_s.o
libgcc/static/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvsi3_s.o
libgcc/static/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvsi3.o
static/libgcc.a: libgcc/static/_mulvsi3.o
static/libgcc_s.dylib: libgcc/static/_mulvsi3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulvsi3_s.o
libgcc/static/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvdi3_s.o
libgcc/static/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulvdi3.o
static/libgcc.a: libgcc/static/_mulvdi3.o
static/libgcc_s.dylib: libgcc/static/_mulvdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulvdi3_s.o
libgcc/static/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_negvsi2_s.o
libgcc/static/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_negvsi2.o
static/libgcc.a: libgcc/static/_negvsi2.o
static/libgcc_s.dylib: libgcc/static/_negvsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_negvsi2_s.o
libgcc/static/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_negvdi2_s.o
libgcc/static/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_negvdi2.o
static/libgcc.a: libgcc/static/_negvdi2.o
static/libgcc_s.dylib: libgcc/static/_negvdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_negvdi2_s.o
libgcc/static/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/static/_ctors_s.o
libgcc/static/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ctors.o
static/libgcc.a: libgcc/static/_ctors.o
static/libgcc_s.dylib: libgcc/static/_ctors_s.o
libgcc/static/libgcc.map: libgcc/static/_ctors_s.o
libgcc/static/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ffssi2_s.o
libgcc/static/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ffssi2.o
static/libgcc.a: libgcc/static/_ffssi2.o
static/libgcc_s.dylib: libgcc/static/_ffssi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ffssi2_s.o
libgcc/static/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ffsdi2_s.o
libgcc/static/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ffsdi2.o
static/libgcc.a: libgcc/static/_ffsdi2.o
static/libgcc_s.dylib: libgcc/static/_ffsdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ffsdi2_s.o
libgcc/static/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/static/_clz_s.o
libgcc/static/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clz.o
static/libgcc.a: libgcc/static/_clz.o
static/libgcc_s.dylib: libgcc/static/_clz_s.o
libgcc/static/libgcc.map: libgcc/static/_clz_s.o
libgcc/static/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_clzsi2_s.o
libgcc/static/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clzsi2.o
static/libgcc.a: libgcc/static/_clzsi2.o
static/libgcc_s.dylib: libgcc/static/_clzsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_clzsi2_s.o
libgcc/static/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_clzdi2_s.o
libgcc/static/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_clzdi2.o
static/libgcc.a: libgcc/static/_clzdi2.o
static/libgcc_s.dylib: libgcc/static/_clzdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_clzdi2_s.o
libgcc/static/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzsi2_s.o
libgcc/static/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzsi2.o
static/libgcc.a: libgcc/static/_ctzsi2.o
static/libgcc_s.dylib: libgcc/static/_ctzsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ctzsi2_s.o
libgcc/static/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzdi2_s.o
libgcc/static/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_ctzdi2.o
static/libgcc.a: libgcc/static/_ctzdi2.o
static/libgcc_s.dylib: libgcc/static/_ctzdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_ctzdi2_s.o
libgcc/static/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/static/_popcount_tab_s.o
libgcc/static/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_popcount_tab.o
static/libgcc.a: libgcc/static/_popcount_tab.o
static/libgcc_s.dylib: libgcc/static/_popcount_tab_s.o
libgcc/static/libgcc.map: libgcc/static/_popcount_tab_s.o
libgcc/static/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountsi2_s.o
libgcc/static/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountsi2.o
static/libgcc.a: libgcc/static/_popcountsi2.o
static/libgcc_s.dylib: libgcc/static/_popcountsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_popcountsi2_s.o
libgcc/static/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountdi2_s.o
libgcc/static/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_popcountdi2.o
static/libgcc.a: libgcc/static/_popcountdi2.o
static/libgcc_s.dylib: libgcc/static/_popcountdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_popcountdi2_s.o
libgcc/static/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_paritysi2_s.o
libgcc/static/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_paritysi2.o
static/libgcc.a: libgcc/static/_paritysi2.o
static/libgcc_s.dylib: libgcc/static/_paritysi2_s.o
libgcc/static/libgcc.map: libgcc/static/_paritysi2_s.o
libgcc/static/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_paritydi2_s.o
libgcc/static/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_paritydi2.o
static/libgcc.a: libgcc/static/_paritydi2.o
static/libgcc_s.dylib: libgcc/static/_paritydi2_s.o
libgcc/static/libgcc.map: libgcc/static/_paritydi2_s.o
libgcc/static/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powisf2_s.o
libgcc/static/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powisf2.o
static/libgcc.a: libgcc/static/_powisf2.o
static/libgcc_s.dylib: libgcc/static/_powisf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powisf2_s.o
libgcc/static/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powidf2_s.o
libgcc/static/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powidf2.o
static/libgcc.a: libgcc/static/_powidf2.o
static/libgcc_s.dylib: libgcc/static/_powidf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powidf2_s.o
libgcc/static/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powixf2_s.o
libgcc/static/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powixf2.o
static/libgcc.a: libgcc/static/_powixf2.o
static/libgcc_s.dylib: libgcc/static/_powixf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powixf2_s.o
libgcc/static/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/static/_powitf2_s.o
libgcc/static/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_powitf2.o
static/libgcc.a: libgcc/static/_powitf2.o
static/libgcc_s.dylib: libgcc/static/_powitf2_s.o
libgcc/static/libgcc.map: libgcc/static/_powitf2_s.o
libgcc/static/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulsc3_s.o
libgcc/static/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulsc3.o
static/libgcc.a: libgcc/static/_mulsc3.o
static/libgcc_s.dylib: libgcc/static/_mulsc3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulsc3_s.o
libgcc/static/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_muldc3_s.o
libgcc/static/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_muldc3.o
static/libgcc.a: libgcc/static/_muldc3.o
static/libgcc_s.dylib: libgcc/static/_muldc3_s.o
libgcc/static/libgcc.map: libgcc/static/_muldc3_s.o
libgcc/static/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_mulxc3_s.o
libgcc/static/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_mulxc3.o
static/libgcc.a: libgcc/static/_mulxc3.o
static/libgcc_s.dylib: libgcc/static/_mulxc3_s.o
libgcc/static/libgcc.map: libgcc/static/_mulxc3_s.o
libgcc/static/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_multc3_s.o
libgcc/static/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_multc3.o
static/libgcc.a: libgcc/static/_multc3.o
static/libgcc_s.dylib: libgcc/static/_multc3_s.o
libgcc/static/libgcc.map: libgcc/static/_multc3_s.o
libgcc/static/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divsc3_s.o
libgcc/static/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divsc3.o
static/libgcc.a: libgcc/static/_divsc3.o
static/libgcc_s.dylib: libgcc/static/_divsc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divsc3_s.o
libgcc/static/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divdc3_s.o
libgcc/static/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divdc3.o
static/libgcc.a: libgcc/static/_divdc3.o
static/libgcc_s.dylib: libgcc/static/_divdc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divdc3_s.o
libgcc/static/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divxc3_s.o
libgcc/static/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divxc3.o
static/libgcc.a: libgcc/static/_divxc3.o
static/libgcc_s.dylib: libgcc/static/_divxc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divxc3_s.o
libgcc/static/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divtc3_s.o
libgcc/static/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divtc3.o
static/libgcc.a: libgcc/static/_divtc3.o
static/libgcc_s.dylib: libgcc/static/_divtc3_s.o
libgcc/static/libgcc.map: libgcc/static/_divtc3_s.o
libgcc/static/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapsi2_s.o
libgcc/static/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapsi2.o
static/libgcc.a: libgcc/static/_bswapsi2.o
static/libgcc_s.dylib: libgcc/static/_bswapsi2_s.o
libgcc/static/libgcc.map: libgcc/static/_bswapsi2_s.o
libgcc/static/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapdi2_s.o
libgcc/static/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_bswapdi2.o
static/libgcc.a: libgcc/static/_bswapdi2.o
static/libgcc_s.dylib: libgcc/static/_bswapdi2_s.o
libgcc/static/libgcc.map: libgcc/static/_bswapdi2_s.o
libgcc/static/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfsi_s.o
libgcc/static/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunssfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfsi.o
static/libgcc.a: libgcc/static/_fixunssfsi.o
static/libgcc_s.dylib: libgcc/static/_fixunssfsi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunssfsi_s.o
libgcc/static/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfsi_s.o
libgcc/static/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsdfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfsi.o
static/libgcc.a: libgcc/static/_fixunsdfsi.o
static/libgcc_s.dylib: libgcc/static/_fixunsdfsi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsdfsi_s.o
libgcc/static/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfsi_s.o
libgcc/static/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsxfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfsi.o
static/libgcc.a: libgcc/static/_fixunsxfsi.o
static/libgcc_s.dylib: libgcc/static/_fixunsxfsi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsxfsi_s.o
libgcc/static/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixsfdi_s.o
libgcc/static/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixsfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixsfdi.o
static/libgcc.a: libgcc/static/_fixsfdi.o
static/libgcc_s.dylib: libgcc/static/_fixsfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixsfdi_s.o
libgcc/static/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfdi_s.o
libgcc/static/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunssfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunssfdi.o
static/libgcc.a: libgcc/static/_fixunssfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunssfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunssfdi_s.o
libgcc/static/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdisf_s.o
libgcc/static/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdisf.o
static/libgcc.a: libgcc/static/_floatdisf.o
static/libgcc_s.dylib: libgcc/static/_floatdisf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatdisf_s.o
libgcc/static/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundisf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundisf_s.o
libgcc/static/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundisf.o
static/libgcc.a: libgcc/static/_floatundisf.o
static/libgcc_s.dylib: libgcc/static/_floatundisf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatundisf_s.o
libgcc/static/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixdfdi_s.o
libgcc/static/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixdfdi.o
static/libgcc.a: libgcc/static/_fixdfdi.o
static/libgcc_s.dylib: libgcc/static/_fixdfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixdfdi_s.o
libgcc/static/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfdi_s.o
libgcc/static/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsdfdi.o
static/libgcc.a: libgcc/static/_fixunsdfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunsdfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsdfdi_s.o
libgcc/static/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdidf_s.o
libgcc/static/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdidf.o
static/libgcc.a: libgcc/static/_floatdidf.o
static/libgcc_s.dylib: libgcc/static/_floatdidf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatdidf_s.o
libgcc/static/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundidf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundidf_s.o
libgcc/static/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundidf.o
static/libgcc.a: libgcc/static/_floatundidf.o
static/libgcc_s.dylib: libgcc/static/_floatundidf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatundidf_s.o
libgcc/static/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixxfdi_s.o
libgcc/static/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixxfdi.o
static/libgcc.a: libgcc/static/_fixxfdi.o
static/libgcc_s.dylib: libgcc/static/_fixxfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixxfdi_s.o
libgcc/static/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfdi_s.o
libgcc/static/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunsxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunsxfdi.o
static/libgcc.a: libgcc/static/_fixunsxfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunsxfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunsxfdi_s.o
libgcc/static/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdixf_s.o
libgcc/static/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatdixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatdixf.o
static/libgcc.a: libgcc/static/_floatdixf.o
static/libgcc_s.dylib: libgcc/static/_floatdixf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatdixf_s.o
libgcc/static/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatundixf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundixf_s.o
libgcc/static/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatundixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatundixf.o
static/libgcc.a: libgcc/static/_floatundixf.o
static/libgcc_s.dylib: libgcc/static/_floatundixf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatundixf_s.o
libgcc/static/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixtfdi_s.o
libgcc/static/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixtfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixtfdi.o
static/libgcc.a: libgcc/static/_fixtfdi.o
static/libgcc_s.dylib: libgcc/static/_fixtfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixtfdi_s.o
libgcc/static/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunstfdi_s.o
libgcc/static/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_fixunstfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_fixunstfdi.o
static/libgcc.a: libgcc/static/_fixunstfdi.o
static/libgcc_s.dylib: libgcc/static/_fixunstfdi_s.o
libgcc/static/libgcc.map: libgcc/static/_fixunstfdi_s.o
libgcc/static/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatditf_s.o
libgcc/static/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatditf.o
static/libgcc.a: libgcc/static/_floatditf.o
static/libgcc_s.dylib: libgcc/static/_floatditf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatditf_s.o
libgcc/static/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -DL_floatunditf -c $(srcdir)/libgcc2.c -o libgcc/static/_floatunditf_s.o
libgcc/static/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_floatunditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_floatunditf.o
static/libgcc.a: libgcc/static/_floatunditf.o
static/libgcc_s.dylib: libgcc/static/_floatunditf_s.o
libgcc/static/libgcc.map: libgcc/static/_floatunditf_s.o
libgcc/static/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_eprintf.o
static/libgcc.a: libgcc/static/_eprintf.o
libgcc/static/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/__gcc_bcmp.o
static/libgcc.a: libgcc/static/__gcc_bcmp.o
libgcc/static/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_divdi3_s.o
libgcc/static/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_divdi3.o
static/libgcc.a: libgcc/static/_divdi3.o
static/libgcc_s.dylib: libgcc/static/_divdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_divdi3_s.o
libgcc/static/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_moddi3_s.o
libgcc/static/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_moddi3.o
static/libgcc.a: libgcc/static/_moddi3.o
static/libgcc_s.dylib: libgcc/static/_moddi3_s.o
libgcc/static/libgcc.map: libgcc/static/_moddi3_s.o
libgcc/static/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_udivdi3_s.o
libgcc/static/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_udivdi3.o
static/libgcc.a: libgcc/static/_udivdi3.o
static/libgcc_s.dylib: libgcc/static/_udivdi3_s.o
libgcc/static/libgcc.map: libgcc/static/_udivdi3_s.o
libgcc/static/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/static/_umoddi3_s.o
libgcc/static/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_umoddi3.o
static/libgcc.a: libgcc/static/_umoddi3.o
static/libgcc_s.dylib: libgcc/static/_umoddi3_s.o
libgcc/static/libgcc.map: libgcc/static/_umoddi3_s.o
libgcc/static/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/static/_udiv_w_sdiv_s.o
libgcc/static/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_udiv_w_sdiv.o
static/libgcc.a: libgcc/static/_udiv_w_sdiv.o
static/libgcc_s.dylib: libgcc/static/_udiv_w_sdiv_s.o
libgcc/static/libgcc.map: libgcc/static/_udiv_w_sdiv_s.o
libgcc/static/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/static/_udivmoddi4_s.o
libgcc/static/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -static -fno-pic -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/static/_udivmoddi4.o
static/libgcc.a: libgcc/static/_udivmoddi4.o
static/libgcc_s.dylib: libgcc/static/_udivmoddi4_s.o
libgcc/static/libgcc.map: libgcc/static/_udivmoddi4_s.o
libgcc/static/darwin-tramp_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/static/darwin-tramp_s.o
libgcc/static/darwin-tramp.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/static/darwin-tramp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -xassembler-with-cpp -include libgcc/static/darwin-tramp.vis -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/static/darwin-tramp.o
libgcc/static/darwin-tramp.vis: libgcc/static/darwin-tramp_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/darwin-tramp.o
static/libgcc_s.dylib: libgcc/static/darwin-tramp_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-tramp_s.o
libgcc/static/darwin-fpsave_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/static/darwin-fpsave_s.o
libgcc/static/darwin-fpsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/static/darwin-fpsave.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -xassembler-with-cpp -include libgcc/static/darwin-fpsave.vis -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/static/darwin-fpsave.o
libgcc/static/darwin-fpsave.vis: libgcc/static/darwin-fpsave_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/darwin-fpsave.o
static/libgcc_s.dylib: libgcc/static/darwin-fpsave_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-fpsave_s.o
libgcc/static/ppc64-fp_s.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/static/ppc64-fp_s.o
libgcc/static/ppc64-fp.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic $(vis_hide) -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/static/ppc64-fp.o
static/libgcc.a: libgcc/static/ppc64-fp.o
static/libgcc_s.dylib: libgcc/static/ppc64-fp_s.o
libgcc/static/libgcc.map: libgcc/static/ppc64-fp_s.o
libgcc/static/darwin-64_s.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -c ../../gcc/config/darwin-64.c -o libgcc/static/darwin-64_s.o
libgcc/static/darwin-64.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic $(vis_hide) -c ../../gcc/config/darwin-64.c -o libgcc/static/darwin-64.o
static/libgcc.a: libgcc/static/darwin-64.o
static/libgcc_s.dylib: libgcc/static/darwin-64_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-64_s.o
libgcc/static/darwin-ldouble_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/static/darwin-ldouble_s.o
libgcc/static/darwin-ldouble.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic $(vis_hide) -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/static/darwin-ldouble.o
static/libgcc.a: libgcc/static/darwin-ldouble.o
static/libgcc_s.dylib: libgcc/static/darwin-ldouble_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-ldouble_s.o
libgcc/static/darwin-world_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/static/darwin-world_s.o
libgcc/static/darwin-world.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/static/darwin-world.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -xassembler-with-cpp -include libgcc/static/darwin-world.vis -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/static/darwin-world.o
libgcc/static/darwin-world.vis: libgcc/static/darwin-world_s.o; $(gen-hide-list)
static/libgcc.a: libgcc/static/darwin-world.o
static/libgcc_s.dylib: libgcc/static/darwin-world_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-world_s.o
libgcc/static/darwin-vecsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-vecsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-vecsave.asm -o libgcc/static/darwin-vecsave.o
static/libgcc.a: libgcc/static/darwin-vecsave.o
libgcc/static/unwind-dw2.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2.c -o libgcc/static/unwind-dw2.o
static/libgcc_eh.a: libgcc/static/unwind-dw2.o
libgcc/static/unwind-dw2-fde-darwin.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/static/unwind-dw2-fde-darwin.o
static/libgcc_eh.a: libgcc/static/unwind-dw2-fde-darwin.o
libgcc/static/unwind-sjlj.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c ../../gcc/unwind-sjlj.c -o libgcc/static/unwind-sjlj.o
static/libgcc_eh.a: libgcc/static/unwind-sjlj.o
libgcc/static/unwind-c.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c ../../gcc/unwind-c.c -o libgcc/static/unwind-c.o
static/libgcc_eh.a: libgcc/static/unwind-c.o
libgcc/static/darwin-fallback.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -static -fno-pic -fexceptions $(vis_hide) -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/static/darwin-fallback.o
static/libgcc_eh.a: libgcc/static/darwin-fallback.o
libgcc/static/unwind-dw2_s.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c ../../gcc/unwind-dw2.c -o libgcc/static/unwind-dw2_s.o
static/libgcc_s.dylib: libgcc/static/unwind-dw2_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-dw2_s.o
libgcc/static/unwind-dw2-fde-darwin_s.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/static/unwind-dw2-fde-darwin_s.o
static/libgcc_s.dylib: libgcc/static/unwind-dw2-fde-darwin_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-dw2-fde-darwin_s.o
libgcc/static/unwind-sjlj_s.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c ../../gcc/unwind-sjlj.c -o libgcc/static/unwind-sjlj_s.o
static/libgcc_s.dylib: libgcc/static/unwind-sjlj_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-sjlj_s.o
libgcc/static/unwind-c_s.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c ../../gcc/unwind-c.c -o libgcc/static/unwind-c_s.o
static/libgcc_s.dylib: libgcc/static/unwind-c_s.o
libgcc/static/libgcc.map: libgcc/static/unwind-c_s.o
libgcc/static/darwin-fallback_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -static -fno-pic -fexceptions -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/static/darwin-fallback_s.o
static/libgcc_s.dylib: libgcc/static/darwin-fallback_s.o
libgcc/static/libgcc.map: libgcc/static/darwin-fallback_s.o
libgcc/static/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/static/_gcov.o
static/libgcov.a: libgcc/static/_gcov.o
libgcc/static/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_merge_add.o
static/libgcov.a: libgcc/static/_gcov_merge_add.o
libgcc/static/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_merge_single.o
static/libgcov.a: libgcc/static/_gcov_merge_single.o
libgcc/static/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_merge_delta.o
static/libgcov.a: libgcc/static/_gcov_merge_delta.o
libgcc/static/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_fork.o
static/libgcov.a: libgcc/static/_gcov_fork.o
libgcc/static/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execl.o
static/libgcov.a: libgcc/static/_gcov_execl.o
libgcc/static/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execlp.o
static/libgcov.a: libgcc/static/_gcov_execlp.o
libgcc/static/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execle.o
static/libgcov.a: libgcc/static/_gcov_execle.o
libgcc/static/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execv.o
static/libgcov.a: libgcc/static/_gcov_execv.o
libgcc/static/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execvp.o
static/libgcov.a: libgcc/static/_gcov_execvp.o
libgcc/static/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_execve.o
static/libgcov.a: libgcc/static/_gcov_execve.o
libgcc/static/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_interval_profiler.o
static/libgcov.a: libgcc/static/_gcov_interval_profiler.o
libgcc/static/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_pow2_profiler.o
static/libgcov.a: libgcc/static/_gcov_pow2_profiler.o
libgcc/static/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/static/_gcov_one_value_profiler.o
static/libgcov.a: libgcc/static/_gcov_one_value_profiler.o

extrastatic: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -static -fno-pic "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -static -fno-pic" T=static/ static/crt3.o
all: extrastatic
static/libgcc_s.dylib: extrastatic

libgcc/static/libgcc.map: ../../gcc/mkmap-flat.awk ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -static -fno-pic -E -xassembler-with-cpp -; \
	} | $(AWK) -f ../../gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/static/tmp-libgcc.map
	mv 'libgcc/static/tmp-libgcc.map' $@
static/libgcc_s.dylib: libgcc/static/libgcc.map

static/libgcc.a: stmp-dirs
	-rm -f static/libgcc.a
	$(AR_CREATE_FOR_TARGET) static/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) static/libgcc.a
all: static/libgcc.a

static/libgcov.a: stmp-dirs
	-rm -f static/libgcov.a
	$(AR_CREATE_FOR_TARGET) static/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) static/libgcov.a
all: static/libgcov.a

static/libgcc_eh.a: stmp-dirs
	-rm -f static/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) static/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) static/libgcc_eh.a
all: static/libgcc_eh.a

#
# ml: kext;@Dmalloc=kern_os_malloc@Dfree=kern_os_free@DLIBCC_KEXT@static@fno-pic@fno-exceptions@fno-non-call-exceptions
# dir: kext
# flags: -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions
# libgcc_a: kext/libgcc.a
# libgcov_a: kext/libgcov.a
# libgcc_eh_a: kext/libgcc_eh.a
# libunwind_a:
#
# shlib_slibdir_qual:
# libgcc_s_so: kext/libgcc_s.dylib
# libunwind_so:
#

dirs += kext libgcc/kext

libgcc/kext/_muldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldi3_s.o
libgcc/kext/_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldi3.o
kext/libgcc.a: libgcc/kext/_muldi3.o
kext/libgcc_s.dylib: libgcc/kext/_muldi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_muldi3_s.o
libgcc/kext/_negdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_negdi2_s.o
libgcc/kext/_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_negdi2.o
kext/libgcc.a: libgcc/kext/_negdi2.o
kext/libgcc_s.dylib: libgcc/kext/_negdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_negdi2_s.o
libgcc/kext/_lshrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_lshrdi3_s.o
libgcc/kext/_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_lshrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_lshrdi3.o
kext/libgcc.a: libgcc/kext/_lshrdi3.o
kext/libgcc_s.dylib: libgcc/kext/_lshrdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_lshrdi3_s.o
libgcc/kext/_ashldi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashldi3_s.o
libgcc/kext/_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashldi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashldi3.o
kext/libgcc.a: libgcc/kext/_ashldi3.o
kext/libgcc_s.dylib: libgcc/kext/_ashldi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ashldi3_s.o
libgcc/kext/_ashrdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashrdi3_s.o
libgcc/kext/_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ashrdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ashrdi3.o
kext/libgcc.a: libgcc/kext/_ashrdi3.o
kext/libgcc_s.dylib: libgcc/kext/_ashrdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ashrdi3_s.o
libgcc/kext/_cmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_cmpdi2_s.o
libgcc/kext/_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_cmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_cmpdi2.o
kext/libgcc.a: libgcc/kext/_cmpdi2.o
kext/libgcc_s.dylib: libgcc/kext/_cmpdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_cmpdi2_s.o
libgcc/kext/_ucmpdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ucmpdi2_s.o
libgcc/kext/_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ucmpdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ucmpdi2.o
kext/libgcc.a: libgcc/kext/_ucmpdi2.o
kext/libgcc_s.dylib: libgcc/kext/_ucmpdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ucmpdi2_s.o
libgcc/kext/_clear_cache_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/kext/_clear_cache_s.o
libgcc/kext/_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clear_cache $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clear_cache.o
kext/libgcc.a: libgcc/kext/_clear_cache.o
kext/libgcc_s.dylib: libgcc/kext/_clear_cache_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clear_cache_s.o
libgcc/kext/_enable_execute_stack_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/kext/_enable_execute_stack_s.o
libgcc/kext/_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_enable_execute_stack $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_enable_execute_stack.o
kext/libgcc.a: libgcc/kext/_enable_execute_stack.o
kext/libgcc_s.dylib: libgcc/kext/_enable_execute_stack_s.o
libgcc/kext/libgcc.map: libgcc/kext/_enable_execute_stack_s.o
libgcc/kext/_trampoline_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/kext/_trampoline_s.o
libgcc/kext/_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_trampoline $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_trampoline.o
kext/libgcc.a: libgcc/kext/_trampoline.o
kext/libgcc_s.dylib: libgcc/kext/_trampoline_s.o
libgcc/kext/libgcc.map: libgcc/kext/_trampoline_s.o
libgcc/kext/__main_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL__main -c $(srcdir)/libgcc2.c -o libgcc/kext/__main_s.o
libgcc/kext/__main.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL__main $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/__main.o
kext/libgcc.a: libgcc/kext/__main.o
kext/libgcc_s.dylib: libgcc/kext/__main_s.o
libgcc/kext/libgcc.map: libgcc/kext/__main_s.o
libgcc/kext/_absvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvsi2_s.o
libgcc/kext/_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvsi2.o
kext/libgcc.a: libgcc/kext/_absvsi2.o
kext/libgcc_s.dylib: libgcc/kext/_absvsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_absvsi2_s.o
libgcc/kext/_absvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvdi2_s.o
libgcc/kext/_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_absvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_absvdi2.o
kext/libgcc.a: libgcc/kext/_absvdi2.o
kext/libgcc_s.dylib: libgcc/kext/_absvdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_absvdi2_s.o
libgcc/kext/_addvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvsi3_s.o
libgcc/kext/_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvsi3.o
kext/libgcc.a: libgcc/kext/_addvsi3.o
kext/libgcc_s.dylib: libgcc/kext/_addvsi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_addvsi3_s.o
libgcc/kext/_addvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvdi3_s.o
libgcc/kext/_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_addvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_addvdi3.o
kext/libgcc.a: libgcc/kext/_addvdi3.o
kext/libgcc_s.dylib: libgcc/kext/_addvdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_addvdi3_s.o
libgcc/kext/_subvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvsi3_s.o
libgcc/kext/_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvsi3.o
kext/libgcc.a: libgcc/kext/_subvsi3.o
kext/libgcc_s.dylib: libgcc/kext/_subvsi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_subvsi3_s.o
libgcc/kext/_subvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvdi3_s.o
libgcc/kext/_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_subvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_subvdi3.o
kext/libgcc.a: libgcc/kext/_subvdi3.o
kext/libgcc_s.dylib: libgcc/kext/_subvdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_subvdi3_s.o
libgcc/kext/_mulvsi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvsi3_s.o
libgcc/kext/_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvsi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvsi3.o
kext/libgcc.a: libgcc/kext/_mulvsi3.o
kext/libgcc_s.dylib: libgcc/kext/_mulvsi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulvsi3_s.o
libgcc/kext/_mulvdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvdi3_s.o
libgcc/kext/_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulvdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulvdi3.o
kext/libgcc.a: libgcc/kext/_mulvdi3.o
kext/libgcc_s.dylib: libgcc/kext/_mulvdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulvdi3_s.o
libgcc/kext/_negvsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvsi2_s.o
libgcc/kext/_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvsi2.o
kext/libgcc.a: libgcc/kext/_negvsi2.o
kext/libgcc_s.dylib: libgcc/kext/_negvsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_negvsi2_s.o
libgcc/kext/_negvdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvdi2_s.o
libgcc/kext/_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_negvdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_negvdi2.o
kext/libgcc.a: libgcc/kext/_negvdi2.o
kext/libgcc_s.dylib: libgcc/kext/_negvdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_negvdi2_s.o
libgcc/kext/_ctors_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctors_s.o
libgcc/kext/_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctors $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctors.o
kext/libgcc.a: libgcc/kext/_ctors.o
kext/libgcc_s.dylib: libgcc/kext/_ctors_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ctors_s.o
libgcc/kext/_ffssi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffssi2_s.o
libgcc/kext/_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffssi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffssi2.o
kext/libgcc.a: libgcc/kext/_ffssi2.o
kext/libgcc_s.dylib: libgcc/kext/_ffssi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ffssi2_s.o
libgcc/kext/_ffsdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffsdi2_s.o
libgcc/kext/_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ffsdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ffsdi2.o
kext/libgcc.a: libgcc/kext/_ffsdi2.o
kext/libgcc_s.dylib: libgcc/kext/_ffsdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ffsdi2_s.o
libgcc/kext/_clz_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/kext/_clz_s.o
libgcc/kext/_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clz $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clz.o
kext/libgcc.a: libgcc/kext/_clz.o
kext/libgcc_s.dylib: libgcc/kext/_clz_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clz_s.o
libgcc/kext/_clzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzsi2_s.o
libgcc/kext/_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzsi2.o
kext/libgcc.a: libgcc/kext/_clzsi2.o
kext/libgcc_s.dylib: libgcc/kext/_clzsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clzsi2_s.o
libgcc/kext/_clzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzdi2_s.o
libgcc/kext/_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_clzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_clzdi2.o
kext/libgcc.a: libgcc/kext/_clzdi2.o
kext/libgcc_s.dylib: libgcc/kext/_clzdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_clzdi2_s.o
libgcc/kext/_ctzsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzsi2_s.o
libgcc/kext/_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzsi2.o
kext/libgcc.a: libgcc/kext/_ctzsi2.o
kext/libgcc_s.dylib: libgcc/kext/_ctzsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ctzsi2_s.o
libgcc/kext/_ctzdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzdi2_s.o
libgcc/kext/_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_ctzdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_ctzdi2.o
kext/libgcc.a: libgcc/kext/_ctzdi2.o
kext/libgcc_s.dylib: libgcc/kext/_ctzdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_ctzdi2_s.o
libgcc/kext/_popcount_tab_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcount_tab_s.o
libgcc/kext/_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcount_tab $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcount_tab.o
kext/libgcc.a: libgcc/kext/_popcount_tab.o
kext/libgcc_s.dylib: libgcc/kext/_popcount_tab_s.o
libgcc/kext/libgcc.map: libgcc/kext/_popcount_tab_s.o
libgcc/kext/_popcountsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountsi2_s.o
libgcc/kext/_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountsi2.o
kext/libgcc.a: libgcc/kext/_popcountsi2.o
kext/libgcc_s.dylib: libgcc/kext/_popcountsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_popcountsi2_s.o
libgcc/kext/_popcountdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountdi2_s.o
libgcc/kext/_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_popcountdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_popcountdi2.o
kext/libgcc.a: libgcc/kext/_popcountdi2.o
kext/libgcc_s.dylib: libgcc/kext/_popcountdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_popcountdi2_s.o
libgcc/kext/_paritysi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritysi2_s.o
libgcc/kext/_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritysi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritysi2.o
kext/libgcc.a: libgcc/kext/_paritysi2.o
kext/libgcc_s.dylib: libgcc/kext/_paritysi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_paritysi2_s.o
libgcc/kext/_paritydi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritydi2_s.o
libgcc/kext/_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_paritydi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_paritydi2.o
kext/libgcc.a: libgcc/kext/_paritydi2.o
kext/libgcc_s.dylib: libgcc/kext/_paritydi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_paritydi2_s.o
libgcc/kext/_powisf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powisf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powisf2_s.o
libgcc/kext/_powisf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powisf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powisf2.o
kext/libgcc.a: libgcc/kext/_powisf2.o
kext/libgcc_s.dylib: libgcc/kext/_powisf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powisf2_s.o
libgcc/kext/_powidf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powidf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powidf2_s.o
libgcc/kext/_powidf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powidf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powidf2.o
kext/libgcc.a: libgcc/kext/_powidf2.o
kext/libgcc_s.dylib: libgcc/kext/_powidf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powidf2_s.o
libgcc/kext/_powixf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powixf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powixf2_s.o
libgcc/kext/_powixf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powixf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powixf2.o
kext/libgcc.a: libgcc/kext/_powixf2.o
kext/libgcc_s.dylib: libgcc/kext/_powixf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powixf2_s.o
libgcc/kext/_powitf2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powitf2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_powitf2_s.o
libgcc/kext/_powitf2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_powitf2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_powitf2.o
kext/libgcc.a: libgcc/kext/_powitf2.o
kext/libgcc_s.dylib: libgcc/kext/_powitf2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_powitf2_s.o
libgcc/kext/_mulsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulsc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulsc3_s.o
libgcc/kext/_mulsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulsc3.o
kext/libgcc.a: libgcc/kext/_mulsc3.o
kext/libgcc_s.dylib: libgcc/kext/_mulsc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulsc3_s.o
libgcc/kext/_muldc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldc3_s.o
libgcc/kext/_muldc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_muldc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_muldc3.o
kext/libgcc.a: libgcc/kext/_muldc3.o
kext/libgcc_s.dylib: libgcc/kext/_muldc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_muldc3_s.o
libgcc/kext/_mulxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulxc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulxc3_s.o
libgcc/kext/_mulxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_mulxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_mulxc3.o
kext/libgcc.a: libgcc/kext/_mulxc3.o
kext/libgcc_s.dylib: libgcc/kext/_mulxc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_mulxc3_s.o
libgcc/kext/_multc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_multc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_multc3_s.o
libgcc/kext/_multc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_multc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_multc3.o
kext/libgcc.a: libgcc/kext/_multc3.o
kext/libgcc_s.dylib: libgcc/kext/_multc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_multc3_s.o
libgcc/kext/_divsc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divsc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divsc3_s.o
libgcc/kext/_divsc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divsc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divsc3.o
kext/libgcc.a: libgcc/kext/_divsc3.o
kext/libgcc_s.dylib: libgcc/kext/_divsc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divsc3_s.o
libgcc/kext/_divdc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdc3_s.o
libgcc/kext/_divdc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdc3.o
kext/libgcc.a: libgcc/kext/_divdc3.o
kext/libgcc_s.dylib: libgcc/kext/_divdc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divdc3_s.o
libgcc/kext/_divxc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divxc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divxc3_s.o
libgcc/kext/_divxc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divxc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divxc3.o
kext/libgcc.a: libgcc/kext/_divxc3.o
kext/libgcc_s.dylib: libgcc/kext/_divxc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divxc3_s.o
libgcc/kext/_divtc3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divtc3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divtc3_s.o
libgcc/kext/_divtc3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divtc3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divtc3.o
kext/libgcc.a: libgcc/kext/_divtc3.o
kext/libgcc_s.dylib: libgcc/kext/_divtc3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divtc3_s.o
libgcc/kext/_bswapsi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapsi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapsi2_s.o
libgcc/kext/_bswapsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapsi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapsi2.o
kext/libgcc.a: libgcc/kext/_bswapsi2.o
kext/libgcc_s.dylib: libgcc/kext/_bswapsi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_bswapsi2_s.o
libgcc/kext/_bswapdi2_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapdi2 -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapdi2_s.o
libgcc/kext/_bswapdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_bswapdi2 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_bswapdi2.o
kext/libgcc.a: libgcc/kext/_bswapdi2.o
kext/libgcc_s.dylib: libgcc/kext/_bswapdi2_s.o
libgcc/kext/libgcc.map: libgcc/kext/_bswapdi2_s.o
libgcc/kext/_fixunssfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfsi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfsi_s.o
libgcc/kext/_fixunssfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfsi.o
kext/libgcc.a: libgcc/kext/_fixunssfsi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunssfsi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunssfsi_s.o
libgcc/kext/_fixunsdfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfsi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfsi_s.o
libgcc/kext/_fixunsdfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfsi.o
kext/libgcc.a: libgcc/kext/_fixunsdfsi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsdfsi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsdfsi_s.o
libgcc/kext/_fixunsxfsi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfsi_s.o
libgcc/kext/_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfsi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfsi.o
kext/libgcc.a: libgcc/kext/_fixunsxfsi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsxfsi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsxfsi_s.o
libgcc/kext/_fixsfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixsfdi_s.o
libgcc/kext/_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixsfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixsfdi.o
kext/libgcc.a: libgcc/kext/_fixsfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixsfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixsfdi_s.o
libgcc/kext/_fixunssfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfdi_s.o
libgcc/kext/_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunssfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunssfdi.o
kext/libgcc.a: libgcc/kext/_fixunssfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunssfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunssfdi_s.o
libgcc/kext/_floatdisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdisf_s.o
libgcc/kext/_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdisf.o
kext/libgcc.a: libgcc/kext/_floatdisf.o
kext/libgcc_s.dylib: libgcc/kext/_floatdisf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatdisf_s.o
libgcc/kext/_floatundisf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundisf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundisf_s.o
libgcc/kext/_floatundisf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundisf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundisf.o
kext/libgcc.a: libgcc/kext/_floatundisf.o
kext/libgcc_s.dylib: libgcc/kext/_floatundisf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatundisf_s.o
libgcc/kext/_fixdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixdfdi_s.o
libgcc/kext/_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixdfdi.o
kext/libgcc.a: libgcc/kext/_fixdfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixdfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixdfdi_s.o
libgcc/kext/_fixunsdfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfdi_s.o
libgcc/kext/_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsdfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsdfdi.o
kext/libgcc.a: libgcc/kext/_fixunsdfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsdfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsdfdi_s.o
libgcc/kext/_floatdidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdidf_s.o
libgcc/kext/_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdidf.o
kext/libgcc.a: libgcc/kext/_floatdidf.o
kext/libgcc_s.dylib: libgcc/kext/_floatdidf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatdidf_s.o
libgcc/kext/_floatundidf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundidf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundidf_s.o
libgcc/kext/_floatundidf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundidf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundidf.o
kext/libgcc.a: libgcc/kext/_floatundidf.o
kext/libgcc_s.dylib: libgcc/kext/_floatundidf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatundidf_s.o
libgcc/kext/_fixxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixxfdi_s.o
libgcc/kext/_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixxfdi.o
kext/libgcc.a: libgcc/kext/_fixxfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixxfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixxfdi_s.o
libgcc/kext/_fixunsxfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfdi_s.o
libgcc/kext/_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunsxfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunsxfdi.o
kext/libgcc.a: libgcc/kext/_fixunsxfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunsxfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunsxfdi_s.o
libgcc/kext/_floatdixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdixf_s.o
libgcc/kext/_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatdixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatdixf.o
kext/libgcc.a: libgcc/kext/_floatdixf.o
kext/libgcc_s.dylib: libgcc/kext/_floatdixf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatdixf_s.o
libgcc/kext/_floatundixf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundixf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundixf_s.o
libgcc/kext/_floatundixf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatundixf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatundixf.o
kext/libgcc.a: libgcc/kext/_floatundixf.o
kext/libgcc_s.dylib: libgcc/kext/_floatundixf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatundixf_s.o
libgcc/kext/_fixtfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixtfdi_s.o
libgcc/kext/_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixtfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixtfdi.o
kext/libgcc.a: libgcc/kext/_fixtfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixtfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixtfdi_s.o
libgcc/kext/_fixunstfdi_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunstfdi_s.o
libgcc/kext/_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_fixunstfdi $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_fixunstfdi.o
kext/libgcc.a: libgcc/kext/_fixunstfdi.o
kext/libgcc_s.dylib: libgcc/kext/_fixunstfdi_s.o
libgcc/kext/libgcc.map: libgcc/kext/_fixunstfdi_s.o
libgcc/kext/_floatditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatditf_s.o
libgcc/kext/_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatditf.o
kext/libgcc.a: libgcc/kext/_floatditf.o
kext/libgcc_s.dylib: libgcc/kext/_floatditf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatditf_s.o
libgcc/kext/_floatunditf_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatunditf -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatunditf_s.o
libgcc/kext/_floatunditf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_floatunditf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_floatunditf.o
kext/libgcc.a: libgcc/kext/_floatunditf.o
kext/libgcc_s.dylib: libgcc/kext/_floatunditf_s.o
libgcc/kext/libgcc.map: libgcc/kext/_floatunditf_s.o
libgcc/kext/_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_eprintf $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_eprintf.o
kext/libgcc.a: libgcc/kext/_eprintf.o
libgcc/kext/__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL__gcc_bcmp $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/__gcc_bcmp.o
kext/libgcc.a: libgcc/kext/__gcc_bcmp.o
libgcc/kext/_divdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdi3_s.o
libgcc/kext/_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_divdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_divdi3.o
kext/libgcc.a: libgcc/kext/_divdi3.o
kext/libgcc_s.dylib: libgcc/kext/_divdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_divdi3_s.o
libgcc/kext/_moddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_moddi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_moddi3_s.o
libgcc/kext/_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_moddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_moddi3.o
kext/libgcc.a: libgcc/kext/_moddi3.o
kext/libgcc_s.dylib: libgcc/kext/_moddi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_moddi3_s.o
libgcc/kext/_udivdi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivdi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivdi3_s.o
libgcc/kext/_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivdi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivdi3.o
kext/libgcc.a: libgcc/kext/_udivdi3.o
kext/libgcc_s.dylib: libgcc/kext/_udivdi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_udivdi3_s.o
libgcc/kext/_umoddi3_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_umoddi3 -c $(srcdir)/libgcc2.c -o libgcc/kext/_umoddi3_s.o
libgcc/kext/_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_umoddi3 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_umoddi3.o
kext/libgcc.a: libgcc/kext/_umoddi3.o
kext/libgcc_s.dylib: libgcc/kext/_umoddi3_s.o
libgcc/kext/libgcc.map: libgcc/kext/_umoddi3_s.o
libgcc/kext/_udiv_w_sdiv_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -o libgcc/kext/_udiv_w_sdiv_s.o
libgcc/kext/_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udiv_w_sdiv $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_udiv_w_sdiv.o
kext/libgcc.a: libgcc/kext/_udiv_w_sdiv.o
kext/libgcc_s.dylib: libgcc/kext/_udiv_w_sdiv_s.o
libgcc/kext/libgcc.map: libgcc/kext/_udiv_w_sdiv_s.o
libgcc/kext/_udivmoddi4_s.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivmoddi4_s.o
libgcc/kext/_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(srcdir)/libgcc2.h gbl-ctors.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -fnon-call-exceptions -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_udivmoddi4 $(vis_hide) -c $(srcdir)/libgcc2.c -o libgcc/kext/_udivmoddi4.o
kext/libgcc.a: libgcc/kext/_udivmoddi4.o
kext/libgcc_s.dylib: libgcc/kext/_udivmoddi4_s.o
libgcc/kext/libgcc.map: libgcc/kext/_udivmoddi4_s.o
libgcc/kext/darwin-tramp_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/kext/darwin-tramp_s.o
libgcc/kext/darwin-tramp.o: stmp-dirs ../../gcc/config/rs6000/darwin-tramp.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/kext/darwin-tramp.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -include libgcc/kext/darwin-tramp.vis -c ../../gcc/config/rs6000/darwin-tramp.asm -o libgcc/kext/darwin-tramp.o
libgcc/kext/darwin-tramp.vis: libgcc/kext/darwin-tramp_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/darwin-tramp.o
kext/libgcc_s.dylib: libgcc/kext/darwin-tramp_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-tramp_s.o
libgcc/kext/darwin-fpsave_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/kext/darwin-fpsave_s.o
libgcc/kext/darwin-fpsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-fpsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/kext/darwin-fpsave.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -include libgcc/kext/darwin-fpsave.vis -c ../../gcc/config/rs6000/darwin-fpsave.asm -o libgcc/kext/darwin-fpsave.o
libgcc/kext/darwin-fpsave.vis: libgcc/kext/darwin-fpsave_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/darwin-fpsave.o
kext/libgcc_s.dylib: libgcc/kext/darwin-fpsave_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-fpsave_s.o
libgcc/kext/ppc64-fp_s.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/kext/ppc64-fp_s.o
libgcc/kext/ppc64-fp.o: stmp-dirs ../../gcc/config/rs6000/ppc64-fp.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions $(vis_hide) -c ../../gcc/config/rs6000/ppc64-fp.c -o libgcc/kext/ppc64-fp.o
kext/libgcc.a: libgcc/kext/ppc64-fp.o
kext/libgcc_s.dylib: libgcc/kext/ppc64-fp_s.o
libgcc/kext/libgcc.map: libgcc/kext/ppc64-fp_s.o
libgcc/kext/darwin-64_s.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -c ../../gcc/config/darwin-64.c -o libgcc/kext/darwin-64_s.o
libgcc/kext/darwin-64.o: stmp-dirs ../../gcc/config/darwin-64.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions $(vis_hide) -c ../../gcc/config/darwin-64.c -o libgcc/kext/darwin-64.o
kext/libgcc.a: libgcc/kext/darwin-64.o
kext/libgcc_s.dylib: libgcc/kext/darwin-64_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-64_s.o
libgcc/kext/darwin-ldouble_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/kext/darwin-ldouble_s.o
libgcc/kext/darwin-ldouble.o: stmp-dirs ../../gcc/config/rs6000/darwin-ldouble.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions $(vis_hide) -c ../../gcc/config/rs6000/darwin-ldouble.c -o libgcc/kext/darwin-ldouble.o
kext/libgcc.a: libgcc/kext/darwin-ldouble.o
kext/libgcc_s.dylib: libgcc/kext/darwin-ldouble_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-ldouble_s.o
libgcc/kext/darwin-world_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/kext/darwin-world_s.o
libgcc/kext/darwin-world.o: stmp-dirs ../../gcc/config/rs6000/darwin-world.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h libgcc/kext/darwin-world.vis
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -include libgcc/kext/darwin-world.vis -c ../../gcc/config/rs6000/darwin-world.asm -o libgcc/kext/darwin-world.o
libgcc/kext/darwin-world.vis: libgcc/kext/darwin-world_s.o; $(gen-hide-list)
kext/libgcc.a: libgcc/kext/darwin-world.o
kext/libgcc_s.dylib: libgcc/kext/darwin-world_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-world_s.o
libgcc/kext/darwin-vecsave.o: stmp-dirs ../../gcc/config/rs6000/darwin-vecsave.asm $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -xassembler-with-cpp -c ../../gcc/config/rs6000/darwin-vecsave.asm -o libgcc/kext/darwin-vecsave.o
kext/libgcc.a: libgcc/kext/darwin-vecsave.o
libgcc/kext/unwind-dw2.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2.c -o libgcc/kext/unwind-dw2.o
kext/libgcc_eh.a: libgcc/kext/unwind-dw2.o
libgcc/kext/unwind-dw2-fde-darwin.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/kext/unwind-dw2-fde-darwin.o
kext/libgcc_eh.a: libgcc/kext/unwind-dw2-fde-darwin.o
libgcc/kext/unwind-sjlj.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c ../../gcc/unwind-sjlj.c -o libgcc/kext/unwind-sjlj.o
kext/libgcc_eh.a: libgcc/kext/unwind-sjlj.o
libgcc/kext/unwind-c.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c ../../gcc/unwind-c.c -o libgcc/kext/unwind-c.o
kext/libgcc_eh.a: libgcc/kext/unwind-c.o
libgcc/kext/darwin-fallback.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions $(vis_hide) -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/kext/darwin-fallback.o
kext/libgcc_eh.a: libgcc/kext/darwin-fallback.o
libgcc/kext/unwind-dw2_s.o: stmp-dirs ../../gcc/unwind-dw2.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c ../../gcc/unwind-dw2.c -o libgcc/kext/unwind-dw2_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-dw2_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-dw2_s.o
libgcc/kext/unwind-dw2-fde-darwin_s.o: stmp-dirs ../../gcc/unwind-dw2-fde-darwin.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c ../../gcc/unwind-dw2-fde-darwin.c -o libgcc/kext/unwind-dw2-fde-darwin_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-dw2-fde-darwin_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-dw2-fde-darwin_s.o
libgcc/kext/unwind-sjlj_s.o: stmp-dirs ../../gcc/unwind-sjlj.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c ../../gcc/unwind-sjlj.c -o libgcc/kext/unwind-sjlj_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-sjlj_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-sjlj_s.o
libgcc/kext/unwind-c_s.o: stmp-dirs ../../gcc/unwind-c.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c ../../gcc/unwind-c.c -o libgcc/kext/unwind-c_s.o
kext/libgcc_s.dylib: libgcc/kext/unwind-c_s.o
libgcc/kext/libgcc.map: libgcc/kext/unwind-c_s.o
libgcc/kext/darwin-fallback_s.o: stmp-dirs ../../gcc/config/rs6000/darwin-fallback.c unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DSHARED -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -fexceptions -c ../../gcc/config/rs6000/darwin-fallback.c -o libgcc/kext/darwin-fallback_s.o
kext/libgcc_s.dylib: libgcc/kext/darwin-fallback_s.o
libgcc/kext/libgcc.map: libgcc/kext/darwin-fallback_s.o
libgcc/kext/_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov.o
kext/libgcov.a: libgcc/kext/_gcov.o
libgcc/kext/_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_merge_add.o
kext/libgcov.a: libgcc/kext/_gcov_merge_add.o
libgcc/kext/_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_merge_single.o
kext/libgcov.a: libgcc/kext/_gcov_merge_single.o
libgcc/kext/_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_merge_delta.o
kext/libgcov.a: libgcc/kext/_gcov_merge_delta.o
libgcc/kext/_gcov_fork.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_fork -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_fork.o
kext/libgcov.a: libgcc/kext/_gcov_fork.o
libgcc/kext/_gcov_execl.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execl -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execl.o
kext/libgcov.a: libgcc/kext/_gcov_execl.o
libgcc/kext/_gcov_execlp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execlp -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execlp.o
kext/libgcov.a: libgcc/kext/_gcov_execlp.o
libgcc/kext/_gcov_execle.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execle -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execle.o
kext/libgcov.a: libgcc/kext/_gcov_execle.o
libgcc/kext/_gcov_execv.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execv -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execv.o
kext/libgcov.a: libgcc/kext/_gcov_execv.o
libgcc/kext/_gcov_execvp.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execvp -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execvp.o
kext/libgcov.a: libgcc/kext/_gcov_execvp.o
libgcc/kext/_gcov_execve.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_execve -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_execve.o
kext/libgcov.a: libgcc/kext/_gcov_execve.o
libgcc/kext/_gcov_interval_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_interval_profiler -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_interval_profiler.o
kext/libgcov.a: libgcc/kext/_gcov_interval_profiler.o
libgcc/kext/_gcov_pow2_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_pow2_profiler -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_pow2_profiler.o
kext/libgcov.a: libgcc/kext/_gcov_pow2_profiler.o
libgcc/kext/_gcov_one_value_profiler.o: stmp-dirs $(srcdir)/libgcov.c $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h config.status stmp-int-hdrs tsystem.h
	$(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -DL_gcov_one_value_profiler -c $(srcdir)/libgcov.c -o libgcc/kext/_gcov_one_value_profiler.o
kext/libgcov.a: libgcc/kext/_gcov_one_value_profiler.o

extrakext: stmp-dirs
	$(MAKE) GCC_FOR_TARGET="$(GCC_FOR_TARGET)" \
	  AR_FOR_TARGET="$(AR_FOR_TARGET)" \
	  AR_CREATE_FOR_TARGET="$(AR_CREATE_FOR_TARGET)" \
	  AR_EXTRACT_FOR_TARGET="$(AR_EXTRACT_FOR_TARGET)" \
	  AR_FLAGS_FOR_TARGET="$(AR_FLAGS_FOR_TARGET)" \
	  CC="$(CC)" CFLAGS="$(CFLAGS)" \
	  BUILD_PREFIX="$(BUILD_PREFIX)" \
	  BUILD_PREFIX_1="$(BUILD_PREFIX_1)" \
	  LANGUAGES="$(LANGUAGES)" \
	  LIBGCC2_CFLAGS="$(LIBGCC2_CFLAGS) -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions "  \
	  LIBGCC2_STATIC_CFLAGS="$(LIBGCC2_STATIC_CFLAGS)"  \
	  MULTILIB_CFLAGS=" -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions" T=kext/ kext/crt3.o
all: extrakext
kext/libgcc_s.dylib: extrakext

libgcc/kext/libgcc.map: ../../gcc/mkmap-flat.awk ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver
	{ $(NM_FOR_TARGET) -pg $(objects); echo %%; \
	  cat ../../gcc/config/rs6000/libgcc-ppc64.ver ../../gcc/libgcc-std.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_STATIC_CFLAGS) $(LIBGCC2_CFLAGS) $(INCLUDES)  -Dmalloc=kern_os_malloc -Dfree=kern_os_free -DLIBCC_KEXT -static -fno-pic -fno-exceptions -fno-non-call-exceptions -E -xassembler-with-cpp -; \
	} | $(AWK) -f ../../gcc/mkmap-flat.awk -v leading_underscore=1 > libgcc/kext/tmp-libgcc.map
	mv 'libgcc/kext/tmp-libgcc.map' $@
kext/libgcc_s.dylib: libgcc/kext/libgcc.map

kext/libgcc.a: stmp-dirs
	-rm -f kext/libgcc.a
	$(AR_CREATE_FOR_TARGET) kext/libgcc.a $(objects)
	$(RANLIB_FOR_TARGET) kext/libgcc.a
all: kext/libgcc.a

kext/libgcov.a: stmp-dirs
	-rm -f kext/libgcov.a
	$(AR_CREATE_FOR_TARGET) kext/libgcov.a $(objects)
	$(RANLIB_FOR_TARGET) kext/libgcov.a
all: kext/libgcov.a

kext/libgcc_eh.a: stmp-dirs
	-rm -f kext/libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) kext/libgcc_eh.a $(objects)
	$(RANLIB_FOR_TARGET) kext/libgcc_eh.a
all: kext/libgcc_eh.a

libgcc-stage-start:
	for dir in $(dirs); do \
	  if [ -d $(stage)/$$dir ]; then :; \
	  else /bin/sh ../../gcc/../mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in $(dirs); do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  mv $$dir/*.vis $(stage)/$$dir; \
    mv $$dir/*.map $(stage)/$$dir; \
	  test ! -f $$dir/libgcc.a || mv $$dir/lib* $(stage)/$$dir; \
	done

stmp-dirs:
	for d in $(dirs); do \
	  if [ -d $$d ]; then true; else /bin/sh ../../gcc/../mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi

install: all
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
	$(INSTALL_DATA) ./libgcc_eh.a $(DESTDIR)$(libsubdir)/
	chmod 644 $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(mkinstalldirs) $(DESTDIR)$(slibdir); /usr/bin/install -c -m 644 libgcc_s.1.dylib $(DESTDIR)$(slibdir)/libgcc_s.1.dylib
	if [ -d $(DESTDIR)$(libsubdir)/ppc64 ]; then true; else /bin/sh ../../gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/ppc64; chmod a+rx $(DESTDIR)$(libsubdir)/ppc64; fi;
	$(INSTALL_DATA) ppc64/libgcc.a $(DESTDIR)$(libsubdir)/ppc64/
	chmod 644 $(DESTDIR)$(libsubdir)/ppc64/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/ppc64/libgcc.a
	$(INSTALL_DATA) ppc64/libgcov.a $(DESTDIR)$(libsubdir)/ppc64/
	chmod 644 $(DESTDIR)$(libsubdir)/ppc64/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/ppc64/libgcov.a
	$(INSTALL_DATA) ppc64/libgcc_eh.a $(DESTDIR)$(libsubdir)/ppc64/
	chmod 644 $(DESTDIR)$(libsubdir)/ppc64/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/ppc64/libgcc_eh.a
	$(mkinstalldirs) $(DESTDIR)$(slibdir); /usr/bin/install -c -m 644 libgcc_s.1.dylib $(DESTDIR)$(slibdir)/libgcc_s.1.dylib
	if [ -d $(DESTDIR)$(libsubdir)/static ]; then true; else /bin/sh ../../gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/static; chmod a+rx $(DESTDIR)$(libsubdir)/static; fi;
	$(INSTALL_DATA) static/libgcc.a $(DESTDIR)$(libsubdir)/static/
	chmod 644 $(DESTDIR)$(libsubdir)/static/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/static/libgcc.a
	$(INSTALL_DATA) static/libgcov.a $(DESTDIR)$(libsubdir)/static/
	chmod 644 $(DESTDIR)$(libsubdir)/static/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/static/libgcov.a
	$(INSTALL_DATA) static/libgcc_eh.a $(DESTDIR)$(libsubdir)/static/
	chmod 644 $(DESTDIR)$(libsubdir)/static/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/static/libgcc_eh.a
	if [ -d $(DESTDIR)$(libsubdir)/kext ]; then true; else /bin/sh ../../gcc/../mkinstalldirs $(DESTDIR)$(libsubdir)/kext; chmod a+rx $(DESTDIR)$(libsubdir)/kext; fi;
	$(INSTALL_DATA) kext/libgcc.a $(DESTDIR)$(libsubdir)/kext/
	chmod 644 $(DESTDIR)$(libsubdir)/kext/libgcc.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext/libgcc.a
	$(INSTALL_DATA) kext/libgcov.a $(DESTDIR)$(libsubdir)/kext/
	chmod 644 $(DESTDIR)$(libsubdir)/kext/libgcov.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext/libgcov.a
	$(INSTALL_DATA) kext/libgcc_eh.a $(DESTDIR)$(libsubdir)/kext/
	chmod 644 $(DESTDIR)$(libsubdir)/kext/libgcc_eh.a
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/kext/libgcc_eh.a
	$(INSTALL_DATA) crt3.o $(DESTDIR)$(libsubdir)/
	$(INSTALL_DATA) ppc64/crt3.o $(DESTDIR)$(libsubdir)/ppc64/
	$(INSTALL_DATA) static/crt3.o $(DESTDIR)$(libsubdir)/static/
	$(INSTALL_DATA) kext/crt3.o $(DESTDIR)$(libsubdir)/kext/
.PHONY: all install
