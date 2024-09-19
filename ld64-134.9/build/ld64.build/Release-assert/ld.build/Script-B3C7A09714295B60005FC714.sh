#!/bin/csh
echo "static const char *compile_stubs = " > $DERIVED_FILE_DIR/compile_stubs.h
cat compile_stubs | sed s/\"/\\\\\"/g | sed s/^/\"/ | sed s/\$/\\\\n\"/ >> $DERIVED_FILE_DIR/compile_stubs.h
echo ";" >> $DERIVED_FILE_DIR/compile_stubs.h
