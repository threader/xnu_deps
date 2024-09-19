#!/bin/sh
#
# This script comes from a mailing list post:
#    Thu,  1 Nov 2007 17:10:25 -0700 (PDT)
#    From: Tom Garcia <tgarcia@hivemind.org>
#    To: darwin-kernel@lists.apple.com
#    Subject: simple script to build a mach_kernel
#
# Additional info can be found at
#    http://slagheap.net/etherspoof/
#    http://janakiram.wordpress.com/2007/09/25/how-to-build-mac-os-x-kernel/
#
# 1. Install Xcode.
# 2. From the Apple source pages, download into the ./dist directory:
#    bootstrap_cmds-60.tar.gz
#    Libstreams-25.tar.gz
#    kext_tools-117.tar.gz
#    xnu-1228.tar.gz
#    cctools-667.3.tar.gz
#    IOKitUser-376.tar.gz
# 3. Make sure the path to go.sh does not contain any space, and run ./go.sh
#

sudo mkdir -p /usr/local/bin
mkdir build
cd build

tar zxf ../dist/bootstrap_cmds-*.tar.gz
cd bootstrap_cmds-*/relpath.tproj/
make all
sudo make install

cd ../..
tar zxf ../dist/Libstreams-*.tar.gz
cd Libstreams-*
make all
sudo make install

cd ..
tar zxf ../dist/cctools-*.tar.gz
cd cctools-*/libstuff
mv Makefile Makefile.orig
sed 's,\-DKERNEL,\-I/usr/include \-DKERNEL,g' Makefile.orig >Makefile
make all
cd ../misc
make macos_all
sudo cp seg_hack.NEW /usr/local/bin/seg_hack
cd ../libmacho
make macos
cd ../ld
mv Makefile Makefile.orig
sed 's,\-DKERNEL,\-I/usr/include \-DKERNEL,g' Makefile.orig >Makefile
make kld_build
sudo cp static_kld/libkld.a /usr/local/lib
cd ..
sudo mkdir -p /usr/local/include/mach-o
sudo cp include/mach-o/kld.h /usr/local/include/mach-o

cd ..
tar zxf ../dist/IOKitUser-*.tar.gz
cd IOKitUser-*
sudo mkdir -p /usr/local/include/IOKit/kext
sudo cp kext.subproj/KXKext.h kext.subproj/KXKextManager.h kext.subproj/KXKextRepository.h /usr/local/include/IOKit/kext

cd ..
tar zxf ../dist/kext_tools-*.tar.gz
cd kext_tools-*
gcc -I/usr/local/include kextsymboltool.c -o kextsymboltool
sudo cp kextsymboltool /usr/local/bin

cd ..
tar zxf ../dist/xnu*.tar.gz
cd xnu*
make

echo '*** The newly built kernel should be at:'
echo '*** build/xnu-1228/BUILD/obj/RELEASE_I386/mach_kernel'