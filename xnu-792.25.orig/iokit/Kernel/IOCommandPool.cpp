/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*
 *
 *	Copyright (c) 2000 Apple Computer, Inc.  All rights reserved.
 *
 *	HISTORY
 *
 *	2001-01-17	gvdl	Re-implement on IOCommandGate::commandSleep
 *	10/9/2000	CJS	Created IOCommandPool class and implementation
 *
 */

#include <IOKit/IOCommandPool.h>

#define super OSObject
OSDefineMetaClassAndStructors(IOCommandPool, OSObject);
OSMetaClassDefineReservedUnused(IOCommandPool, 0);
OSMetaClassDefineReservedUnused(IOCommandPool, 1);
OSMetaClassDefineReservedUnused(IOCommandPool, 2);
OSMetaClassDefineReservedUnused(IOCommandPool, 3);
OSMetaClassDefineReservedUnused(IOCommandPool, 4);
OSMetaClassDefineReservedUnused(IOCommandPool, 5);
OSMetaClassDefineReservedUnused(IOCommandPool, 6);
OSMetaClassDefineReservedUnused(IOCommandPool, 7);

//--------------------------------------------------------------------------
//	withWorkLoop -	primary initializer and factory method
//--------------------------------------------------------------------------

IOCommandPool *IOCommandPool::
withWorkLoop(IOWorkLoop *inWorkLoop)
{
    IOCommandPool * me = new IOCommandPool;
    
    if (me && !me->initWithWorkLoop(inWorkLoop)) {
        me->release();
        return 0;
    }
    
    return me;
}


bool IOCommandPool::
initWithWorkLoop(IOWorkLoop *inWorkLoop)
{
    assert(inWorkLoop);
    
    if (!super::init())
        return false;
    
    queue_init(&fQueueHead);
    
    fSerializer = IOCommandGate::commandGate(this);
    assert(fSerializer);
    if (!fSerializer)
        return false;
    
    if (kIOReturnSuccess != inWorkLoop->addEventSource(fSerializer))
        return false;
    
    return true;
}

//--------------------------------------------------------------------------
//	commandPool & init -	obsolete initializer and factory method
//--------------------------------------------------------------------------

IOCommandPool *IOCommandPool::
commandPool(IOService * inOwner, IOWorkLoop *inWorkLoop, UInt32 inSize)
{
    IOCommandPool * me = new IOCommandPool;
    
    if (me && !me->init(inOwner, inWorkLoop, inSize)) {
        me->release();
        return 0;
    }
    
    return me;
}

bool IOCommandPool::
init(IOService */* inOwner */, IOWorkLoop *inWorkLoop, UInt32 /* inSize */)
{
    return initWithWorkLoop(inWorkLoop);
}


//--------------------------------------------------------------------------
//	free -	free all allocated resources
//--------------------------------------------------------------------------

void
IOCommandPool::free(void)
{
    if (fSerializer) {
        // remove our event source from owner's workloop
        IOWorkLoop *wl = fSerializer->getWorkLoop();
        if (wl)
            wl->removeEventSource(fSerializer);
        
        fSerializer->release();
        fSerializer = 0;
    }
            
    // Tell our superclass to cleanup too
    super::free();
}


//--------------------------------------------------------------------------
//	getCommand -	Gets a command from the pool. Pass true in
//			blockForCommand if you want your thread to sleep
//			waiting for resources
//--------------------------------------------------------------------------

IOCommand *
IOCommandPool::getCommand(bool blockForCommand)
{
    IOReturn	 result  = kIOReturnSuccess;
    IOCommand *command = 0;

    IOCommandGate::Action func = OSMemberFunctionCast(
	    IOCommandGate::Action, this, &IOCommandPool::gatedGetCommand);
    result = fSerializer->
	runAction(func, (void *) &command, (void *) blockForCommand);
    if (kIOReturnSuccess == result)
        return command;
    else
        return 0;
}


//--------------------------------------------------------------------------
//	gatedGetCommand -	Static callthrough function
//				(on safe side of command gate)
//--------------------------------------------------------------------------

IOReturn IOCommandPool::
gatedGetCommand(IOCommand **command, bool blockForCommand)
{
    while (queue_empty(&fQueueHead)) {
        if (!blockForCommand)
            return kIOReturnNoResources;

        fSleepers++;
        fSerializer->commandSleep(&fSleepers, THREAD_UNINT);
    }

    queue_remove_first(&fQueueHead,
                       *command, IOCommand *, fCommandChain);
    return kIOReturnSuccess;
}


//--------------------------------------------------------------------------
//	returnCommand -		Returns command to the pool.
//--------------------------------------------------------------------------

void IOCommandPool::
returnCommand(IOCommand *command)
{
    IOCommandGate::Action func = OSMemberFunctionCast(
	    IOCommandGate::Action, this, &IOCommandPool::gatedReturnCommand);
    (void) fSerializer->runAction(func, (void *) command);
}


//--------------------------------------------------------------------------
//	gatedReturnCommand -	Callthrough function
// 				(on safe side of command gate)
//--------------------------------------------------------------------------

IOReturn IOCommandPool::
gatedReturnCommand(IOCommand *command)
{
    queue_enter_first(&fQueueHead, command, IOCommand *, fCommandChain);
    if (fSleepers) {
        fSerializer->commandWakeup(&fSleepers, /* oneThread */ true);
        fSleepers--;
    }
    return kIOReturnSuccess;
}
