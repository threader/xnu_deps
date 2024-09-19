/* Generated automatically by the program `genautomata'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

struct DFA_chip
{
  unsigned short rios1_automaton_state;
  unsigned char rios1fp_automaton_state;
  unsigned short rios2_automaton_state;
  unsigned short rios2fp_automaton_state;
  unsigned short rs64_automaton_state;
  unsigned char rs64fp_automaton_state;
  unsigned short mpc_automaton_state;
  unsigned char mpcfp_automaton_state;
  unsigned char ppc40x_automaton_state;
  unsigned char ppc40xiu_automaton_state;
  unsigned short ppc440_core_automaton_state;
  unsigned char ppc440_apu_automaton_state;
  unsigned short ppc603_automaton_state;
  unsigned char ppc603fp_automaton_state;
  unsigned short ppc6xx_automaton_state;
  unsigned char ppc6xxfp_automaton_state;
  unsigned short ppc6xxfp2_automaton_state;
  unsigned short ppc7xx_automaton_state;
  unsigned char ppc7xxfp_automaton_state;
  unsigned short ppc7450_automaton_state;
  unsigned char ppc7450mciu_automaton_state;
  unsigned char ppc7450fp_automaton_state;
  unsigned char ppc7450vec_automaton_state;
  unsigned char ppc8540_most_automaton_state;
  unsigned char ppc8540_long_automaton_state;
  unsigned char ppc8540_retire_automaton_state;
  unsigned short power4iu_automaton_state;
  unsigned short power4fpu_automaton_state;
  unsigned char power4vec_automaton_state;
  unsigned char power4misc_automaton_state;
  unsigned short power5iu_automaton_state;
  unsigned short power5fpu_automaton_state;
  unsigned char power5misc_automaton_state;
};


const int max_insn_queue_index = 127;


static int *dfa_insn_codes;

static int dfa_insn_codes_length;

int
state_transition (state_t state ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{ return -1; }
int
min_issue_delay (state_t state ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{ return -1;}
static int
internal_state_dead_lock_p (struct DFA_chip *ARG_UNUSED (chip))
{
  return 0/* FALSE */;
}

int
state_dead_lock_p (state_t state)
{
  return internal_state_dead_lock_p (state);
}

int
state_size (void)
{
  return sizeof (struct DFA_chip);
}

static inline void
internal_reset (struct DFA_chip *chip)
{
  memset (chip, 0, sizeof (struct DFA_chip));
}

void
state_reset (state_t state)
{
  internal_reset (state);
}

int
min_insn_conflict_delay (state_t state ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED, rtx insn2 ATTRIBUTE_UNUSED)
{ return -1; }
int
insn_latency (rtx insn ATTRIBUTE_UNUSED, rtx insn2 ATTRIBUTE_UNUSED)
{ return -1; }
void
print_reservation (FILE *f ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{}

#if CPU_UNITS_QUERY

int
get_cpu_unit_code (const char *cpu_unit_name)
{
  struct name_code {const char *name; int code;};
  int cmp, l, m, h;
  static struct name_code name_code_table [] =
    {
    };

  /* The following is binary search: */
  l = 0;
  h = sizeof (name_code_table) / sizeof (struct name_code) - 1;
  while (l <= h)
    {
      m = (l + h) / 2;
      cmp = strcmp (cpu_unit_name, name_code_table [m].name);
      if (cmp < 0)
        h = m - 1;
      else if (cmp > 0)
        l = m + 1;
      else
        return name_code_table [m].code;
    }
  return -1;
}

int
cpu_unit_reservation_p (state_t state, int cpu_unit_code)
{
  gcc_assert (cpu_unit_code >= 0 && cpu_unit_code < 0);
  return 0;
}


#endif /* #if CPU_UNITS_QUERY */

void
dfa_clean_insn_cache (void)
{
  int i;

  for (i = 0; i < dfa_insn_codes_length; i++)
    dfa_insn_codes [i] = -1;
}

void
dfa_clear_single_insn_cache (rtx insn)
{
  int i;

  i = INSN_UID (insn);
  if (i < dfa_insn_codes_length)
    dfa_insn_codes [i] = -1;
}

void
dfa_start (void)
{
  dfa_insn_codes_length = get_max_uid ();
  dfa_insn_codes = xmalloc (dfa_insn_codes_length * sizeof (int));
  dfa_clean_insn_cache ();
}

void
dfa_finish (void)
{
  free (dfa_insn_codes);
}

