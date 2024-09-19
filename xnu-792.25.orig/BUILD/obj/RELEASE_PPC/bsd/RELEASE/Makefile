SOURCE_DIR=/Users/mikemike/dev/ppc/xnu/xnu-ppc/xnu-792.25.20
IDENT=-DNEXT -DTIMEZONE="0" -DPST="0" -DINET -DABSOLUTETIME_SCALAR_TYPE -DMACH -DNO_DIRECT_RPC -DBOND -DNETMIBS -DIPFIREWALL_FORWARD -DIPFIREWALL_DEFAULT_TO_ACCEPT -DTCP_DROP_SYNFIN -DICMP_BANDLIM -DINET6 -DIPSEC -DIPSEC_ESP -DIPV6FIREWALL_DEFAULT_TO_ACCEPT -Dcrypto
#
# Copyright (c) 2000-2004 Apple Computer, Inc. All rights reserved.
#
# @APPLE_LICENSE_HEADER_START@
# 
# The contents of this file constitute Original Code as defined in and
# are subject to the Apple Public Source License Version 1.1 (the
# "License").  You may not use this file except in compliance with the
# License.  Please obtain a copy of the License at
# http://www.apple.com/publicsource and read it before using this file.
# 
# This Original Code and all software distributed under the License are
# distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
# EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
# INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
# License for the specific language governing rights and limitations
# under the License.
# 
# @APPLE_LICENSE_HEADER_END@
#

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

export MakeInc_cmd=${SRCROOT}/makedefs/MakeInc.cmd
export MakeInc_def=${SRCROOT}/makedefs/MakeInc.def
export MakeInc_rule=${SRCROOT}/makedefs/MakeInc.rule
export MakeInc_dir=${SRCROOT}/makedefs/MakeInc.dir

include $(MakeInc_cmd)
include $(MakeInc_def)

#
# XXX: CFLAGS
#
CFLAGS+= -imacros meta_features.h -DARCH_PRIVATE -DKERNEL -DDRIVER_PRIVATE \
	-D_KERNEL_BUILD -DKERNEL_BUILD -DMACH_KERNEL -DBSD_BUILD \
	-DBSD_KERNEL_PRIVATE -DNCPUS=1 -Wno-four-char-constants -fpascal-strings \
	-D__APPLE__ -DLP64KERN=1 -DLP64_DEBUG=0  -I.

# XXX: ld flags for bsd.o
export LDFLAGS_COMPONENT += -keep_private_externs

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

OBJS=randomdev.o smf.o comp.o prng.o sha1mod.o yarrowUtils.o memdev.o \
	unix_startup.o vn.o shadow.o crc32.o random.o scanc.o skpc.o \
	inet_ntop.o bcd.o vfs_attrlist.o vfs_bio.o vfs_cache.o \
	vfs_cluster.o vfs_conf.o vfs_init.o vfs_lookup.o vfs_quota.o \
	vfs_subr.o vfs_syscalls.o vfs_support.o vfs_utfconv.o \
	vfs_vnops.o vfs_xattr.o vnode_if.o kpi_vfs.o vfs_journal.o \
	vfs_fsevents.o dead_vnops.o fdesc_vfsops.o fdesc_vnops.o \
	fifo_vnops.o spec_vnops.o union_subr.o union_vfsops.o \
	union_vnops.o volfs_vfsops.o volfs_vnops.o devfs_tree.o \
	devfs_vnops.o devfs_vfsops.o cd9660_bmap.o cd9660_lookup.o \
	cd9660_node.o cd9660_rrip.o cd9660_util.o cd9660_vfsops.o \
	cd9660_vnops.o bpf.o bpf_filter.o if.o init.o dlil.o \
	ether_if_module.o ether_at_pr_module.o ether_inet_pr_module.o \
	ether_inet6_pr_module.o if_loop.o if_mib.o if_vlan.o \
	multicast_list.o if_bond.o devtimer.o ndrv.o radix.o raw_cb.o \
	raw_usrreq.o route.o rtsock.o zlib.o if_gif.o if_stf.o \
	net_osdep.o kpi_interface.o kpi_protocol.o kpi_interfacefilter.o \
	igmp.o in.o in_bootp.o dhcp_options.o in_arp.o in_pcb.o \
	in_proto.o in_rmx.o ip_divert.o ip_dummynet.o ip_flow.o ip_fw2.o \
	ip_fw2_compat.o ip_icmp.o ip_input.o ip_mroute.o ip_output.o \
	raw_ip.o tcp_input.o tcp_output.o tcp_sack.o tcp_subr.o \
	tcp_timer.o tcp_usrreq.o udp_usrreq.o in_gif.o ip_ecn.o \
	ip_encap.o kpi_ipfilter.o ah_core.o ah_input.o ah_output.o \
	esp_core.o esp_input.o esp_output.o esp_rijndael.o ipsec.o \
	dest6.o frag6.o icmp6.o in6.o in6_cksum.o in6_gif.o ip6_fw.o \
	ip6_forward.o in6_ifattach.o ip6_input.o ip6_mroute.o \
	ip6_output.o in6_src.o ipcomp_core.o ipcomp_input.o \
	ipcomp_output.o in6_pcb.o in6_prefix.o in6_proto.o in6_rmx.o \
	mld6.o nd6.o nd6_nbr.o nd6_rtr.o raw_ip6.o route6.o scope6.o \
	udp6_output.o udp6_usrreq.o key.o key_debug.o keysock.o keydb.o \
	md5c.o sha1.o sha2.o des_ecb.o des_enc.o des_setkey.o bf_enc.o \
	bf_skey.o cast128.o aescrypt.o aeskey.o aestab.o rc4.o at.o \
	at_proto.o at_pcb.o ddp_usrreq.o atp_alloc.o atp_misc.o \
	atp_open.o atp_read.o atp_write.o asp_proto.o ddp_aep.o ddp.o \
	ddp_brt.o ddp_proto.o ddp_nbp.o ddp_rtmp.o ddp_sip.o \
	ddp_rtmptable.o ddp_r_rtmp.o ddp_r_zip.o ddp_aarp.o ddp_lap.o \
	adsp_CLDeny.o adsp_Read.o adsp_Timer.o adsp_attention.o \
	adsp_CLListen.o adsp_NewCID.o adsp_TimerElem.o adsp_reset.o \
	adsp_Close.o adsp_Open.o adsp_RxAttn.o adsp_Write.o \
	adsp_Control.o adsp_RxData.o adsp.o adsp_Init.o adsp_Options.o \
	adsp_stream.o adsp_InitGlobals.o adsp_Packet.o adsp_Status.o \
	adsp_misc.o sys_glue.o sys_dep.o drv_dep.o aurp_aurpd.o \
	aurp_cfg.o aurp_gdata.o aurp_misc.o aurp_open.o aurp_rd.o \
	aurp_ri.o aurp_rx.o aurp_tickle.o aurp_tx.o aurp_zi.o \
	krpc_subr.o nfs_bio.o nfs_boot.o nfs_node.o nfs_serv.o \
	nfs_socket.o nfs_srvcache.o nfs_subs.o nfs_syscalls.o \
	nfs_vfsops.o nfs_vnops.o nfs_lock.o netboot.o ffs_alloc.o \
	ffs_balloc.o ffs_inode.o ffs_subr.o ffs_tables.o ffs_vfsops.o \
	ffs_vnops.o ufs_attrlist.o ufs_bmap.o ufs_byte_order.o \
	ufs_ihash.o ufs_inode.o ufs_lookup.o ufs_quota.o ufs_vfsops.o \
	ufs_vnops.o hfs_attrlist.o hfs_btreeio.o hfs_catalog.o \
	hfs_chash.o hfs_cnode.o hfs_encodinghint.o hfs_encodings.o \
	hfs_endian.o hfs_hotfiles.o hfs_link.o hfs_lookup.o \
	hfs_notification.o hfs_quota.o hfs_readwrite.o hfs_search.o \
	hfs_vfsops.o hfs_vfsutils.o hfs_vnops.o hfs_xattr.o MacOSStubs.o \
	rangelist.o BTree.o BTreeAllocate.o BTreeMiscOps.o \
	BTreeNodeOps.o BTreeNodeReserve.o BTreeScanner.o BTreeTreeOps.o \
	CatalogUtilities.o FileIDsServices.o BTreeWrapper.o \
	FileExtentMapping.o VolumeAllocation.o UnicodeWrappers.o \
	bsd_init.o init_sysent.o kdebug.o kern_acct.o kern_aio.o \
	kern_audit.o kern_authorization.o kern_bsm_token.o \
	kern_bsm_audit.o kern_bsm_klib.o kern_clock.o kern_core.o \
	kern_credential.o kern_symfile.o kern_descrip.o kern_event.o \
	kern_control.o kern_exec.o kern_exit.o kern_lockf.o kern_fork.o \
	kern_ktrace.o kern_lock.o kern_malloc.o kern_mman.o \
	kern_panicinfo.o kern_physio.o kern_proc.o kern_prot.o \
	kern_resource.o kern_shutdown.o kern_sig.o kern_subr.o \
	kern_synch.o kern_sysctl.o kern_newsysctl.o kern_mib.o \
	kpi_mbuf.o sysctl_init.o kern_time.o kern_xxx.o mach_process.o \
	kern_pcsamples.o spl.o subr_log.o subr_prf.o subr_prof.o \
	subr_xxx.o sys_generic.o sys_pipe.o sys_socket.o sys_domain.o \
	syscalls.o tty.o tty_compat.o tty_conf.o tty_pty.o tty_subr.o \
	tty_tty.o ubc_subr.o uipc_domain.o uipc_mbuf.o uipc_mbuf2.o \
	uipc_proto.o uipc_socket.o uipc_socket2.o uipc_syscalls.o \
	uipc_usrreq.o sysv_ipc.o sysv_shm.o sysv_sem.o sysv_msg.o \
	mach_fat.o mach_header.o mach_loader.o posix_sem.o posix_shm.o \
	qsort.o kpi_socket.o kpi_socketfilter.o proc_info.o \
	socket_info.o vnode_pager.o vm_unix.o dp_backing_file.o \
	ux_exception.o param.o ioconf.o chud_bsd_callback.o \
	chud_process.o in_cksum.o conf.o cons.o mem.o unix_signal.o \
	ffs.o memmove.o machdep.o kern_machdep.o stubs.o systemcalls.o \
	km.o xsumas.o sysctl.o munge.o bsd_stubs.o 

CFILES=\
	$(SOURCE_DIR)/bsd/dev/random/randomdev.c \
	$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/port/smf.c \
	$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/comp.c \
	$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/prng.c \
	$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/sha1mod.c \
	$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/yarrowUtils.c \
	$(SOURCE_DIR)/bsd/dev/memdev.c \
	$(SOURCE_DIR)/bsd/dev/unix_startup.c \
	$(SOURCE_DIR)/bsd/dev/vn/vn.c \
	$(SOURCE_DIR)/bsd/dev/vn/shadow.c \
	$(SOURCE_DIR)/bsd/libkern/crc32.c \
	$(SOURCE_DIR)/bsd/libkern/random.c \
	$(SOURCE_DIR)/bsd/libkern/scanc.c \
	$(SOURCE_DIR)/bsd/libkern/skpc.c \
	$(SOURCE_DIR)/bsd/libkern/inet_ntop.c \
	$(SOURCE_DIR)/bsd/libkern/bcd.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_attrlist.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_bio.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_cache.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_cluster.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_conf.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_init.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_lookup.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_quota.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_subr.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_syscalls.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_support.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_utfconv.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_vnops.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_xattr.c \
	$(SOURCE_DIR)/bsd/vfs/vnode_if.c \
	$(SOURCE_DIR)/bsd/vfs/kpi_vfs.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_journal.c \
	$(SOURCE_DIR)/bsd/vfs/vfs_fsevents.c \
	$(SOURCE_DIR)/bsd/miscfs/deadfs/dead_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/fdesc/fdesc_vfsops.c \
	$(SOURCE_DIR)/bsd/miscfs/fdesc/fdesc_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/fifofs/fifo_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/specfs/spec_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/union/union_subr.c \
	$(SOURCE_DIR)/bsd/miscfs/union/union_vfsops.c \
	$(SOURCE_DIR)/bsd/miscfs/union/union_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/volfs/volfs_vfsops.c \
	$(SOURCE_DIR)/bsd/miscfs/volfs/volfs_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/devfs/devfs_tree.c \
	$(SOURCE_DIR)/bsd/miscfs/devfs/devfs_vnops.c \
	$(SOURCE_DIR)/bsd/miscfs/devfs/devfs_vfsops.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_bmap.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_lookup.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_node.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_rrip.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_util.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_vfsops.c \
	$(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_vnops.c \
	$(SOURCE_DIR)/bsd/net/bpf.c \
	$(SOURCE_DIR)/bsd/net/bpf_filter.c \
	$(SOURCE_DIR)/bsd/net/if.c \
	$(SOURCE_DIR)/bsd/net/init.c \
	$(SOURCE_DIR)/bsd/net/dlil.c \
	$(SOURCE_DIR)/bsd/net/ether_if_module.c \
	$(SOURCE_DIR)/bsd/net/ether_at_pr_module.c \
	$(SOURCE_DIR)/bsd/net/ether_inet_pr_module.c \
	$(SOURCE_DIR)/bsd/net/ether_inet6_pr_module.c \
	$(SOURCE_DIR)/bsd/net/if_loop.c \
	$(SOURCE_DIR)/bsd/net/if_mib.c \
	$(SOURCE_DIR)/bsd/net/if_vlan.c \
	$(SOURCE_DIR)/bsd/net/multicast_list.c \
	$(SOURCE_DIR)/bsd/net/if_bond.c \
	$(SOURCE_DIR)/bsd/net/devtimer.c \
	$(SOURCE_DIR)/bsd/net/ndrv.c \
	$(SOURCE_DIR)/bsd/net/radix.c \
	$(SOURCE_DIR)/bsd/net/raw_cb.c \
	$(SOURCE_DIR)/bsd/net/raw_usrreq.c \
	$(SOURCE_DIR)/bsd/net/route.c \
	$(SOURCE_DIR)/bsd/net/rtsock.c \
	$(SOURCE_DIR)/bsd/net/zlib.c \
	$(SOURCE_DIR)/bsd/net/if_gif.c \
	$(SOURCE_DIR)/bsd/net/if_stf.c \
	$(SOURCE_DIR)/bsd/net/net_osdep.c \
	$(SOURCE_DIR)/bsd/net/kpi_interface.c \
	$(SOURCE_DIR)/bsd/net/kpi_protocol.c \
	$(SOURCE_DIR)/bsd/net/kpi_interfacefilter.c \
	$(SOURCE_DIR)/bsd/netinet/igmp.c \
	$(SOURCE_DIR)/bsd/netinet/in.c \
	$(SOURCE_DIR)/bsd/netinet/in_bootp.c \
	$(SOURCE_DIR)/bsd/netinet/dhcp_options.c \
	$(SOURCE_DIR)/bsd/netinet/in_arp.c \
	$(SOURCE_DIR)/bsd/netinet/in_pcb.c \
	$(SOURCE_DIR)/bsd/netinet/in_proto.c \
	$(SOURCE_DIR)/bsd/netinet/in_rmx.c \
	$(SOURCE_DIR)/bsd/netinet/ip_divert.c \
	$(SOURCE_DIR)/bsd/netinet/ip_dummynet.c \
	$(SOURCE_DIR)/bsd/netinet/ip_flow.c \
	$(SOURCE_DIR)/bsd/netinet/ip_fw2.c \
	$(SOURCE_DIR)/bsd/netinet/ip_fw2_compat.c \
	$(SOURCE_DIR)/bsd/netinet/ip_icmp.c \
	$(SOURCE_DIR)/bsd/netinet/ip_input.c \
	$(SOURCE_DIR)/bsd/netinet/ip_mroute.c \
	$(SOURCE_DIR)/bsd/netinet/ip_output.c \
	$(SOURCE_DIR)/bsd/netinet/raw_ip.c \
	$(SOURCE_DIR)/bsd/netinet/tcp_input.c \
	$(SOURCE_DIR)/bsd/netinet/tcp_output.c \
	$(SOURCE_DIR)/bsd/netinet/tcp_sack.c \
	$(SOURCE_DIR)/bsd/netinet/tcp_subr.c \
	$(SOURCE_DIR)/bsd/netinet/tcp_timer.c \
	$(SOURCE_DIR)/bsd/netinet/tcp_usrreq.c \
	$(SOURCE_DIR)/bsd/netinet/udp_usrreq.c \
	$(SOURCE_DIR)/bsd/netinet/in_gif.c \
	$(SOURCE_DIR)/bsd/netinet/ip_ecn.c \
	$(SOURCE_DIR)/bsd/netinet/ip_encap.c \
	$(SOURCE_DIR)/bsd/netinet/kpi_ipfilter.c \
	$(SOURCE_DIR)/bsd/netinet6/ah_core.c \
	$(SOURCE_DIR)/bsd/netinet6/ah_input.c \
	$(SOURCE_DIR)/bsd/netinet6/ah_output.c \
	$(SOURCE_DIR)/bsd/netinet6/esp_core.c \
	$(SOURCE_DIR)/bsd/netinet6/esp_input.c \
	$(SOURCE_DIR)/bsd/netinet6/esp_output.c \
	$(SOURCE_DIR)/bsd/netinet6/esp_rijndael.c \
	$(SOURCE_DIR)/bsd/netinet6/ipsec.c \
	$(SOURCE_DIR)/bsd/netinet6/dest6.c \
	$(SOURCE_DIR)/bsd/netinet6/frag6.c \
	$(SOURCE_DIR)/bsd/netinet6/icmp6.c \
	$(SOURCE_DIR)/bsd/netinet6/in6.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_cksum.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_gif.c \
	$(SOURCE_DIR)/bsd/netinet6/ip6_fw.c \
	$(SOURCE_DIR)/bsd/netinet6/ip6_forward.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_ifattach.c \
	$(SOURCE_DIR)/bsd/netinet6/ip6_input.c \
	$(SOURCE_DIR)/bsd/netinet6/ip6_mroute.c \
	$(SOURCE_DIR)/bsd/netinet6/ip6_output.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_src.c \
	$(SOURCE_DIR)/bsd/netinet6/ipcomp_core.c \
	$(SOURCE_DIR)/bsd/netinet6/ipcomp_input.c \
	$(SOURCE_DIR)/bsd/netinet6/ipcomp_output.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_pcb.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_prefix.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_proto.c \
	$(SOURCE_DIR)/bsd/netinet6/in6_rmx.c \
	$(SOURCE_DIR)/bsd/netinet6/mld6.c \
	$(SOURCE_DIR)/bsd/netinet6/nd6.c \
	$(SOURCE_DIR)/bsd/netinet6/nd6_nbr.c \
	$(SOURCE_DIR)/bsd/netinet6/nd6_rtr.c \
	$(SOURCE_DIR)/bsd/netinet6/raw_ip6.c \
	$(SOURCE_DIR)/bsd/netinet6/route6.c \
	$(SOURCE_DIR)/bsd/netinet6/scope6.c \
	$(SOURCE_DIR)/bsd/netinet6/udp6_output.c \
	$(SOURCE_DIR)/bsd/netinet6/udp6_usrreq.c \
	$(SOURCE_DIR)/bsd/netkey/key.c \
	$(SOURCE_DIR)/bsd/netkey/key_debug.c \
	$(SOURCE_DIR)/bsd/netkey/keysock.c \
	$(SOURCE_DIR)/bsd/netkey/keydb.c \
	$(SOURCE_DIR)/bsd/kern/md5c.c \
	$(SOURCE_DIR)/bsd/crypto/sha1.c \
	$(SOURCE_DIR)/bsd/crypto/sha2/sha2.c \
	$(SOURCE_DIR)/bsd/crypto/des/des_ecb.c \
	$(SOURCE_DIR)/bsd/crypto/des/des_enc.c \
	$(SOURCE_DIR)/bsd/crypto/des/des_setkey.c \
	$(SOURCE_DIR)/bsd/crypto/blowfish/bf_enc.c \
	$(SOURCE_DIR)/bsd/crypto/blowfish/bf_skey.c \
	$(SOURCE_DIR)/bsd/crypto/cast128/cast128.c \
	$(SOURCE_DIR)/bsd/crypto/aes/aescrypt.c \
	$(SOURCE_DIR)/bsd/crypto/aes/aeskey.c \
	$(SOURCE_DIR)/bsd/crypto/aes/aestab.c \
	$(SOURCE_DIR)/bsd/crypto/rc4/rc4.c \
	$(SOURCE_DIR)/bsd/netat/at.c \
	$(SOURCE_DIR)/bsd/netat/at_proto.c \
	$(SOURCE_DIR)/bsd/netat/at_pcb.c \
	$(SOURCE_DIR)/bsd/netat/ddp_usrreq.c \
	$(SOURCE_DIR)/bsd/netat/atp_alloc.c \
	$(SOURCE_DIR)/bsd/netat/atp_misc.c \
	$(SOURCE_DIR)/bsd/netat/atp_open.c \
	$(SOURCE_DIR)/bsd/netat/atp_read.c \
	$(SOURCE_DIR)/bsd/netat/atp_write.c \
	$(SOURCE_DIR)/bsd/netat/asp_proto.c \
	$(SOURCE_DIR)/bsd/netat/ddp_aep.c \
	$(SOURCE_DIR)/bsd/netat/ddp.c \
	$(SOURCE_DIR)/bsd/netat/ddp_brt.c \
	$(SOURCE_DIR)/bsd/netat/ddp_proto.c \
	$(SOURCE_DIR)/bsd/netat/ddp_nbp.c \
	$(SOURCE_DIR)/bsd/netat/ddp_rtmp.c \
	$(SOURCE_DIR)/bsd/netat/ddp_sip.c \
	$(SOURCE_DIR)/bsd/netat/ddp_rtmptable.c \
	$(SOURCE_DIR)/bsd/netat/ddp_r_rtmp.c \
	$(SOURCE_DIR)/bsd/netat/ddp_r_zip.c \
	$(SOURCE_DIR)/bsd/netat/ddp_aarp.c \
	$(SOURCE_DIR)/bsd/netat/ddp_lap.c \
	$(SOURCE_DIR)/bsd/netat/adsp_CLDeny.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Read.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Timer.c \
	$(SOURCE_DIR)/bsd/netat/adsp_attention.c \
	$(SOURCE_DIR)/bsd/netat/adsp_CLListen.c \
	$(SOURCE_DIR)/bsd/netat/adsp_NewCID.c \
	$(SOURCE_DIR)/bsd/netat/adsp_TimerElem.c \
	$(SOURCE_DIR)/bsd/netat/adsp_reset.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Close.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Open.c \
	$(SOURCE_DIR)/bsd/netat/adsp_RxAttn.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Write.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Control.c \
	$(SOURCE_DIR)/bsd/netat/adsp_RxData.c \
	$(SOURCE_DIR)/bsd/netat/adsp.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Init.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Options.c \
	$(SOURCE_DIR)/bsd/netat/adsp_stream.c \
	$(SOURCE_DIR)/bsd/netat/adsp_InitGlobals.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Packet.c \
	$(SOURCE_DIR)/bsd/netat/adsp_Status.c \
	$(SOURCE_DIR)/bsd/netat/adsp_misc.c \
	$(SOURCE_DIR)/bsd/netat/sys_glue.c \
	$(SOURCE_DIR)/bsd/netat/sys_dep.c \
	$(SOURCE_DIR)/bsd/netat/drv_dep.c \
	$(SOURCE_DIR)/bsd/netat/aurp_aurpd.c \
	$(SOURCE_DIR)/bsd/netat/aurp_cfg.c \
	$(SOURCE_DIR)/bsd/netat/aurp_gdata.c \
	$(SOURCE_DIR)/bsd/netat/aurp_misc.c \
	$(SOURCE_DIR)/bsd/netat/aurp_open.c \
	$(SOURCE_DIR)/bsd/netat/aurp_rd.c \
	$(SOURCE_DIR)/bsd/netat/aurp_ri.c \
	$(SOURCE_DIR)/bsd/netat/aurp_rx.c \
	$(SOURCE_DIR)/bsd/netat/aurp_tickle.c \
	$(SOURCE_DIR)/bsd/netat/aurp_tx.c \
	$(SOURCE_DIR)/bsd/netat/aurp_zi.c \
	$(SOURCE_DIR)/bsd/nfs/krpc_subr.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_bio.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_boot.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_node.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_serv.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_socket.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_srvcache.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_subs.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_syscalls.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_vfsops.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_vnops.c \
	$(SOURCE_DIR)/bsd/nfs/nfs_lock.c \
	$(SOURCE_DIR)/bsd/kern/netboot.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_alloc.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_balloc.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_inode.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_subr.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_tables.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_vfsops.c \
	$(SOURCE_DIR)/bsd/ufs/ffs/ffs_vnops.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_attrlist.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_bmap.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_byte_order.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_ihash.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_inode.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_lookup.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_quota.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_vfsops.c \
	$(SOURCE_DIR)/bsd/ufs/ufs/ufs_vnops.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_attrlist.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_btreeio.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_catalog.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_chash.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_cnode.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_encodinghint.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_encodings.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_endian.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_hotfiles.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_link.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_lookup.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_notification.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_quota.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_readwrite.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_search.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_vfsops.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_vfsutils.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_vnops.c \
	$(SOURCE_DIR)/bsd/hfs/hfs_xattr.c \
	$(SOURCE_DIR)/bsd/hfs/MacOSStubs.c \
	$(SOURCE_DIR)/bsd/hfs/rangelist.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTree.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeAllocate.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeMiscOps.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeNodeOps.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeNodeReserve.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeScanner.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeTreeOps.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/Catalog/CatalogUtilities.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/Catalog/FileIDsServices.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/BTreeWrapper.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/FileExtentMapping.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/VolumeAllocation.c \
	$(SOURCE_DIR)/bsd/hfs/hfscommon/Unicode/UnicodeWrappers.c \
	$(SOURCE_DIR)/bsd/kern/bsd_init.c \
	$(SOURCE_DIR)/bsd/kern/init_sysent.c \
	$(SOURCE_DIR)/bsd/kern/kdebug.c \
	$(SOURCE_DIR)/bsd/kern/kern_acct.c \
	$(SOURCE_DIR)/bsd/kern/kern_aio.c \
	$(SOURCE_DIR)/bsd/kern/kern_audit.c \
	$(SOURCE_DIR)/bsd/kern/kern_authorization.c \
	$(SOURCE_DIR)/bsd/kern/kern_bsm_token.c \
	$(SOURCE_DIR)/bsd/kern/kern_bsm_audit.c \
	$(SOURCE_DIR)/bsd/kern/kern_bsm_klib.c \
	$(SOURCE_DIR)/bsd/kern/kern_clock.c \
	$(SOURCE_DIR)/bsd/kern/kern_core.c \
	$(SOURCE_DIR)/bsd/kern/kern_credential.c \
	$(SOURCE_DIR)/bsd/kern/kern_symfile.c \
	$(SOURCE_DIR)/bsd/kern/kern_descrip.c \
	$(SOURCE_DIR)/bsd/kern/kern_event.c \
	$(SOURCE_DIR)/bsd/kern/kern_control.c \
	$(SOURCE_DIR)/bsd/kern/kern_exec.c \
	$(SOURCE_DIR)/bsd/kern/kern_exit.c \
	$(SOURCE_DIR)/bsd/kern/kern_lockf.c \
	$(SOURCE_DIR)/bsd/kern/kern_fork.c \
	$(SOURCE_DIR)/bsd/kern/kern_ktrace.c \
	$(SOURCE_DIR)/bsd/kern/kern_lock.c \
	$(SOURCE_DIR)/bsd/kern/kern_malloc.c \
	$(SOURCE_DIR)/bsd/kern/kern_mman.c \
	$(SOURCE_DIR)/bsd/kern/kern_panicinfo.c \
	$(SOURCE_DIR)/bsd/kern/kern_physio.c \
	$(SOURCE_DIR)/bsd/kern/kern_proc.c \
	$(SOURCE_DIR)/bsd/kern/kern_prot.c \
	$(SOURCE_DIR)/bsd/kern/kern_resource.c \
	$(SOURCE_DIR)/bsd/kern/kern_shutdown.c \
	$(SOURCE_DIR)/bsd/kern/kern_sig.c \
	$(SOURCE_DIR)/bsd/kern/kern_subr.c \
	$(SOURCE_DIR)/bsd/kern/kern_synch.c \
	$(SOURCE_DIR)/bsd/kern/kern_sysctl.c \
	$(SOURCE_DIR)/bsd/kern/kern_newsysctl.c \
	$(SOURCE_DIR)/bsd/kern/kern_mib.c \
	$(SOURCE_DIR)/bsd/kern/kpi_mbuf.c \
	$(SOURCE_DIR)/bsd/kern/sysctl_init.c \
	$(SOURCE_DIR)/bsd/kern/kern_time.c \
	$(SOURCE_DIR)/bsd/kern/kern_xxx.c \
	$(SOURCE_DIR)/bsd/kern/mach_process.c \
	$(SOURCE_DIR)/bsd/kern/kern_pcsamples.c \
	$(SOURCE_DIR)/bsd/kern/spl.c \
	$(SOURCE_DIR)/bsd/kern/subr_log.c \
	$(SOURCE_DIR)/bsd/kern/subr_prf.c \
	$(SOURCE_DIR)/bsd/kern/subr_prof.c \
	$(SOURCE_DIR)/bsd/kern/subr_xxx.c \
	$(SOURCE_DIR)/bsd/kern/sys_generic.c \
	$(SOURCE_DIR)/bsd/kern/sys_pipe.c \
	$(SOURCE_DIR)/bsd/kern/sys_socket.c \
	$(SOURCE_DIR)/bsd/kern/sys_domain.c \
	$(SOURCE_DIR)/bsd/kern/syscalls.c \
	$(SOURCE_DIR)/bsd/kern/tty.c \
	$(SOURCE_DIR)/bsd/kern/tty_compat.c \
	$(SOURCE_DIR)/bsd/kern/tty_conf.c \
	$(SOURCE_DIR)/bsd/kern/tty_pty.c \
	$(SOURCE_DIR)/bsd/kern/tty_subr.c \
	$(SOURCE_DIR)/bsd/kern/tty_tty.c \
	$(SOURCE_DIR)/bsd/kern/ubc_subr.c \
	$(SOURCE_DIR)/bsd/kern/uipc_domain.c \
	$(SOURCE_DIR)/bsd/kern/uipc_mbuf.c \
	$(SOURCE_DIR)/bsd/kern/uipc_mbuf2.c \
	$(SOURCE_DIR)/bsd/kern/uipc_proto.c \
	$(SOURCE_DIR)/bsd/kern/uipc_socket.c \
	$(SOURCE_DIR)/bsd/kern/uipc_socket2.c \
	$(SOURCE_DIR)/bsd/kern/uipc_syscalls.c \
	$(SOURCE_DIR)/bsd/kern/uipc_usrreq.c \
	$(SOURCE_DIR)/bsd/kern/sysv_ipc.c \
	$(SOURCE_DIR)/bsd/kern/sysv_shm.c \
	$(SOURCE_DIR)/bsd/kern/sysv_sem.c \
	$(SOURCE_DIR)/bsd/kern/sysv_msg.c \
	$(SOURCE_DIR)/bsd/kern/mach_fat.c \
	$(SOURCE_DIR)/bsd/kern/mach_header.c \
	$(SOURCE_DIR)/bsd/kern/mach_loader.c \
	$(SOURCE_DIR)/bsd/kern/posix_sem.c \
	$(SOURCE_DIR)/bsd/kern/posix_shm.c \
	$(SOURCE_DIR)/bsd/kern/qsort.c \
	$(SOURCE_DIR)/bsd/kern/kpi_socket.c \
	$(SOURCE_DIR)/bsd/kern/kpi_socketfilter.c \
	$(SOURCE_DIR)/bsd/kern/proc_info.c \
	$(SOURCE_DIR)/bsd/kern/socket_info.c \
	$(SOURCE_DIR)/bsd/vm/vnode_pager.c \
	$(SOURCE_DIR)/bsd/vm/vm_unix.c \
	$(SOURCE_DIR)/bsd/vm/dp_backing_file.c \
	$(SOURCE_DIR)/bsd/uxkern/ux_exception.c \
	$(SOURCE_DIR)/bsd/conf/param.c \
	./ioconf.c \
	$(SOURCE_DIR)/bsd/dev/chud/chud_bsd_callback.c \
	$(SOURCE_DIR)/bsd/dev/chud/chud_process.c \
	$(SOURCE_DIR)/bsd/netinet/in_cksum.c \
	$(SOURCE_DIR)/bsd/dev/ppc/conf.c \
	$(SOURCE_DIR)/bsd/dev/ppc/cons.c \
	$(SOURCE_DIR)/bsd/dev/ppc/mem.c \
	$(SOURCE_DIR)/bsd/dev/ppc/unix_signal.c \
	$(SOURCE_DIR)/bsd/dev/ppc/memmove.c \
	$(SOURCE_DIR)/bsd/dev/ppc/machdep.c \
	$(SOURCE_DIR)/bsd/dev/ppc/kern_machdep.c \
	$(SOURCE_DIR)/bsd/dev/ppc/stubs.c \
	$(SOURCE_DIR)/bsd/dev/ppc/systemcalls.c \
	$(SOURCE_DIR)/bsd/dev/ppc/km.c \
	$(SOURCE_DIR)/bsd/dev/ppc/sysctl.c \
	$(SOURCE_DIR)/bsd/kern/bsd_stubs.c 
COBJS=randomdev.o smf.o comp.o prng.o sha1mod.o yarrowUtils.o memdev.o \
	unix_startup.o vn.o shadow.o crc32.o random.o scanc.o skpc.o \
	inet_ntop.o bcd.o vfs_attrlist.o vfs_bio.o vfs_cache.o \
	vfs_cluster.o vfs_conf.o vfs_init.o vfs_lookup.o vfs_quota.o \
	vfs_subr.o vfs_syscalls.o vfs_support.o vfs_utfconv.o \
	vfs_vnops.o vfs_xattr.o vnode_if.o kpi_vfs.o vfs_journal.o \
	vfs_fsevents.o dead_vnops.o fdesc_vfsops.o fdesc_vnops.o \
	fifo_vnops.o spec_vnops.o union_subr.o union_vfsops.o \
	union_vnops.o volfs_vfsops.o volfs_vnops.o devfs_tree.o \
	devfs_vnops.o devfs_vfsops.o cd9660_bmap.o cd9660_lookup.o \
	cd9660_node.o cd9660_rrip.o cd9660_util.o cd9660_vfsops.o \
	cd9660_vnops.o bpf.o bpf_filter.o if.o init.o dlil.o \
	ether_if_module.o ether_at_pr_module.o ether_inet_pr_module.o \
	ether_inet6_pr_module.o if_loop.o if_mib.o if_vlan.o \
	multicast_list.o if_bond.o devtimer.o ndrv.o radix.o raw_cb.o \
	raw_usrreq.o route.o rtsock.o zlib.o if_gif.o if_stf.o \
	net_osdep.o kpi_interface.o kpi_protocol.o kpi_interfacefilter.o \
	igmp.o in.o in_bootp.o dhcp_options.o in_arp.o in_pcb.o \
	in_proto.o in_rmx.o ip_divert.o ip_dummynet.o ip_flow.o ip_fw2.o \
	ip_fw2_compat.o ip_icmp.o ip_input.o ip_mroute.o ip_output.o \
	raw_ip.o tcp_input.o tcp_output.o tcp_sack.o tcp_subr.o \
	tcp_timer.o tcp_usrreq.o udp_usrreq.o in_gif.o ip_ecn.o \
	ip_encap.o kpi_ipfilter.o ah_core.o ah_input.o ah_output.o \
	esp_core.o esp_input.o esp_output.o esp_rijndael.o ipsec.o \
	dest6.o frag6.o icmp6.o in6.o in6_cksum.o in6_gif.o ip6_fw.o \
	ip6_forward.o in6_ifattach.o ip6_input.o ip6_mroute.o \
	ip6_output.o in6_src.o ipcomp_core.o ipcomp_input.o \
	ipcomp_output.o in6_pcb.o in6_prefix.o in6_proto.o in6_rmx.o \
	mld6.o nd6.o nd6_nbr.o nd6_rtr.o raw_ip6.o route6.o scope6.o \
	udp6_output.o udp6_usrreq.o key.o key_debug.o keysock.o keydb.o \
	md5c.o sha1.o sha2.o des_ecb.o des_enc.o des_setkey.o bf_enc.o \
	bf_skey.o cast128.o aescrypt.o aeskey.o aestab.o rc4.o at.o \
	at_proto.o at_pcb.o ddp_usrreq.o atp_alloc.o atp_misc.o \
	atp_open.o atp_read.o atp_write.o asp_proto.o ddp_aep.o ddp.o \
	ddp_brt.o ddp_proto.o ddp_nbp.o ddp_rtmp.o ddp_sip.o \
	ddp_rtmptable.o ddp_r_rtmp.o ddp_r_zip.o ddp_aarp.o ddp_lap.o \
	adsp_CLDeny.o adsp_Read.o adsp_Timer.o adsp_attention.o \
	adsp_CLListen.o adsp_NewCID.o adsp_TimerElem.o adsp_reset.o \
	adsp_Close.o adsp_Open.o adsp_RxAttn.o adsp_Write.o \
	adsp_Control.o adsp_RxData.o adsp.o adsp_Init.o adsp_Options.o \
	adsp_stream.o adsp_InitGlobals.o adsp_Packet.o adsp_Status.o \
	adsp_misc.o sys_glue.o sys_dep.o drv_dep.o aurp_aurpd.o \
	aurp_cfg.o aurp_gdata.o aurp_misc.o aurp_open.o aurp_rd.o \
	aurp_ri.o aurp_rx.o aurp_tickle.o aurp_tx.o aurp_zi.o \
	krpc_subr.o nfs_bio.o nfs_boot.o nfs_node.o nfs_serv.o \
	nfs_socket.o nfs_srvcache.o nfs_subs.o nfs_syscalls.o \
	nfs_vfsops.o nfs_vnops.o nfs_lock.o netboot.o ffs_alloc.o \
	ffs_balloc.o ffs_inode.o ffs_subr.o ffs_tables.o ffs_vfsops.o \
	ffs_vnops.o ufs_attrlist.o ufs_bmap.o ufs_byte_order.o \
	ufs_ihash.o ufs_inode.o ufs_lookup.o ufs_quota.o ufs_vfsops.o \
	ufs_vnops.o hfs_attrlist.o hfs_btreeio.o hfs_catalog.o \
	hfs_chash.o hfs_cnode.o hfs_encodinghint.o hfs_encodings.o \
	hfs_endian.o hfs_hotfiles.o hfs_link.o hfs_lookup.o \
	hfs_notification.o hfs_quota.o hfs_readwrite.o hfs_search.o \
	hfs_vfsops.o hfs_vfsutils.o hfs_vnops.o hfs_xattr.o MacOSStubs.o \
	rangelist.o BTree.o BTreeAllocate.o BTreeMiscOps.o \
	BTreeNodeOps.o BTreeNodeReserve.o BTreeScanner.o BTreeTreeOps.o \
	CatalogUtilities.o FileIDsServices.o BTreeWrapper.o \
	FileExtentMapping.o VolumeAllocation.o UnicodeWrappers.o \
	bsd_init.o init_sysent.o kdebug.o kern_acct.o kern_aio.o \
	kern_audit.o kern_authorization.o kern_bsm_token.o \
	kern_bsm_audit.o kern_bsm_klib.o kern_clock.o kern_core.o \
	kern_credential.o kern_symfile.o kern_descrip.o kern_event.o \
	kern_control.o kern_exec.o kern_exit.o kern_lockf.o kern_fork.o \
	kern_ktrace.o kern_lock.o kern_malloc.o kern_mman.o \
	kern_panicinfo.o kern_physio.o kern_proc.o kern_prot.o \
	kern_resource.o kern_shutdown.o kern_sig.o kern_subr.o \
	kern_synch.o kern_sysctl.o kern_newsysctl.o kern_mib.o \
	kpi_mbuf.o sysctl_init.o kern_time.o kern_xxx.o mach_process.o \
	kern_pcsamples.o spl.o subr_log.o subr_prf.o subr_prof.o \
	subr_xxx.o sys_generic.o sys_pipe.o sys_socket.o sys_domain.o \
	syscalls.o tty.o tty_compat.o tty_conf.o tty_pty.o tty_subr.o \
	tty_tty.o ubc_subr.o uipc_domain.o uipc_mbuf.o uipc_mbuf2.o \
	uipc_proto.o uipc_socket.o uipc_socket2.o uipc_syscalls.o \
	uipc_usrreq.o sysv_ipc.o sysv_shm.o sysv_sem.o sysv_msg.o \
	mach_fat.o mach_header.o mach_loader.o posix_sem.o posix_shm.o \
	qsort.o kpi_socket.o kpi_socketfilter.o proc_info.o \
	socket_info.o vnode_pager.o vm_unix.o dp_backing_file.o \
	ux_exception.o param.o ioconf.o chud_bsd_callback.o \
	chud_process.o in_cksum.o conf.o cons.o mem.o unix_signal.o \
	memmove.o machdep.o kern_machdep.o stubs.o systemcalls.o km.o \
	sysctl.o bsd_stubs.o 

MFILES=MOBJS=

SFILES=\
	$(SOURCE_DIR)/bsd/dev/ppc/ffs.s \
	$(SOURCE_DIR)/bsd/dev/ppc/xsumas.s \
	$(SOURCE_DIR)/bsd/dev/ppc/munge.s 
SOBJS=ffs.o xsumas.o munge.o 

BFILES=
ORDERED=
######################################################################
#BEGIN  Machine dependent Makefile fragment for ppc
######################################################################
 
######################################################################
#END    Machine dependent Makefile fragment for ppc
######################################################################


#
# This rule insures that the subr_prof.c does NOT get compiled with
# profiling. It implements mcount() and profiling it leads to recursion.
#

subr_prof.o_CFLAGS_RM = -pg

#
#  OBJSDEPS is the set of files (defined in the machine dependent
#  template if necessary) which all objects depend on (such as an
#  in-line assembler expansion filter)
#
${OBJS}: ${OBJSDEPS}


KERNEL_NAME=mach_kernel
mach_kernel .ORDER: mach_kernel.sys ${SYSDEPS}
	${SYS_RULE_1}
	${SYS_RULE_2}
	${SYS_RULE_3}
	${SYS_RULE_4}

LOAD = mach_kernel

all: includelinks ${LOAD}


LDOBJS = $(OBJS)

$(COMPONENT).o: $(LDOBJS)
	@echo "[ creating $(COMPONENT).o ]"
	@echo [ updating $(COMPONENT).o ${BSD_KERNEL_CONFIG} ]
	$(LD)  $(LDFLAGS_COMPONENT) -o $(COMPONENT).o ${LDOBJS} 

do_depend: do_all
	${MD} -u Makedep -f -d `ls *.d`;
	
do_all: $(COMPONENT).o

do_build_all: do_depend

randomdev.o: $(SOURCE_DIR)/bsd/dev/random/randomdev.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/random/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

smf.o: $(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/port/smf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/port/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

comp.o: $(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/comp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

prng.o: $(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/prng.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sha1mod.o: $(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/sha1mod.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

yarrowUtils.o: $(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/yarrowUtils.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/random/YarrowCoreLib/src/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

memdev.o: $(SOURCE_DIR)/bsd/dev/memdev.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

unix_startup.o: $(SOURCE_DIR)/bsd/dev/unix_startup.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vn.o: $(SOURCE_DIR)/bsd/dev/vn/vn.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/vn/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

shadow.o: $(SOURCE_DIR)/bsd/dev/vn/shadow.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/vn/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

crc32.o: $(SOURCE_DIR)/bsd/libkern/crc32.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/libkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

random.o: $(SOURCE_DIR)/bsd/libkern/random.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/libkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

scanc.o: $(SOURCE_DIR)/bsd/libkern/scanc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/libkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

skpc.o: $(SOURCE_DIR)/bsd/libkern/skpc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/libkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

inet_ntop.o: $(SOURCE_DIR)/bsd/libkern/inet_ntop.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/libkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bcd.o: $(SOURCE_DIR)/bsd/libkern/bcd.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/libkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_attrlist.o: $(SOURCE_DIR)/bsd/vfs/vfs_attrlist.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_bio.o: $(SOURCE_DIR)/bsd/vfs/vfs_bio.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_cache.o: $(SOURCE_DIR)/bsd/vfs/vfs_cache.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_cluster.o: $(SOURCE_DIR)/bsd/vfs/vfs_cluster.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_conf.o: $(SOURCE_DIR)/bsd/vfs/vfs_conf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_init.o: $(SOURCE_DIR)/bsd/vfs/vfs_init.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_lookup.o: $(SOURCE_DIR)/bsd/vfs/vfs_lookup.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_quota.o: $(SOURCE_DIR)/bsd/vfs/vfs_quota.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_subr.o: $(SOURCE_DIR)/bsd/vfs/vfs_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_syscalls.o: $(SOURCE_DIR)/bsd/vfs/vfs_syscalls.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_support.o: $(SOURCE_DIR)/bsd/vfs/vfs_support.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_utfconv.o: $(SOURCE_DIR)/bsd/vfs/vfs_utfconv.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_vnops.o: $(SOURCE_DIR)/bsd/vfs/vfs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_xattr.o: $(SOURCE_DIR)/bsd/vfs/vfs_xattr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vnode_if.o: $(SOURCE_DIR)/bsd/vfs/vnode_if.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_vfs.o: $(SOURCE_DIR)/bsd/vfs/kpi_vfs.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_journal.o: $(SOURCE_DIR)/bsd/vfs/vfs_journal.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vfs_fsevents.o: $(SOURCE_DIR)/bsd/vfs/vfs_fsevents.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dead_vnops.o: $(SOURCE_DIR)/bsd/miscfs/deadfs/dead_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/deadfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

fdesc_vfsops.o: $(SOURCE_DIR)/bsd/miscfs/fdesc/fdesc_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/fdesc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

fdesc_vnops.o: $(SOURCE_DIR)/bsd/miscfs/fdesc/fdesc_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/fdesc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

fifo_vnops.o: $(SOURCE_DIR)/bsd/miscfs/fifofs/fifo_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/fifofs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

spec_vnops.o: $(SOURCE_DIR)/bsd/miscfs/specfs/spec_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/specfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

union_subr.o: $(SOURCE_DIR)/bsd/miscfs/union/union_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/union/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

union_vfsops.o: $(SOURCE_DIR)/bsd/miscfs/union/union_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/union/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

union_vnops.o: $(SOURCE_DIR)/bsd/miscfs/union/union_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/union/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

volfs_vfsops.o: $(SOURCE_DIR)/bsd/miscfs/volfs/volfs_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/volfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

volfs_vnops.o: $(SOURCE_DIR)/bsd/miscfs/volfs/volfs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/volfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

devfs_tree.o: $(SOURCE_DIR)/bsd/miscfs/devfs/devfs_tree.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/devfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

devfs_vnops.o: $(SOURCE_DIR)/bsd/miscfs/devfs/devfs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/devfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

devfs_vfsops.o: $(SOURCE_DIR)/bsd/miscfs/devfs/devfs_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/miscfs/devfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_bmap.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_bmap.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_lookup.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_lookup.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_node.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_node.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_rrip.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_rrip.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_util.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_util.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_vfsops.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cd9660_vnops.o: $(SOURCE_DIR)/bsd/isofs/cd9660/cd9660_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/isofs/cd9660/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bpf.o: $(SOURCE_DIR)/bsd/net/bpf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bpf_filter.o: $(SOURCE_DIR)/bsd/net/bpf_filter.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if.o: $(SOURCE_DIR)/bsd/net/if.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

init.o: $(SOURCE_DIR)/bsd/net/init.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dlil.o: $(SOURCE_DIR)/bsd/net/dlil.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ether_if_module.o: $(SOURCE_DIR)/bsd/net/ether_if_module.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ether_at_pr_module.o: $(SOURCE_DIR)/bsd/net/ether_at_pr_module.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ether_inet_pr_module.o: $(SOURCE_DIR)/bsd/net/ether_inet_pr_module.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ether_inet6_pr_module.o: $(SOURCE_DIR)/bsd/net/ether_inet6_pr_module.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if_loop.o: $(SOURCE_DIR)/bsd/net/if_loop.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if_mib.o: $(SOURCE_DIR)/bsd/net/if_mib.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if_vlan.o: $(SOURCE_DIR)/bsd/net/if_vlan.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

multicast_list.o: $(SOURCE_DIR)/bsd/net/multicast_list.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if_bond.o: $(SOURCE_DIR)/bsd/net/if_bond.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

devtimer.o: $(SOURCE_DIR)/bsd/net/devtimer.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ndrv.o: $(SOURCE_DIR)/bsd/net/ndrv.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

radix.o: $(SOURCE_DIR)/bsd/net/radix.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

raw_cb.o: $(SOURCE_DIR)/bsd/net/raw_cb.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

raw_usrreq.o: $(SOURCE_DIR)/bsd/net/raw_usrreq.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

route.o: $(SOURCE_DIR)/bsd/net/route.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

rtsock.o: $(SOURCE_DIR)/bsd/net/rtsock.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

zlib.o: $(SOURCE_DIR)/bsd/net/zlib.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if_gif.o: $(SOURCE_DIR)/bsd/net/if_gif.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

if_stf.o: $(SOURCE_DIR)/bsd/net/if_stf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

net_osdep.o: $(SOURCE_DIR)/bsd/net/net_osdep.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_interface.o: $(SOURCE_DIR)/bsd/net/kpi_interface.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_protocol.o: $(SOURCE_DIR)/bsd/net/kpi_protocol.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_interfacefilter.o: $(SOURCE_DIR)/bsd/net/kpi_interfacefilter.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/net/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

igmp.o: $(SOURCE_DIR)/bsd/netinet/igmp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in.o: $(SOURCE_DIR)/bsd/netinet/in.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_bootp.o: $(SOURCE_DIR)/bsd/netinet/in_bootp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dhcp_options.o: $(SOURCE_DIR)/bsd/netinet/dhcp_options.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_arp.o: $(SOURCE_DIR)/bsd/netinet/in_arp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_pcb.o: $(SOURCE_DIR)/bsd/netinet/in_pcb.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_proto.o: $(SOURCE_DIR)/bsd/netinet/in_proto.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_rmx.o: $(SOURCE_DIR)/bsd/netinet/in_rmx.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_divert.o: $(SOURCE_DIR)/bsd/netinet/ip_divert.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_dummynet.o: $(SOURCE_DIR)/bsd/netinet/ip_dummynet.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_flow.o: $(SOURCE_DIR)/bsd/netinet/ip_flow.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_fw2.o: $(SOURCE_DIR)/bsd/netinet/ip_fw2.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_fw2_compat.o: $(SOURCE_DIR)/bsd/netinet/ip_fw2_compat.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_icmp.o: $(SOURCE_DIR)/bsd/netinet/ip_icmp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_input.o: $(SOURCE_DIR)/bsd/netinet/ip_input.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_mroute.o: $(SOURCE_DIR)/bsd/netinet/ip_mroute.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_output.o: $(SOURCE_DIR)/bsd/netinet/ip_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

raw_ip.o: $(SOURCE_DIR)/bsd/netinet/raw_ip.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tcp_input.o: $(SOURCE_DIR)/bsd/netinet/tcp_input.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tcp_output.o: $(SOURCE_DIR)/bsd/netinet/tcp_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tcp_sack.o: $(SOURCE_DIR)/bsd/netinet/tcp_sack.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tcp_subr.o: $(SOURCE_DIR)/bsd/netinet/tcp_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tcp_timer.o: $(SOURCE_DIR)/bsd/netinet/tcp_timer.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tcp_usrreq.o: $(SOURCE_DIR)/bsd/netinet/tcp_usrreq.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

udp_usrreq.o: $(SOURCE_DIR)/bsd/netinet/udp_usrreq.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_gif.o: $(SOURCE_DIR)/bsd/netinet/in_gif.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_ecn.o: $(SOURCE_DIR)/bsd/netinet/ip_ecn.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip_encap.o: $(SOURCE_DIR)/bsd/netinet/ip_encap.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_ipfilter.o: $(SOURCE_DIR)/bsd/netinet/kpi_ipfilter.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ah_core.o: $(SOURCE_DIR)/bsd/netinet6/ah_core.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ah_input.o: $(SOURCE_DIR)/bsd/netinet6/ah_input.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ah_output.o: $(SOURCE_DIR)/bsd/netinet6/ah_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

esp_core.o: $(SOURCE_DIR)/bsd/netinet6/esp_core.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

esp_input.o: $(SOURCE_DIR)/bsd/netinet6/esp_input.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

esp_output.o: $(SOURCE_DIR)/bsd/netinet6/esp_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

esp_rijndael.o: $(SOURCE_DIR)/bsd/netinet6/esp_rijndael.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipsec.o: $(SOURCE_DIR)/bsd/netinet6/ipsec.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dest6.o: $(SOURCE_DIR)/bsd/netinet6/dest6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

frag6.o: $(SOURCE_DIR)/bsd/netinet6/frag6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

icmp6.o: $(SOURCE_DIR)/bsd/netinet6/icmp6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6.o: $(SOURCE_DIR)/bsd/netinet6/in6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_cksum.o: $(SOURCE_DIR)/bsd/netinet6/in6_cksum.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_gif.o: $(SOURCE_DIR)/bsd/netinet6/in6_gif.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip6_fw.o: $(SOURCE_DIR)/bsd/netinet6/ip6_fw.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip6_forward.o: $(SOURCE_DIR)/bsd/netinet6/ip6_forward.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_ifattach.o: $(SOURCE_DIR)/bsd/netinet6/in6_ifattach.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip6_input.o: $(SOURCE_DIR)/bsd/netinet6/ip6_input.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip6_mroute.o: $(SOURCE_DIR)/bsd/netinet6/ip6_mroute.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ip6_output.o: $(SOURCE_DIR)/bsd/netinet6/ip6_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_src.o: $(SOURCE_DIR)/bsd/netinet6/in6_src.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipcomp_core.o: $(SOURCE_DIR)/bsd/netinet6/ipcomp_core.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipcomp_input.o: $(SOURCE_DIR)/bsd/netinet6/ipcomp_input.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ipcomp_output.o: $(SOURCE_DIR)/bsd/netinet6/ipcomp_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_pcb.o: $(SOURCE_DIR)/bsd/netinet6/in6_pcb.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_prefix.o: $(SOURCE_DIR)/bsd/netinet6/in6_prefix.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_proto.o: $(SOURCE_DIR)/bsd/netinet6/in6_proto.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in6_rmx.o: $(SOURCE_DIR)/bsd/netinet6/in6_rmx.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mld6.o: $(SOURCE_DIR)/bsd/netinet6/mld6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nd6.o: $(SOURCE_DIR)/bsd/netinet6/nd6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nd6_nbr.o: $(SOURCE_DIR)/bsd/netinet6/nd6_nbr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nd6_rtr.o: $(SOURCE_DIR)/bsd/netinet6/nd6_rtr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

raw_ip6.o: $(SOURCE_DIR)/bsd/netinet6/raw_ip6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

route6.o: $(SOURCE_DIR)/bsd/netinet6/route6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

scope6.o: $(SOURCE_DIR)/bsd/netinet6/scope6.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

udp6_output.o: $(SOURCE_DIR)/bsd/netinet6/udp6_output.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

udp6_usrreq.o: $(SOURCE_DIR)/bsd/netinet6/udp6_usrreq.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet6/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

key.o: $(SOURCE_DIR)/bsd/netkey/key.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netkey/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

key_debug.o: $(SOURCE_DIR)/bsd/netkey/key_debug.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netkey/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

keysock.o: $(SOURCE_DIR)/bsd/netkey/keysock.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netkey/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

keydb.o: $(SOURCE_DIR)/bsd/netkey/keydb.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netkey/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

md5c.o: $(SOURCE_DIR)/bsd/kern/md5c.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sha1.o: $(SOURCE_DIR)/bsd/crypto/sha1.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sha2.o: $(SOURCE_DIR)/bsd/crypto/sha2/sha2.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/sha2/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

des_ecb.o: $(SOURCE_DIR)/bsd/crypto/des/des_ecb.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/des/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

des_enc.o: $(SOURCE_DIR)/bsd/crypto/des/des_enc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/des/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

des_setkey.o: $(SOURCE_DIR)/bsd/crypto/des/des_setkey.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/des/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bf_enc.o: $(SOURCE_DIR)/bsd/crypto/blowfish/bf_enc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/blowfish/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bf_skey.o: $(SOURCE_DIR)/bsd/crypto/blowfish/bf_skey.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/blowfish/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cast128.o: $(SOURCE_DIR)/bsd/crypto/cast128/cast128.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/cast128/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aescrypt.o: $(SOURCE_DIR)/bsd/crypto/aes/aescrypt.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/aes/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aeskey.o: $(SOURCE_DIR)/bsd/crypto/aes/aeskey.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/aes/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aestab.o: $(SOURCE_DIR)/bsd/crypto/aes/aestab.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/aes/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

rc4.o: $(SOURCE_DIR)/bsd/crypto/rc4/rc4.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/crypto/rc4/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

at.o: $(SOURCE_DIR)/bsd/netat/at.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

at_proto.o: $(SOURCE_DIR)/bsd/netat/at_proto.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

at_pcb.o: $(SOURCE_DIR)/bsd/netat/at_pcb.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_usrreq.o: $(SOURCE_DIR)/bsd/netat/ddp_usrreq.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

atp_alloc.o: $(SOURCE_DIR)/bsd/netat/atp_alloc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

atp_misc.o: $(SOURCE_DIR)/bsd/netat/atp_misc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

atp_open.o: $(SOURCE_DIR)/bsd/netat/atp_open.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

atp_read.o: $(SOURCE_DIR)/bsd/netat/atp_read.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

atp_write.o: $(SOURCE_DIR)/bsd/netat/atp_write.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

asp_proto.o: $(SOURCE_DIR)/bsd/netat/asp_proto.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_aep.o: $(SOURCE_DIR)/bsd/netat/ddp_aep.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp.o: $(SOURCE_DIR)/bsd/netat/ddp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_brt.o: $(SOURCE_DIR)/bsd/netat/ddp_brt.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_proto.o: $(SOURCE_DIR)/bsd/netat/ddp_proto.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_nbp.o: $(SOURCE_DIR)/bsd/netat/ddp_nbp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_rtmp.o: $(SOURCE_DIR)/bsd/netat/ddp_rtmp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_sip.o: $(SOURCE_DIR)/bsd/netat/ddp_sip.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_rtmptable.o: $(SOURCE_DIR)/bsd/netat/ddp_rtmptable.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_r_rtmp.o: $(SOURCE_DIR)/bsd/netat/ddp_r_rtmp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_r_zip.o: $(SOURCE_DIR)/bsd/netat/ddp_r_zip.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_aarp.o: $(SOURCE_DIR)/bsd/netat/ddp_aarp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ddp_lap.o: $(SOURCE_DIR)/bsd/netat/ddp_lap.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_CLDeny.o: $(SOURCE_DIR)/bsd/netat/adsp_CLDeny.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Read.o: $(SOURCE_DIR)/bsd/netat/adsp_Read.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Timer.o: $(SOURCE_DIR)/bsd/netat/adsp_Timer.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_attention.o: $(SOURCE_DIR)/bsd/netat/adsp_attention.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_CLListen.o: $(SOURCE_DIR)/bsd/netat/adsp_CLListen.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_NewCID.o: $(SOURCE_DIR)/bsd/netat/adsp_NewCID.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_TimerElem.o: $(SOURCE_DIR)/bsd/netat/adsp_TimerElem.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_reset.o: $(SOURCE_DIR)/bsd/netat/adsp_reset.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Close.o: $(SOURCE_DIR)/bsd/netat/adsp_Close.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Open.o: $(SOURCE_DIR)/bsd/netat/adsp_Open.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_RxAttn.o: $(SOURCE_DIR)/bsd/netat/adsp_RxAttn.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Write.o: $(SOURCE_DIR)/bsd/netat/adsp_Write.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Control.o: $(SOURCE_DIR)/bsd/netat/adsp_Control.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_RxData.o: $(SOURCE_DIR)/bsd/netat/adsp_RxData.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp.o: $(SOURCE_DIR)/bsd/netat/adsp.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Init.o: $(SOURCE_DIR)/bsd/netat/adsp_Init.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Options.o: $(SOURCE_DIR)/bsd/netat/adsp_Options.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_stream.o: $(SOURCE_DIR)/bsd/netat/adsp_stream.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_InitGlobals.o: $(SOURCE_DIR)/bsd/netat/adsp_InitGlobals.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Packet.o: $(SOURCE_DIR)/bsd/netat/adsp_Packet.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_Status.o: $(SOURCE_DIR)/bsd/netat/adsp_Status.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

adsp_misc.o: $(SOURCE_DIR)/bsd/netat/adsp_misc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sys_glue.o: $(SOURCE_DIR)/bsd/netat/sys_glue.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sys_dep.o: $(SOURCE_DIR)/bsd/netat/sys_dep.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

drv_dep.o: $(SOURCE_DIR)/bsd/netat/drv_dep.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_aurpd.o: $(SOURCE_DIR)/bsd/netat/aurp_aurpd.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_cfg.o: $(SOURCE_DIR)/bsd/netat/aurp_cfg.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_gdata.o: $(SOURCE_DIR)/bsd/netat/aurp_gdata.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_misc.o: $(SOURCE_DIR)/bsd/netat/aurp_misc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_open.o: $(SOURCE_DIR)/bsd/netat/aurp_open.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_rd.o: $(SOURCE_DIR)/bsd/netat/aurp_rd.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_ri.o: $(SOURCE_DIR)/bsd/netat/aurp_ri.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_rx.o: $(SOURCE_DIR)/bsd/netat/aurp_rx.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_tickle.o: $(SOURCE_DIR)/bsd/netat/aurp_tickle.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_tx.o: $(SOURCE_DIR)/bsd/netat/aurp_tx.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

aurp_zi.o: $(SOURCE_DIR)/bsd/netat/aurp_zi.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netat/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

krpc_subr.o: $(SOURCE_DIR)/bsd/nfs/krpc_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_bio.o: $(SOURCE_DIR)/bsd/nfs/nfs_bio.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_boot.o: $(SOURCE_DIR)/bsd/nfs/nfs_boot.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_node.o: $(SOURCE_DIR)/bsd/nfs/nfs_node.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_serv.o: $(SOURCE_DIR)/bsd/nfs/nfs_serv.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_socket.o: $(SOURCE_DIR)/bsd/nfs/nfs_socket.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_srvcache.o: $(SOURCE_DIR)/bsd/nfs/nfs_srvcache.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_subs.o: $(SOURCE_DIR)/bsd/nfs/nfs_subs.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_syscalls.o: $(SOURCE_DIR)/bsd/nfs/nfs_syscalls.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_vfsops.o: $(SOURCE_DIR)/bsd/nfs/nfs_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_vnops.o: $(SOURCE_DIR)/bsd/nfs/nfs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

nfs_lock.o: $(SOURCE_DIR)/bsd/nfs/nfs_lock.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/nfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

netboot.o: $(SOURCE_DIR)/bsd/kern/netboot.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_alloc.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_alloc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_balloc.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_balloc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_inode.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_inode.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_subr.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_tables.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_tables.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_vfsops.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs_vnops.o: $(SOURCE_DIR)/bsd/ufs/ffs/ffs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ffs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_attrlist.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_attrlist.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_bmap.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_bmap.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_byte_order.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_byte_order.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_ihash.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_ihash.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_inode.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_inode.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_lookup.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_lookup.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_quota.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_quota.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_vfsops.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ufs_vnops.o: $(SOURCE_DIR)/bsd/ufs/ufs/ufs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/ufs/ufs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_attrlist.o: $(SOURCE_DIR)/bsd/hfs/hfs_attrlist.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_btreeio.o: $(SOURCE_DIR)/bsd/hfs/hfs_btreeio.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_catalog.o: $(SOURCE_DIR)/bsd/hfs/hfs_catalog.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_chash.o: $(SOURCE_DIR)/bsd/hfs/hfs_chash.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_cnode.o: $(SOURCE_DIR)/bsd/hfs/hfs_cnode.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_encodinghint.o: $(SOURCE_DIR)/bsd/hfs/hfs_encodinghint.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_encodings.o: $(SOURCE_DIR)/bsd/hfs/hfs_encodings.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_endian.o: $(SOURCE_DIR)/bsd/hfs/hfs_endian.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_hotfiles.o: $(SOURCE_DIR)/bsd/hfs/hfs_hotfiles.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_link.o: $(SOURCE_DIR)/bsd/hfs/hfs_link.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_lookup.o: $(SOURCE_DIR)/bsd/hfs/hfs_lookup.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_notification.o: $(SOURCE_DIR)/bsd/hfs/hfs_notification.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_quota.o: $(SOURCE_DIR)/bsd/hfs/hfs_quota.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_readwrite.o: $(SOURCE_DIR)/bsd/hfs/hfs_readwrite.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_search.o: $(SOURCE_DIR)/bsd/hfs/hfs_search.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_vfsops.o: $(SOURCE_DIR)/bsd/hfs/hfs_vfsops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_vfsutils.o: $(SOURCE_DIR)/bsd/hfs/hfs_vfsutils.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_vnops.o: $(SOURCE_DIR)/bsd/hfs/hfs_vnops.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

hfs_xattr.o: $(SOURCE_DIR)/bsd/hfs/hfs_xattr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

MacOSStubs.o: $(SOURCE_DIR)/bsd/hfs/MacOSStubs.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

rangelist.o: $(SOURCE_DIR)/bsd/hfs/rangelist.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTree.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTree.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeAllocate.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeAllocate.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeMiscOps.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeMiscOps.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeNodeOps.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeNodeOps.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeNodeReserve.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeNodeReserve.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeScanner.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeScanner.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeTreeOps.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/BTreeTreeOps.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/BTree/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

CatalogUtilities.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/Catalog/CatalogUtilities.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/Catalog/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

FileIDsServices.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/Catalog/FileIDsServices.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/Catalog/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

BTreeWrapper.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/BTreeWrapper.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

FileExtentMapping.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/FileExtentMapping.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

VolumeAllocation.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/VolumeAllocation.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/Misc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

UnicodeWrappers.o: $(SOURCE_DIR)/bsd/hfs/hfscommon/Unicode/UnicodeWrappers.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/hfs/hfscommon/Unicode/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

bsd_init.o: $(SOURCE_DIR)/bsd/kern/bsd_init.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

init_sysent.o: $(SOURCE_DIR)/bsd/kern/init_sysent.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kdebug.o: $(SOURCE_DIR)/bsd/kern/kdebug.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_acct.o: $(SOURCE_DIR)/bsd/kern/kern_acct.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_aio.o: $(SOURCE_DIR)/bsd/kern/kern_aio.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_audit.o: $(SOURCE_DIR)/bsd/kern/kern_audit.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_authorization.o: $(SOURCE_DIR)/bsd/kern/kern_authorization.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_bsm_token.o: $(SOURCE_DIR)/bsd/kern/kern_bsm_token.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_bsm_audit.o: $(SOURCE_DIR)/bsd/kern/kern_bsm_audit.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_bsm_klib.o: $(SOURCE_DIR)/bsd/kern/kern_bsm_klib.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_clock.o: $(SOURCE_DIR)/bsd/kern/kern_clock.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_core.o: $(SOURCE_DIR)/bsd/kern/kern_core.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_credential.o: $(SOURCE_DIR)/bsd/kern/kern_credential.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_symfile.o: $(SOURCE_DIR)/bsd/kern/kern_symfile.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_descrip.o: $(SOURCE_DIR)/bsd/kern/kern_descrip.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_event.o: $(SOURCE_DIR)/bsd/kern/kern_event.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_control.o: $(SOURCE_DIR)/bsd/kern/kern_control.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_exec.o: $(SOURCE_DIR)/bsd/kern/kern_exec.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_exit.o: $(SOURCE_DIR)/bsd/kern/kern_exit.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_lockf.o: $(SOURCE_DIR)/bsd/kern/kern_lockf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_fork.o: $(SOURCE_DIR)/bsd/kern/kern_fork.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_ktrace.o: $(SOURCE_DIR)/bsd/kern/kern_ktrace.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_lock.o: $(SOURCE_DIR)/bsd/kern/kern_lock.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_malloc.o: $(SOURCE_DIR)/bsd/kern/kern_malloc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_mman.o: $(SOURCE_DIR)/bsd/kern/kern_mman.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_panicinfo.o: $(SOURCE_DIR)/bsd/kern/kern_panicinfo.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_physio.o: $(SOURCE_DIR)/bsd/kern/kern_physio.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_proc.o: $(SOURCE_DIR)/bsd/kern/kern_proc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_prot.o: $(SOURCE_DIR)/bsd/kern/kern_prot.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_resource.o: $(SOURCE_DIR)/bsd/kern/kern_resource.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_shutdown.o: $(SOURCE_DIR)/bsd/kern/kern_shutdown.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_sig.o: $(SOURCE_DIR)/bsd/kern/kern_sig.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_subr.o: $(SOURCE_DIR)/bsd/kern/kern_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_synch.o: $(SOURCE_DIR)/bsd/kern/kern_synch.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_sysctl.o: $(SOURCE_DIR)/bsd/kern/kern_sysctl.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_newsysctl.o: $(SOURCE_DIR)/bsd/kern/kern_newsysctl.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_mib.o: $(SOURCE_DIR)/bsd/kern/kern_mib.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_mbuf.o: $(SOURCE_DIR)/bsd/kern/kpi_mbuf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sysctl_init.o: $(SOURCE_DIR)/bsd/kern/sysctl_init.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_time.o: $(SOURCE_DIR)/bsd/kern/kern_time.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_xxx.o: $(SOURCE_DIR)/bsd/kern/kern_xxx.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_process.o: $(SOURCE_DIR)/bsd/kern/mach_process.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_pcsamples.o: $(SOURCE_DIR)/bsd/kern/kern_pcsamples.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

spl.o: $(SOURCE_DIR)/bsd/kern/spl.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

subr_log.o: $(SOURCE_DIR)/bsd/kern/subr_log.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

subr_prf.o: $(SOURCE_DIR)/bsd/kern/subr_prf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

subr_prof.o: $(SOURCE_DIR)/bsd/kern/subr_prof.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

subr_xxx.o: $(SOURCE_DIR)/bsd/kern/subr_xxx.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sys_generic.o: $(SOURCE_DIR)/bsd/kern/sys_generic.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sys_pipe.o: $(SOURCE_DIR)/bsd/kern/sys_pipe.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sys_socket.o: $(SOURCE_DIR)/bsd/kern/sys_socket.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sys_domain.o: $(SOURCE_DIR)/bsd/kern/sys_domain.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

syscalls.o: $(SOURCE_DIR)/bsd/kern/syscalls.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tty.o: $(SOURCE_DIR)/bsd/kern/tty.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tty_compat.o: $(SOURCE_DIR)/bsd/kern/tty_compat.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tty_conf.o: $(SOURCE_DIR)/bsd/kern/tty_conf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tty_pty.o: $(SOURCE_DIR)/bsd/kern/tty_pty.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tty_subr.o: $(SOURCE_DIR)/bsd/kern/tty_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

tty_tty.o: $(SOURCE_DIR)/bsd/kern/tty_tty.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ubc_subr.o: $(SOURCE_DIR)/bsd/kern/ubc_subr.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_domain.o: $(SOURCE_DIR)/bsd/kern/uipc_domain.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_mbuf.o: $(SOURCE_DIR)/bsd/kern/uipc_mbuf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_mbuf2.o: $(SOURCE_DIR)/bsd/kern/uipc_mbuf2.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_proto.o: $(SOURCE_DIR)/bsd/kern/uipc_proto.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_socket.o: $(SOURCE_DIR)/bsd/kern/uipc_socket.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_socket2.o: $(SOURCE_DIR)/bsd/kern/uipc_socket2.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_syscalls.o: $(SOURCE_DIR)/bsd/kern/uipc_syscalls.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

uipc_usrreq.o: $(SOURCE_DIR)/bsd/kern/uipc_usrreq.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sysv_ipc.o: $(SOURCE_DIR)/bsd/kern/sysv_ipc.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sysv_shm.o: $(SOURCE_DIR)/bsd/kern/sysv_shm.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sysv_sem.o: $(SOURCE_DIR)/bsd/kern/sysv_sem.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

sysv_msg.o: $(SOURCE_DIR)/bsd/kern/sysv_msg.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_fat.o: $(SOURCE_DIR)/bsd/kern/mach_fat.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_header.o: $(SOURCE_DIR)/bsd/kern/mach_header.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mach_loader.o: $(SOURCE_DIR)/bsd/kern/mach_loader.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

posix_sem.o: $(SOURCE_DIR)/bsd/kern/posix_sem.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

posix_shm.o: $(SOURCE_DIR)/bsd/kern/posix_shm.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

qsort.o: $(SOURCE_DIR)/bsd/kern/qsort.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_socket.o: $(SOURCE_DIR)/bsd/kern/kpi_socket.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kpi_socketfilter.o: $(SOURCE_DIR)/bsd/kern/kpi_socketfilter.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

proc_info.o: $(SOURCE_DIR)/bsd/kern/proc_info.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

socket_info.o: $(SOURCE_DIR)/bsd/kern/socket_info.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vnode_pager.o: $(SOURCE_DIR)/bsd/vm/vnode_pager.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

vm_unix.o: $(SOURCE_DIR)/bsd/vm/vm_unix.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

dp_backing_file.o: $(SOURCE_DIR)/bsd/vm/dp_backing_file.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/vm/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ux_exception.o: $(SOURCE_DIR)/bsd/uxkern/ux_exception.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/uxkern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

param.o: $(SOURCE_DIR)/bsd/conf/param.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/conf/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ioconf.o: ioconf.c
	${C_RULE_1A}${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_bsd_callback.o: $(SOURCE_DIR)/bsd/dev/chud/chud_bsd_callback.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

chud_process.o: $(SOURCE_DIR)/bsd/dev/chud/chud_process.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/chud/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

in_cksum.o: $(SOURCE_DIR)/bsd/netinet/in_cksum.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/netinet/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

conf.o: $(SOURCE_DIR)/bsd/dev/ppc/conf.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

cons.o: $(SOURCE_DIR)/bsd/dev/ppc/cons.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

mem.o: $(SOURCE_DIR)/bsd/dev/ppc/mem.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

unix_signal.o: $(SOURCE_DIR)/bsd/dev/ppc/unix_signal.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

ffs.o: $(SOURCE_DIR)/bsd/dev/ppc/ffs.s
	${S_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

memmove.o: $(SOURCE_DIR)/bsd/dev/ppc/memmove.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

machdep.o: $(SOURCE_DIR)/bsd/dev/ppc/machdep.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

kern_machdep.o: $(SOURCE_DIR)/bsd/dev/ppc/kern_machdep.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

stubs.o: $(SOURCE_DIR)/bsd/dev/ppc/stubs.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

systemcalls.o: $(SOURCE_DIR)/bsd/dev/ppc/systemcalls.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

km.o: $(SOURCE_DIR)/bsd/dev/ppc/km.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

xsumas.o: $(SOURCE_DIR)/bsd/dev/ppc/xsumas.s
	${S_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

sysctl.o: $(SOURCE_DIR)/bsd/dev/ppc/sysctl.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}

munge.o: $(SOURCE_DIR)/bsd/dev/ppc/munge.s
	${S_RULE_1A}$(SOURCE_DIR)/bsd/dev/ppc/${S_RULE_1B}
	${S_RULE_2}
	${S_RULE_3}

bsd_stubs.o: $(SOURCE_DIR)/bsd/kern/bsd_stubs.c
	${C_RULE_1A}$(SOURCE_DIR)/bsd/kern/${C_RULE_1B}
	${C_RULE_2}
	${C_RULE_3}
	${C_RULE_4}


include $(MakeInc_rule)
include $(MakeInc_dir)

