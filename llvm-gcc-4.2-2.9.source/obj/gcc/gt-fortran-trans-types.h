/* Type information for fortran/trans-types.c.
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

/* GC roots.  */

const struct ggc_root_tab gt_ggc_r_gt_fortran_trans_types_h[] = {
  {
    &gfc_complex_types[0],
    1 * (MAX_REAL_KINDS + 1),
    sizeof (gfc_complex_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_real_types[0],
    1 * (MAX_REAL_KINDS + 1),
    sizeof (gfc_real_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_logical_types[0],
    1 * (MAX_INT_KINDS + 1),
    sizeof (gfc_logical_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_integer_types[0],
    1 * (MAX_INT_KINDS + 1),
    sizeof (gfc_integer_types[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_array_descriptor_base[0],
    1 * (GFC_MAX_DIMENSIONS),
    sizeof (gfc_array_descriptor_base[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_max_array_element_size,
    1,
    sizeof (gfc_max_array_element_size),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gfc_desc_dim_type,
    1,
    sizeof (gfc_desc_dim_type),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  LAST_GGC_ROOT_TAB
};

