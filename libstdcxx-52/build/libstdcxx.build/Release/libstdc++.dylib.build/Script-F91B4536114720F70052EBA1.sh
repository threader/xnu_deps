#!/bin/sh
mkdir -p ${DSTROOT}/usr/include/c++/4.2.1
cp -r ${SRCROOT}/include/c++/4.2.1/* ${DSTROOT}/usr/include/c++/4.2.1
cd ${DSTROOT}/usr/include/c++/4.2.1
find . -name '.svn'
# rm -rf `find . -name '.svn'`

