#ifndef GCC_TM_H
#define GCC_TM_H
#ifdef IN_GCC
# include "options.h"
# include "config/i386/i386.h"
# include "config/darwin.h"
# include "config/i386/darwin.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */
