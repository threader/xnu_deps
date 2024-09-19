/* Generated automatically from machmode.def and config/rs6000/rs6000-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "machmode.h"
#include "real.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CCUNS",
  "CCFP",
  "CCEQ",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "PSI",
  "SF",
  "DF",
  "TF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "SC",
  "DC",
  "TC",
  "V8QI",
  "V4HI",
  "V2SI",
  "V1DI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V2SF",
  "V4SF",
  "V2DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CCUNS */
  MODE_CC,                 /* CCFP */
  MODE_CC,                 /* CCEQ */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_PARTIAL_INT,        /* PSI */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* TF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V1DI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
};

const unsigned short mode_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CCUNS */
  4*BITS_PER_UNIT,         /* CCFP */
  4*BITS_PER_UNIT,         /* CCEQ */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  4*BITS_PER_UNIT,         /* PSI */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  16*BITS_PER_UNIT,        /* TF */
  4*BITS_PER_UNIT,         /* SD */
  8*BITS_PER_UNIT,         /* DD */
  16*BITS_PER_UNIT,        /* TD */
  2*BITS_PER_UNIT,         /* CQI */
  4*BITS_PER_UNIT,         /* CHI */
  8*BITS_PER_UNIT,         /* CSI */
  16*BITS_PER_UNIT,        /* CDI */
  32*BITS_PER_UNIT,        /* CTI */
  8*BITS_PER_UNIT,         /* SC */
  16*BITS_PER_UNIT,        /* DC */
  32*BITS_PER_UNIT,        /* TC */
  8*BITS_PER_UNIT,         /* V8QI */
  8*BITS_PER_UNIT,         /* V4HI */
  8*BITS_PER_UNIT,         /* V2SI */
  8*BITS_PER_UNIT,         /* V1DI */
  16*BITS_PER_UNIT,        /* V16QI */
  16*BITS_PER_UNIT,        /* V8HI */
  16*BITS_PER_UNIT,        /* V4SI */
  16*BITS_PER_UNIT,        /* V2DI */
  8*BITS_PER_UNIT,         /* V2SF */
  16*BITS_PER_UNIT,        /* V4SF */
  16*BITS_PER_UNIT,        /* V2DF */
};

const unsigned char mode_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCUNS */
  4,                       /* CCFP */
  4,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  4,                       /* PSI */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  2,                       /* CQI */
  4,                       /* CHI */
  8,                       /* CSI */
  16,                      /* CDI */
  32,                      /* CTI */
  8,                       /* SC */
  16,                      /* DC */
  32,                      /* TC */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
};

const unsigned char mode_nunits[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  1,                       /* CC */
  1,                       /* CCUNS */
  1,                       /* CCFP */
  1,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  1,                       /* HI */
  1,                       /* SI */
  1,                       /* DI */
  1,                       /* TI */
  1,                       /* PSI */
  1,                       /* SF */
  1,                       /* DF */
  1,                       /* TF */
  1,                       /* SD */
  1,                       /* DD */
  1,                       /* TD */
  2,                       /* CQI */
  2,                       /* CHI */
  2,                       /* CSI */
  2,                       /* CDI */
  2,                       /* CTI */
  2,                       /* SC */
  2,                       /* DC */
  2,                       /* TC */
  8,                       /* V8QI */
  4,                       /* V4HI */
  2,                       /* V2SI */
  1,                       /* V1DI */
  16,                      /* V16QI */
  8,                       /* V8HI */
  4,                       /* V4SI */
  2,                       /* V2DI */
  2,                       /* V2SF */
  4,                       /* V4SF */
  2,                       /* V2DF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCUNS */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCEQ */
  QImode,                  /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  VOIDmode,                /* PSI */
  DFmode,                  /* SF */
  TFmode,                  /* DF */
  VOIDmode,                /* TF */
  DDmode,                  /* SD */
  TDmode,                  /* DD */
  VOIDmode,                /* TD */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  TCmode,                  /* DC */
  VOIDmode,                /* TC */
  V4HImode,                /* V8QI */
  V2SImode,                /* V4HI */
  V1DImode,                /* V2SI */
  V16QImode,               /* V1DI */
  V8HImode,                /* V16QI */
  V4SImode,                /* V8HI */
  V2DImode,                /* V4SI */
  VOIDmode,                /* V2DI */
  V4SFmode,                /* V2SF */
  V2DFmode,                /* V4SF */
  VOIDmode,                /* V2DF */
};

const unsigned char mode_2xwider[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  BLKmode,                 /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCUNS */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCEQ */
  VOIDmode,                /* BI */
  HImode,                  /* QI */
  SImode,                  /* HI */
  DImode,                  /* SI */
  TImode,                  /* DI */
  VOIDmode,                /* TI */
  VOIDmode,                /* PSI */
  DFmode,                  /* SF */
  TFmode,                  /* DF */
  VOIDmode,                /* TF */
  DDmode,                  /* SD */
  TDmode,                  /* DD */
  VOIDmode,                /* TD */
  CHImode,                 /* CQI */
  CSImode,                 /* CHI */
  CDImode,                 /* CSI */
  CTImode,                 /* CDI */
  VOIDmode,                /* CTI */
  DCmode,                  /* SC */
  TCmode,                  /* DC */
  VOIDmode,                /* TC */
  V16QImode,               /* V8QI */
  V16QImode,               /* V4HI */
  V16QImode,               /* V2SI */
  V16QImode,               /* V1DI */
  VOIDmode,                /* V16QI */
  VOIDmode,                /* V8HI */
  VOIDmode,                /* V4SI */
  VOIDmode,                /* V2DI */
  V4SFmode,                /* V2SF */
  VOIDmode,                /* V4SF */
  VOIDmode,                /* V2DF */
};

const unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] =
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? ~(unsigned HOST_WIDE_INT) 0              \
   : ((unsigned HOST_WIDE_INT) 1 << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCUNS */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCFP */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCEQ */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (4*BITS_PER_UNIT),   /* PSI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* TF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SD */
  MODE_MASK (8*BITS_PER_UNIT),   /* DD */
  MODE_MASK (16*BITS_PER_UNIT),    /* TD */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (32*BITS_PER_UNIT),    /* TC */
  MODE_MASK (8*BITS_PER_UNIT),   /* V8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V1DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V16QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DF */
#undef MODE_MASK
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  VOIDmode,                /* VOID */
  VOIDmode,                /* BLK */
  VOIDmode,                /* CC */
  VOIDmode,                /* CCUNS */
  VOIDmode,                /* CCFP */
  VOIDmode,                /* CCEQ */
  VOIDmode,                /* BI */
  VOIDmode,                /* QI */
  VOIDmode,                /* HI */
  VOIDmode,                /* SI */
  VOIDmode,                /* DI */
  VOIDmode,                /* TI */
  VOIDmode,                /* PSI */
  VOIDmode,                /* SF */
  VOIDmode,                /* DF */
  VOIDmode,                /* TF */
  VOIDmode,                /* SD */
  VOIDmode,                /* DD */
  VOIDmode,                /* TD */
  QImode,                  /* CQI */
  HImode,                  /* CHI */
  SImode,                  /* CSI */
  DImode,                  /* CDI */
  TImode,                  /* CTI */
  SFmode,                  /* SC */
  DFmode,                  /* DC */
  TFmode,                  /* TC */
  QImode,                  /* V8QI */
  HImode,                  /* V4HI */
  SImode,                  /* V2SI */
  DImode,                  /* V1DI */
  QImode,                  /* V16QI */
  HImode,                  /* V8HI */
  SImode,                  /* V4SI */
  DImode,                  /* V2DI */
  SFmode,                  /* V2SF */
  SFmode,                  /* V4SF */
  DFmode,                  /* V2DF */
};

const unsigned char mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCUNS */
  4,                       /* CCFP */
  4,                       /* CCEQ */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  4,                       /* PSI */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* TC */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  8,                       /* V1DI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* PSI */
  MIN_MODE_FLOAT,          /* SF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* SC */
  MIN_MODE_VECTOR_INT,     /* V8QI */
  MIN_MODE_VECTOR_FLOAT,   /* V2SF */
};

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1 + MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1] =
{
  &ieee_single_format,     /* SF */
  &ieee_double_format,     /* DF */
  &ieee_quad_format,       /* TF */
  &decimal_single_format,  /* SD */
  &decimal_double_format,  /* DD */
  &decimal_quad_format,    /* TD */
};

void
init_adjust_machine_modes (void)
{
  size_t s ATTRIBUTE_UNUSED;
}
