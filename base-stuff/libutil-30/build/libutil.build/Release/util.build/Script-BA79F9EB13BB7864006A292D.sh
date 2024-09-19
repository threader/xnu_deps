#!/bin/sh
set -e
set -x

ln -sf libutil1.0.dylib "${DSTROOT}/${INSTALL_PREFIX}/usr/lib/libutil.dylib"

