/* Type information for java.
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
gt_ggc_mx_parser_ctxt (void *x_p)
{
  struct parser_ctxt * const x = (struct parser_ctxt *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11parser_ctxt ((*x).next);
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(12); i0++) {
          gt_ggc_m_9tree_node ((*x).modifier_ctx[i0]);
        }
      }
      gt_ggc_m_9tree_node ((*x).class_type);
      gt_ggc_m_9tree_node ((*x).function_decl);
      gt_ggc_m_9tree_node ((*x).package);
      gt_ggc_m_9tree_node ((*x).class_list);
      gt_ggc_m_9tree_node ((*x).current_parsed_class);
      gt_ggc_m_9tree_node ((*x).current_parsed_class_un);
      gt_ggc_m_9tree_node ((*x).non_static_initialized);
      gt_ggc_m_9tree_node ((*x).static_initialized);
      gt_ggc_m_9tree_node ((*x).instance_initializers);
      gt_ggc_m_9tree_node ((*x).import_list);
      gt_ggc_m_9tree_node ((*x).import_demand_list);
      gt_ggc_m_9tree_node ((*x).current_loop);
      gt_ggc_m_9tree_node ((*x).current_labeled_block);
    }
}

void
gt_ggc_mx_type_assertion (void *x_p)
{
  struct type_assertion * const x = (struct type_assertion *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).op1);
      gt_ggc_m_9tree_node ((*x).op2);
    }
}

void
gt_ggc_mx_treetreehash_entry (void *x_p)
{
  struct treetreehash_entry * const x = (struct treetreehash_entry *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).key);
      gt_ggc_m_9tree_node ((*x).value);
    }
}

void
gt_ggc_mx_CPool (void *x_p)
{
  struct CPool * const x = (struct CPool *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).tags != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).count); i0++) {
        }
        ggc_mark ((*x).tags);
      }
      if ((*x).data != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x)).count); i1++) {
          switch (cpool_entry_is_tree (((*x)).tags[i1]))
            {
            case 0:
              break;
            case 1:
              gt_ggc_m_9tree_node ((*x).data[i1].t);
              break;
            default:
              break;
            }
        }
        ggc_mark ((*x).data);
      }
    }
}

void
gt_ggc_mx_JCF (void *x_p)
{
  struct JCF * const x = (struct JCF *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).cpool.tags != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x).cpool).count); i0++) {
        }
        ggc_mark ((*x).cpool.tags);
      }
      if ((*x).cpool.data != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x).cpool).count); i1++) {
          switch (cpool_entry_is_tree (((*x).cpool).tags[i1]))
            {
            case 0:
              break;
            case 1:
              gt_ggc_m_9tree_node ((*x).cpool.data[i1].t);
              break;
            default:
              break;
            }
        }
        ggc_mark ((*x).cpool.data);
      }
    }
}

void
gt_ggc_mx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (ggc_test_and_set_mark (xlimit))
   xlimit = ((union lang_tree_node *)TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
        {
        case 0:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.common.ann);
              break;
            case TS_INT_CST:
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.int_cst.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.int_cst.common.ann);
              break;
            case TS_REAL_CST:
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.real_cst.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.real_cst.common.ann);
              gt_ggc_m_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_VECTOR:
              gt_ggc_m_9tree_node ((*x).generic.vector.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vector.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.vector.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_ggc_m_9tree_node ((*x).generic.string.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.string.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.string.common.ann);
              break;
            case TS_COMPLEX:
              gt_ggc_m_9tree_node ((*x).generic.complex.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.complex.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.complex.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.complex.real);
              gt_ggc_m_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.identifier.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.identifier.common.ann);
              break;
            case TS_DECL_MINIMAL:
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.decl_minimal.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_minimal.context);
              break;
            case TS_DECL_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.decl_common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_common.lang_specific);
              break;
            case TS_DECL_WRTL:
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.decl_with_rtl.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_rtl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_with_rtl.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_with_rtl.rtl);
              break;
            case TS_DECL_NON_COMMON:
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.decl_non_common.common.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_non_common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_non_common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.arguments);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.result);
              gt_ggc_m_9tree_node ((*x).generic.decl_non_common.vindex);
              break;
            case TS_PARM_DECL:
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.parm_decl.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.parm_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.parm_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.parm_decl.common.rtl);
              gt_ggc_m_7rtx_def ((*x).generic.parm_decl.incoming_rtl);
              break;
            case TS_DECL_WITH_VIS:
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.decl_with_vis.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.decl_with_vis.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.decl_with_vis.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.decl_with_vis.section_name);
              break;
            case TS_VAR_DECL:
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.var_decl.common.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.var_decl.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.var_decl.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.var_decl.common.section_name);
              break;
            case TS_FIELD_DECL:
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.field_decl.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.size);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.field_decl.common.lang_specific);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.offset);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.bit_field_type);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.qualifier);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.bit_offset);
              gt_ggc_m_9tree_node ((*x).generic.field_decl.fcontext);
              break;
            case TS_LABEL_DECL:
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.label_decl.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.label_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.label_decl.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.java_field_1);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.java_field_2);
              gt_ggc_m_9tree_node ((*x).generic.label_decl.java_field_3);
              break;
            case TS_RESULT_DECL:
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.result_decl.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.result_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.result_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.result_decl.common.rtl);
              break;
            case TS_CONST_DECL:
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.const_decl.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.const_decl.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.const_decl.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.const_decl.common.rtl);
              break;
            case TS_TYPE_DECL:
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.type_decl.common.common.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.type_decl.common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.type_decl.common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.arguments);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.result);
              gt_ggc_m_9tree_node ((*x).generic.type_decl.common.vindex);
              break;
            case TS_FUNCTION_DECL:
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.function_decl.common.common.common.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.size);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.initial);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.attributes);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.common.common.abstract_origin);
              gt_ggc_m_9lang_decl ((*x).generic.function_decl.common.common.common.common.lang_specific);
              gt_ggc_m_7rtx_def ((*x).generic.function_decl.common.common.common.rtl);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.assembler_name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.common.section_name);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.saved_tree);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.arguments);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.result);
              gt_ggc_m_9tree_node ((*x).generic.function_decl.common.vindex);
              gt_ggc_m_8function ((*x).generic.function_decl.f);
              break;
            case TS_TYPE:
              gt_ggc_m_9tree_node ((*x).generic.type.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.type.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.type.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.type.values);
              gt_ggc_m_9tree_node ((*x).generic.type.size);
              gt_ggc_m_9tree_node ((*x).generic.type.size_unit);
              gt_ggc_m_9tree_node ((*x).generic.type.attributes);
              gt_ggc_m_9tree_node ((*x).generic.type.pointer_to);
              gt_ggc_m_9tree_node ((*x).generic.type.reference_to);
              switch (LLVM_IS_ENABLED ? 3 : debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  break;
                case 2:
                  gt_ggc_m_10die_struct ((*x).generic.type.symtab.die);
                  break;
                case 3:
                  break;
                default:
                  break;
                }
              gt_ggc_m_9tree_node ((*x).generic.type.name);
              gt_ggc_m_9tree_node ((*x).generic.type.minval);
              gt_ggc_m_9tree_node ((*x).generic.type.maxval);
              gt_ggc_m_9tree_node ((*x).generic.type.next_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.main_variant);
              gt_ggc_m_9tree_node ((*x).generic.type.binfo);
              gt_ggc_m_9tree_node ((*x).generic.type.context);
              gt_ggc_m_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_ggc_m_9tree_node ((*x).generic.list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.list.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.list.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.list.purpose);
              gt_ggc_m_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_ggc_m_9tree_node ((*x).generic.vec.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.vec.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.vec.common.ann);
              {
                size_t i1;
                for (i1 = 0; i1 != (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i1++) {
                  gt_ggc_m_9tree_node ((*x).generic.vec.a[i1]);
                }
              }
              break;
            case TS_EXP:
              gt_ggc_m_9tree_node ((*x).generic.exp.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.exp.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.exp.common.ann);
              gt_ggc_m_10location_s ((*x).generic.exp.locus);
              gt_ggc_m_9tree_node ((*x).generic.exp.block);
              switch (TREE_CODE ((tree) &(*x)))
                {
                default:
                  {
                    size_t i2;
                    for (i2 = 0; i2 != (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i2++) {
                      gt_ggc_m_9tree_node ((*x).generic.exp.operands[i2]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.ssa_name.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.var);
              gt_ggc_m_12ptr_info_def ((*x).generic.ssa_name.ptr_info);
              gt_ggc_m_9tree_node ((*x).generic.ssa_name.value_handle);
              break;
            case TS_PHI_NODE:
              gt_ggc_m_9tree_node ((*x).generic.phi.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.phi.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.phi.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.phi.result);
              gt_ggc_m_15basic_block_def ((*x).generic.phi.bb);
              {
                size_t i3;
                for (i3 = 0; i3 != (size_t)(((tree)&((*x).generic.phi))->phi.num_args); i3++) {
                  gt_ggc_m_9tree_node ((*x).generic.phi.a[i3].def);
                }
              }
              break;
            case TS_BLOCK:
              gt_ggc_m_9tree_node ((*x).generic.block.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.block.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.block.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.block.vars);
              gt_ggc_m_9tree_node ((*x).generic.block.subblocks);
              gt_ggc_m_9tree_node ((*x).generic.block.supercontext);
              gt_ggc_m_9tree_node ((*x).generic.block.abstract_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_origin);
              gt_ggc_m_9tree_node ((*x).generic.block.fragment_chain);
              break;
            case TS_BINFO:
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.binfo.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.binfo.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.binfo.offset);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtable);
              gt_ggc_m_9tree_node ((*x).generic.binfo.virtuals);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vptr_field);
              gt_ggc_m_11VEC_tree_gc ((*x).generic.binfo.base_accesses);
              gt_ggc_m_9tree_node ((*x).generic.binfo.inheritance);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_ggc_m_9tree_node ((*x).generic.binfo.vtt_vptr);
              {
                size_t i4;
                for (i4 = 0; i4 != (size_t)(((*x).generic.binfo.base_binfos.base).num); i4++) {
                  gt_ggc_m_9tree_node ((*x).generic.binfo.base_binfos.base.vec[i4]);
                }
              }
              break;
            case TS_STATEMENT_LIST:
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.stmt_list.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.stmt_list.common.ann);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_ggc_m_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_VALUE_HANDLE:
              gt_ggc_m_9tree_node ((*x).generic.value_handle.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.value_handle.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.value_handle.common.ann);
              gt_ggc_m_11VEC_tree_gc ((*x).generic.value_handle.vuses);
              break;
            case TS_CONSTRUCTOR:
              gt_ggc_m_9tree_node ((*x).generic.constructor.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.constructor.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.constructor.common.ann);
              gt_ggc_m_22VEC_constructor_elt_gc ((*x).generic.constructor.elts);
              break;
            case TS_MEMORY_TAG:
              gt_ggc_m_9tree_node ((*x).generic.mtag.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.mtag.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.mtag.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.mtag.common.name);
              gt_ggc_m_9tree_node ((*x).generic.mtag.common.context);
              break;
            case TS_STRUCT_FIELD_TAG:
              gt_ggc_m_9tree_node ((*x).generic.sft.common.common.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.sft.common.common.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.sft.common.common.common.ann);
              gt_ggc_m_9tree_node ((*x).generic.sft.common.common.name);
              gt_ggc_m_9tree_node ((*x).generic.sft.common.common.context);
              gt_ggc_m_9tree_node ((*x).generic.sft.parent_var);
              break;
            case TS_OMP_CLAUSE:
              gt_ggc_m_9tree_node ((*x).generic.omp_clause.common.chain);
              gt_ggc_m_9tree_node ((*x).generic.omp_clause.common.type);
              gt_ggc_m_10tree_ann_d ((*x).generic.omp_clause.common.ann);
              {
                size_t i5;
                for (i5 = 0; i5 != (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]); i5++) {
                  gt_ggc_m_9tree_node ((*x).generic.omp_clause.ops[i5]);
                }
              }
              break;
            default:
              break;
            }
          break;
        case 1:
          gt_ggc_m_9tree_node ((*x).identifier.ignore.common.chain);
          gt_ggc_m_9tree_node ((*x).identifier.ignore.common.type);
          gt_ggc_m_10tree_ann_d ((*x).identifier.ignore.common.ann);
          gt_ggc_m_9tree_node ((*x).identifier.global_value);
          gt_ggc_m_9tree_node ((*x).identifier.local_value);
          gt_ggc_m_9tree_node ((*x).identifier.utf8_ref);
          break;
        default:
          break;
        }
      x = ((union lang_tree_node *)TREE_CHAIN (&(*x).generic));
    }
}

void
gt_ggc_mx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      switch ((*x).desc)
        {
        case LANG_DECL_FUNC:
          gt_ggc_m_9tree_node ((*x).u.f.wfl);
          gt_ggc_m_9tree_node ((*x).u.f.throws_list);
          gt_ggc_m_9tree_node ((*x).u.f.function_decl_body);
          gt_ggc_m_9tree_node ((*x).u.f.called_constructor);
          gt_ggc_m_P18treetreehash_entry4htab ((*x).u.f.init_test_table);
          gt_ggc_m_P9tree_node4htab ((*x).u.f.ict);
          gt_ggc_m_9tree_node ((*x).u.f.smic);
          gt_ggc_m_9tree_node ((*x).u.f.inner_access);
          break;
        case LANG_DECL_VAR:
          gt_ggc_m_9tree_node ((*x).u.v.slot_chain);
          gt_ggc_m_9tree_node ((*x).u.v.am);
          gt_ggc_m_9tree_node ((*x).u.v.wfl);
          gt_ggc_m_9tree_node ((*x).u.v.owner);
          break;
        default:
          break;
        }
    }
}

void
gt_ggc_mx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_9tree_node ((*x).signature);
      gt_ggc_m_3JCF ((*x).jcf);
      gt_ggc_m_5CPool ((*x).cpool);
      gt_ggc_m_9tree_node ((*x).cpool_data_ref);
      gt_ggc_m_9tree_node ((*x).finit_stmt_list);
      gt_ggc_m_9tree_node ((*x).clinit_stmt_list);
      gt_ggc_m_9tree_node ((*x).ii_block);
      gt_ggc_m_9tree_node ((*x).dot_class);
      gt_ggc_m_9tree_node ((*x).package_list);
      gt_ggc_m_9tree_node ((*x).import_list);
      gt_ggc_m_9tree_node ((*x).import_demand_list);
      gt_ggc_m_9tree_node ((*x).otable_methods);
      gt_ggc_m_9tree_node ((*x).otable_decl);
      gt_ggc_m_9tree_node ((*x).otable_syms_decl);
      gt_ggc_m_9tree_node ((*x).atable_methods);
      gt_ggc_m_9tree_node ((*x).atable_decl);
      gt_ggc_m_9tree_node ((*x).atable_syms_decl);
      gt_ggc_m_9tree_node ((*x).itable_methods);
      gt_ggc_m_9tree_node ((*x).itable_decl);
      gt_ggc_m_9tree_node ((*x).itable_syms_decl);
      gt_ggc_m_9tree_node ((*x).ctable_decl);
      gt_ggc_m_9tree_node ((*x).catch_classes);
      gt_ggc_m_9tree_node ((*x).verify_method);
      gt_ggc_m_P18treetreehash_entry4htab ((*x).type_to_runtime_map);
      gt_ggc_m_P14type_assertion4htab ((*x).type_assertions);
      gt_ggc_m_9tree_node ((*x).package);
    }
}

void
gt_ggc_m_P14type_assertion4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_14type_assertion ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_ggc_m_P18treetreehash_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_ggc_m_18treetreehash_entry ((*x).entries[i0]);
        }
        ggc_mark ((*x).entries);
      }
    }
}

void
gt_pch_nx_parser_ctxt (void *x_p)
{
  struct parser_ctxt * const x = (struct parser_ctxt *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11parser_ctxt, gt_ggc_e_11parser_ctxt))
    {
      gt_pch_n_S ((*x).filename);
      gt_pch_n_S ((*x).file_start_location.file);
      gt_pch_n_S ((*x).save_location.file);
      gt_pch_n_11parser_ctxt ((*x).next);
      {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(12); i0++) {
          gt_pch_n_9tree_node ((*x).modifier_ctx[i0]);
        }
      }
      gt_pch_n_9tree_node ((*x).class_type);
      gt_pch_n_9tree_node ((*x).function_decl);
      gt_pch_n_9tree_node ((*x).package);
      gt_pch_n_9tree_node ((*x).class_list);
      gt_pch_n_9tree_node ((*x).current_parsed_class);
      gt_pch_n_9tree_node ((*x).current_parsed_class_un);
      gt_pch_n_9tree_node ((*x).non_static_initialized);
      gt_pch_n_9tree_node ((*x).static_initialized);
      gt_pch_n_9tree_node ((*x).instance_initializers);
      gt_pch_n_9tree_node ((*x).import_list);
      gt_pch_n_9tree_node ((*x).import_demand_list);
      gt_pch_n_9tree_node ((*x).current_loop);
      gt_pch_n_9tree_node ((*x).current_labeled_block);
    }
}

void
gt_pch_nx_type_assertion (void *x_p)
{
  struct type_assertion * const x = (struct type_assertion *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_14type_assertion, gt_ggc_e_14type_assertion))
    {
      gt_pch_n_9tree_node ((*x).op1);
      gt_pch_n_9tree_node ((*x).op2);
    }
}

void
gt_pch_nx_treetreehash_entry (void *x_p)
{
  struct treetreehash_entry * const x = (struct treetreehash_entry *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_18treetreehash_entry, gt_ggc_e_18treetreehash_entry))
    {
      gt_pch_n_9tree_node ((*x).key);
      gt_pch_n_9tree_node ((*x).value);
    }
}

void
gt_pch_nx_CPool (void *x_p)
{
  struct CPool * const x = (struct CPool *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_5CPool, gt_ggc_e_5CPool))
    {
      if ((*x).tags != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).count); i0++) {
        }
        gt_pch_note_object ((*x).tags, x, gt_pch_p_5CPool, gt_types_enum_last);
      }
      if ((*x).data != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x)).count); i1++) {
          switch (cpool_entry_is_tree (((*x)).tags[i1]))
            {
            case 0:
              break;
            case 1:
              gt_pch_n_9tree_node ((*x).data[i1].t);
              break;
            default:
              break;
            }
        }
        gt_pch_note_object ((*x).data, x, gt_pch_p_5CPool, gt_types_enum_last);
      }
    }
}

void
gt_pch_nx_JCF (void *x_p)
{
  struct JCF * const x = (struct JCF *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_3JCF, gt_ggc_e_3JCF))
    {
      gt_pch_n_S ((*x).filename);
      gt_pch_n_S ((*x).classname);
      if ((*x).cpool.tags != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x).cpool).count); i0++) {
        }
        gt_pch_note_object ((*x).cpool.tags, x, gt_pch_p_3JCF, gt_types_enum_last);
      }
      if ((*x).cpool.data != NULL) {
        size_t i1;
        for (i1 = 0; i1 != (size_t)(((*x).cpool).count); i1++) {
          switch (cpool_entry_is_tree (((*x).cpool).tags[i1]))
            {
            case 0:
              break;
            case 1:
              gt_pch_n_9tree_node ((*x).cpool.data[i1].t);
              break;
            default:
              break;
            }
        }
        gt_pch_note_object ((*x).cpool.data, x, gt_pch_p_3JCF, gt_types_enum_last);
      }
    }
}

void
gt_pch_nx_lang_tree_node (void *x_p)
{
  union lang_tree_node * x = (union lang_tree_node *)x_p;
  union lang_tree_node * xlimit = x;
  while (gt_pch_note_object (xlimit, xlimit, gt_pch_p_14lang_tree_node, gt_ggc_e_14lang_tree_node))
   xlimit = ((union lang_tree_node *)TREE_CHAIN (&(*xlimit).generic));
  while (x != xlimit)
    {
      switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
        {
        case 0:
          switch (tree_node_structure (&((*x).generic)))
            {
            case TS_COMMON:
              gt_pch_n_9tree_node ((*x).generic.common.chain);
              gt_pch_n_9tree_node ((*x).generic.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.common.ann);
              break;
            case TS_INT_CST:
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.int_cst.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.int_cst.common.ann);
              break;
            case TS_REAL_CST:
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.chain);
              gt_pch_n_9tree_node ((*x).generic.real_cst.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.real_cst.common.ann);
              gt_pch_n_10real_value ((*x).generic.real_cst.real_cst_ptr);
              break;
            case TS_VECTOR:
              gt_pch_n_9tree_node ((*x).generic.vector.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vector.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.vector.common.ann);
              gt_pch_n_9tree_node ((*x).generic.vector.elements);
              break;
            case TS_STRING:
              gt_pch_n_9tree_node ((*x).generic.string.common.chain);
              gt_pch_n_9tree_node ((*x).generic.string.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.string.common.ann);
              break;
            case TS_COMPLEX:
              gt_pch_n_9tree_node ((*x).generic.complex.common.chain);
              gt_pch_n_9tree_node ((*x).generic.complex.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.complex.common.ann);
              gt_pch_n_9tree_node ((*x).generic.complex.real);
              gt_pch_n_9tree_node ((*x).generic.complex.imag);
              break;
            case TS_IDENTIFIER:
              gt_pch_n_9tree_node ((*x).generic.identifier.common.chain);
              gt_pch_n_9tree_node ((*x).generic.identifier.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.identifier.common.ann);
              gt_pch_n_S ((*x).generic.identifier.id.str);
              break;
            case TS_DECL_MINIMAL:
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.decl_minimal.common.ann);
              gt_pch_n_S ((*x).generic.decl_minimal.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.name);
              gt_pch_n_9tree_node ((*x).generic.decl_minimal.context);
              break;
            case TS_DECL_COMMON:
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.decl_common.common.common.ann);
              gt_pch_n_S ((*x).generic.decl_common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_common.lang_specific);
              break;
            case TS_DECL_WRTL:
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.decl_with_rtl.common.common.common.ann);
              gt_pch_n_S ((*x).generic.decl_with_rtl.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_with_rtl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_with_rtl.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_with_rtl.rtl);
              break;
            case TS_DECL_NON_COMMON:
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.decl_non_common.common.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.decl_non_common.common.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_non_common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_non_common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.arguments);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.result);
              gt_pch_n_9tree_node ((*x).generic.decl_non_common.vindex);
              break;
            case TS_PARM_DECL:
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.parm_decl.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.parm_decl.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.parm_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.parm_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.parm_decl.common.rtl);
              gt_pch_n_7rtx_def ((*x).generic.parm_decl.incoming_rtl);
              break;
            case TS_DECL_WITH_VIS:
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.decl_with_vis.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.decl_with_vis.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.decl_with_vis.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.decl_with_vis.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.decl_with_vis.section_name);
              break;
            case TS_VAR_DECL:
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.var_decl.common.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.var_decl.common.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.var_decl.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.var_decl.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.var_decl.common.section_name);
              break;
            case TS_FIELD_DECL:
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.field_decl.common.common.common.ann);
              gt_pch_n_S ((*x).generic.field_decl.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.size);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.initial);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.field_decl.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.field_decl.common.lang_specific);
              gt_pch_n_9tree_node ((*x).generic.field_decl.offset);
              gt_pch_n_9tree_node ((*x).generic.field_decl.bit_field_type);
              gt_pch_n_9tree_node ((*x).generic.field_decl.qualifier);
              gt_pch_n_9tree_node ((*x).generic.field_decl.bit_offset);
              gt_pch_n_9tree_node ((*x).generic.field_decl.fcontext);
              break;
            case TS_LABEL_DECL:
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.label_decl.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.label_decl.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.label_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.label_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.label_decl.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.label_decl.java_field_1);
              gt_pch_n_9tree_node ((*x).generic.label_decl.java_field_2);
              gt_pch_n_9tree_node ((*x).generic.label_decl.java_field_3);
              break;
            case TS_RESULT_DECL:
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.result_decl.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.result_decl.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.result_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.result_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.result_decl.common.rtl);
              break;
            case TS_CONST_DECL:
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.const_decl.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.const_decl.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.const_decl.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.const_decl.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.const_decl.common.rtl);
              break;
            case TS_TYPE_DECL:
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.type_decl.common.common.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.type_decl.common.common.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.type_decl.common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.type_decl.common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.arguments);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.result);
              gt_pch_n_9tree_node ((*x).generic.type_decl.common.vindex);
              break;
            case TS_FUNCTION_DECL:
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.function_decl.common.common.common.common.common.common.ann);
              gt_pch_n_S ((*x).generic.function_decl.common.common.common.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.size);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.size_unit);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.initial);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.attributes);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.common.common.abstract_origin);
              gt_pch_n_9lang_decl ((*x).generic.function_decl.common.common.common.common.lang_specific);
              gt_pch_n_7rtx_def ((*x).generic.function_decl.common.common.common.rtl);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.assembler_name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.common.section_name);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.saved_tree);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.arguments);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.result);
              gt_pch_n_9tree_node ((*x).generic.function_decl.common.vindex);
              gt_pch_n_8function ((*x).generic.function_decl.f);
              break;
            case TS_TYPE:
              gt_pch_n_9tree_node ((*x).generic.type.common.chain);
              gt_pch_n_9tree_node ((*x).generic.type.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.type.common.ann);
              gt_pch_n_9tree_node ((*x).generic.type.values);
              gt_pch_n_9tree_node ((*x).generic.type.size);
              gt_pch_n_9tree_node ((*x).generic.type.size_unit);
              gt_pch_n_9tree_node ((*x).generic.type.attributes);
              gt_pch_n_9tree_node ((*x).generic.type.pointer_to);
              gt_pch_n_9tree_node ((*x).generic.type.reference_to);
              switch (LLVM_IS_ENABLED ? 3 : debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
                {
                case 0:
                  break;
                case 1:
                  gt_pch_n_S ((*x).generic.type.symtab.pointer);
                  break;
                case 2:
                  gt_pch_n_10die_struct ((*x).generic.type.symtab.die);
                  break;
                case 3:
                  break;
                default:
                  break;
                }
              gt_pch_n_9tree_node ((*x).generic.type.name);
              gt_pch_n_9tree_node ((*x).generic.type.minval);
              gt_pch_n_9tree_node ((*x).generic.type.maxval);
              gt_pch_n_9tree_node ((*x).generic.type.next_variant);
              gt_pch_n_9tree_node ((*x).generic.type.main_variant);
              gt_pch_n_9tree_node ((*x).generic.type.binfo);
              gt_pch_n_9tree_node ((*x).generic.type.context);
              gt_pch_n_9lang_type ((*x).generic.type.lang_specific);
              break;
            case TS_LIST:
              gt_pch_n_9tree_node ((*x).generic.list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.list.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.list.common.ann);
              gt_pch_n_9tree_node ((*x).generic.list.purpose);
              gt_pch_n_9tree_node ((*x).generic.list.value);
              break;
            case TS_VEC:
              gt_pch_n_9tree_node ((*x).generic.vec.common.chain);
              gt_pch_n_9tree_node ((*x).generic.vec.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.vec.common.ann);
              {
                size_t i1;
                for (i1 = 0; i1 != (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i1++) {
                  gt_pch_n_9tree_node ((*x).generic.vec.a[i1]);
                }
              }
              break;
            case TS_EXP:
              gt_pch_n_9tree_node ((*x).generic.exp.common.chain);
              gt_pch_n_9tree_node ((*x).generic.exp.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.exp.common.ann);
              gt_pch_n_10location_s ((*x).generic.exp.locus);
              gt_pch_n_9tree_node ((*x).generic.exp.block);
              switch (TREE_CODE ((tree) &(*x)))
                {
                default:
                  {
                    size_t i2;
                    for (i2 = 0; i2 != (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i2++) {
                      gt_pch_n_9tree_node ((*x).generic.exp.operands[i2]);
                    }
                  }
                  break;
                }
              break;
            case TS_SSA_NAME:
              gt_pch_n_9tree_node ((*x).generic.ssa_name.common.chain);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.ssa_name.common.ann);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.var);
              gt_pch_n_12ptr_info_def ((*x).generic.ssa_name.ptr_info);
              gt_pch_n_9tree_node ((*x).generic.ssa_name.value_handle);
              break;
            case TS_PHI_NODE:
              gt_pch_n_9tree_node ((*x).generic.phi.common.chain);
              gt_pch_n_9tree_node ((*x).generic.phi.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.phi.common.ann);
              gt_pch_n_9tree_node ((*x).generic.phi.result);
              gt_pch_n_15basic_block_def ((*x).generic.phi.bb);
              {
                size_t i3;
                for (i3 = 0; i3 != (size_t)(((tree)&((*x).generic.phi))->phi.num_args); i3++) {
                  gt_pch_n_9tree_node ((*x).generic.phi.a[i3].def);
                }
              }
              break;
            case TS_BLOCK:
              gt_pch_n_9tree_node ((*x).generic.block.common.chain);
              gt_pch_n_9tree_node ((*x).generic.block.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.block.common.ann);
              gt_pch_n_9tree_node ((*x).generic.block.vars);
              gt_pch_n_9tree_node ((*x).generic.block.subblocks);
              gt_pch_n_9tree_node ((*x).generic.block.supercontext);
              gt_pch_n_9tree_node ((*x).generic.block.abstract_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_origin);
              gt_pch_n_9tree_node ((*x).generic.block.fragment_chain);
              gt_pch_n_S ((*x).generic.block.locus.file);
              break;
            case TS_BINFO:
              gt_pch_n_9tree_node ((*x).generic.binfo.common.chain);
              gt_pch_n_9tree_node ((*x).generic.binfo.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.binfo.common.ann);
              gt_pch_n_9tree_node ((*x).generic.binfo.offset);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtable);
              gt_pch_n_9tree_node ((*x).generic.binfo.virtuals);
              gt_pch_n_9tree_node ((*x).generic.binfo.vptr_field);
              gt_pch_n_11VEC_tree_gc ((*x).generic.binfo.base_accesses);
              gt_pch_n_9tree_node ((*x).generic.binfo.inheritance);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_subvtt);
              gt_pch_n_9tree_node ((*x).generic.binfo.vtt_vptr);
              {
                size_t i4;
                for (i4 = 0; i4 != (size_t)(((*x).generic.binfo.base_binfos.base).num); i4++) {
                  gt_pch_n_9tree_node ((*x).generic.binfo.base_binfos.base.vec[i4]);
                }
              }
              break;
            case TS_STATEMENT_LIST:
              gt_pch_n_9tree_node ((*x).generic.stmt_list.common.chain);
              gt_pch_n_9tree_node ((*x).generic.stmt_list.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.stmt_list.common.ann);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.head);
              gt_pch_n_24tree_statement_list_node ((*x).generic.stmt_list.tail);
              break;
            case TS_VALUE_HANDLE:
              gt_pch_n_9tree_node ((*x).generic.value_handle.common.chain);
              gt_pch_n_9tree_node ((*x).generic.value_handle.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.value_handle.common.ann);
              gt_pch_n_11VEC_tree_gc ((*x).generic.value_handle.vuses);
              break;
            case TS_CONSTRUCTOR:
              gt_pch_n_9tree_node ((*x).generic.constructor.common.chain);
              gt_pch_n_9tree_node ((*x).generic.constructor.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.constructor.common.ann);
              gt_pch_n_22VEC_constructor_elt_gc ((*x).generic.constructor.elts);
              break;
            case TS_MEMORY_TAG:
              gt_pch_n_9tree_node ((*x).generic.mtag.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.mtag.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.mtag.common.common.ann);
              gt_pch_n_S ((*x).generic.mtag.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.mtag.common.name);
              gt_pch_n_9tree_node ((*x).generic.mtag.common.context);
              break;
            case TS_STRUCT_FIELD_TAG:
              gt_pch_n_9tree_node ((*x).generic.sft.common.common.common.chain);
              gt_pch_n_9tree_node ((*x).generic.sft.common.common.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.sft.common.common.common.ann);
              gt_pch_n_S ((*x).generic.sft.common.common.locus.file);
              gt_pch_n_9tree_node ((*x).generic.sft.common.common.name);
              gt_pch_n_9tree_node ((*x).generic.sft.common.common.context);
              gt_pch_n_9tree_node ((*x).generic.sft.parent_var);
              break;
            case TS_OMP_CLAUSE:
              gt_pch_n_9tree_node ((*x).generic.omp_clause.common.chain);
              gt_pch_n_9tree_node ((*x).generic.omp_clause.common.type);
              gt_pch_n_10tree_ann_d ((*x).generic.omp_clause.common.ann);
              {
                size_t i5;
                for (i5 = 0; i5 != (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]); i5++) {
                  gt_pch_n_9tree_node ((*x).generic.omp_clause.ops[i5]);
                }
              }
              break;
            default:
              break;
            }
          break;
        case 1:
          gt_pch_n_9tree_node ((*x).identifier.ignore.common.chain);
          gt_pch_n_9tree_node ((*x).identifier.ignore.common.type);
          gt_pch_n_10tree_ann_d ((*x).identifier.ignore.common.ann);
          gt_pch_n_S ((*x).identifier.ignore.id.str);
          gt_pch_n_9tree_node ((*x).identifier.global_value);
          gt_pch_n_9tree_node ((*x).identifier.local_value);
          gt_pch_n_9tree_node ((*x).identifier.utf8_ref);
          break;
        default:
          break;
        }
      x = ((union lang_tree_node *)TREE_CHAIN (&(*x).generic));
    }
}

void
gt_pch_nx_lang_decl (void *x_p)
{
  struct lang_decl * const x = (struct lang_decl *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_decl, gt_ggc_e_9lang_decl))
    {
      switch ((*x).desc)
        {
        case LANG_DECL_FUNC:
          gt_pch_n_9tree_node ((*x).u.f.wfl);
          gt_pch_n_9tree_node ((*x).u.f.throws_list);
          gt_pch_n_9tree_node ((*x).u.f.function_decl_body);
          gt_pch_n_9tree_node ((*x).u.f.called_constructor);
          gt_pch_n_P18treetreehash_entry4htab ((*x).u.f.init_test_table);
          gt_pch_n_P9tree_node4htab ((*x).u.f.ict);
          gt_pch_n_9tree_node ((*x).u.f.smic);
          gt_pch_n_9tree_node ((*x).u.f.inner_access);
          break;
        case LANG_DECL_VAR:
          gt_pch_n_9tree_node ((*x).u.v.slot_chain);
          gt_pch_n_9tree_node ((*x).u.v.am);
          gt_pch_n_9tree_node ((*x).u.v.wfl);
          gt_pch_n_9tree_node ((*x).u.v.owner);
          break;
        default:
          break;
        }
    }
}

void
gt_pch_nx_lang_type (void *x_p)
{
  struct lang_type * const x = (struct lang_type *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_9lang_type, gt_ggc_e_9lang_type))
    {
      gt_pch_n_9tree_node ((*x).signature);
      gt_pch_n_3JCF ((*x).jcf);
      gt_pch_n_5CPool ((*x).cpool);
      gt_pch_n_9tree_node ((*x).cpool_data_ref);
      gt_pch_n_9tree_node ((*x).finit_stmt_list);
      gt_pch_n_9tree_node ((*x).clinit_stmt_list);
      gt_pch_n_9tree_node ((*x).ii_block);
      gt_pch_n_9tree_node ((*x).dot_class);
      gt_pch_n_9tree_node ((*x).package_list);
      gt_pch_n_9tree_node ((*x).import_list);
      gt_pch_n_9tree_node ((*x).import_demand_list);
      gt_pch_n_9tree_node ((*x).otable_methods);
      gt_pch_n_9tree_node ((*x).otable_decl);
      gt_pch_n_9tree_node ((*x).otable_syms_decl);
      gt_pch_n_9tree_node ((*x).atable_methods);
      gt_pch_n_9tree_node ((*x).atable_decl);
      gt_pch_n_9tree_node ((*x).atable_syms_decl);
      gt_pch_n_9tree_node ((*x).itable_methods);
      gt_pch_n_9tree_node ((*x).itable_decl);
      gt_pch_n_9tree_node ((*x).itable_syms_decl);
      gt_pch_n_9tree_node ((*x).ctable_decl);
      gt_pch_n_9tree_node ((*x).catch_classes);
      gt_pch_n_9tree_node ((*x).verify_method);
      gt_pch_n_P18treetreehash_entry4htab ((*x).type_to_runtime_map);
      gt_pch_n_P14type_assertion4htab ((*x).type_assertions);
      gt_pch_n_9tree_node ((*x).package);
    }
}

void
gt_pch_n_P14type_assertion4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P14type_assertion4htab, gt_e_P14type_assertion4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_14type_assertion ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P14type_assertion4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_n_P18treetreehash_entry4htab (void *x_p)
{
  struct htab * const x = (struct htab *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_P18treetreehash_entry4htab, gt_e_P18treetreehash_entry4htab))
    {
      if ((*x).entries != NULL) {
        size_t i0;
        for (i0 = 0; i0 != (size_t)(((*x)).size); i0++) {
          gt_pch_n_18treetreehash_entry ((*x).entries[i0]);
        }
        gt_pch_note_object ((*x).entries, x, gt_pch_p_P18treetreehash_entry4htab, gt_types_enum_last);
      }
    }
}

void
gt_pch_p_11parser_ctxt (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct parser_ctxt * const x ATTRIBUTE_UNUSED = (struct parser_ctxt *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).filename), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).file_start_location.file), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).save_location.file), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(12); i0++) {
      if ((void *)(x) == this_obj)
        op (&((*x).modifier_ctx[i0]), cookie);
    }
  }
  if ((void *)(x) == this_obj)
    op (&((*x).class_type), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).function_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).package), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).class_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).current_parsed_class), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).current_parsed_class_un), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).non_static_initialized), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).static_initialized), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).instance_initializers), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).import_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).import_demand_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).current_loop), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).current_labeled_block), cookie);
}

void
gt_pch_p_14type_assertion (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct type_assertion * const x ATTRIBUTE_UNUSED = (struct type_assertion *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).op1), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).op2), cookie);
}

void
gt_pch_p_18treetreehash_entry (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct treetreehash_entry * const x ATTRIBUTE_UNUSED = (struct treetreehash_entry *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).key), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).value), cookie);
}

void
gt_pch_p_5CPool (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct CPool * const x ATTRIBUTE_UNUSED = (struct CPool *)x_p;
  if ((*x).tags != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x)).count); i0++) {
    }
    if ((void *)(x) == this_obj)
      op (&((*x).tags), cookie);
  }
  if ((*x).data != NULL) {
    size_t i1;
    for (i1 = 0; i1 != (size_t)(((*x)).count); i1++) {
      switch (cpool_entry_is_tree (((*x)).tags[i1]))
        {
        case 0:
          break;
        case 1:
          if ((void *)((*x).data) == this_obj)
            op (&((*x).data[i1].t), cookie);
          break;
        default:
          break;
        }
    }
    if ((void *)(x) == this_obj)
      op (&((*x).data), cookie);
  }
}

void
gt_pch_p_3JCF (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct JCF * const x ATTRIBUTE_UNUSED = (struct JCF *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).filename), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).classname), cookie);
  if ((*x).cpool.tags != NULL) {
    size_t i0;
    for (i0 = 0; i0 != (size_t)(((*x).cpool).count); i0++) {
    }
    if ((void *)(x) == this_obj)
      op (&((*x).cpool.tags), cookie);
  }
  if ((*x).cpool.data != NULL) {
    size_t i1;
    for (i1 = 0; i1 != (size_t)(((*x).cpool).count); i1++) {
      switch (cpool_entry_is_tree (((*x).cpool).tags[i1]))
        {
        case 0:
          break;
        case 1:
          if ((void *)((*x).cpool.data) == this_obj)
            op (&((*x).cpool.data[i1].t), cookie);
          break;
        default:
          break;
        }
    }
    if ((void *)(x) == this_obj)
      op (&((*x).cpool.data), cookie);
  }
}

void
gt_pch_p_14lang_tree_node (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  union lang_tree_node * const x ATTRIBUTE_UNUSED = (union lang_tree_node *)x_p;
  switch (TREE_CODE (&((*x)).generic) == IDENTIFIER_NODE)
    {
    case 0:
      switch (tree_node_structure (&((*x).generic)))
        {
        case TS_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.common.ann), cookie);
          break;
        case TS_INT_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.int_cst.common.ann), cookie);
          break;
        case TS_REAL_CST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.real_cst.real_cst_ptr), cookie);
          break;
        case TS_VECTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vector.elements), cookie);
          break;
        case TS_STRING:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.string.common.ann), cookie);
          break;
        case TS_COMPLEX:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.real), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.complex.imag), cookie);
          break;
        case TS_IDENTIFIER:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.identifier.id.str), cookie);
          break;
        case TS_DECL_MINIMAL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_minimal.context), cookie);
          break;
        case TS_DECL_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_common.lang_specific), cookie);
          break;
        case TS_DECL_WRTL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_rtl.rtl), cookie);
          break;
        case TS_DECL_NON_COMMON:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_non_common.vindex), cookie);
          break;
        case TS_PARM_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.parm_decl.incoming_rtl), cookie);
          break;
        case TS_DECL_WITH_VIS:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.decl_with_vis.section_name), cookie);
          break;
        case TS_VAR_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.var_decl.common.section_name), cookie);
          break;
        case TS_FIELD_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.bit_field_type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.qualifier), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.bit_offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.field_decl.fcontext), cookie);
          break;
        case TS_LABEL_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.java_field_1), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.java_field_2), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.label_decl.java_field_3), cookie);
          break;
        case TS_RESULT_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.result_decl.common.rtl), cookie);
          break;
        case TS_CONST_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.const_decl.common.rtl), cookie);
          break;
        case TS_TYPE_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type_decl.common.vindex), cookie);
          break;
        case TS_FUNCTION_DECL:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.initial), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.common.lang_specific), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.common.rtl), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.assembler_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.common.section_name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.saved_tree), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.arguments), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.common.vindex), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.function_decl.f), cookie);
          break;
        case TS_TYPE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.values), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.size_unit), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.attributes), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.pointer_to), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.reference_to), cookie);
          switch (LLVM_IS_ENABLED ? 3 : debug_hooks == &sdb_debug_hooks ? 1 : debug_hooks == &dwarf2_debug_hooks ? 2 : 0)
            {
            case 0:
              break;
            case 1:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.pointer), cookie);
              break;
            case 2:
              if ((void *)(x) == this_obj)
                op (&((*x).generic.type.symtab.die), cookie);
              break;
            case 3:
              break;
            default:
              break;
            }
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.minval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.maxval), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.next_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.main_variant), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.binfo), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.type.lang_specific), cookie);
          break;
        case TS_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.purpose), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.list.value), cookie);
          break;
        case TS_VEC:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.vec.common.ann), cookie);
          {
            size_t i1;
            for (i1 = 0; i1 != (size_t)(TREE_VEC_LENGTH ((tree)&((*x).generic.vec))); i1++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.vec.a[i1]), cookie);
            }
          }
          break;
        case TS_EXP:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.locus), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.exp.block), cookie);
          switch (TREE_CODE ((tree) &(*x)))
            {
            default:
              {
                size_t i2;
                for (i2 = 0; i2 != (size_t)(TREE_CODE_LENGTH (TREE_CODE ((tree) &(*x)))); i2++) {
                  if ((void *)(x) == this_obj)
                    op (&((*x).generic.exp.operands[i2]), cookie);
                }
              }
              break;
            }
          break;
        case TS_SSA_NAME:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.var), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.ptr_info), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.ssa_name.value_handle), cookie);
          break;
        case TS_PHI_NODE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.result), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.phi.bb), cookie);
          {
            size_t i3;
            for (i3 = 0; i3 != (size_t)(((tree)&((*x).generic.phi))->phi.num_args); i3++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.phi.a[i3].def), cookie);
            }
          }
          break;
        case TS_BLOCK:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.vars), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.subblocks), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.supercontext), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.abstract_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_origin), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.fragment_chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.block.locus.file), cookie);
          break;
        case TS_BINFO:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.offset), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtable), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.virtuals), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vptr_field), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.base_accesses), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.inheritance), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_subvtt), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.binfo.vtt_vptr), cookie);
          {
            size_t i4;
            for (i4 = 0; i4 != (size_t)(((*x).generic.binfo.base_binfos.base).num); i4++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.binfo.base_binfos.base.vec[i4]), cookie);
            }
          }
          break;
        case TS_STATEMENT_LIST:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.head), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.stmt_list.tail), cookie);
          break;
        case TS_VALUE_HANDLE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.value_handle.vuses), cookie);
          break;
        case TS_CONSTRUCTOR:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.constructor.elts), cookie);
          break;
        case TS_MEMORY_TAG:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.mtag.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.mtag.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.mtag.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.mtag.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.mtag.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.mtag.common.context), cookie);
          break;
        case TS_STRUCT_FIELD_TAG:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.common.common.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.common.common.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.common.common.common.ann), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.common.common.locus.file), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.common.common.name), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.common.common.context), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.sft.parent_var), cookie);
          break;
        case TS_OMP_CLAUSE:
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.common.chain), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.common.type), cookie);
          if ((void *)(x) == this_obj)
            op (&((*x).generic.omp_clause.common.ann), cookie);
          {
            size_t i5;
            for (i5 = 0; i5 != (size_t)(omp_clause_num_ops[OMP_CLAUSE_CODE ((tree)&((*x).generic.omp_clause))]); i5++) {
              if ((void *)(x) == this_obj)
                op (&((*x).generic.omp_clause.ops[i5]), cookie);
            }
          }
          break;
        default:
          break;
        }
      break;
    case 1:
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.ignore.common.chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.ignore.common.type), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.ignore.common.ann), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.ignore.id.str), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.global_value), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.local_value), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).identifier.utf8_ref), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_9lang_decl (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_decl * const x ATTRIBUTE_UNUSED = (struct lang_decl *)x_p;
  switch ((*x).desc)
    {
    case LANG_DECL_FUNC:
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.wfl), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.throws_list), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.function_decl_body), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.called_constructor), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.init_test_table), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.ict), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.smic), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.f.inner_access), cookie);
      break;
    case LANG_DECL_VAR:
      if ((void *)(x) == this_obj)
        op (&((*x).u.v.slot_chain), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.v.am), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.v.wfl), cookie);
      if ((void *)(x) == this_obj)
        op (&((*x).u.v.owner), cookie);
      break;
    default:
      break;
    }
}

void
gt_pch_p_9lang_type (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct lang_type * const x ATTRIBUTE_UNUSED = (struct lang_type *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).signature), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).jcf), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).cpool), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).cpool_data_ref), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).finit_stmt_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).clinit_stmt_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ii_block), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).dot_class), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).package_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).import_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).import_demand_list), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).otable_methods), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).otable_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).otable_syms_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).atable_methods), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).atable_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).atable_syms_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).itable_methods), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).itable_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).itable_syms_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).ctable_decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).catch_classes), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).verify_method), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type_to_runtime_map), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).type_assertions), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).package), cookie);
}

void
gt_pch_p_P14type_assertion4htab (ATTRIBUTE_UNUSED void *this_obj,
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

void
gt_pch_p_P18treetreehash_entry4htab (ATTRIBUTE_UNUSED void *this_obj,
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

const struct ggc_root_tab gt_ggc_r_gtype_java_h[] = {
  {
    &ctxp_for_generation_last,
    1,
    sizeof (ctxp_for_generation_last),
    &gt_ggc_mx_parser_ctxt,
    &gt_pch_nx_parser_ctxt
  },
  {
    &ctxp_for_generation,
    1,
    sizeof (ctxp_for_generation),
    &gt_ggc_mx_parser_ctxt,
    &gt_pch_nx_parser_ctxt
  },
  {
    &ctxp,
    1,
    sizeof (ctxp),
    &gt_ggc_mx_parser_ctxt,
    &gt_pch_nx_parser_ctxt
  },
  {
    &soft_resolvepoolentry_node,
    1,
    sizeof (soft_resolvepoolentry_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &java_global_trees[0],
    1 * (JTI_MAX),
    sizeof (java_global_trees[0]),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &constants_data_field_decl_node,
    1,
    sizeof (constants_data_field_decl_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &constants_field_decl_node,
    1,
    sizeof (constants_field_decl_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &gcj_abi_version,
    1,
    sizeof (gcj_abi_version),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &java_io_serializable_identifier_node,
    1,
    sizeof (java_io_serializable_identifier_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &java_lang_cloneable_identifier_node,
    1,
    sizeof (java_lang_cloneable_identifier_node),
    &gt_ggc_mx_tree_node,
    &gt_pch_nx_tree_node
  },
  {
    &current_jcf,
    1,
    sizeof (current_jcf),
    &gt_ggc_mx_JCF,
    &gt_pch_nx_JCF
  },
  LAST_GGC_ROOT_TAB
};

extern const struct ggc_root_tab gt_ggc_r_gt_coverage_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cselib_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cgraph_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_ipa_inline_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dbxout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_dojump_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_profile_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_except_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_explow_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_expr_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_function_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gcse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_optabs_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_regclass_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cfglayout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_sdbout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stor_layout_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_stringpool_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_varasm_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_mudflap_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssanames_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_address_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_propagate_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_gimplify_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_desc_c[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_vect_generic_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_ssa_operands_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_tree_nested_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_ipa_reference_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_omp_low_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_targhooks_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_cgraphunit_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_rs6000_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_darwin_h[];
extern const struct ggc_root_tab gt_ggc_r_gtype_java_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_builtins_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_class_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_constants_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_decl_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_expr_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_jcf_parse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_jcf_write_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_lang_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_mangle_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_parse_h[];
extern const struct ggc_root_tab gt_ggc_r_gt_java_resource_h[];
const struct ggc_root_tab * const gt_ggc_rtab[] = {
  gt_ggc_r_gt_coverage_h,
  gt_ggc_r_gt_alias_h,
  gt_ggc_r_gt_cselib_h,
  gt_ggc_r_gt_cgraph_h,
  gt_ggc_r_gt_ipa_inline_h,
  gt_ggc_r_gt_dbxout_h,
  gt_ggc_r_gt_dwarf2out_h,
  gt_ggc_r_gt_dwarf2asm_h,
  gt_ggc_r_gt_dojump_h,
  gt_ggc_r_gt_tree_profile_h,
  gt_ggc_r_gt_emit_rtl_h,
  gt_ggc_r_gt_except_h,
  gt_ggc_r_gt_explow_h,
  gt_ggc_r_gt_expr_h,
  gt_ggc_r_gt_function_h,
  gt_ggc_r_gt_gcse_h,
  gt_ggc_r_gt_optabs_h,
  gt_ggc_r_gt_regclass_h,
  gt_ggc_r_gt_cfglayout_h,
  gt_ggc_r_gt_sdbout_h,
  gt_ggc_r_gt_stor_layout_h,
  gt_ggc_r_gt_stringpool_h,
  gt_ggc_r_gt_tree_h,
  gt_ggc_r_gt_varasm_h,
  gt_ggc_r_gt_tree_mudflap_h,
  gt_ggc_r_gt_tree_ssanames_h,
  gt_ggc_r_gt_tree_ssa_address_h,
  gt_ggc_r_gt_tree_ssa_propagate_h,
  gt_ggc_r_gt_gimplify_h,
  gt_ggc_r_gtype_desc_c,
  gt_ggc_r_gt_tree_vect_generic_h,
  gt_ggc_r_gt_tree_ssa_operands_h,
  gt_ggc_r_gt_tree_nested_h,
  gt_ggc_r_gt_ipa_reference_h,
  gt_ggc_r_gt_omp_low_h,
  gt_ggc_r_gt_targhooks_h,
  gt_ggc_r_gt_cgraphunit_h,
  gt_ggc_r_gt_rs6000_h,
  gt_ggc_r_gt_darwin_h,
  gt_ggc_r_gtype_java_h,
  gt_ggc_r_gt_java_builtins_h,
  gt_ggc_r_gt_java_class_h,
  gt_ggc_r_gt_java_constants_h,
  gt_ggc_r_gt_java_decl_h,
  gt_ggc_r_gt_java_expr_h,
  gt_ggc_r_gt_java_jcf_parse_h,
  gt_ggc_r_gt_java_jcf_write_h,
  gt_ggc_r_gt_java_lang_h,
  gt_ggc_r_gt_java_mangle_h,
  gt_ggc_r_gt_java_parse_h,
  gt_ggc_r_gt_java_resource_h,
  NULL
};
extern const struct ggc_root_tab gt_ggc_rd_gt_alias_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_bitmap_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_lists_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_tree_phinodes_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_tree_iterator_h[];
extern const struct ggc_root_tab gt_ggc_rd_gt_java_expr_h[];
const struct ggc_root_tab * const gt_ggc_deletable_rtab[] = {
  gt_ggc_rd_gt_alias_h,
  gt_ggc_rd_gt_bitmap_h,
  gt_ggc_rd_gt_emit_rtl_h,
  gt_ggc_rd_gt_lists_h,
  gt_ggc_rd_gt_tree_phinodes_h,
  gt_ggc_rd_gt_tree_iterator_h,
  gt_ggc_rd_gt_java_expr_h,
  NULL
};
extern const struct ggc_cache_tab gt_ggc_rc_gt_emit_rtl_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_h[];
extern const struct ggc_cache_tab gt_ggc_rc_gt_tree_ssa_structalias_h[];
const struct ggc_cache_tab * const gt_ggc_cache_rtab[] = {
  gt_ggc_rc_gt_emit_rtl_h,
  gt_ggc_rc_gt_tree_h,
  gt_ggc_rc_gt_tree_ssa_structalias_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rc_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rc_gt_tree_ssa_structalias_h[];
const struct ggc_root_tab * const gt_pch_cache_rtab[] = {
  gt_pch_rc_gt_emit_rtl_h,
  gt_pch_rc_gt_tree_h,
  gt_pch_rc_gt_tree_ssa_structalias_h,
  NULL
};
extern const struct ggc_root_tab gt_pch_rs_gt_coverage_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_alias_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dbxout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2out_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_dwarf2asm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_emit_rtl_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_except_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_function_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_sdbout_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_varasm_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_ssa_address_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_gimplify_h[];
extern const struct ggc_root_tab gt_pch_rs_gtype_desc_c[];
extern const struct ggc_root_tab gt_pch_rs_gt_tree_vect_generic_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_omp_low_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_rs6000_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_darwin_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_java_builtins_h[];
extern const struct ggc_root_tab gt_pch_rs_gt_java_class_h[];
const struct ggc_root_tab * const gt_pch_scalar_rtab[] = {
  gt_pch_rs_gt_coverage_h,
  gt_pch_rs_gt_alias_h,
  gt_pch_rs_gt_dbxout_h,
  gt_pch_rs_gt_dwarf2out_h,
  gt_pch_rs_gt_dwarf2asm_h,
  gt_pch_rs_gt_emit_rtl_h,
  gt_pch_rs_gt_except_h,
  gt_pch_rs_gt_function_h,
  gt_pch_rs_gt_sdbout_h,
  gt_pch_rs_gt_tree_h,
  gt_pch_rs_gt_varasm_h,
  gt_pch_rs_gt_tree_ssa_address_h,
  gt_pch_rs_gt_gimplify_h,
  gt_pch_rs_gtype_desc_c,
  gt_pch_rs_gt_tree_vect_generic_h,
  gt_pch_rs_gt_omp_low_h,
  gt_pch_rs_gt_rs6000_h,
  gt_pch_rs_gt_darwin_h,
  gt_pch_rs_gt_java_builtins_h,
  gt_pch_rs_gt_java_class_h,
  NULL
};
