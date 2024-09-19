/* Generated automatically from machmode.def and config/rs6000/rs6000-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:150 */
  BLKmode,                 /* machmode.def:154 */
  CCmode,                  /* machmode.def:182 */
  CCUNSmode,               /* config/rs6000/rs6000-modes.def:38 */
  CCFPmode,                /* config/rs6000/rs6000-modes.def:39 */
  CCEQmode,                /* config/rs6000/rs6000-modes.def:40 */
  BImode,                  /* machmode.def:157 */
  QImode,                  /* machmode.def:162 */
  HImode,                  /* machmode.def:163 */
  SImode,                  /* machmode.def:164 */
  DImode,                  /* machmode.def:165 */
  TImode,                  /* machmode.def:166 */
  PSImode,                 /* config/rs6000/rs6000-modes.def:29 */
  SFmode,                  /* machmode.def:177 */
  DFmode,                  /* machmode.def:178 */
  TFmode,                  /* config/rs6000/rs6000-modes.def:24 */
  SDmode,                  /* machmode.def:194 */
  DDmode,                  /* machmode.def:195 */
  TDmode,                  /* machmode.def:196 */
  CQImode,                 /* machmode.def:190 */
  CHImode,                 /* machmode.def:190 */
  CSImode,                 /* machmode.def:190 */
  CDImode,                 /* machmode.def:190 */
  CTImode,                 /* machmode.def:190 */
  SCmode,                  /* machmode.def:191 */
  DCmode,                  /* machmode.def:191 */
  TCmode,                  /* machmode.def:191 */
  V8QImode,                /* config/rs6000/rs6000-modes.def:43 */
  V4HImode,                /* config/rs6000/rs6000-modes.def:43 */
  V2SImode,                /* config/rs6000/rs6000-modes.def:43 */
  V1DImode,                /* config/rs6000/rs6000-modes.def:45 */
  V16QImode,               /* config/rs6000/rs6000-modes.def:44 */
  V8HImode,                /* config/rs6000/rs6000-modes.def:44 */
  V4SImode,                /* config/rs6000/rs6000-modes.def:44 */
  V2DImode,                /* config/rs6000/rs6000-modes.def:44 */
  V2SFmode,                /* config/rs6000/rs6000-modes.def:46 */
  V4SFmode,                /* config/rs6000/rs6000-modes.def:47 */
  V2DFmode,                /* config/rs6000/rs6000-modes.def:47 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCEQmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = PSImode,
  MAX_MODE_PARTIAL_INT = PSImode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V8QImode,
  MAX_MODE_VECTOR_INT = V2DImode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V2DFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE const
#define CONST_MODE_BASE_ALIGN const

#endif /* insn-modes.h */
