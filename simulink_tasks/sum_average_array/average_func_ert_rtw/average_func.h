/*
 * File: average_func.h
 *
 * Code generated for Simulink model 'average_func'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sun Jan 21 18:41:09 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_average_func_h_
#define RTW_HEADER_average_func_h_
#include <stddef.h>
#include <string.h>
#ifndef average_func_COMMON_INCLUDES_
#define average_func_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* average_func_COMMON_INCLUDES_ */

#include "average_func_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S2>/MATLAB Function' */
typedef struct {
  real_T avg;                          /* '<S2>/MATLAB Function' */
} B_MATLABFunction_average_func_T;

/* Block signals (default storage) */
typedef struct {
  B_MATLABFunction_average_func_T sf_MATLABFunction_d;/* '<S4>/MATLAB Function' */
  B_MATLABFunction_average_func_T sf_MATLABFunction;/* '<S2>/MATLAB Function' */
} B_average_func_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T SumofElements;          /* '<S3>/Sum of Elements' */
} ConstB_average_func_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_average_func_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Average;                      /* '<Root>/Average' */
  real_T Min;                          /* '<Root>/Min' */
  real_T Max;                          /* '<Root>/Max' */
  real_T Average1;                     /* '<Root>/Average1' */
  real_T Min1;                         /* '<Root>/Min1' */
  real_T Min2;                         /* '<Root>/Min2' */
  real_T Average2;                     /* '<Root>/Average2' */
} ExtY_average_func_T;

/* Real-time Model Data Structure */
struct tag_RTM_average_func_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_average_func_T average_func_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_average_func_T average_func_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_average_func_T average_func_Y;
extern const ConstB_average_func_T average_func_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void average_func_initialize(void);
extern void average_func_step(void);
extern void average_func_terminate(void);

/* Real-time Model object */
extern RT_MODEL_average_func_T *const average_func_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<S1>/MinMax' : Eliminated since input is scalar
 * Block '<S1>/MinMax1' : Eliminated since input is scalar
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'average_func'
 * '<S1>'   : 'average_func/Subsystem'
 * '<S2>'   : 'average_func/Subsystem1'
 * '<S3>'   : 'average_func/Subsystem2'
 * '<S4>'   : 'average_func/Subsystem3'
 * '<S5>'   : 'average_func/Subsystem4'
 * '<S6>'   : 'average_func/Subsystem1/MATLAB Function'
 * '<S7>'   : 'average_func/Subsystem3/MATLAB Function'
 * '<S8>'   : 'average_func/Subsystem4/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_average_func_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
