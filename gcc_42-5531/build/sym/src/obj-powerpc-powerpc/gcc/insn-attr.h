/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_type
enum attr_type {TYPE_INTEGER, TYPE_TWO, TYPE_THREE, TYPE_LOAD, TYPE_LOAD_EXT, TYPE_LOAD_EXT_U, TYPE_LOAD_EXT_UX, TYPE_LOAD_UX, TYPE_LOAD_U, TYPE_STORE, TYPE_STORE_UX, TYPE_STORE_U, TYPE_FPLOAD, TYPE_FPLOAD_UX, TYPE_FPLOAD_U, TYPE_FPSTORE, TYPE_FPSTORE_UX, TYPE_FPSTORE_U, TYPE_VECLOAD, TYPE_VECSTORE, TYPE_IMUL, TYPE_IMUL2, TYPE_IMUL3, TYPE_LMUL, TYPE_IDIV, TYPE_LDIV, TYPE_INSERT_WORD, TYPE_BRANCH, TYPE_CMP, TYPE_FAST_COMPARE, TYPE_COMPARE, TYPE_DELAYED_COMPARE, TYPE_IMUL_COMPARE, TYPE_LMUL_COMPARE, TYPE_FPCOMPARE, TYPE_CR_LOGICAL, TYPE_DELAYED_CR, TYPE_MFCR, TYPE_MFCRF, TYPE_MTCR, TYPE_MFJMPR, TYPE_MTJMPR, TYPE_FP, TYPE_FPSIMPLE, TYPE_DMUL, TYPE_SDIV, TYPE_DDIV, TYPE_SSQRT, TYPE_DSQRT, TYPE_JMPREG, TYPE_BRINC, TYPE_VECSIMPLE, TYPE_VECCOMPLEX, TYPE_VECDIV, TYPE_VECCMP, TYPE_VECCMPSIMPLE, TYPE_VECPERM, TYPE_VECFLOAT, TYPE_VECFDIV, TYPE_ISYNC, TYPE_SYNC, TYPE_LOAD_L, TYPE_STORE_C};
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_length
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_min_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_cpu
enum attr_cpu {CPU_RIOS1, CPU_RIOS2, CPU_RS64A, CPU_MPCCORE, CPU_PPC403, CPU_PPC405, CPU_PPC440, CPU_PPC601, CPU_PPC603, CPU_PPC604, CPU_PPC604E, CPU_PPC620, CPU_PPC630, CPU_PPC750, CPU_PPC7400, CPU_PPC7450, CPU_PPC8540, CPU_POWER4, CPU_POWER5};
extern enum attr_cpu get_attr_cpu (void);


#define INSN_SCHEDULING

/* DFA based pipeline interface.  */
#ifndef AUTOMATON_ALTS
#define AUTOMATON_ALTS 0
#endif


#ifndef AUTOMATON_STATE_ALTS
#define AUTOMATON_STATE_ALTS 0
#endif

#ifndef CPU_UNITS_QUERY
#define CPU_UNITS_QUERY 0
#endif

/* Internal insn code number used by automata.  */
extern int internal_dfa_insn_code (rtx);

/* Insn latency time defined in define_insn_reservation. */
extern int insn_default_latency (rtx);

/* Return nonzero if there is a bypass for given insn
   which is a data producer.  */
extern int bypass_p (rtx);

/* Insn latency time on data consumed by the 2nd insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int insn_latency (rtx, rtx);


#if AUTOMATON_ALTS
/* The following function returns number of alternative
   reservations of given insn.  It may be used for better
   insns scheduling heuristics. */
extern int insn_alts (rtx);

#endif

/* Maximal possible number of insns waiting results being
   produced by insns whose execution is not finished. */
extern const int max_insn_queue_index;

/* Pointer to data describing current state of DFA.  */
typedef void *state_t;

/* Size of the data in bytes.  */
extern int state_size (void);

/* Initiate given DFA state, i.e. Set up the state
   as all functional units were not reserved.  */
extern void state_reset (state_t);
/* The following function returns negative value if given
   insn can be issued in processor state described by given
   DFA state.  In this case, the DFA state is changed to
   reflect the current and future reservations by given
   insn.  Otherwise the function returns minimal time
   delay to issue the insn.  This delay may be zero
   for superscalar or VLIW processors.  If the second
   parameter is NULL the function changes given DFA state
   as new processor cycle started.  */
extern int state_transition (state_t, rtx);

#if AUTOMATON_STATE_ALTS
/* The following function returns number of possible
   alternative reservations of given insn in given
   DFA state.  It may be used for better insns scheduling
   heuristics.  By default the function is defined if
   macro AUTOMATON_STATE_ALTS is defined because its
   implementation may require much memory.  */
extern int state_alts (state_t, rtx);
#endif

extern int min_issue_delay (state_t, rtx);
/* The following function returns nonzero if no one insn
   can be issued in current DFA state. */
extern int state_dead_lock_p (state_t);
/* The function returns minimal delay of issue of the 2nd
   insn after issuing the 1st insn in given DFA state.
   The 1st insn should be issued in given state (i.e.
    state_transition should return negative value for
    the insn and the state).  Data dependencies between
    the insns are ignored by the function.  */
extern int min_insn_conflict_delay (state_t, rtx, rtx);
/* The following function outputs reservations for given
   insn as they are described in the corresponding
   define_insn_reservation.  */
extern void print_reservation (FILE *, rtx);

#if CPU_UNITS_QUERY
/* The following function returns code of functional unit
   with given name (see define_cpu_unit). */
extern int get_cpu_unit_code (const char *);
/* The following function returns nonzero if functional
   unit with given code is currently reserved in given
   DFA state.  */
extern int cpu_unit_reservation_p (state_t, int);
#endif

/* Clean insn code cache.  It should be called if there
   is a chance that condition value in a
   define_insn_reservation will be changed after
   last call of dfa_start.  */
extern void dfa_clean_insn_cache (void);

extern void dfa_clear_single_insn_cache (rtx);

/* Initiate and finish work with DFA.  They should be
   called as the first and the last interface
   functions.  */
extern void dfa_start (void);
extern void dfa_finish (void);

#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */
