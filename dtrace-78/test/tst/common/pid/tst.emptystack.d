/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2006 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#pragma ident	"@(#)tst.emptystack.d	1.1	06/08/28 SMI"

/*
 * ASSERTION: the stack() action should be empty for all pid probes
 *
 * SECTION: pid provider
 */

#pragma D option quiet

BEGIN
{
	/*
	 * Monitor the program for two seconds.
	 */
	timeout = timestamp + 1000000000 * 2;
}

pid$1:::return
{
	@[stack()] = sum(0);
}

#if !defined(__APPLE__)
pid$1:a.out::
#else
pid$1:libSystem.B.dylib:w*:
#endif
{
	@[stack()] = sum(0);
}

pid$1:::entry
{
	@[stack()] = sum(0);
}

profile:::tick-4
/timestamp > timeout/
{
	exit(0);
}
