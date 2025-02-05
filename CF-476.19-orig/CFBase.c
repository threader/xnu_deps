/*
 * Copyright (c) 2008 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*	CFBase.c
	Copyright 1998-2002, Apple, Inc. All rights reserved.
	Responsibility: Christopher Kane
*/

#include <CoreFoundation/CFBase.h>
#include "CFInternal.h"
#include <pthread.h>
#include <malloc/malloc.h>
extern size_t malloc_good_size(size_t size);
#include <mach/mach.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <string.h>

#if defined(__CYGWIN32__) || defined (D__CYGWIN_)
#error CoreFoundation is currently built with the Microsoft C Runtime, which is incompatible with the Cygwin DLL.  You must either use the -mno-cygwin flag, or complete a port of CF to the Cygwin environment.
#endif

// -------- -------- -------- -------- -------- -------- -------- --------

// CFAllocator structure must match struct _malloc_zone_t!
// The first two reserved fields in struct _malloc_zone_t are for us with CFRuntimeBase
struct __CFAllocator {
    CFRuntimeBase _base;
    size_t (*size)(struct _malloc_zone_t *zone, const void *ptr); /* returns the size of a block or 0 if not in this zone; must be fast, especially for negative answers */
    void *(*malloc)(struct _malloc_zone_t *zone, size_t size);
    void *(*calloc)(struct _malloc_zone_t *zone, size_t num_items, size_t size); /* same as malloc, but block returned is set to zero */
    void *(*valloc)(struct _malloc_zone_t *zone, size_t size); /* same as malloc, but block returned is set to zero and is guaranteed to be page aligned */
    void (*free)(struct _malloc_zone_t *zone, void *ptr);
    void *(*realloc)(struct _malloc_zone_t *zone, void *ptr, size_t size);
    void (*destroy)(struct _malloc_zone_t *zone); /* zone is destroyed and all memory reclaimed */
    const char	*zone_name;
    unsigned (*batch_malloc)(struct _malloc_zone_t *zone, size_t size, void **results, unsigned num_requested); /* given a size, returns pointers capable of holding that size; returns the number of pointers allocated (maybe 0 or less than num_requested) */
    void (*batch_free)(struct _malloc_zone_t *zone, void **to_be_freed, unsigned num_to_be_freed); /* frees all the pointers in to_be_freed; note that to_be_freed may be overwritten during the process */
    struct malloc_introspection_t	*introspect;
    void	*reserved5;
    CFAllocatorRef _allocator;
    CFAllocatorContext _context;
};

CF_INLINE CFAllocatorRetainCallBack __CFAllocatorGetRetainFunction(const CFAllocatorContext *context) {
    CFAllocatorRetainCallBack retval = NULL;
	retval = context->retain;
    return retval;
}

CF_INLINE CFAllocatorReleaseCallBack __CFAllocatorGetReleaseFunction(const CFAllocatorContext *context) {
    CFAllocatorReleaseCallBack retval = NULL;
	retval = context->release;
    return retval;
}

CF_INLINE CFAllocatorCopyDescriptionCallBack __CFAllocatorGetCopyDescriptionFunction(const CFAllocatorContext *context) {
    CFAllocatorCopyDescriptionCallBack retval = NULL;
	retval = context->copyDescription;
    return retval;
}

CF_INLINE CFAllocatorAllocateCallBack __CFAllocatorGetAllocateFunction(const CFAllocatorContext *context) {
    CFAllocatorAllocateCallBack retval = NULL;
	retval = context->allocate;
    return retval;
}

CF_INLINE CFAllocatorReallocateCallBack __CFAllocatorGetReallocateFunction(const CFAllocatorContext *context) {
    CFAllocatorReallocateCallBack retval = NULL;
	retval = context->reallocate;
    return retval;
}

CF_INLINE CFAllocatorDeallocateCallBack __CFAllocatorGetDeallocateFunction(const CFAllocatorContext *context) {
    CFAllocatorDeallocateCallBack retval = NULL;
	retval = context->deallocate;
    return retval;
}

CF_INLINE CFAllocatorPreferredSizeCallBack __CFAllocatorGetPreferredSizeFunction(const CFAllocatorContext *context) {
    CFAllocatorPreferredSizeCallBack retval = NULL;
	retval = context->preferredSize;
    return retval;
}

#if DEPLOYMENT_TARGET_MACOSX

__private_extern__ void __CFAllocatorDeallocate(CFTypeRef cf);

static kern_return_t __CFAllocatorZoneIntrospectNoOp(void) {
    return 0;
}

static boolean_t __CFAllocatorZoneIntrospectTrue(void) {
    return 1;
}

static size_t __CFAllocatorCustomSize(malloc_zone_t *zone, const void *ptr) {
    return 0;

    // The only way to implement this with a version 0 allocator would be
    // for CFAllocator to keep track of all blocks allocated itself, which
    // could be done, but would be bad for performance, so we don't do it.
    //    size_t (*size)(struct _malloc_zone_t *zone, const void *ptr);
    /* returns the size of a block or 0 if not in this zone;
     * must be fast, especially for negative answers */
}

static void *__CFAllocatorCustomMalloc(malloc_zone_t *zone, size_t size) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    return CFAllocatorAllocate(allocator, size, 0);
}

static void *__CFAllocatorCustomCalloc(malloc_zone_t *zone, size_t num_items, size_t size) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    void *newptr = CFAllocatorAllocate(allocator, size, 0);
    if (newptr) memset(newptr, 0, size);
    return newptr;
}

static void *__CFAllocatorCustomValloc(malloc_zone_t *zone, size_t size) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    void *newptr = CFAllocatorAllocate(allocator, size + vm_page_size, 0);
    newptr = (void *)round_page((uintptr_t)newptr);
    return newptr;
}

static void __CFAllocatorCustomFree(malloc_zone_t *zone, void *ptr) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    CFAllocatorDeallocate(allocator, ptr);
}

static void *__CFAllocatorCustomRealloc(malloc_zone_t *zone, void *ptr, size_t size) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    return CFAllocatorReallocate(allocator, ptr, size, 0);
}

static void __CFAllocatorCustomDestroy(malloc_zone_t *zone) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    // !!! we do it, and caller of malloc_destroy_zone() assumes
    // COMPLETE responsibility for the result; NO Apple library
    // code should be modified as a result of discovering that
    // some activity results in inconveniences to developers
    // trying to use malloc_destroy_zone() with a CFAllocatorRef;
    // that's just too bad for them.
    __CFAllocatorDeallocate(allocator);
}

static size_t __CFAllocatorCustomGoodSize(malloc_zone_t *zone, size_t size) {
    CFAllocatorRef allocator = (CFAllocatorRef)zone;
    return CFAllocatorGetPreferredSizeForSize(allocator, size, 0);
}

static struct malloc_introspection_t __CFAllocatorZoneIntrospect = {
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorCustomGoodSize,
    (void *)__CFAllocatorZoneIntrospectTrue,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp
};

static size_t __CFAllocatorNullSize(malloc_zone_t *zone, const void *ptr) {
    return 0;
}

static void * __CFAllocatorNullMalloc(malloc_zone_t *zone, size_t size) {
    return NULL;
}

static void * __CFAllocatorNullCalloc(malloc_zone_t *zone, size_t num_items, size_t size) {
    return NULL;
}

static void * __CFAllocatorNullValloc(malloc_zone_t *zone, size_t size) {
    return NULL;
}

static void __CFAllocatorNullFree(malloc_zone_t *zone, void *ptr) {
}

static void * __CFAllocatorNullRealloc(malloc_zone_t *zone, void *ptr, size_t size) {
    return NULL;
}

static void __CFAllocatorNullDestroy(malloc_zone_t *zone) {
}

static size_t __CFAllocatorNullGoodSize(malloc_zone_t *zone, size_t size) {
    return size;
}

static struct malloc_introspection_t __CFAllocatorNullZoneIntrospect = {
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorNullGoodSize,
    (void *)__CFAllocatorZoneIntrospectTrue,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp,
    (void *)__CFAllocatorZoneIntrospectNoOp
};

static void *__CFAllocatorSystemAllocate(CFIndex size, CFOptionFlags hint, void *info) {
    return malloc_zone_malloc(info, size);
}

static void *__CFAllocatorSystemReallocate(void *ptr, CFIndex newsize, CFOptionFlags hint, void *info) {
    return malloc_zone_realloc(info, ptr, newsize);
}

static void __CFAllocatorSystemDeallocate(void *ptr, void *info) {
#if defined(DEBUG)
    size_t size = malloc_size(ptr);
    if (size) memset(ptr, 0xCC, size);
#endif
    malloc_zone_free(info, ptr);
}

#endif

#if defined(__WIN32__) || DEPLOYMENT_TARGET_LINUX || DEPLOYMENT_TARGET_FREEBSD
static void *__CFAllocatorSystemAllocate(CFIndex size, CFOptionFlags hint, void *info) {
    return malloc(size);
}

static void *__CFAllocatorSystemReallocate(void *ptr, CFIndex newsize, CFOptionFlags hint, void *info) {
    return realloc(ptr, newsize);
}

static void __CFAllocatorSystemDeallocate(void *ptr, void *info) {
    free(ptr);
}
#endif

static void *__CFAllocatorNullAllocate(CFIndex size, CFOptionFlags hint, void *info) {
    return NULL;
}

static void *__CFAllocatorNullReallocate(void *ptr, CFIndex newsize, CFOptionFlags hint, void *info) {
    return NULL;
}

#if defined (__cplusplus)
static void * __CFAllocatorCPPMalloc(CFIndex allocSize, CFOptionFlags hint, void *info)
{
	return malloc(allocSize);	
}
static void * __CFAllocatorCPPReAlloc(void *ptr, CFIndex newsize, CFOptionFlags hint, void *info)
{
	return realloc(ptr, newsize);
}
static void __CFAllocatorCPPFree(void *ptr, void *info)
{
	free(ptr);
}
#endif // C++


static struct __CFAllocator __kCFAllocatorMalloc = {
    INIT_CFRUNTIME_BASE(),
#if DEPLOYMENT_TARGET_MACOSX
    __CFAllocatorCustomSize,
    __CFAllocatorCustomMalloc,
    __CFAllocatorCustomCalloc,
    __CFAllocatorCustomValloc,
    __CFAllocatorCustomFree,
    __CFAllocatorCustomRealloc,
    __CFAllocatorNullDestroy,
    "kCFAllocatorMalloc",
    NULL,
    NULL,
    &__CFAllocatorZoneIntrospect,
    NULL,
#endif
    NULL,	// _allocator
    // Using the malloc functions directly is a total cheat, but works (in C)
    // because the function signatures match in their common prefix of arguments.
    // This saves us one hop through an adaptor function.
#if !defined (__cplusplus)
	{0, NULL, NULL, NULL, NULL, (void *)malloc, (void *)realloc, (void *)free, NULL}
#else
	{0, NULL, NULL, NULL, NULL, __CFAllocatorCPPMalloc,__CFAllocatorCPPReAlloc, __CFAllocatorCPPFree, NULL}
#endif // __cplusplus
};

static struct __CFAllocator __kCFAllocatorMallocZone = {
    INIT_CFRUNTIME_BASE(),
#if DEPLOYMENT_TARGET_MACOSX
    __CFAllocatorCustomSize,
    __CFAllocatorCustomMalloc,
    __CFAllocatorCustomCalloc,
    __CFAllocatorCustomValloc,
    __CFAllocatorCustomFree,
    __CFAllocatorCustomRealloc,
    __CFAllocatorNullDestroy,
    "kCFAllocatorMallocZone",
    NULL,
    NULL,
    &__CFAllocatorZoneIntrospect,
    NULL,
#endif
    NULL,	// _allocator
    {0, NULL, NULL, NULL, NULL, __CFAllocatorSystemAllocate, __CFAllocatorSystemReallocate, __CFAllocatorSystemDeallocate, NULL}
};

static struct __CFAllocator __kCFAllocatorSystemDefault = {
    INIT_CFRUNTIME_BASE(),
#if DEPLOYMENT_TARGET_MACOSX
    __CFAllocatorCustomSize,
    __CFAllocatorCustomMalloc,
    __CFAllocatorCustomCalloc,
    __CFAllocatorCustomValloc,
    __CFAllocatorCustomFree,
    __CFAllocatorCustomRealloc,
    __CFAllocatorNullDestroy,
    "kCFAllocatorSystemDefault",
    NULL,
    NULL,
    &__CFAllocatorZoneIntrospect,
    NULL,
#endif
    NULL,	// _allocator
    {0, NULL, NULL, NULL, NULL, __CFAllocatorSystemAllocate, __CFAllocatorSystemReallocate, __CFAllocatorSystemDeallocate, NULL}
};

static struct __CFAllocator __kCFAllocatorNull = {
    INIT_CFRUNTIME_BASE(),
#if DEPLOYMENT_TARGET_MACOSX
    __CFAllocatorNullSize,
    __CFAllocatorNullMalloc,
    __CFAllocatorNullCalloc,
    __CFAllocatorNullValloc,
    __CFAllocatorNullFree,
    __CFAllocatorNullRealloc,
    __CFAllocatorNullDestroy,
    "kCFAllocatorNull",
    NULL,
    NULL,
    &__CFAllocatorNullZoneIntrospect,
    NULL,
#endif
    NULL,	// _allocator
    {0, NULL, NULL, NULL, NULL, __CFAllocatorNullAllocate, __CFAllocatorNullReallocate, NULL, NULL}
};

const CFAllocatorRef kCFAllocatorDefault = NULL;
const CFAllocatorRef kCFAllocatorSystemDefault = &__kCFAllocatorSystemDefault;
const CFAllocatorRef kCFAllocatorMalloc = &__kCFAllocatorMalloc;
const CFAllocatorRef kCFAllocatorMallocZone = &__kCFAllocatorMallocZone;
const CFAllocatorRef kCFAllocatorNull = &__kCFAllocatorNull;
const CFAllocatorRef kCFAllocatorUseContext = (CFAllocatorRef)0x0257;

static CFStringRef __CFAllocatorCopyDescription(CFTypeRef cf) {
    CFAllocatorRef self = (CFAllocatorRef)cf;
    CFAllocatorRef allocator = (kCFAllocatorUseContext == self->_allocator) ? self : self->_allocator;
    return CFStringCreateWithFormat(allocator, NULL, CFSTR("<CFAllocator %p [%p]>{info = %p}"), cf, allocator, self->_context.info);
// CF: should use copyDescription function here to describe info field
// remember to release value returned from copydescr function when this happens
}

__private_extern__ CFAllocatorRef __CFAllocatorGetAllocator(CFTypeRef cf) {
    CFAllocatorRef allocator = (CFAllocatorRef)cf;
    return (kCFAllocatorUseContext == allocator->_allocator) ? allocator : allocator->_allocator;
}

__private_extern__ void __CFAllocatorDeallocate(CFTypeRef cf) {
    CFAllocatorRef self = (CFAllocatorRef)cf;
    CFAllocatorRef allocator = self->_allocator;
    CFAllocatorReleaseCallBack releaseFunc = __CFAllocatorGetReleaseFunction(&self->_context);
    if (kCFAllocatorUseContext == allocator) {
	/* Rather a chicken and egg problem here, so we do things
	   in the reverse order from what was done at create time. */
	CFAllocatorDeallocateCallBack deallocateFunc = __CFAllocatorGetDeallocateFunction(&self->_context);
	void *info = self->_context.info;
	if (NULL != deallocateFunc) {
	    INVOKE_CALLBACK2(deallocateFunc, (void *)self, info);
	}
	if (NULL != releaseFunc) {
	    INVOKE_CALLBACK1(releaseFunc, info);
	}
    } else {
	if (NULL != releaseFunc) {
	    INVOKE_CALLBACK1(releaseFunc, self->_context.info);
	}
	_CFAllocatorDeallocateGC(allocator, (void *)self);
    }
}

static CFTypeID __kCFAllocatorTypeID = _kCFRuntimeNotATypeID;

static const CFRuntimeClass __CFAllocatorClass = {
    0,
    "CFAllocator",
    NULL,	// init
    NULL,	// copy
    __CFAllocatorDeallocate,
    NULL,	// equal
    NULL,	// hash
    NULL,	// 
    __CFAllocatorCopyDescription
};

__private_extern__ void __CFAllocatorInitialize(void) {
    __kCFAllocatorTypeID = _CFRuntimeRegisterClass(&__CFAllocatorClass);

    _CFRuntimeSetInstanceTypeID(&__kCFAllocatorSystemDefault, __kCFAllocatorTypeID);
    __kCFAllocatorSystemDefault._base._cfisa = __CFISAForTypeID(__kCFAllocatorTypeID);
#if DEPLOYMENT_TARGET_MACOSX
    __kCFAllocatorSystemDefault._context.info = (CF_USING_COLLECTABLE_MEMORY ? __CFCollectableZone : malloc_default_zone());
    memset(malloc_default_zone(), 0, 2 * sizeof(void *));
#endif
    __kCFAllocatorSystemDefault._allocator = kCFAllocatorSystemDefault;

    _CFRuntimeSetInstanceTypeID(&__kCFAllocatorMalloc, __kCFAllocatorTypeID);
    __kCFAllocatorMalloc._base._cfisa = __CFISAForTypeID(__kCFAllocatorTypeID);
    __kCFAllocatorMalloc._allocator = kCFAllocatorSystemDefault;

#if DEPLOYMENT_TARGET_MACOSX
	_CFRuntimeSetInstanceTypeID(&__kCFAllocatorMallocZone, __kCFAllocatorTypeID);
    __kCFAllocatorMallocZone._base._cfisa = __CFISAForTypeID(__kCFAllocatorTypeID);
    __kCFAllocatorMallocZone._allocator = kCFAllocatorSystemDefault;
    __kCFAllocatorMallocZone._context.info = malloc_default_zone();
#endif //__MACH__

    _CFRuntimeSetInstanceTypeID(&__kCFAllocatorNull, __kCFAllocatorTypeID);
    __kCFAllocatorNull._base._cfisa = __CFISAForTypeID(__kCFAllocatorTypeID);
    __kCFAllocatorNull._allocator = kCFAllocatorSystemDefault;

}

CFTypeID CFAllocatorGetTypeID(void) {
    return __kCFAllocatorTypeID;
}

CFAllocatorRef CFAllocatorGetDefault(void) {
    CFAllocatorRef allocator = (CFAllocatorRef)__CFGetThreadSpecificData_inline()->_allocator;
    if (NULL == allocator) {
	allocator = kCFAllocatorSystemDefault;
    }
    return allocator;
}

void CFAllocatorSetDefault(CFAllocatorRef allocator) {
    CFAllocatorRef current = (CFAllocatorRef)__CFGetThreadSpecificData_inline()->_allocator;
#if defined(DEBUG) 
    if (NULL != allocator) {
	__CFGenericValidateType(allocator, __kCFAllocatorTypeID);
    }
#endif
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator && allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	return;		// require allocator to this function to be an allocator
    }
#endif
    if (NULL != allocator && allocator != current) {
	if (current) CFRelease(current);
	CFRetain(allocator);
	// We retain an extra time so that anything set as the default
	// allocator never goes away.
	CFRetain(allocator);
	__CFGetThreadSpecificData_inline()->_allocator = (void *)allocator;
    }
}

static CFAllocatorRef __CFAllocatorCreate(CFAllocatorRef allocator, CFAllocatorContext *context) {
    struct __CFAllocator *memory = NULL;
    CFAllocatorRetainCallBack retainFunc;
    CFAllocatorAllocateCallBack allocateFunc;
    void *retainedInfo;
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator && kCFAllocatorUseContext != allocator && allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	return NULL;	// require allocator to this function to be an allocator
    }
#endif
    retainFunc = context->retain;
    FAULT_CALLBACK((void **)&retainFunc);
    allocateFunc = context->allocate;
    FAULT_CALLBACK((void **)&allocateFunc);
    if (NULL != retainFunc) {
	retainedInfo = (void *)INVOKE_CALLBACK1(retainFunc, context->info);
    } else {
	retainedInfo = context->info;
    }
    // We don't use _CFRuntimeCreateInstance()
    if (kCFAllocatorUseContext == allocator) {
	memory = NULL;
	if (allocateFunc) {
		memory = (struct __CFAllocator *)INVOKE_CALLBACK3(allocateFunc, sizeof(struct __CFAllocator), 0, retainedInfo);
	}
	if (NULL == memory) {
	    return NULL;
	}
    } else {
	allocator = (NULL == allocator) ? __CFGetDefaultAllocator() : allocator;
	memory = (struct __CFAllocator *)CFAllocatorAllocate(allocator, sizeof(struct __CFAllocator), __kCFAllocatorGCObjectMemory);
	if (__CFOASafe) __CFSetLastAllocationEventName(memory, "CFAllocator");
	if (NULL == memory) {
	    return NULL;
	}
    }
    memory->_base._cfisa = 0;
#if __LP64__
    memory->_base._rc = 1;
#else
    memory->_base._cfinfo[CF_RC_BITS] = 1;
#endif
    memory->_base._cfinfo[CF_INFO_BITS] = 0;
    _CFRuntimeSetInstanceTypeID(memory, __kCFAllocatorTypeID);
    memory->_base._cfisa = __CFISAForTypeID(__kCFAllocatorTypeID);
#if DEPLOYMENT_TARGET_MACOSX
    memory->size = __CFAllocatorCustomSize;
    memory->malloc = __CFAllocatorCustomMalloc;
    memory->calloc = __CFAllocatorCustomCalloc;
    memory->valloc = __CFAllocatorCustomValloc;
    memory->free = __CFAllocatorCustomFree;
    memory->realloc = __CFAllocatorCustomRealloc;
    memory->destroy = __CFAllocatorCustomDestroy;
    memory->zone_name = "Custom CFAllocator";
    memory->batch_malloc = NULL;
    memory->batch_free = NULL;
    memory->introspect = &__CFAllocatorZoneIntrospect;
    memory->reserved5 = NULL;
#endif
    memory->_allocator = allocator;
    memory->_context.version = context->version;
    memory->_context.info = retainedInfo;
    memory->_context.retain = retainFunc;
    memory->_context.release = context->release;
    FAULT_CALLBACK((void **)&(memory->_context.release));
    memory->_context.copyDescription = context->copyDescription;
    FAULT_CALLBACK((void **)&(memory->_context.copyDescription));
    memory->_context.allocate = allocateFunc;
    memory->_context.reallocate = context->reallocate;
    FAULT_CALLBACK((void **)&(memory->_context.reallocate));
    memory->_context.deallocate = context->deallocate;
    FAULT_CALLBACK((void **)&(memory->_context.deallocate));
    memory->_context.preferredSize = context->preferredSize;
    FAULT_CALLBACK((void **)&(memory->_context.preferredSize));

    return memory;
}

CFAllocatorRef CFAllocatorCreate(CFAllocatorRef allocator, CFAllocatorContext *context) {
    CFAssert1(!CF_USING_COLLECTABLE_MEMORY, __kCFLogAssertion, "%s(): Shouldn't be called when GC is enabled!", __PRETTY_FUNCTION__);
#if defined(DEBUG)
    if (CF_USING_COLLECTABLE_MEMORY)
        HALT;
#endif
    return __CFAllocatorCreate(allocator, context);
}

CFAllocatorRef _CFAllocatorCreateGC(CFAllocatorRef allocator, CFAllocatorContext *context) {
    return __CFAllocatorCreate(allocator, context);
}

void *CFAllocatorAllocate(CFAllocatorRef allocator, CFIndex size, CFOptionFlags hint) {
    CFAllocatorAllocateCallBack allocateFunc;
    void *newptr = NULL;
    allocator = (NULL == allocator) ? __CFGetDefaultAllocator() : allocator;
#if (DEPLOYMENT_TARGET_MACOSX) && defined(DEBUG)
    if (allocator->_base._cfisa == __CFISAForTypeID(__kCFAllocatorTypeID)) {
	__CFGenericValidateType(allocator, __kCFAllocatorTypeID);
    }
#else
    __CFGenericValidateType(allocator, __kCFAllocatorTypeID);
#endif
    if (0 == size) return NULL;
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	return malloc_zone_malloc((malloc_zone_t *)allocator, size);
    }
#endif
    if (CF_IS_COLLECTABLE_ALLOCATOR(allocator)) {
	newptr = auto_zone_allocate_object((auto_zone_t*)allocator->_context.info, size, CF_GET_GC_MEMORY_TYPE(hint), true, false);
    } else {
	newptr = NULL;
	allocateFunc = __CFAllocatorGetAllocateFunction(&allocator->_context);
	if (allocateFunc) {
		newptr = (void *)INVOKE_CALLBACK3(allocateFunc, size, hint, allocator->_context.info);
	}
    }
    return newptr;
}

void *CFAllocatorReallocate(CFAllocatorRef allocator, void *ptr, CFIndex newsize, CFOptionFlags hint) {
    CFAllocatorAllocateCallBack allocateFunc;
    CFAllocatorReallocateCallBack reallocateFunc;
    CFAllocatorDeallocateCallBack deallocateFunc;
    void *newptr;
    allocator = (NULL == allocator) ? __CFGetDefaultAllocator() : allocator;
#if (DEPLOYMENT_TARGET_MACOSX) && defined(DEBUG)
    if (allocator->_base._cfisa == __CFISAForTypeID(__kCFAllocatorTypeID)) {
	__CFGenericValidateType(allocator, __kCFAllocatorTypeID);
    }
#else
    __CFGenericValidateType(allocator, __kCFAllocatorTypeID);
#endif
    if (NULL == ptr && 0 < newsize) {
#if DEPLOYMENT_TARGET_MACOSX
	if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	    return malloc_zone_malloc((malloc_zone_t *)allocator, newsize);
	}
#endif
	newptr = NULL;
	allocateFunc = __CFAllocatorGetAllocateFunction(&allocator->_context);
	if (allocateFunc) {
		newptr = (void *)INVOKE_CALLBACK3(allocateFunc, newsize, hint, allocator->_context.info);
	}
	return newptr;
    }
    if (NULL != ptr && 0 == newsize) {
#if DEPLOYMENT_TARGET_MACOSX
	if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
#if defined(DEBUG)
	    size_t size = malloc_size(ptr);
	    if (size) memset(ptr, 0xCC, size);
#endif
	    malloc_zone_free((malloc_zone_t *)allocator, ptr);
	    return NULL;
	}
#endif
	deallocateFunc = __CFAllocatorGetDeallocateFunction(&allocator->_context);
	if (NULL != deallocateFunc) {
	    INVOKE_CALLBACK2(deallocateFunc, ptr, allocator->_context.info);
	}
	return NULL;
    }
    if (NULL == ptr && 0 == newsize) return NULL;
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	return malloc_zone_realloc((malloc_zone_t *)allocator, ptr, newsize);
    }
#endif
    reallocateFunc = __CFAllocatorGetReallocateFunction(&allocator->_context);
    if (NULL == reallocateFunc) return NULL;
    newptr = (void *)INVOKE_CALLBACK4(reallocateFunc, ptr, newsize, hint, allocator->_context.info);
    return newptr;
}

void CFAllocatorDeallocate(CFAllocatorRef allocator, void *ptr) {
    CFAllocatorDeallocateCallBack deallocateFunc;
    allocator = (NULL == allocator) ? __CFGetDefaultAllocator() : allocator;
#if (DEPLOYMENT_TARGET_MACOSX) && defined(DEBUG)
    if (allocator->_base._cfisa == __CFISAForTypeID(__kCFAllocatorTypeID)) {
	__CFGenericValidateType(allocator, __kCFAllocatorTypeID);
    }
#else
    __CFGenericValidateType(allocator, __kCFAllocatorTypeID);
#endif
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
#if defined(DEBUG)
	size_t size = malloc_size(ptr);
	if (size) memset(ptr, 0xCC, size);
#endif
	return malloc_zone_free((malloc_zone_t *)allocator, ptr);
    }
#endif
    deallocateFunc = __CFAllocatorGetDeallocateFunction(&allocator->_context);
    if (NULL != ptr && NULL != deallocateFunc) {
	INVOKE_CALLBACK2(deallocateFunc, ptr, allocator->_context.info);
    }
}

CFIndex CFAllocatorGetPreferredSizeForSize(CFAllocatorRef allocator, CFIndex size, CFOptionFlags hint) {
    CFAllocatorPreferredSizeCallBack prefFunc;
    CFIndex newsize = 0;
    allocator = (NULL == allocator) ? __CFGetDefaultAllocator() : allocator;
#if (DEPLOYMENT_TARGET_MACOSX) && defined(DEBUG)
    if (allocator->_base._cfisa == __CFISAForTypeID(__kCFAllocatorTypeID)) {
	__CFGenericValidateType(allocator, __kCFAllocatorTypeID);
    }
#else
    __CFGenericValidateType(allocator, __kCFAllocatorTypeID);
#endif
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	return malloc_good_size(size);
    }
#endif
    prefFunc = __CFAllocatorGetPreferredSizeFunction(&allocator->_context);
    if (0 < size && NULL != prefFunc) {
	newsize = (CFIndex)(INVOKE_CALLBACK3(prefFunc, size, hint, allocator->_context.info));
    }
    if (newsize < size) newsize = size;
    return newsize;
}

void CFAllocatorGetContext(CFAllocatorRef allocator, CFAllocatorContext *context) {
    allocator = (NULL == allocator) ? __CFGetDefaultAllocator() : allocator;
#if (DEPLOYMENT_TARGET_MACOSX) && defined(DEBUG)
    if (allocator->_base._cfisa == __CFISAForTypeID(__kCFAllocatorTypeID)) {
	__CFGenericValidateType(allocator, __kCFAllocatorTypeID);
    }
#else
    __CFGenericValidateType(allocator, __kCFAllocatorTypeID);
#endif
    CFAssert1(0 == context->version, __kCFLogAssertion, "%s(): context version not initialized to 0", __PRETTY_FUNCTION__);
#if DEPLOYMENT_TARGET_MACOSX
    if (allocator->_base._cfisa != __CFISAForTypeID(__kCFAllocatorTypeID)) {	// malloc_zone_t *
	return;
    }
#endif
    context->version = 0;
    context->info = allocator->_context.info;
    context->retain = __CFAllocatorGetRetainFunction(&allocator->_context);
    context->release = __CFAllocatorGetReleaseFunction(&allocator->_context);
    context->copyDescription = __CFAllocatorGetCopyDescriptionFunction(&allocator->_context);
    context->allocate = __CFAllocatorGetAllocateFunction(&allocator->_context);
    context->reallocate = __CFAllocatorGetReallocateFunction(&allocator->_context);
    context->deallocate = __CFAllocatorGetDeallocateFunction(&allocator->_context);
    context->preferredSize = __CFAllocatorGetPreferredSizeFunction(&allocator->_context);
#if (DEPLOYMENT_TARGET_MACOSX) && defined(__ppc__)
    context->retain = (void *)((uintptr_t)context->retain & ~0x3);
    context->release = (void *)((uintptr_t)context->release & ~0x3);
    context->copyDescription = (void *)((uintptr_t)context->copyDescription & ~0x3);
    context->allocate = (void *)((uintptr_t)context->allocate & ~0x3);
    context->reallocate = (void *)((uintptr_t)context->reallocate & ~0x3);
    context->deallocate = (void *)((uintptr_t)context->deallocate & ~0x3);
    context->preferredSize = (void *)((uintptr_t)context->preferredSize & ~0x3);
#endif
}

void *_CFAllocatorAllocateGC(CFAllocatorRef allocator, CFIndex size, CFOptionFlags hint)
{
    if (CF_IS_COLLECTABLE_ALLOCATOR(allocator))
        return auto_zone_allocate_object((auto_zone_t*)kCFAllocatorSystemDefault->_context.info, size, CF_GET_GC_MEMORY_TYPE(hint), false, false);
    else
        return CFAllocatorAllocate(allocator, size, hint);
}

void *_CFAllocatorReallocateGC(CFAllocatorRef allocator, void *ptr, CFIndex newsize, CFOptionFlags hint)
{
    if (CF_IS_COLLECTABLE_ALLOCATOR(allocator)) {
	if (ptr && (newsize == 0)) {
	    return NULL; // equivalent to _CFAllocatorDeallocateGC.
	}
	if (ptr == NULL) {
	    return auto_zone_allocate_object((auto_zone_t*)kCFAllocatorSystemDefault->_context.info, newsize, CF_GET_GC_MEMORY_TYPE(hint), false, false); // eq. to _CFAllocator
	}
    }
    // otherwise, auto_realloc() now preserves layout type and refCount.
    return CFAllocatorReallocate(allocator, ptr, newsize, hint);
}

void _CFAllocatorDeallocateGC(CFAllocatorRef allocator, void *ptr)
{
    // when running GC, don't deallocate.
    if (!CF_IS_COLLECTABLE_ALLOCATOR(allocator)) CFAllocatorDeallocate(allocator, ptr);
}

// -------- -------- -------- -------- -------- -------- -------- --------

#if DEPLOYMENT_TARGET_MACOSX || DEPLOYMENT_TARGET_LINUX || DEPLOYMENT_TARGET_FREEBSD
__private_extern__ pthread_key_t __CFTSDKey = (pthread_key_t)NULL;
#endif
#if 0
__private_extern__ DWORD __CFTSDKey = 0xFFFFFFFF;
#endif

extern void _CFRunLoop1(void);

// Called for each thread as it exits
__private_extern__ void __CFFinalizeThreadData(void *arg) {
#if DEPLOYMENT_TARGET_MACOSX || DEPLOYMENT_TARGET_LINUX || DEPLOYMENT_TARGET_FREEBSD
    __CFThreadSpecificData *tsd = (__CFThreadSpecificData *)arg;
#elif defined(__WIN32__)
    __CFThreadSpecificData *tsd = (__CFThreadSpecificData*)TlsGetValue(__CFTSDKey);
    TlsSetValue(__CFTSDKey, NULL);
#endif
    if (NULL == tsd) return; 
    if (tsd->_allocator) CFRelease(tsd->_allocator);
#if DEPLOYMENT_TARGET_MACOSX
    _CFRunLoop1();
#endif
#if 0 || 0

    if (tsd->_messageHook) UnhookWindowsHookEx(tsd->_messageHook);

#endif

    CFAllocatorDeallocate(kCFAllocatorSystemDefault, tsd);
}

__private_extern__ __CFThreadSpecificData *__CFGetThreadSpecificData(void) {
#if DEPLOYMENT_TARGET_MACOSX || DEPLOYMENT_TARGET_LINUX || DEPLOYMENT_TARGET_FREEBSD
    __CFThreadSpecificData *data;
    data = pthread_getspecific(__CFTSDKey);
    if (data) {
	return data;
    }
    data = CFAllocatorAllocate(kCFAllocatorSystemDefault, sizeof(__CFThreadSpecificData), 0);
    if (__CFOASafe) __CFSetLastAllocationEventName(data, "CFUtilities (thread-data)");
    memset(data, 0, sizeof(__CFThreadSpecificData));
    pthread_setspecific(__CFTSDKey, data);
    return data;
#elif defined(__WIN32__)
    __CFThreadSpecificData *data;
    data = (__CFThreadSpecificData *)TlsGetValue(__CFTSDKey);
    if (data) {
	return data;
    }
    data = (__CFThreadSpecificData *)CFAllocatorAllocate(kCFAllocatorSystemDefault, sizeof(__CFThreadSpecificData), 0);
    if (__CFOASafe) __CFSetLastAllocationEventName(data, "CFUtilities (thread-data)");
    memset(data, 0, sizeof(__CFThreadSpecificData));
    TlsSetValue(__CFTSDKey, data);
    return data;
#endif
}

__private_extern__ void __CFBaseInitialize(void) {
#if DEPLOYMENT_TARGET_MACOSX || DEPLOYMENT_TARGET_LINUX || DEPLOYMENT_TARGET_FREEBSD
    pthread_key_create(&__CFTSDKey, __CFFinalizeThreadData);
#endif
#if 0 || 0
    __CFTSDKey = TlsAlloc();
#endif
}

#if 0 || 0
__private_extern__ void __CFBaseCleanup(void) {
    TlsFree(__CFTSDKey);
}
#endif


static CFBadErrorCallBack __CFOutOfMemoryCallBack = NULL;

CFBadErrorCallBack _CFGetOutOfMemoryErrorCallBack(void) {
    return __CFOutOfMemoryCallBack;
}

void _CFSetOutOfMemoryErrorCallBack(CFBadErrorCallBack callBack) {
    __CFOutOfMemoryCallBack = callBack;
}


CFRange __CFRangeMake(CFIndex loc, CFIndex len) {
    CFRange range;
    range.location = loc;
    range.length = len;
    return range;
}


struct __CFNull {
    CFRuntimeBase _base;
};

static struct __CFNull __kCFNull = {
    INIT_CFRUNTIME_BASE()
};
const CFNullRef kCFNull = &__kCFNull;

static CFStringRef __CFNullCopyDescription(CFTypeRef cf) {
    return CFStringCreateWithFormat(kCFAllocatorSystemDefault, NULL, CFSTR("<CFNull %p [%p]>"), cf, CFGetAllocator(cf));
}

static CFStringRef __CFNullCopyFormattingDescription(CFTypeRef cf, CFDictionaryRef formatOptions) {
    return (CFStringRef)CFRetain(CFSTR("null"));
}

static void __CFNullDeallocate(CFTypeRef cf) {
    CFAssert(false, __kCFLogAssertion, "Deallocated CFNull!");
}

static CFTypeID __kCFNullTypeID = _kCFRuntimeNotATypeID;

static const CFRuntimeClass __CFNullClass = {
    0,
    "CFNull",
    NULL,      // init
    NULL,      // copy
    __CFNullDeallocate,
    NULL,
    NULL,
    __CFNullCopyFormattingDescription,
    __CFNullCopyDescription
};

__private_extern__ void __CFNullInitialize(void) {
    __kCFNullTypeID = _CFRuntimeRegisterClass(&__CFNullClass);
    _CFRuntimeSetInstanceTypeID(&__kCFNull, __kCFNullTypeID);
    __kCFNull._base._cfisa = __CFISAForTypeID(__kCFNullTypeID);
}

CFTypeID CFNullGetTypeID(void) {
    return __kCFNullTypeID;
}

void CFCollection_non_gc_storage_error(void) { }


static int hasCFM = 0;

void _CFRuntimeSetCFMPresent(void *addr) {
    hasCFM = 1;
}

#if (DEPLOYMENT_TARGET_MACOSX) && defined(__ppc__)

/* See comments below */
__private_extern__ void __CF_FAULT_CALLBACK(void **ptr) {
    uintptr_t p = (uintptr_t)*ptr;
    if ((0 == p) || (p & 0x1)) return;
    if (0 == hasCFM || (0x90000000 <= p && p < 0xA0000000)) {
	*ptr = (void *)(p | 0x1);
    } else {
	static CFMutableDictionaryRef cache = NULL;
	static CFSpinLock_t lock = CFSpinLockInit;
	uintptr_t known = ~0;
	__CFSpinLock(&lock);
	if (!cache || !CFDictionaryGetValueIfPresent(cache, (const void *)p, (const void **)&known)) {
	    if (!cache) {
		cache = CFDictionaryCreateMutable(kCFAllocatorSystemDefault, 0, NULL, NULL);
	    }
	    Dl_info info;
	    known = dladdr((void *)p, &info);
	    CFDictionarySetValue(cache, (const void *)p, (const void *)known);
	}
	__CFSpinUnlock(&lock);
	*ptr = (void *)(p | (known ? 0x1 : 0x3));
    }
}

/*
Jump to callback function.  r2 is not saved and restored
in the jump-to-CFM case, since we assume that dyld code
never uses that register and that CF is dyld.

There are three states for (ptr & 0x3):
	0b00:	check not yet done (or not going to be done, and is a dyld func ptr)
	0b01:	check done, dyld function pointer
	0b11:	check done, CFM tvector pointer
(but a NULL callback just stays NULL)

There may be up to 5 word-sized arguments. Floating point
arguments can be done, but count as two word arguments.
Return value can be integral or real.
*/

/* Keep this assembly at the bottom of the source file! */

__asm__ (
".text\n"
"        .align 2\n"
".private_extern ___CF_INVOKE_CALLBACK\n"
"___CF_INVOKE_CALLBACK:\n"
	"rlwinm r12,r3,0,0,29\n"
	"andi. r0,r3,0x2\n"
	"or r3,r4,r4\n"
	"or r4,r5,r5\n"
	"or r5,r6,r6\n"
	"or r6,r7,r7\n"
	"or r7,r8,r8\n"
	"beq- Lcall\n"
	"lwz r2,0x4(r12)\n"
	"lwz r12,0x0(r12)\n"
"Lcall:  mtspr ctr,r12\n"
	"bctr\n");

#endif


// void __HALT(void);

#if defined(__ppc__) || defined(__ppc64__)
__asm__ (
".text\n"
"	.align 2\n"
#if DEPLOYMENT_TARGET_MACOSX
".private_extern ___HALT\n"
#else
".globl ___HALT\n"
#endif
"___HALT:\n"
"	trap\n"
);
#endif

#if defined(__i386__) || defined(__x86_64__)
#if defined(_MSC_VER)
void __HALT() {
    __asm int 3;
}
#else
__asm__ (
".text\n"
"	.align 2, 0x90\n"
#if DEPLOYMENT_TARGET_MACOSX
".private_extern ___HALT\n"
#else
".globl ___HALT\n"
#endif
"___HALT:\n"
"	int3\n"
);
#endif
#endif


