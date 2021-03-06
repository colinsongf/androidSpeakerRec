/*
 * fi_fft.h
 *
 * Code generation for function 'fi_fft'
 *
 * C source code generated on: Fri Jan 25 00:33:15 2013
 *
 */

#ifndef __FI_FFT_H__
#define __FI_FFT_H__
/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "fi_mfcc_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void b_fi_fft(int32_T x[32], cint32_T xc[32]);
extern void fi_fft(int32_T x[128], cint32_T xc[128]);
#endif
/* End of code generation (fi_fft.h) */
