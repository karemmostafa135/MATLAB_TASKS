/*
 * File: Increment_Counter.h
 *
 * Code generated for Simulink model 'Increment_Counter'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Jan 24 14:20:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Increment_Counter_h_
#define RTW_HEADER_Increment_Counter_h_
#include <stddef.h>
#ifndef Increment_Counter_COMMON_INCLUDES_
#define Increment_Counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Increment_Counter_COMMON_INCLUDES_ */

#include "Increment_Counter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_Increment_Counter_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void Increment_Counter_initialize(void);
extern void Increment_Counter_step(void);
extern void Increment_Counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Increment_Counter_T *const Increment_Counter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add' : Unused code path elimination
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 * Block '<Root>/Constant4' : Unused code path elimination
 * Block '<Root>/Constant5' : Unused code path elimination
 * Block '<Root>/Relational Operator' : Unused code path elimination
 * Block '<Root>/Relational Operator1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Switch' : Unused code path elimination
 * Block '<Root>/Switch1' : Unused code path elimination
 * Block '<Root>/Unit Delay' : Unused code path elimination
 * Block '<Root>/Unit Delay1' : Unused code path elimination
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
 * '<Root>' : 'Increment_Counter'
 */
#endif                                 /* RTW_HEADER_Increment_Counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
