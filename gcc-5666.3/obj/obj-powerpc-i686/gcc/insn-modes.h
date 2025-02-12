/* Generated automatically from machmode.def and config/i386/i386-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  VOIDmode,                /* machmode.def:150 */
  BLKmode,                 /* machmode.def:154 */
  CCmode,                  /* machmode.def:182 */
  CCGCmode,                /* config/i386/i386-modes.def:64 */
  CCGOCmode,               /* config/i386/i386-modes.def:65 */
  CCNOmode,                /* config/i386/i386-modes.def:66 */
  CCAmode,                 /* config/i386/i386-modes.def:68 */
  CCCmode,                 /* config/i386/i386-modes.def:69 */
  CCOmode,                 /* config/i386/i386-modes.def:70 */
  CCSmode,                 /* config/i386/i386-modes.def:71 */
  CCZmode,                 /* config/i386/i386-modes.def:73 */
  CCFPmode,                /* config/i386/i386-modes.def:74 */
  CCFPUmode,               /* config/i386/i386-modes.def:75 */
  BImode,                  /* machmode.def:157 */
  QImode,                  /* machmode.def:162 */
  HImode,                  /* machmode.def:163 */
  SImode,                  /* machmode.def:164 */
  DImode,                  /* machmode.def:165 */
  TImode,                  /* machmode.def:166 */
  SFmode,                  /* machmode.def:177 */
  DFmode,                  /* machmode.def:178 */
  XFmode,                  /* config/i386/i386-modes.def:25 */
  TFmode,                  /* config/i386/i386-modes.def:26 */
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
  XCmode,                  /* machmode.def:191 */
  TCmode,                  /* machmode.def:191 */
  V2QImode,                /* config/i386/i386-modes.def:84 */
  V4QImode,                /* config/i386/i386-modes.def:78 */
  V2HImode,                /* config/i386/i386-modes.def:78 */
  V1SImode,                /* config/i386/i386-modes.def:93 */
  V8QImode,                /* config/i386/i386-modes.def:79 */
  V4HImode,                /* config/i386/i386-modes.def:79 */
  V2SImode,                /* config/i386/i386-modes.def:79 */
  V1DImode,                /* config/i386/i386-modes.def:92 */
  V16QImode,               /* config/i386/i386-modes.def:80 */
  V8HImode,                /* config/i386/i386-modes.def:80 */
  V4SImode,                /* config/i386/i386-modes.def:80 */
  V2DImode,                /* config/i386/i386-modes.def:80 */
  V32QImode,               /* config/i386/i386-modes.def:88 */
  V16HImode,               /* config/i386/i386-modes.def:87 */
  V8SImode,                /* config/i386/i386-modes.def:86 */
  V4DImode,                /* config/i386/i386-modes.def:85 */
  V2SFmode,                /* config/i386/i386-modes.def:81 */
  V4SFmode,                /* config/i386/i386-modes.def:82 */
  V2DFmode,                /* config/i386/i386-modes.def:82 */
  V8SFmode,                /* config/i386/i386-modes.def:90 */
  V4DFmode,                /* config/i386/i386-modes.def:89 */
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = VOIDmode,
  MAX_MODE_RANDOM = BLKmode,

  MIN_MODE_CC = CCmode,
  MAX_MODE_CC = CCFPUmode,

  MIN_MODE_INT = QImode,
  MAX_MODE_INT = TImode,

  MIN_MODE_PARTIAL_INT = VOIDmode,
  MAX_MODE_PARTIAL_INT = VOIDmode,

  MIN_MODE_FLOAT = SFmode,
  MAX_MODE_FLOAT = TFmode,

  MIN_MODE_DECIMAL_FLOAT = SDmode,
  MAX_MODE_DECIMAL_FLOAT = TDmode,

  MIN_MODE_COMPLEX_INT = CQImode,
  MAX_MODE_COMPLEX_INT = CTImode,

  MIN_MODE_COMPLEX_FLOAT = SCmode,
  MAX_MODE_COMPLEX_FLOAT = TCmode,

  MIN_MODE_VECTOR_INT = V2QImode,
  MAX_MODE_VECTOR_INT = V4DImode,

  MIN_MODE_VECTOR_FLOAT = V2SFmode,
  MAX_MODE_VECTOR_FLOAT = V4DFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_SIZE
#define CONST_MODE_BASE_ALIGN

#endif /* insn-modes.h */
