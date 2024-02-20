/*
 * File: grading_system.h
 *
 * Code generated for Simulink model 'grading_system'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 18:50:03 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_grading_system_h_
#define RTW_HEADER_grading_system_h_
#include <stddef.h>
#ifndef grading_system_COMMON_INCLUDES_
#define grading_system_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* grading_system_COMMON_INCLUDES_ */

#include "grading_system_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_grading_system_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void grading_system_initialize(void);
extern void grading_system_step(void);
extern void grading_system_terminate(void);

/* Real-time Model object */
extern RT_MODEL_grading_system_T *const grading_system_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'grading_system'
 * '<S1>'   : 'grading_system/If Action Subsystem'
 * '<S2>'   : 'grading_system/If Action Subsystem1'
 * '<S3>'   : 'grading_system/If Action Subsystem2'
 * '<S4>'   : 'grading_system/If Action Subsystem3'
 * '<S5>'   : 'grading_system/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_grading_system_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
