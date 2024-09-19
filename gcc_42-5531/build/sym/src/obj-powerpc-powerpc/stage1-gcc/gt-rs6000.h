/* Type information for rs6000.c.
   Copyright (C) 2004 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING.  If not, write to the Free
Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301, USA.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_toc_hash_struct (void *x_p)
{
  struct toc_hash_struct * const x = (struct toc_hash_struct *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_7rtx_def ((*x).key);
    }
}

void
gt_ggc_mx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (ggc_test_and_set_mark (x))
    {
    }
}

void
gt_ggc_m_P15toc_hash_struct4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_15toc_hash_struct ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_toc_hash_struct (void *x_p)
{
  struct toc_hash_struct * const x = (struct toc_hash_struct *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_15toc_hash_struct, gt_ggc_e_15toc_hash_struct))
    {
      gt_pch_n_7rtx_def ((*x).key);
    }
}

void
gt_pch_nx_machine_function (void *x_p)
{
  struct machine_function * const x = (struct machine_function *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_16machine_function, gt_ggc_e_16machine_function))
    {
      gt_pch_n_S ((*x).some_ld_name);
    }
}

void
gt_pch_n_P15toc_hash_struct4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P15toc_hash_struct4htab, gt_e_P15toc_hash_struct4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_15toc_hash_struct ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P15toc_hash_struct4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_p_15toc_hash_struct (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct toc_hash_struct * const x ATTRIBUTE_UNUSED = (struct toc_hash_struct *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).key), cookie);
}

void
gt_pch_p_16machine_function (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct machine_function * const x ATTRIBUTE_UNUSED = (struct machine_function *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).some_ld_name), cookie);
}

void
gt_pch_p_P15toc_hash_struct4htab (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct htab * const x ATTRIBUTE_UNUSED = (struct htab *)x_p;
  if ((*x).entries != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
      if ((void *)((*x).entries) == this_obj)
        op (&((*x).entries[i0]), cookie);
    }
    if ((void *)(x) == this_obj)
      op (&((*x).entries), cookie);
  }
}

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_rs6000_h[] = {
  {
    &branch_island_list,
    1,
    sizeof (branch_island_list),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &altivec_pim_table[0].rettype,
    1 * (ALTIVEC_PIM__LAST - ALTIVEC_PIM__FIRST + 1),
    sizeof (altivec_pim_table[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &rs6000_got_symbol,
    1,
    sizeof (rs6000_got_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &rs6000_tls_symbol,
    1,
    sizeof (rs6000_tls_symbol),
    &gt_ggc_mx_rtx_def,
    &gt_pch_nx_rtx_def
  },
  {
    &toc_hash_table,
    1,
    sizeof (toc_hash_table),
    &gt_ggc_m_P15toc_hash_struct4htab,
    &gt_pch_n_P15toc_hash_struct4htab
  },
  {
    &toc_section,
    1,
    sizeof (toc_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &sdata2_section,
    1,
    sizeof (sdata2_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &read_only_private_data_section,
    1,
    sizeof (read_only_private_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &private_data_section,
    1,
    sizeof (private_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &read_only_data_section,
    1,
    sizeof (read_only_data_section),
    &gt_ggc_mx_section,
    &gt_pch_nx_section
  },
  {
    &altivec_builtin_mask_for_load,
    1,
    sizeof (altivec_builtin_mask_for_load),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

const struct ggc_root_tab gt_pch_rs_gt_rs6000_h[] = {
  { &set, 1, sizeof (set), NULL, NULL },
  { &altivec_pim_table, 1, sizeof (altivec_pim_table), NULL, NULL },
  { &common_mode_defined, 1, sizeof (common_mode_defined), NULL, NULL },
  { &rs6000_sched_groups, 1, sizeof (rs6000_sched_groups), NULL, NULL },
  { &rs6000_always_hint, 1, sizeof (rs6000_always_hint), NULL, NULL },
  LAST_GGC_ROOT_TAB
};

