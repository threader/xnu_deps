/*
 * Copyright (c) 2000-2010 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1982, 1986, 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)raw_ip.c	8.7 (Berkeley) 5/15/95
 */
/*
 * NOTICE: This file was modified by SPARTA, Inc. in 2005 to introduce
 * support for mandatory and extensible security protections.  This notice
 * is included in support of clause 2.2 (b) of the Apple Public License,
 * Version 2.0.
 */

#include <sys/param.h>
#include <sys/systm.h>
#include <sys/kernel.h>
#include <sys/malloc.h>
#include <sys/mbuf.h>
#include <sys/proc.h>
#include <sys/domain.h>
#include <sys/protosw.h>
#include <sys/socket.h>
#include <sys/socketvar.h>
#include <sys/sysctl.h>
#include <libkern/OSAtomic.h>
#include <kern/zalloc.h>

#include <pexpert/pexpert.h>

#include <net/if.h>
#include <net/route.h>

#define _IP_VHL
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#include <netinet/in_pcb.h>
#include <netinet/in_var.h>
#include <netinet/ip_var.h>
#include <netinet/ip_mroute.h>

#if INET6
#include <netinet6/in6_pcb.h>
#endif /* INET6 */

#include <netinet/ip_fw.h>

#if IPSEC
#include <netinet6/ipsec.h>
#endif /*IPSEC*/

#if DUMMYNET
#include <netinet/ip_dummynet.h>
#endif

#if CONFIG_MACF_NET
#include <security/mac_framework.h>
#endif /* MAC_NET */

int load_ipfw(void);
int rip_detach(struct socket *);
int rip_abort(struct socket *);
int rip_disconnect(struct socket *);
int rip_bind(struct socket *, struct sockaddr *, struct proc *);
int rip_connect(struct socket *, struct sockaddr *, struct proc *);
int rip_shutdown(struct socket *);
 
#if IPSEC
extern int ipsec_bypass;
#endif

struct	inpcbhead ripcb;
struct	inpcbinfo ripcbinfo;

/* control hooks for ipfw and dummynet */
#if IPFIREWALL
ip_fw_ctl_t *ip_fw_ctl_ptr;
#if DUMMYNET
ip_dn_ctl_t *ip_dn_ctl_ptr;
#endif /* DUMMYNET */
#endif /* IPFIREWALL */

/*
 * Nominal space allocated to a raw ip socket.
 */
#define	RIPSNDQ		8192
#define	RIPRCVQ		8192

/*
 * Raw interface to IP protocol.
 */

/*
 * Initialize raw connection block q.
 */
void
rip_init()
{
    	struct inpcbinfo *pcbinfo;

	LIST_INIT(&ripcb);
	ripcbinfo.listhead = &ripcb;
	/*
	 * XXX We don't use the hash list for raw IP, but it's easier
	 * to allocate a one entry hash list than it is to check all
	 * over the place for hashbase == NULL.
	 */
	ripcbinfo.hashbase = hashinit(1, M_PCB, &ripcbinfo.hashmask);
	ripcbinfo.porthashbase = hashinit(1, M_PCB, &ripcbinfo.porthashmask);

	ripcbinfo.ipi_zone = (void *) zinit(sizeof(struct inpcb),
					    (4096 * sizeof(struct inpcb)), 
					    4096, "ripzone");

	pcbinfo = &ripcbinfo;
        /*
	 * allocate lock group attribute and group for udp pcb mutexes
	 */
	pcbinfo->mtx_grp_attr = lck_grp_attr_alloc_init();

	pcbinfo->mtx_grp = lck_grp_alloc_init("ripcb", pcbinfo->mtx_grp_attr);
		
	/*
	 * allocate the lock attribute for udp pcb mutexes
	 */
	pcbinfo->mtx_attr = lck_attr_alloc_init();

	if ((pcbinfo->mtx = lck_rw_alloc_init(pcbinfo->mtx_grp, pcbinfo->mtx_attr)) == NULL)
		return;	/* pretty much dead if this fails... */

}

static struct	sockaddr_in ripsrc = { sizeof(ripsrc), AF_INET , 0, {0}, {0,0,0,0,0,0,0,0,} };
/*
 * Setup generic address and protocol structures
 * for raw_input routine, then pass them along with
 * mbuf chain.
 */
void
rip_input(m, iphlen)
	struct mbuf *m;
	int iphlen;
{
	register struct ip *ip = mtod(m, struct ip *);
	register struct inpcb *inp;
	struct inpcb *last = 0;
	struct mbuf *opts = 0;
	int skipit;

	ripsrc.sin_addr = ip->ip_src;
	lck_rw_lock_shared(ripcbinfo.mtx);
	LIST_FOREACH(inp, &ripcb, inp_list) {
#if INET6
		if ((inp->inp_vflag & INP_IPV4) == 0)
			continue;
#endif
		if (inp->inp_ip_p && (inp->inp_ip_p != ip->ip_p))
			continue;
		if (inp->inp_laddr.s_addr &&
                  inp->inp_laddr.s_addr != ip->ip_dst.s_addr)
			continue;
		if (inp->inp_faddr.s_addr &&
                  inp->inp_faddr.s_addr != ip->ip_src.s_addr)
			continue;
		if (last) {
			struct mbuf *n = m_copy(m, 0, (int)M_COPYALL);
		
#if IPSEC
			/* check AH/ESP integrity. */
			skipit = 0;
			if (ipsec_bypass == 0 && n) {
				if (ipsec4_in_reject_so(n, last->inp_socket)) {
					m_freem(n);
					IPSEC_STAT_INCREMENT(ipsecstat.in_polvio);
					/* do not inject data to pcb */
					skipit = 1;
				}
			} 
#endif /*IPSEC*/
#if CONFIG_MACF_NET
			if (n && skipit == 0) {
				if (mac_inpcb_check_deliver(last, n, AF_INET,
				    SOCK_RAW) != 0)
					skipit = 1;
			}
#endif
			if (n && skipit == 0) {
				int error = 0;
				if (last->inp_flags & INP_CONTROLOPTS ||
				    last->inp_socket->so_options & SO_TIMESTAMP)
				    ip_savecontrol(last, &opts, ip, n);
				if (last->inp_flags & INP_STRIPHDR) {
					n->m_len -= iphlen;
					n->m_pkthdr.len -= iphlen;
					n->m_data += iphlen;
				}
// ###LOCK need to lock that socket?
				if (sbappendaddr(&last->inp_socket->so_rcv,
				    (struct sockaddr *)&ripsrc, n,
				    opts, &error) != 0) {
					sorwakeup(last->inp_socket);
				}
				else {
					if (error) {
						/* should notify about lost packet */
						kprintf("rip_input can't append to socket\n");
					}
				}
				opts = 0;
			}
		}
		last = inp;
	}
	lck_rw_done(ripcbinfo.mtx);
#if IPSEC
	/* check AH/ESP integrity. */
	skipit = 0;
	if (ipsec_bypass == 0 && last) {
		if (ipsec4_in_reject_so(m, last->inp_socket)) {
			m_freem(m);
			IPSEC_STAT_INCREMENT(ipsecstat.in_polvio);
			OSAddAtomic(1, &ipstat.ips_delivered);
			/* do not inject data to pcb */
			skipit = 1;
		}
	} 
#endif /*IPSEC*/
#if CONFIG_MACF_NET
	if (last && skipit == 0) {
		if (mac_inpcb_check_deliver(last, m, AF_INET, SOCK_RAW) != 0)
			skipit = 1;
	}
#endif
	if (skipit == 0) {
		if (last) {
			if (last->inp_flags & INP_CONTROLOPTS ||
				last->inp_socket->so_options & SO_TIMESTAMP)
				ip_savecontrol(last, &opts, ip, m);
			if (last->inp_flags & INP_STRIPHDR) {
				m->m_len -= iphlen;
				m->m_pkthdr.len -= iphlen;
				m->m_data += iphlen;
			}
			if (sbappendaddr(&last->inp_socket->so_rcv,
				(struct sockaddr *)&ripsrc, m, opts, NULL) != 0) {
				sorwakeup(last->inp_socket);
			} else {
				kprintf("rip_input(2) can't append to socket\n");
			}
		} else {
			m_freem(m);
			OSAddAtomic(1, &ipstat.ips_noproto);
			OSAddAtomic(-1, &ipstat.ips_delivered);
		}
	}
}

/*
 * Generate IP header and pass packet to ip_output.
 * Tack on options user may have setup with control call.
 */
int
rip_output(
	struct mbuf *m,
	struct socket *so,
	u_int32_t dst,
	struct mbuf *control)
{
	register struct ip *ip;
	register struct inpcb *inp = sotoinpcb(so);
	int flags = (so->so_options & SO_DONTROUTE) | IP_ALLOWBROADCAST;
	struct ip_out_args ipoa;
	int error = 0;
#if PKT_PRIORITY
	mbuf_traffic_class_t mtc = MBUF_TC_NONE;
#endif /* PKT_PRIORITY */

	if (control != NULL) {
#if PKT_PRIORITY
		mtc = mbuf_traffic_class_from_control(control);
#endif /* PKT_PRIORITY */

		m_freem(control);
	}
	/* If socket was bound to an ifindex, tell ip_output about it */
	ipoa.ipoa_ifscope = (inp->inp_flags & INP_BOUND_IF) ?
	    inp->inp_boundif : IFSCOPE_NONE;
	flags |= IP_OUTARGS;

	/*
	 * If the user handed us a complete IP packet, use it.
	 * Otherwise, allocate an mbuf for a header and fill it in.
	 */
	if ((inp->inp_flags & INP_HDRINCL) == 0) {
		if (m->m_pkthdr.len + sizeof(struct ip) > IP_MAXPACKET) {
			m_freem(m);
			return(EMSGSIZE);
		}
		M_PREPEND(m, sizeof(struct ip), M_WAIT);
		if (m == NULL)
			return ENOBUFS;
		ip = mtod(m, struct ip *);
		ip->ip_tos = inp->inp_ip_tos;
		ip->ip_off = 0;
		ip->ip_p = inp->inp_ip_p;
		ip->ip_len = m->m_pkthdr.len;
		ip->ip_src = inp->inp_laddr;
		ip->ip_dst.s_addr = dst;
		ip->ip_ttl = inp->inp_ip_ttl;
	} else {
		if (m->m_pkthdr.len > IP_MAXPACKET) {
			m_freem(m);
			return(EMSGSIZE);
		}
		ip = mtod(m, struct ip *);
		/* don't allow both user specified and setsockopt options,
		   and don't allow packet length sizes that will crash */
		if (((IP_VHL_HL(ip->ip_vhl) != (sizeof (*ip) >> 2))
		     && inp->inp_options)
		    || (ip->ip_len > m->m_pkthdr.len)
		    || (ip->ip_len < (IP_VHL_HL(ip->ip_vhl) << 2))) {
			m_freem(m);
			return EINVAL;
		}
		if (ip->ip_id == 0)
#if RANDOM_IP_ID
			ip->ip_id = ip_randomid();
#else
			ip->ip_id = htons(ip_id++);
#endif
		/* XXX prevent ip_output from overwriting header fields */
		flags |= IP_RAWOUTPUT;
		OSAddAtomic(1, &ipstat.ips_rawout);
	}

#if IPSEC
	if (ipsec_bypass == 0 && ipsec_setsocket(m, so) != 0) {
		m_freem(m);
		return ENOBUFS;
	}
#endif /*IPSEC*/

	if (inp->inp_route.ro_rt != NULL &&
	    inp->inp_route.ro_rt->generation_id != route_generation) {
		rtfree(inp->inp_route.ro_rt);
		inp->inp_route.ro_rt = NULL;
	}

#if PKT_PRIORITY
	set_traffic_class(m, so, mtc);
#endif /* PKT_PRIORITY */

#if CONFIG_MACF_NET
	mac_mbuf_label_associate_inpcb(inp, m);
#endif

	/*
	 * The domain lock is held across ip_output, so it is okay
	 * to pass the PCB cached route pointer directly to IP and
	 * the modules beneath it.
	 */
	error = ip_output(m, inp->inp_options, &inp->inp_route, flags,
	    inp->inp_moptions, &ipoa);

#if IFNET_ROUTE_REFCNT
	/*
	 * Always discard the cached route for unconnected socket
	 * or if it is a non-unicast route.
	 */
	if (inp->inp_route.ro_rt != NULL &&
	    ((inp->inp_route.ro_rt->rt_flags & (RTF_MULTICAST|RTF_BROADCAST)) ||
	    inp->inp_socket == NULL ||
	    inp->inp_socket->so_state != SS_ISCONNECTED)) {
		rtfree(inp->inp_route.ro_rt);
		inp->inp_route.ro_rt = NULL;
	}
#endif /* IFNET_ROUTE_REFCNT */

	return (error);
}

#if IPFIREWALL
int
load_ipfw(void)
{
	kern_return_t	err;
	
	ipfw_init();
	
#if DUMMYNET
	if (!DUMMYNET_LOADED)
		ip_dn_init();
#endif /* DUMMYNET */
	err = 0;
	
	return err == 0 && ip_fw_ctl_ptr == NULL ? -1 : err;
}
#endif /* IPFIREWALL */

/*
 * Raw IP socket option processing.
 */
int
rip_ctloutput(so, sopt)
	struct socket *so;
	struct sockopt *sopt;
{
	struct	inpcb *inp = sotoinpcb(so);
	int	error, optval;

	if (sopt->sopt_level != IPPROTO_IP)
		return (EINVAL);

	error = 0;

	switch (sopt->sopt_dir) {
	case SOPT_GET:
		switch (sopt->sopt_name) {
		case IP_HDRINCL:
			optval = inp->inp_flags & INP_HDRINCL;
			error = sooptcopyout(sopt, &optval, sizeof optval);
			break;

        case IP_STRIPHDR:
            optval = inp->inp_flags & INP_STRIPHDR;
            error = sooptcopyout(sopt, &optval, sizeof optval);
            break;

#if IPFIREWALL
		case IP_FW_ADD:
		case IP_FW_GET:
		case IP_OLD_FW_ADD:
		case IP_OLD_FW_GET:
			if (ip_fw_ctl_ptr == 0)
				error = load_ipfw();
			if (ip_fw_ctl_ptr && error == 0)
				error = ip_fw_ctl_ptr(sopt);
			else
				error = ENOPROTOOPT;
			break;
#endif /* IPFIREWALL */

#if DUMMYNET
		case IP_DUMMYNET_GET:
			if (DUMMYNET_LOADED)
				error = ip_dn_ctl_ptr(sopt);
			else
				error = ENOPROTOOPT;
			break ;
#endif /* DUMMYNET */

#if MROUTING
		case MRT_INIT:
		case MRT_DONE:
		case MRT_ADD_VIF:
		case MRT_DEL_VIF:
		case MRT_ADD_MFC:
		case MRT_DEL_MFC:
		case MRT_VERSION:
		case MRT_ASSERT:
			error = ip_mrouter_get(so, sopt);
			break;
#endif /* MROUTING */

		default:
			error = ip_ctloutput(so, sopt);
			break;
		}
		break;

	case SOPT_SET:
		switch (sopt->sopt_name) {
		case IP_HDRINCL:
			error = sooptcopyin(sopt, &optval, sizeof optval,
					    sizeof optval);
			if (error)
				break;
			if (optval)
				inp->inp_flags |= INP_HDRINCL;
			else
				inp->inp_flags &= ~INP_HDRINCL;
			break;

        case IP_STRIPHDR:
            error = sooptcopyin(sopt, &optval, sizeof optval,
                        sizeof optval);
            if (error)
                break;
            if (optval)
                inp->inp_flags |= INP_STRIPHDR;
            else
                inp->inp_flags &= ~INP_STRIPHDR;
            break;


#if IPFIREWALL
		case IP_FW_ADD:
		case IP_FW_DEL:
		case IP_FW_FLUSH:
		case IP_FW_ZERO:
		case IP_FW_RESETLOG:
		case IP_OLD_FW_ADD:
		case IP_OLD_FW_DEL:
		case IP_OLD_FW_FLUSH:
		case IP_OLD_FW_ZERO:
		case IP_OLD_FW_RESETLOG:
			if (ip_fw_ctl_ptr == 0)
				error = load_ipfw();
			if (ip_fw_ctl_ptr && error == 0)
				error = ip_fw_ctl_ptr(sopt);
			else
				error = ENOPROTOOPT;
			break;
#endif /* IPFIREWALL */

#if DUMMYNET
		case IP_DUMMYNET_CONFIGURE:
		case IP_DUMMYNET_DEL:
		case IP_DUMMYNET_FLUSH:
			if (DUMMYNET_LOADED)
				error = ip_dn_ctl_ptr(sopt);
			else
				error = ENOPROTOOPT ;
			break ;
#endif

#if MROUTING
		case IP_RSVP_ON:
			error = ip_rsvp_init(so);
			break;

		case IP_RSVP_OFF:
			error = ip_rsvp_done();
			break;

			/* XXX - should be combined */
		case IP_RSVP_VIF_ON:
			error = ip_rsvp_vif_init(so, sopt);
			break;
			
		case IP_RSVP_VIF_OFF:
			error = ip_rsvp_vif_done(so, sopt);
			break;
		
		case MRT_INIT:
		case MRT_DONE:
		case MRT_ADD_VIF:
		case MRT_DEL_VIF:
		case MRT_ADD_MFC:
		case MRT_DEL_MFC:
		case MRT_VERSION:
		case MRT_ASSERT:
			error = ip_mrouter_set(so, sopt);
			break;
#endif /* MROUTING */

		default:
			error = ip_ctloutput(so, sopt);
			break;
		}
		break;
	}

	return (error);
}

/*
 * This function exists solely to receive the PRC_IFDOWN messages which
 * are sent by if_down().  It looks for an ifaddr whose ifa_addr is sa,
 * and calls in_ifadown() to remove all routes corresponding to that address.
 * It also receives the PRC_IFUP messages from if_up() and reinstalls the
 * interface routes.
 */
void
rip_ctlinput(
	int cmd,
	struct sockaddr *sa,
	__unused void *vip)
{
	struct in_ifaddr *ia;
	struct ifnet *ifp;
	int err;
	int flags, done = 0;

	switch (cmd) {
	case PRC_IFDOWN:
		lck_rw_lock_shared(in_ifaddr_rwlock);
		for (ia = in_ifaddrhead.tqh_first; ia;
		     ia = ia->ia_link.tqe_next) {
			if (ia->ia_ifa.ifa_addr == sa
			    && (ia->ia_flags & IFA_ROUTE)) {
				done = 1;
				ifaref(&ia->ia_ifa);
				lck_rw_done(in_ifaddr_rwlock);
				lck_mtx_lock(rnh_lock);
				/*
				 * in_ifscrub kills the interface route.
				 */
				in_ifscrub(ia->ia_ifp, ia, 1);
				/*
				 * in_ifadown gets rid of all the rest of
				 * the routes.  This is not quite the right
				 * thing to do, but at least if we are running
				 * a routing process they will come back.
				 */
				in_ifadown(&ia->ia_ifa, 1);
				lck_mtx_unlock(rnh_lock);
				ifafree(&ia->ia_ifa);
				break;
			}
		}
		if (!done)
			lck_rw_done(in_ifaddr_rwlock);
		break;

	case PRC_IFUP:
		lck_rw_lock_shared(in_ifaddr_rwlock);
		for (ia = in_ifaddrhead.tqh_first; ia;
		     ia = ia->ia_link.tqe_next) {
			if (ia->ia_ifa.ifa_addr == sa)
				break;
		}
		if (ia == 0 || (ia->ia_flags & IFA_ROUTE)) {
			lck_rw_done(in_ifaddr_rwlock);
			return;
		}
		ifaref(&ia->ia_ifa);
		lck_rw_done(in_ifaddr_rwlock);

		flags = RTF_UP;
		ifp = ia->ia_ifa.ifa_ifp;

		if ((ifp->if_flags & IFF_LOOPBACK)
		    || (ifp->if_flags & IFF_POINTOPOINT))
			flags |= RTF_HOST;

		err = rtinit(&ia->ia_ifa, RTM_ADD, flags);
		if (err == 0)
			ia->ia_flags |= IFA_ROUTE;
		ifafree(&ia->ia_ifa);
		break;
	}
}

u_int32_t	rip_sendspace = RIPSNDQ;
u_int32_t	rip_recvspace = RIPRCVQ;

SYSCTL_INT(_net_inet_raw, OID_AUTO, maxdgram, CTLFLAG_RW,
    &rip_sendspace, 0, "Maximum outgoing raw IP datagram size");
SYSCTL_INT(_net_inet_raw, OID_AUTO, recvspace, CTLFLAG_RW,
    &rip_recvspace, 0, "Maximum incoming raw IP datagram size");

static int
rip_attach(struct socket *so, int proto, struct proc *p)
{
	struct inpcb *inp;
	int error;

	inp = sotoinpcb(so);
	if (inp)
		panic("rip_attach");
	if ((so->so_state & SS_PRIV) == 0)
		return (EPERM);

	error = soreserve(so, rip_sendspace, rip_recvspace);
	if (error)
		return error;
	error = in_pcballoc(so, &ripcbinfo, p);
	if (error)
		return error;
	inp = (struct inpcb *)so->so_pcb;
	inp->inp_vflag |= INP_IPV4;
	inp->inp_ip_p = proto;
	inp->inp_ip_ttl = ip_defttl;
	return 0;
}

__private_extern__ int
rip_detach(struct socket *so)
{
	struct inpcb *inp;

	inp = sotoinpcb(so);
	if (inp == 0)
		panic("rip_detach");
#if MROUTING
	if (so == ip_mrouter)
		ip_mrouter_done();
	ip_rsvp_force_done(so);
	if (so == ip_rsvpd)
		ip_rsvp_done();
#endif /* MROUTING */
	in_pcbdetach(inp);
	return 0;
}

__private_extern__ int
rip_abort(struct socket *so)
{
	soisdisconnected(so);
	return rip_detach(so);
}

__private_extern__ int
rip_disconnect(struct socket *so)
{
	if ((so->so_state & SS_ISCONNECTED) == 0)
		return ENOTCONN;
	return rip_abort(so);
}

__private_extern__ int
rip_bind(struct socket *so, struct sockaddr *nam, __unused struct proc *p)
{
	struct inpcb *inp = sotoinpcb(so);
	struct sockaddr_in *addr = (struct sockaddr_in *)nam;
	struct ifaddr *ifa = NULL;

	if (nam->sa_len != sizeof(*addr))
		return EINVAL;

	if (TAILQ_EMPTY(&ifnet_head) || ((addr->sin_family != AF_INET) &&
				    (addr->sin_family != AF_IMPLINK)) ||
	    (addr->sin_addr.s_addr &&
	     (ifa = ifa_ifwithaddr((struct sockaddr *)addr)) == 0)) {
		return EADDRNOTAVAIL;
	}
	else if (ifa) {
		ifafree(ifa);
		ifa = NULL;
	}
	inp->inp_laddr = addr->sin_addr;
	return 0;
}

__private_extern__ int
rip_connect(struct socket *so, struct sockaddr *nam, __unused  struct proc *p)
{
	struct inpcb *inp = sotoinpcb(so);
	struct sockaddr_in *addr = (struct sockaddr_in *)nam;

	if (nam->sa_len != sizeof(*addr))
		return EINVAL;
	if (TAILQ_EMPTY(&ifnet_head))
		return EADDRNOTAVAIL;
	if ((addr->sin_family != AF_INET) &&
	    (addr->sin_family != AF_IMPLINK))
		return EAFNOSUPPORT;
	inp->inp_faddr = addr->sin_addr;
	soisconnected(so);
	return 0;
}

__private_extern__ int
rip_shutdown(struct socket *so)
{
	socantsendmore(so);
	return 0;
}

__private_extern__ int
rip_send(struct socket *so, __unused int flags, struct mbuf *m, struct sockaddr *nam,
	 __unused struct mbuf *control, __unused struct proc *p)
{
	struct inpcb *inp = sotoinpcb(so);
	register u_int32_t dst;

	if (so->so_state & SS_ISCONNECTED) {
		if (nam) {
			m_freem(m);
			return EISCONN;
		}
		dst = inp->inp_faddr.s_addr;
	} else {
		if (nam == NULL) {
			m_freem(m);
			return ENOTCONN;
		}
		dst = ((struct sockaddr_in *)nam)->sin_addr.s_addr;
	}
	return rip_output(m, so, dst, control);
}

/* note: rip_unlock is called from different protos  instead of the generic socket_unlock,
 * it will handle the socket dealloc on last reference 
 * */
int
rip_unlock(struct socket *so, int refcount, void *debug)
{
	void *lr_saved;
	struct inpcb *inp = sotoinpcb(so);

	if (debug == NULL)
		lr_saved = __builtin_return_address(0);
	else
		lr_saved = debug;

	if (refcount) {
		if (so->so_usecount <= 0) {
			panic("rip_unlock: bad refoucnt so=%p val=%x lrh= %s\n",
			    so, so->so_usecount, solockhistory_nr(so));
			/* NOTREACHED */
		}
		so->so_usecount--;
		if (so->so_usecount == 0 && (inp->inp_wantcnt == WNT_STOPUSING)) {
			/* cleanup after last reference */
			lck_mtx_unlock(so->so_proto->pr_domain->dom_mtx);
			lck_rw_lock_exclusive(ripcbinfo.mtx);
			if (inp->inp_state != INPCB_STATE_DEAD) {
#if INET6
				if (INP_CHECK_SOCKAF(so, AF_INET6))
					in6_pcbdetach(inp);
				else
#endif /* INET6 */
				in_pcbdetach(inp);
			}
			in_pcbdispose(inp);
			lck_rw_done(ripcbinfo.mtx);
			return(0);
		}
	}
	so->unlock_lr[so->next_unlock_lr] = lr_saved;
	so->next_unlock_lr = (so->next_unlock_lr+1) % SO_LCKDBG_MAX;
	lck_mtx_unlock(so->so_proto->pr_domain->dom_mtx);
	return(0);
}

static int
rip_pcblist SYSCTL_HANDLER_ARGS
{
#pragma unused(oidp, arg1, arg2)
	int error, i, n;
	struct inpcb *inp, **inp_list;
	inp_gen_t gencnt;
	struct xinpgen xig;

	/*
	 * The process of preparing the TCB list is too time-consuming and
	 * resource-intensive to repeat twice on every request.
	 */
	lck_rw_lock_exclusive(ripcbinfo.mtx);
	if (req->oldptr == USER_ADDR_NULL) {
		n = ripcbinfo.ipi_count;
		req->oldidx = 2 * (sizeof xig)
			+ (n + n/8) * sizeof(struct xinpcb);
		lck_rw_done(ripcbinfo.mtx);
		return 0;
	}

	if (req->newptr != USER_ADDR_NULL) {
		lck_rw_done(ripcbinfo.mtx);
		return EPERM;
	}

	/*
	 * OK, now we're committed to doing something.
	 */
	gencnt = ripcbinfo.ipi_gencnt;
	n = ripcbinfo.ipi_count;
	
	bzero(&xig, sizeof(xig));
	xig.xig_len = sizeof xig;
	xig.xig_count = n;
	xig.xig_gen = gencnt;
	xig.xig_sogen = so_gencnt;
	error = SYSCTL_OUT(req, &xig, sizeof xig);
	if (error) {
		lck_rw_done(ripcbinfo.mtx);
		return error;
	}
    /*
     * We are done if there is no pcb
     */
    if (n == 0) {
	lck_rw_done(ripcbinfo.mtx);
        return 0; 
    }

	inp_list = _MALLOC(n * sizeof *inp_list, M_TEMP, M_WAITOK);
	if (inp_list == 0) {
		lck_rw_done(ripcbinfo.mtx);
		return ENOMEM;
	}
	
	for (inp = ripcbinfo.listhead->lh_first, i = 0; inp && i < n;
	     inp = inp->inp_list.le_next) {
		if (inp->inp_gencnt <= gencnt && inp->inp_state != INPCB_STATE_DEAD)
			inp_list[i++] = inp;
	}
	n = i;

	error = 0;
	for (i = 0; i < n; i++) {
		inp = inp_list[i];
		if (inp->inp_gencnt <= gencnt && inp->inp_state != INPCB_STATE_DEAD) {
			struct xinpcb xi;

			bzero(&xi, sizeof(xi));
			xi.xi_len = sizeof xi;
			/* XXX should avoid extra copy */
			inpcb_to_compat(inp, &xi.xi_inp);
			if (inp->inp_socket)
				sotoxsocket(inp->inp_socket, &xi.xi_socket);
			error = SYSCTL_OUT(req, &xi, sizeof xi);
		}
	}
	if (!error) {
		/*
		 * Give the user an updated idea of our state.
		 * If the generation differs from what we told
		 * her before, she knows that something happened
		 * while we were processing this request, and it
		 * might be necessary to retry.
		 */
		bzero(&xig, sizeof(xig));
		xig.xig_len = sizeof xig;
		xig.xig_gen = ripcbinfo.ipi_gencnt;
		xig.xig_sogen = so_gencnt;
		xig.xig_count = ripcbinfo.ipi_count;
		error = SYSCTL_OUT(req, &xig, sizeof xig);
	}
	FREE(inp_list, M_TEMP);
	lck_rw_done(ripcbinfo.mtx);
	return error;
}

SYSCTL_PROC(_net_inet_raw, OID_AUTO/*XXX*/, pcblist, CTLFLAG_RD, 0, 0,
	    rip_pcblist, "S,xinpcb", "List of active raw IP sockets");

#if !CONFIG_EMBEDDED

static int
rip_pcblist64 SYSCTL_HANDLER_ARGS
{
#pragma unused(oidp, arg1, arg2)
        int error, i, n;
        struct inpcb *inp, **inp_list;
        inp_gen_t gencnt;
        struct xinpgen xig;

        /*
         * The process of preparing the TCB list is too time-consuming and
         * resource-intensive to repeat twice on every request.
         */
        lck_rw_lock_exclusive(ripcbinfo.mtx);
        if (req->oldptr == USER_ADDR_NULL) {
                n = ripcbinfo.ipi_count;
                req->oldidx = 2 * (sizeof xig)
                        + (n + n/8) * sizeof(struct xinpcb64);
                lck_rw_done(ripcbinfo.mtx);
                return 0;
        }

        if (req->newptr != USER_ADDR_NULL) {
                lck_rw_done(ripcbinfo.mtx);
                return EPERM;
        }

        /*
         * OK, now we're committed to doing something.
         */
        gencnt = ripcbinfo.ipi_gencnt;
        n = ripcbinfo.ipi_count;

        bzero(&xig, sizeof(xig));
        xig.xig_len = sizeof xig;
        xig.xig_count = n;
        xig.xig_gen = gencnt;
        xig.xig_sogen = so_gencnt;
        error = SYSCTL_OUT(req, &xig, sizeof xig);
        if (error) {
                lck_rw_done(ripcbinfo.mtx);
                return error;
        }
    /*
     * We are done if there is no pcb
     */
    if (n == 0) {
        lck_rw_done(ripcbinfo.mtx);
        return 0;
    }

        inp_list = _MALLOC(n * sizeof *inp_list, M_TEMP, M_WAITOK);
        if (inp_list == 0) {
                lck_rw_done(ripcbinfo.mtx);
                return ENOMEM;
        }

        for (inp = ripcbinfo.listhead->lh_first, i = 0; inp && i < n;
             inp = inp->inp_list.le_next) {
                if (inp->inp_gencnt <= gencnt && inp->inp_state != INPCB_STATE_DEAD)
                        inp_list[i++] = inp;
        }
        n = i;

        error = 0;
        for (i = 0; i < n; i++) {
                inp = inp_list[i];
                if (inp->inp_gencnt <= gencnt && inp->inp_state != INPCB_STATE_DEAD) {
                        struct xinpcb64 xi;

                        bzero(&xi, sizeof(xi));
                        xi.xi_len = sizeof xi;
                        inpcb_to_xinpcb64(inp, &xi);
                        if (inp->inp_socket)
                                sotoxsocket64(inp->inp_socket, &xi.xi_socket);
                        error = SYSCTL_OUT(req, &xi, sizeof xi);
                }
        }
        if (!error) {
                /*
                 * Give the user an updated idea of our state.
                 * If the generation differs from what we told
                 * her before, she knows that something happened
                 * while we were processing this request, and it
                 * might be necessary to retry.
                 */
                bzero(&xig, sizeof(xig));
                xig.xig_len = sizeof xig;
                xig.xig_gen = ripcbinfo.ipi_gencnt;
                xig.xig_sogen = so_gencnt;
                xig.xig_count = ripcbinfo.ipi_count;
                error = SYSCTL_OUT(req, &xig, sizeof xig);
        }
        FREE(inp_list, M_TEMP);
        lck_rw_done(ripcbinfo.mtx);
        return error;
}

SYSCTL_PROC(_net_inet_raw, OID_AUTO, pcblist64, CTLFLAG_RD, 0, 0,
            rip_pcblist64, "S,xinpcb64", "List of active raw IP sockets");

#endif /* !CONFIG_EMBEDDED */

struct pr_usrreqs rip_usrreqs = {
	rip_abort, pru_accept_notsupp, rip_attach, rip_bind, rip_connect,
	pru_connect2_notsupp, in_control, rip_detach, rip_disconnect,
	pru_listen_notsupp, in_setpeeraddr, pru_rcvd_notsupp,
	pru_rcvoob_notsupp, rip_send, pru_sense_null, rip_shutdown,
	in_setsockaddr, sosend, soreceive, pru_sopoll_notsupp
};
/* DSEP Review Done pl-20051213-v02 @3253 */
