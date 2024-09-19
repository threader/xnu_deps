#!/bin/sh
echo "" > ${DERIVED_FILE_DIR}/configure.h

if [ -n "${IPHONEOS_DEPLOYMENT_TARGET}" ]; then
	echo "#define DEFAULT_IPHONEOS_MIN_VERSION \"${IPHONEOS_DEPLOYMENT_TARGET}\"" >> ${DERIVED_FILE_DIR}/configure.h
else
  if [ -n "${MACOSX_DEPLOYMENT_TARGET}" ]; then
	echo "#define DEFAULT_MACOSX_MIN_VERSION \"${MACOSX_DEPLOYMENT_TARGET}\"" >> ${DERIVED_FILE_DIR}/configure.h
  fi
fi

