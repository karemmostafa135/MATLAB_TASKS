/*
 * File: Calculator_task.h
 *
 * Code generated for Simulink model 'Calculator_task'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Sat Jan 20 18:37:59 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calculator_task_h_
#define RTW_HEADER_Calculator_task_h_
#include <string.h>
#include <stddef.h>
#ifndef Calculator_task_COMMON_INCLUDES_
#define Calculator_task_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calculator_task_COMMON_INCLUDES_ */

#include "Calculator_task_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  real_T Add;                          /* '<S3>/Add' */
  real_T Divide;                       /* '<S3>/Divide' */
  real_T Product;                      /* '<S3>/Product' */
  real_T Subtract;                     /* '<S3>/Subtract' */
  real_T UnaryMinus;                   /* '<S3>/Unary Minus' */
} B_Subsystem_Calculator_task_T;

/* Block signals (default storage) */
typedef struct {
  B_Subsystem_Calculator_task_T Subsystem;/* '<Root>/Subsystem' */
} B_Calculator_task_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Num1;                         /* '<Root>/Num1' */
  real_T Num2;                         /* '<Root>/Num2' */
  real_T Num3;                         /* '<Root>/Num3' */
} ExtU_Calculator_task_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Sub_Result;                   /* '<Root>/Sub_Result' */
  real_T Add_Result;                   /* '<Root>/Add_Result' */
  real_T Div_Result;                   /* '<Root>/Div_Result' */
  real_T Mult_Result;                  /* '<Root>/Mult_Result' */
  real_T Unary_Result;                 /* '<Root>/Unary_Result' */
} ExtY_Calculator_task_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_task_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Calculator_task_T Calculator_task_B;

/* External inputs (root inport signals with default storage) */
extern ExtU_Calculator_task_T Calculator_task_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Calculator_task_T Calculator_task_Y;

/* Model entry point functions */
extern void Calculator_task_initialize(void);
extern void Calculator_task_step(void);
extern void Calculator_task_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_task_T *const Calculator_task_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Compare' : Unused code path elimination
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S2>/Compare' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/To String' : Unused code path elimination
 * Block '<Root>/To String1' : Unused code path elimination
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
 * '<Root>' : 'Calculator_task'
 * '<S1>'   : 'Calculator_task/Compare To Zero'
 * '<S2>'   : 'Calculator_task/Compare To Zero1'
 * '<S3>'   : 'Calculator_task/Subsystem'
 */
#endif                                 /* RTW_HEADER_Calculator_task_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
