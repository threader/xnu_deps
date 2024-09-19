#!/bin/sh
if [ -e  ${DSTROOT}/usr/lib/libstdc++.6.0.9.dylib ]; then
	cd ${DSTROOT}/usr/lib
	ln -sf  libstdc++.6.0.9.dylib  libstdc++.6.dylib
	ln -sf  libstdc++.6.dylib  libstdc++.dylib
fi

