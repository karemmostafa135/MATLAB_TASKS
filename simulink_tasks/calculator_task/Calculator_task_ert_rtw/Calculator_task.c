/*
 * File: Calculator_task.c
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

#include "Calculator_task.h"
#include "Calculator_task_private.h"

/* Block signals (default storage) */
B_Calculator_task_T Calculator_task_B;

/* External inputs (root inport signals with default storage) */
ExtU_Calculator_task_T Calculator_task_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Calculator_task_T Calculator_task_Y;

/* Real-time model */
static RT_MODEL_Calculator_task_T Calculator_task_M_;
RT_MODEL_Calculator_task_T *const Calculator_task_M = &Calculator_task_M_;

/* Output and update for atomic system: '<Root>/Subsystem' */
void Calculator_task_Subsystem(real_T rtu_In1, real_T rtu_In2, real_T rtu_In3,
  B_Subsystem_Calculator_task_T *localB)
{
  /* Sum: '<S3>/Add' */
  localB->Add = rtu_In1 + rtu_In2;

  /* Product: '<S3>/Divide' */
  localB->Divide = rtu_In1 / rtu_In2;

  /* Product: '<S3>/Product' */
  localB->Product = rtu_In1 * rtu_In2;

  /* Sum: '<S3>/Subtract' */
  localB->Subtract = rtu_In1 - rtu_In2;

  /* UnaryMinus: '<S3>/Unary Minus' */
  localB->UnaryMinus = -rtu_In3;
}

/* Model step function */
void Calculator_task_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */

  /* Inport: '<Root>/Num1' incorporates:
   *  Inport: '<Root>/Num2'
   *  Inport: '<Root>/Num3'
   */
  Calculator_task_Subsystem(Calculator_task_U.Num1, Calculator_task_U.Num2,
    Calculator_task_U.Num3, &Calculator_task_B.Subsystem);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Sub_Result' */
  Calculator_task_Y.Sub_Result = Calculator_task_B.Subsystem.Subtract;

  /* Outport: '<Root>/Add_Result' */
  Calculator_task_Y.Add_Result = Calculator_task_B.Subsystem.Add;

  /* Outport: '<Root>/Div_Result' */
  Calculator_task_Y.Div_Result = Calculator_task_B.Subsystem.Divide;

  /* Outport: '<Root>/Mult_Result' */
  Calculator_task_Y.Mult_Result = Calculator_task_B.Subsystem.Product;

  /* Outport: '<Root>/Unary_Result' */
  Calculator_task_Y.Unary_Result = Calculator_task_B.Subsystem.UnaryMinus;
}

/* Model initialize function */
void Calculator_task_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Calculator_task_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Calculator_task_B), 0,
                sizeof(B_Calculator_task_T));

  /* external inputs */
  (void)memset(&Calculator_task_U, 0, sizeof(ExtU_Calculator_task_T));

  /* external outputs */
  (void) memset((void *)&Calculator_task_Y, 0,
                sizeof(ExtY_Calculator_task_T));
}

/* Model terminate function */
void Calculator_task_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
