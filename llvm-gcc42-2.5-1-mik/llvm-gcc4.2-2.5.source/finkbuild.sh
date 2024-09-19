#!/bin/bash -ev
 export LD=/usr/bin/ld
#/var/tmp/tmp.7.OjzXbr: line 2: xcode-select: command not found
 ulimit -s `ulimit -s`
ulimit -s
 darwinvers=`uname -r|cut -f1 -d.`
uname -r|cut -f1 -d.
 mkdir ../llvm_gcc42_objdir
 #rm -fr ../llvm-gcc4.2-2.5.source/libstdc++-v3
 cd ../llvm_gcc42_objdir
 LLVMOBJDIR="/sw/lib/llvm"
 if [ `uname -p` = "powerpc" ]; then
   TRIPLE=powerpc-apple-darwin$darwinvers
   TARGETOPTIONS=""
 else
   TRIPLE=i686-apple-darwin$darwinvers
   TARGETOPTIONS="--with-arch=nocona --with-tune=generic"
 fi
uname -p
../llvm-gcc4.2-2.5.source/./configure --prefix=/sw  --prefix=/sw/lib/llvm-gcc-4.2 --mandir=/sw/share/man --infodir=/sw/share/info --with-gmp=/sw --with-libiconv-prefix=/sw --with-system-zlib --x-includes=/usr/X11R6/include --x-libraries=/usr/X11R6/lib --with-as=/usr/bin/as --with-ld=/usr/bin/ld --with-nm=/usr/bin/nm --build=$TRIPLE --target=$TRIPLE --host=$TRIPLE $TARGETOPTIONS --with-gxx-include-dir=/usr/include/c++/4.0.0 --enable-llvm=$LLVMOBJDIR --enable-languages=c,c++,fortran
