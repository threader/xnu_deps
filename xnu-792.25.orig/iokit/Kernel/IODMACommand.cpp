/*
 * Copyright (c) 2005 Apple Computer, Inc. All rights reserved.
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

#include <IOKit/assert.h>

#include <libkern/OSTypes.h>
#include <libkern/OSByteOrder.h>

#include <IOKit/IOReturn.h>
#include <IOKit/IOLib.h>
#include <IOKit/IODMACommand.h>
#include <IOKit/IOMapper.h>
#include <IOKit/IOMemoryDescriptor.h>
#include <IOKit/IOBufferMemoryDescriptor.h>

#include "IOKitKernelInternal.h"
#include "IOCopyMapper.h"

#define MAPTYPE(type)		((UInt) (type) & kTypeMask)
#define IS_MAPPED(type)		(MAPTYPE(type) == kMapped)
#define IS_BYPASSED(type)	(MAPTYPE(type) == kBypassed)
#define IS_NONCOHERENT(type)	(MAPTYPE(type) == kNonCoherent)


static bool gIOEnableCopyMapper  = true;

enum 
{
    kWalkSyncIn       = 0x01,	// bounce -> md 
    kWalkSyncOut      = 0x02,	// bounce <- md
    kWalkSyncAlways   = 0x04,
    kWalkPreflight    = 0x08,
    kWalkDoubleBuffer = 0x10,
    kWalkPrepare      = 0x20,
    kWalkComplete     = 0x40,
    kWalkClient       = 0x80
};

struct ExpansionData
{
    IOMDDMAWalkSegmentState fState;
    IOMDDMACharacteristics  fMDSummary;

    UInt64 fPreparedOffset;
    UInt64 fPreparedLength;

    UInt8  fCursor;
    UInt8  fCheckAddressing;
    UInt8  fIterateOnly;
    UInt8  fMisaligned;
    UInt8  fCopyContig;
    UInt8  fPrepared;
    UInt8  fDoubleBuffer;
    UInt8  __pad[1];

    ppnum_t  fCopyPageAlloc;
    ppnum_t  fCopyPageCount;
    addr64_t fCopyNext;

    class IOBufferMemoryDescriptor * fCopyMD;
};
typedef ExpansionData IODMACommandInternal;

#define fInternalState reserved
#define fState         reserved->fState
#define fMDSummary     reserved->fMDSummary


#if 1
// no direction => OutIn
#define SHOULD_COPY_DIR(op, direction)					    \
	((kIODirectionNone == (direction))				    \
	    || (kWalkSyncAlways & (op))					    \
	    || (((kWalkSyncIn & (op)) ? kIODirectionIn : kIODirectionOut)   \
						    & (direction)))

#else
#define SHOULD_COPY_DIR(state, direction) (true)
#endif

#if 0
#define DEBG(fmt, args...)  	{ kprintf(fmt, ## args); }
#else
#define DEBG(fmt, args...)  	{}
#endif


/**************************** class IODMACommand ***************************/

#undef super
#define super OSObject
OSDefineMetaClassAndStructors(IODMACommand, IOCommand);

OSMetaClassDefineReservedUnused(IODMACommand,  0);
OSMetaClassDefineReservedUnused(IODMACommand,  1);
OSMetaClassDefineReservedUnused(IODMACommand,  2);
OSMetaClassDefineReservedUnused(IODMACommand,  3);
OSMetaClassDefineReservedUnused(IODMACommand,  4);
OSMetaClassDefineReservedUnused(IODMACommand,  5);
OSMetaClassDefineReservedUnused(IODMACommand,  6);
OSMetaClassDefineReservedUnused(IODMACommand,  7);
OSMetaClassDefineReservedUnused(IODMACommand,  8);
OSMetaClassDefineReservedUnused(IODMACommand,  9);
OSMetaClassDefineReservedUnused(IODMACommand, 10);
OSMetaClassDefineReservedUnused(IODMACommand, 11);
OSMetaClassDefineReservedUnused(IODMACommand, 12);
OSMetaClassDefineReservedUnused(IODMACommand, 13);
OSMetaClassDefineReservedUnused(IODMACommand, 14);
OSMetaClassDefineReservedUnused(IODMACommand, 15);

IODMACommand *
IODMACommand::withSpecification(SegmentFunction outSegFunc,
				UInt8           numAddressBits,
				UInt64          maxSegmentSize,
				MappingOptions  mappingOptions,
				UInt64          maxTransferSize,
				UInt32          alignment,
				IOMapper       *mapper,
				void           *refCon)
{
    IODMACommand * me = new IODMACommand;

    if (me && !me->initWithSpecification(outSegFunc,
					 numAddressBits, maxSegmentSize,
					 mappingOptions, maxTransferSize,
					 alignment,      mapper, refCon))
    {
        me->release();
        return 0;
    };

    return me;
}

IODMACommand *
IODMACommand::cloneCommand(void *refCon)
{
    return withSpecification(fOutSeg, fNumAddressBits, fMaxSegmentSize,
	    fMappingOptions, fMaxTransferSize, fAlignMask + 1, fMapper, refCon);
}

#define kLastOutputFunction ((SegmentFunction) kLastOutputFunction)

bool
IODMACommand::initWithSpecification(SegmentFunction outSegFunc,
				    UInt8           numAddressBits,
				    UInt64          maxSegmentSize,
				    MappingOptions  mappingOptions,
				    UInt64          maxTransferSize,
				    UInt32          alignment,
				    IOMapper       *mapper,
				    void           *refCon)
{
    if (!super::init() || !outSegFunc || !numAddressBits)
        return false;

    bool is32Bit = (OutputHost32   == outSegFunc || OutputBig32 == outSegFunc
                 || OutputLittle32 == outSegFunc);
    if (is32Bit)
    {
	if (!numAddressBits)
	    numAddressBits = 32;
	else if (numAddressBits > 32)
	    return false;		// Wrong output function for bits
    }

    if (numAddressBits && (numAddressBits < PAGE_SHIFT))
	return false;

    if (!maxSegmentSize)
	maxSegmentSize--;	// Set Max segment to -1
    if (!maxTransferSize)
	maxTransferSize--;	// Set Max transfer to -1

    if (!mapper)
    {
        IOMapper::checkForSystemMapper();
	mapper = IOMapper::gSystem;
    }

    fNumSegments     = 0;
    fBypassMask      = 0;
    fOutSeg	     = outSegFunc;
    fNumAddressBits  = numAddressBits;
    fMaxSegmentSize  = maxSegmentSize;
    fMappingOptions  = mappingOptions;
    fMaxTransferSize = maxTransferSize;
    if (!alignment)
	alignment = 1;
    fAlignMask	     = alignment - 1;
    fMapper          = mapper;
    fRefCon          = refCon;

    switch (MAPTYPE(mappingOptions))
    {
    case kMapped:                   break;
    case kNonCoherent: fMapper = 0; break;
    case kBypassed:
	if (mapper && !mapper->getBypassMask(&fBypassMask))
	    return false;
	break;
    default:
	return false;
    };

    reserved = IONew(ExpansionData, 1);
    if (!reserved)
	return false;
    bzero(reserved, sizeof(ExpansionData));

    fInternalState->fIterateOnly = (0 != (kIterateOnly & mappingOptions));
    
    return true;
}

void
IODMACommand::free()
{
    if (reserved)
	IODelete(reserved, ExpansionData, 1);

    super::free();
}

IOReturn
IODMACommand::setMemoryDescriptor(const IOMemoryDescriptor *mem, bool autoPrepare)
{
    if (mem == fMemory)
    {
	if (!autoPrepare)
	{
	    while (fActive)
		complete();
	}
	return kIOReturnSuccess;
    }

    if (fMemory) {
	// As we are almost certainly being called from a work loop thread
	// if fActive is true it is probably not a good time to potentially
	// block.  Just test for it and return an error
	if (fActive)
	    return kIOReturnBusy;
	clearMemoryDescriptor();
    };

    if (mem) {
	bzero(&fMDSummary, sizeof(fMDSummary));
	IOReturn rtn = mem->dmaCommandOperation(
		kIOMDGetCharacteristics,
		&fMDSummary, sizeof(fMDSummary));
	if (rtn)
	    return rtn;

	ppnum_t highPage = fMDSummary.fHighestPage ? fMDSummary.fHighestPage : gIOLastPage;

	if ((kMapped == MAPTYPE(fMappingOptions))
	    && fMapper 
	    && (!fNumAddressBits || (fNumAddressBits >= 31)))
	    // assuming mapped space is 2G
	    fInternalState->fCheckAddressing = false;
	else
	    fInternalState->fCheckAddressing = (fNumAddressBits && (highPage >= (1UL << (fNumAddressBits - PAGE_SHIFT))));

	mem->retain();
	fMemory = mem;

	if (autoPrepare)
	    return prepare();
    };

    return kIOReturnSuccess;
}

IOReturn
IODMACommand::clearMemoryDescriptor(bool autoComplete)
{
    if (fActive && !autoComplete)
	return (kIOReturnNotReady);

    if (fMemory) {
	while (fActive)
	    complete();
	fMemory->release();
	fMemory = 0;
    }

    return (kIOReturnSuccess);
}

const IOMemoryDescriptor *
IODMACommand::getMemoryDescriptor() const
{
    return fMemory;
}


IOReturn
IODMACommand::segmentOp(
			void         *reference,
			IODMACommand *target,
			Segment64     segment,
			void         *segments,
			UInt32        segmentIndex)
{
    IOOptionBits op = (IOOptionBits) reference;
    addr64_t     maxPhys, address;
    addr64_t     remapAddr = 0;
    uint64_t     length;
    uint32_t     numPages;

    IODMACommandInternal * state = target->reserved;

    if (target->fNumAddressBits && (target->fNumAddressBits < 64))
	maxPhys = (1ULL << target->fNumAddressBits);
    else
	maxPhys = 0;
    maxPhys--;

    address = segment.fIOVMAddr;
    length = segment.fLength;

    assert(address);
    assert(length);

    if (!state->fMisaligned)
    {
	state->fMisaligned |= (0 != (target->fAlignMask & address));
	if (state->fMisaligned) DEBG("misaligned %qx:%qx, %lx\n", address, length, target->fAlignMask);
    }

    if (state->fMisaligned && (kWalkPreflight & op))
	return (kIOReturnNotAligned);

    if (!state->fDoubleBuffer)
    {
	if ((address + length - 1) <= maxPhys)
	{
	    length = 0;
	}
	else if (address <= maxPhys)
	{
	    DEBG("tail %qx, %qx", address, length);
	    length = (address + length - maxPhys - 1);
	    address = maxPhys + 1;
	    DEBG("-> %qx, %qx\n", address, length);
	}
    }

    if (!length)
	return (kIOReturnSuccess);

    numPages = atop_64(round_page_64(length));
    remapAddr = state->fCopyNext;

    if (kWalkPreflight & op)
    {
	state->fCopyPageCount += numPages;
    }
    else
    {
	if (kWalkPrepare & op)
	{
	    for (IOItemCount idx = 0; idx < numPages; idx++)
		gIOCopyMapper->iovmInsert(atop_64(remapAddr), idx, atop_64(address) + idx);
	}
	if (state->fDoubleBuffer)
	    state->fCopyNext += length;
	else
	{
	    state->fCopyNext += round_page(length);
	    remapAddr += (address & PAGE_MASK);
	}

	if (SHOULD_COPY_DIR(op, target->fMDSummary.fDirection))
	{
	    DEBG("cpv: 0x%qx %s 0x%qx, 0x%qx, 0x%02lx\n", remapAddr, 
			(kWalkSyncIn & op) ? "->" : "<-", 
			address, length, op);
	    if (kWalkSyncIn & op)
	    { // cppvNoModSnk
		copypv(remapAddr, address, length,
				cppvPsnk | cppvFsnk | cppvPsrc | cppvNoRefSrc );
	    }
	    else
	    {
		copypv(address, remapAddr, length,
				cppvPsnk | cppvFsnk | cppvPsrc | cppvNoRefSrc );
	    }
	}
    }

    return kIOReturnSuccess;
}

IOReturn
IODMACommand::walkAll(UInt8 op)
{
    IODMACommandInternal * state = fInternalState;

    IOReturn     ret = kIOReturnSuccess;
    UInt32       numSegments;
    UInt64       offset;

    if (gIOEnableCopyMapper && (kWalkPreflight & op))
    {
	state->fCopyContig     = false;
	state->fMisaligned     = false;
	state->fDoubleBuffer   = false;
	state->fPrepared       = false;
	state->fCopyNext       = 0;
	state->fCopyPageAlloc  = 0;
	state->fCopyPageCount  = 0;
	state->fCopyMD         = 0;

	if (!(kWalkDoubleBuffer & op))
	{
	    offset = 0;
	    numSegments = 0-1;
	    ret = genIOVMSegments(segmentOp, (void *) op, &offset, state, &numSegments);
	}

	op &= ~kWalkPreflight;

	state->fDoubleBuffer = (state->fMisaligned || (kWalkDoubleBuffer & op));
	if (state->fDoubleBuffer)
	    state->fCopyPageCount = atop_64(round_page(state->fPreparedLength));

	if (state->fCopyPageCount)
	{
	    IOMapper * mapper;
	    ppnum_t    mapBase = 0;

	    DEBG("preflight fCopyPageCount %d\n", state->fCopyPageCount);

	    mapper = gIOCopyMapper;
	    if (mapper)
		mapBase = mapper->iovmAlloc(state->fCopyPageCount);
	    if (mapBase)
	    {
		state->fCopyPageAlloc = mapBase;
		if (state->fCopyPageAlloc && state->fDoubleBuffer)
		{
		    DEBG("contig copy map\n");
		    state->fCopyContig = true;
		}

		state->fCopyNext = ptoa_64(state->fCopyPageAlloc);
		offset = 0;
		numSegments = 0-1;
		ret = genIOVMSegments(segmentOp, (void *) op, &offset, state, &numSegments);
		state->fPrepared = true;
		op &= ~(kWalkSyncIn | kWalkSyncOut);
	    }
	    else
	    {
		DEBG("alloc IOBMD\n");
		state->fCopyMD = IOBufferMemoryDescriptor::withOptions(
				    fMDSummary.fDirection, state->fPreparedLength, page_size);

		if (state->fCopyMD)
		{
		    ret = kIOReturnSuccess;
		    state->fPrepared = true;
		}
		else
		{
		    DEBG("IODMACommand !iovmAlloc");
		    return (kIOReturnNoResources);
		}
	    }
	}
    }

    if (gIOEnableCopyMapper && state->fPrepared && ((kWalkSyncIn | kWalkSyncOut) & op))
    {
	if (state->fCopyPageCount)
	{
	    DEBG("sync fCopyPageCount %d\n", state->fCopyPageCount);

	    if (state->fCopyPageAlloc)
	    {
		state->fCopyNext = ptoa_64(state->fCopyPageAlloc);
		offset = 0;
		numSegments = 0-1;
		ret = genIOVMSegments(segmentOp, (void *) op, &offset, state, &numSegments);
	    }
	    else if (state->fCopyMD)
	    {
		DEBG("sync IOBMD\n");

		if (SHOULD_COPY_DIR(op, fMDSummary.fDirection))
		{
		    IOMemoryDescriptor *poMD = const_cast<IOMemoryDescriptor *>(fMemory);

		    IOByteCount bytes;
		    
		    if (kWalkSyncIn & op)
			bytes = poMD->writeBytes(state->fPreparedOffset, 
						    state->fCopyMD->getBytesNoCopy(),
						    state->fPreparedLength);
		    else
			bytes = poMD->readBytes(state->fPreparedOffset, 
						    state->fCopyMD->getBytesNoCopy(),
						    state->fPreparedLength);
		    DEBG("fCopyMD %s %lx bytes\n", (kWalkSyncIn & op) ? "wrote" : "read", bytes);
		    ret = (bytes == state->fPreparedLength) ? kIOReturnSuccess : kIOReturnUnderrun;
		}
		else
		    ret = kIOReturnSuccess;
	    }
	}
    }

    if (kWalkComplete & op)
    {
	if (state->fCopyPageAlloc)
	{
	    gIOCopyMapper->iovmFree(state->fCopyPageAlloc, state->fCopyPageCount);
	    state->fCopyPageAlloc = 0;
	    state->fCopyPageCount = 0;
	}
	if (state->fCopyMD)
	{
	    state->fCopyMD->release();
	    state->fCopyMD = 0;
	}

	state->fPrepared = false;
    }
    return (ret);
}

IOReturn 
IODMACommand::prepare(UInt64 offset, UInt64 length, bool flushCache, bool synchronize)
{
    IODMACommandInternal * state = fInternalState;
    IOReturn               ret   = kIOReturnSuccess;

    if (!length)
	length = fMDSummary.fLength;

    if (length > fMaxTransferSize)
	return kIOReturnNoSpace;

#if 0
    if (IS_NONCOHERENT(mappingOptions) && flushCache) {
	IOMemoryDescriptor *poMD = const_cast<IOMemoryDescriptor *>(fMemory);

	poMD->performOperation(kIOMemoryIncoherentIOStore, 0, fMDSummary.fLength);
    }
#endif
    if (fActive++)
    {
	if ((state->fPreparedOffset != offset)
	  || (state->fPreparedLength != length))
	ret = kIOReturnNotReady;
    }
    else
    {
	state->fPreparedOffset = offset;
	state->fPreparedLength = length;

	state->fCopyContig     = false;
	state->fMisaligned     = false;
	state->fDoubleBuffer   = false;
	state->fPrepared       = false;
	state->fCopyNext       = 0;
	state->fCopyPageAlloc  = 0;
	state->fCopyPageCount  = 0;
	state->fCopyMD         = 0;

	state->fCursor = state->fIterateOnly
			|| (!state->fCheckAddressing
			    && (!fAlignMask
				|| ((fMDSummary.fPageAlign & (1 << 31)) && (0 == (fMDSummary.fPageAlign & fAlignMask)))));
	if (!state->fCursor)
	{
	    IOOptionBits op = kWalkPrepare | kWalkPreflight;
	    if (synchronize)
		op |= kWalkSyncOut;
	    ret = walkAll(op);
	}
	if (kIOReturnSuccess == ret)
	    state->fPrepared = true;
    }
    return ret;
}

IOReturn 
IODMACommand::complete(bool invalidateCache, bool synchronize)
{
    IODMACommandInternal * state = fInternalState;
    IOReturn               ret   = kIOReturnSuccess;

    if (fActive < 1)
	return kIOReturnNotReady;

    if (!--fActive)
    {
	if (!state->fCursor)
	{
	    IOOptionBits op = kWalkComplete;
	    if (synchronize)
		op |= kWalkSyncIn;
	    ret = walkAll(op);
	}
	state->fPrepared = false;

#if 0
	if (IS_NONCOHERENT(fMappingOptions) && invalidateCache)
	{ 
	    // XXX gvdl: need invalidate before Chardonnay ships
	    IOMemoryDescriptor *poMD = const_cast<IOMemoryDescriptor *>(fMemory);

	    poMD->performOperation(kIOMemoryIncoherentIOInvalidate, 0, fMDSummary.fLength);
	}
#endif
    }

    return ret;
}

IOReturn
IODMACommand::synchronize(IOOptionBits options)
{
    IODMACommandInternal * state = fInternalState;
    IOReturn		   ret   = kIOReturnSuccess;
    IOOptionBits           op;

    if (kIODirectionOutIn == (kIODirectionOutIn & options))
	return kIOReturnBadArgument;

    if (fActive < 1)
	return kIOReturnNotReady;

    op = 0;
    if (kForceDoubleBuffer & options)
    {
	if (state->fDoubleBuffer)
	    return kIOReturnSuccess;
	if (state->fCursor)
	    state->fCursor = false;
	else
	    ret = walkAll(kWalkComplete);

	op |= kWalkPrepare | kWalkPreflight | kWalkDoubleBuffer;
    }
    else if (state->fCursor)
	return kIOReturnSuccess;

    if (kIODirectionIn & options)
	op |= kWalkSyncIn | kWalkSyncAlways;
    else if (kIODirectionOut & options)
	op |= kWalkSyncOut | kWalkSyncAlways;

    ret = walkAll(op);

    return ret;
}

IOReturn
IODMACommand::genIOVMSegments(UInt64 *offsetP,
			      void   *segmentsP,
			      UInt32 *numSegmentsP)
{
    return (genIOVMSegments(clientOutputSegment, (void *) kWalkClient, offsetP, segmentsP, numSegmentsP));
}

IOReturn
IODMACommand::genIOVMSegments(InternalSegmentFunction outSegFunc,
			      void   *reference,
			      UInt64 *offsetP,
			      void   *segmentsP,
			      UInt32 *numSegmentsP)
{
    IOOptionBits           op = (IOOptionBits) reference;
    IODMACommandInternal * internalState = fInternalState;
    IOOptionBits           mdOp = kIOMDWalkSegments;
    IOReturn               ret  = kIOReturnSuccess;

    if (!(kWalkComplete & op) && !fActive)
	return kIOReturnNotReady;

    if (!offsetP || !segmentsP || !numSegmentsP || !*numSegmentsP)
	return kIOReturnBadArgument;

    IOMDDMAWalkSegmentArgs *state =
	(IOMDDMAWalkSegmentArgs *) fState;

    UInt64 offset = *offsetP + internalState->fPreparedOffset;
    UInt64 memLength = internalState->fPreparedOffset + internalState->fPreparedLength;

    if (offset >= memLength)
	return kIOReturnOverrun;

    if (!offset || offset != state->fOffset) {
	state->fOffset   = 0;
	state->fIOVMAddr = 0;
	state->fMapped = (IS_MAPPED(fMappingOptions) && fMapper);
	mdOp = kIOMDFirstSegment;
    };
	
    UInt64    bypassMask = fBypassMask;
    UInt32    segIndex = 0;
    UInt32    numSegments = *numSegmentsP;
    Segment64 curSeg = { 0, 0 };
    addr64_t  maxPhys;

    if (fNumAddressBits && (fNumAddressBits < 64))
	maxPhys = (1ULL << fNumAddressBits);
    else
	maxPhys = 0;
    maxPhys--;

    while ((state->fIOVMAddr) || state->fOffset < memLength)
    {
        if (!state->fIOVMAddr) {

	    IOReturn rtn;

	    state->fOffset = offset;
	    state->fLength = memLength - offset;

	    if (internalState->fCopyContig && (kWalkClient & op))
	    {
		state->fIOVMAddr = ptoa_64(internalState->fCopyPageAlloc) 
					    + offset - internalState->fPreparedOffset;
		rtn = kIOReturnSuccess;
	    }
	    else
	    {
		const IOMemoryDescriptor * memory =
		    internalState->fCopyMD ? internalState->fCopyMD : fMemory;
		rtn = memory->dmaCommandOperation(mdOp, fState, sizeof(fState));
		mdOp = kIOMDWalkSegments;
	    }

	    if (rtn == kIOReturnSuccess) {
		assert(state->fIOVMAddr);
		assert(state->fLength);
	    }
	    else if (rtn == kIOReturnOverrun)
		state->fIOVMAddr = state->fLength = 0;	// At end
	    else
		return rtn;
        };

        if (!curSeg.fIOVMAddr) {
	    UInt64 length = state->fLength;

            offset          += length;
            curSeg.fIOVMAddr = state->fIOVMAddr | bypassMask;
            curSeg.fLength   = length;
            state->fIOVMAddr = 0;
        }
        else if ((curSeg.fIOVMAddr + curSeg.fLength == state->fIOVMAddr)) {
	    UInt64 length = state->fLength;
            offset          += length;
            curSeg.fLength  += length;
            state->fIOVMAddr = 0;
        };


        if (!state->fIOVMAddr)
	{
	    if (kWalkClient & op)
	    {
		if ((curSeg.fIOVMAddr + curSeg.fLength - 1) > maxPhys)
		{
		    if (internalState->fCursor)
		    {
			curSeg.fIOVMAddr = 0;
			ret = kIOReturnMessageTooLarge;
			break;
		    }
		    else if (curSeg.fIOVMAddr <= maxPhys)
		    {
			UInt64 remain, newLength;

			newLength = (maxPhys + 1 - curSeg.fIOVMAddr);
			DEBG("trunc %qx, %qx-> %qx\n", curSeg.fIOVMAddr, curSeg.fLength, newLength);
			remain = curSeg.fLength - newLength;
			state->fIOVMAddr = newLength + curSeg.fIOVMAddr;
			curSeg.fLength   = newLength;
			state->fLength   = remain;
			offset          -= remain;
		    }
		    else if (gIOCopyMapper)
		    {
			DEBG("sparse switch %qx, %qx ", curSeg.fIOVMAddr, curSeg.fLength);
			// Cache this!
			for (UInt checkRemapIndex = 0; checkRemapIndex < internalState->fCopyPageCount; checkRemapIndex++)
			{
			    if (trunc_page_64(curSeg.fIOVMAddr) == gIOCopyMapper->mapAddr(
							    ptoa_64(internalState->fCopyPageAlloc + checkRemapIndex)))
			    {
				curSeg.fIOVMAddr = ptoa_64(internalState->fCopyPageAlloc + checkRemapIndex) + (curSeg.fIOVMAddr & PAGE_MASK);
				break;
			    }
			}
			DEBG("-> %qx, %qx\n", curSeg.fIOVMAddr, curSeg.fLength);
		    }
		}
	    }

	    if (curSeg.fLength > fMaxSegmentSize)
	    {
		UInt64 remain = curSeg.fLength - fMaxSegmentSize;

		state->fIOVMAddr = fMaxSegmentSize + curSeg.fIOVMAddr;
		curSeg.fLength   = fMaxSegmentSize;

		state->fLength   = remain;
		offset          -= remain;
	    }

	    if (internalState->fCursor
		&& (0 != (fAlignMask & curSeg.fIOVMAddr)))
	    {
		curSeg.fIOVMAddr = 0;
		ret = kIOReturnNotAligned;
		break;
	    }

	    if (offset >= memLength)
	    {
		curSeg.fLength   -= (offset - memLength);
		offset = memLength;
		state->fIOVMAddr = state->fLength = 0;	// At end
		break;
	    }
	}

        if (state->fIOVMAddr) {
            if ((segIndex + 1 == numSegments))
                break;

	    ret = (*outSegFunc)(reference, this, curSeg, segmentsP, segIndex++);
            curSeg.fIOVMAddr = 0;
	    if (kIOReturnSuccess != ret)
		break;
        }
    }

    if (curSeg.fIOVMAddr) {
	ret = (*outSegFunc)(reference, this, curSeg, segmentsP, segIndex++);
    }

    if (kIOReturnSuccess == ret)
    {
	state->fOffset = offset;
	*offsetP       = offset - internalState->fPreparedOffset;
	*numSegmentsP  = segIndex;
    }
    return ret;
}

IOReturn 
IODMACommand::clientOutputSegment(
	void *reference, IODMACommand *target,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    IOReturn ret = kIOReturnSuccess;

    if ((target->fNumAddressBits < 64) 
	&& ((segment.fIOVMAddr + segment.fLength - 1) >> target->fNumAddressBits))
    {
	DEBG("kIOReturnMessageTooLarge(fNumAddressBits) %qx, %qx\n", segment.fIOVMAddr, segment.fLength);
	ret = kIOReturnMessageTooLarge;
    }

    if (!(*target->fOutSeg)(target, segment, vSegList, outSegIndex))
    {
	DEBG("kIOReturnMessageTooLarge(fOutSeg) %qx, %qx\n", segment.fIOVMAddr, segment.fLength);
	ret = kIOReturnMessageTooLarge;
    }

    return (ret);
}

bool 
IODMACommand::OutputHost32(IODMACommand *,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    Segment32 *base = (Segment32 *) vSegList;
    base[outSegIndex].fIOVMAddr = (UInt32) segment.fIOVMAddr;
    base[outSegIndex].fLength   = (UInt32) segment.fLength;
    return true;
}

bool 
IODMACommand::OutputBig32(IODMACommand *,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    const UInt offAddr = outSegIndex * sizeof(Segment32);
    const UInt offLen  = offAddr + sizeof(UInt32);
    OSWriteBigInt32(vSegList, offAddr, (UInt32) segment.fIOVMAddr);
    OSWriteBigInt32(vSegList, offLen,  (UInt32) segment.fLength);
    return true;
}

bool
IODMACommand::OutputLittle32(IODMACommand *,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    const UInt offAddr = outSegIndex * sizeof(Segment32);
    const UInt offLen  = offAddr + sizeof(UInt32);
    OSWriteLittleInt32(vSegList, offAddr, (UInt32) segment.fIOVMAddr);
    OSWriteLittleInt32(vSegList, offLen,  (UInt32) segment.fLength);
    return true;
}

bool
IODMACommand::OutputHost64(IODMACommand *,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    Segment64 *base = (Segment64 *) vSegList;
    base[outSegIndex] = segment;
    return true;
}

bool
IODMACommand::OutputBig64(IODMACommand *,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    const UInt offAddr = outSegIndex * sizeof(Segment64);
    const UInt offLen  = offAddr + sizeof(UInt64);
    OSWriteBigInt64(vSegList, offAddr, (UInt64) segment.fIOVMAddr);
    OSWriteBigInt64(vSegList, offLen,  (UInt64) segment.fLength);
    return true;
}

bool
IODMACommand::OutputLittle64(IODMACommand *,
	Segment64 segment, void *vSegList, UInt32 outSegIndex)
{
    const UInt offAddr = outSegIndex * sizeof(Segment64);
    const UInt offLen  = offAddr + sizeof(UInt64);
    OSWriteLittleInt64(vSegList, offAddr, (UInt64) segment.fIOVMAddr);
    OSWriteLittleInt64(vSegList, offLen,  (UInt64) segment.fLength);
    return true;
}


