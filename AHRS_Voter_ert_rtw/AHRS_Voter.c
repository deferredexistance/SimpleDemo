/*
 * File: AHRS_Voter.c
 *
 * Code generated for Simulink model 'AHRS_Voter'.
 *
 * Model version                  : 8.0
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Tue Sep  2 20:03:25 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 10
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AHRS_Voter.h"
#include <math.h>
#include <stdint.h>

/* External inputs (root inport signals with default storage) */
ExtU_AHRS_Voter_T AHRS_Voter_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AHRS_Voter_T AHRS_Voter_Y;

/* Model step function */
void AHRS_Voter_step(void)
{
  double rtb_Switch1[5];
  double rtb_Switch1_h2ux[5];
  double rtb_Switch2[5];
  double rtb_Switch2_plpr[5];
  double rtb_Switch3[5];
  double rtb_Switch3_nvkn[5];
  int32_t i;
  int32_t i_0;
  int32_t i_1;
  int32_t i_2;
  int32_t i_3;
  int32_t i_4;
  int32_t i_5;
  int32_t i_6;
  int32_t i_7;

  /* SwitchCase: '<Root>/SwitchCase' incorporates:
   *  DataTypeConversion: '<Root>/DataTypeConversion'
   *  DataTypeConversion: '<Root>/DataTypeConversion1'
   *  DataTypeConversion: '<Root>/DataTypeConversion2'
   *  Inport: '<Root>/AHRS1'
   *  Inport: '<Root>/AHRS2'
   *  Inport: '<Root>/AHRS3'
   *  Sum: '<Root>/Sum'
   *
   * Block requirements for '<Root>/SwitchCase':
   *  1. HighLevelReqs.slreqx:15
   *  2. HighLevelReqs.slreqx:16
   *  3. HighLevelReqs.slreqx:17
   *  4. HighLevelReqs.slreqx:18
   *
   * Block requirements for '<Root>/DataTypeConversion':
   *  1. HighLevelReqs.slreqx:13
   *
   * Block requirements for '<Root>/DataTypeConversion1':
   *  1. HighLevelReqs.slreqx:13
   *
   * Block requirements for '<Root>/DataTypeConversion2':
   *  1. HighLevelReqs.slreqx:13
   *
   * Block requirements for '<Root>/Sum':
   *  1. HighLevelReqs.slreqx:13
   */
  switch ((((int32_t)(AHRS_Voter_U.AHRS1.valid ? 1 : 0)) + ((int32_t)
            (AHRS_Voter_U.AHRS2.valid ? 1 : 0))) + ((int32_t)
           (AHRS_Voter_U.AHRS3.valid ? 1 : 0))) {
   case 3:
    /* Outputs for IfAction SubSystem: '<Root>/MidValue' incorporates:
     *  ActionPort: '<S2>/ActionPort'
     *
     * Block requirements for '<Root>/MidValue':
     *  1. HighLevelReqs.slreqx:15
     */
    /* Outport: '<Root>/AHRSData' incorporates:
     *  MinMax: '<S2>/MinMax'
     *  MinMax: '<S2>/MinMax1'
     *  MinMax: '<S2>/MinMax2'
     *  MinMax: '<S2>/MinMax3'
     */
    AHRS_Voter_Y.AHRSData[0] = fmax(fmax(fmin(AHRS_Voter_U.AHRS1.theta,
      AHRS_Voter_U.AHRS2.theta), fmin(AHRS_Voter_U.AHRS2.theta,
      AHRS_Voter_U.AHRS3.theta)), fmin(AHRS_Voter_U.AHRS3.theta,
      AHRS_Voter_U.AHRS1.theta));
    AHRS_Voter_Y.AHRSData[1] = fmax(fmax(fmin(AHRS_Voter_U.AHRS1.phi,
      AHRS_Voter_U.AHRS2.phi), fmin(AHRS_Voter_U.AHRS2.phi,
      AHRS_Voter_U.AHRS3.phi)), fmin(AHRS_Voter_U.AHRS3.phi,
      AHRS_Voter_U.AHRS1.phi));
    AHRS_Voter_Y.AHRSData[2] = fmax(fmax(fmin(AHRS_Voter_U.AHRS1.r,
      AHRS_Voter_U.AHRS2.r), fmin(AHRS_Voter_U.AHRS2.r, AHRS_Voter_U.AHRS3.r)),
      fmin(AHRS_Voter_U.AHRS3.r, AHRS_Voter_U.AHRS1.r));
    AHRS_Voter_Y.AHRSData[3] = fmax(fmax(fmin(AHRS_Voter_U.AHRS1.q,
      AHRS_Voter_U.AHRS2.q), fmin(AHRS_Voter_U.AHRS2.q, AHRS_Voter_U.AHRS3.q)),
      fmin(AHRS_Voter_U.AHRS3.q, AHRS_Voter_U.AHRS1.q));
    AHRS_Voter_Y.AHRSData[4] = fmax(fmax(fmin(AHRS_Voter_U.AHRS1.p,
      AHRS_Voter_U.AHRS2.p), fmin(AHRS_Voter_U.AHRS2.p, AHRS_Voter_U.AHRS3.p)),
      fmin(AHRS_Voter_U.AHRS3.p, AHRS_Voter_U.AHRS1.p));

    /* End of Outputs for SubSystem: '<Root>/MidValue' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<Root>/AvgValue' incorporates:
     *  ActionPort: '<S1>/ActionPort'
     *
     * Block requirements for '<Root>/AvgValue':
     *  1. HighLevelReqs.slreqx:16
     */
    /* Switch: '<S1>/Switch1' */
    if (AHRS_Voter_U.AHRS1.valid) {
      rtb_Switch1_h2ux[0] = AHRS_Voter_U.AHRS1.theta;
      rtb_Switch1_h2ux[1] = AHRS_Voter_U.AHRS1.phi;
      rtb_Switch1_h2ux[2] = AHRS_Voter_U.AHRS1.r;
      rtb_Switch1_h2ux[3] = AHRS_Voter_U.AHRS1.q;
      rtb_Switch1_h2ux[4] = AHRS_Voter_U.AHRS1.p;
    } else {
      for (i_6 = 0; i_6 < 5; i_6 = i_6 + 1) {
        rtb_Switch1_h2ux[i_6] = 0.0;
      }
    }

    /* End of Switch: '<S1>/Switch1' */

    /* Switch: '<S1>/Switch2' */
    if (AHRS_Voter_U.AHRS2.valid) {
      rtb_Switch2_plpr[0] = AHRS_Voter_U.AHRS2.theta;
      rtb_Switch2_plpr[1] = AHRS_Voter_U.AHRS2.phi;
      rtb_Switch2_plpr[2] = AHRS_Voter_U.AHRS2.r;
      rtb_Switch2_plpr[3] = AHRS_Voter_U.AHRS2.q;
      rtb_Switch2_plpr[4] = AHRS_Voter_U.AHRS2.p;
    } else {
      for (i_5 = 0; i_5 < 5; i_5 = i_5 + 1) {
        rtb_Switch2_plpr[i_5] = 0.0;
      }
    }

    /* End of Switch: '<S1>/Switch2' */

    /* Switch: '<S1>/Switch3' */
    if (AHRS_Voter_U.AHRS3.valid) {
      rtb_Switch3_nvkn[0] = AHRS_Voter_U.AHRS3.theta;
      rtb_Switch3_nvkn[1] = AHRS_Voter_U.AHRS3.phi;
      rtb_Switch3_nvkn[2] = AHRS_Voter_U.AHRS3.r;
      rtb_Switch3_nvkn[3] = AHRS_Voter_U.AHRS3.q;
      rtb_Switch3_nvkn[4] = AHRS_Voter_U.AHRS3.p;
    } else {
      for (i_4 = 0; i_4 < 5; i_4 = i_4 + 1) {
        rtb_Switch3_nvkn[i_4] = 0.0;
      }
    }

    /* End of Switch: '<S1>/Switch3' */
    for (i_3 = 0; i_3 < 5; i_3 = i_3 + 1) {
      /* Outport: '<Root>/AHRSData' incorporates:
       *  Gain: '<S1>/Gain'
       *  Sum: '<S1>/Sum'
       */
      AHRS_Voter_Y.AHRSData[i_3] = 0.5 * ((rtb_Switch1_h2ux[i_3] +
        rtb_Switch2_plpr[i_3]) + rtb_Switch3_nvkn[i_3]);
    }

    /* End of Outputs for SubSystem: '<Root>/AvgValue' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<Root>/OneValue' incorporates:
     *  ActionPort: '<S4>/ActionPort'
     *
     * Block requirements for '<Root>/OneValue':
     *  1. HighLevelReqs.slreqx:17
     */
    /* Switch: '<S4>/Switch1' */
    if (AHRS_Voter_U.AHRS1.valid) {
      rtb_Switch1[0] = AHRS_Voter_U.AHRS1.theta;
      rtb_Switch1[1] = AHRS_Voter_U.AHRS1.phi;
      rtb_Switch1[2] = AHRS_Voter_U.AHRS1.r;
      rtb_Switch1[3] = AHRS_Voter_U.AHRS1.q;
      rtb_Switch1[4] = AHRS_Voter_U.AHRS1.p;
    } else {
      for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
        rtb_Switch1[i_2] = 0.0;
      }
    }

    /* End of Switch: '<S4>/Switch1' */

    /* Switch: '<S4>/Switch2' */
    if (AHRS_Voter_U.AHRS2.valid) {
      rtb_Switch2[0] = AHRS_Voter_U.AHRS2.theta;
      rtb_Switch2[1] = AHRS_Voter_U.AHRS2.phi;
      rtb_Switch2[2] = AHRS_Voter_U.AHRS2.r;
      rtb_Switch2[3] = AHRS_Voter_U.AHRS2.q;
      rtb_Switch2[4] = AHRS_Voter_U.AHRS2.p;
    } else {
      for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
        rtb_Switch2[i_1] = 0.0;
      }
    }

    /* End of Switch: '<S4>/Switch2' */

    /* Switch: '<S4>/Switch3' */
    if (AHRS_Voter_U.AHRS3.valid) {
      rtb_Switch3[0] = AHRS_Voter_U.AHRS3.theta;
      rtb_Switch3[1] = AHRS_Voter_U.AHRS3.phi;
      rtb_Switch3[2] = AHRS_Voter_U.AHRS3.r;
      rtb_Switch3[3] = AHRS_Voter_U.AHRS3.q;
      rtb_Switch3[4] = AHRS_Voter_U.AHRS3.p;
    } else {
      for (i_0 = 0; i_0 < 5; i_0 = i_0 + 1) {
        rtb_Switch3[i_0] = 0.0;
      }
    }

    /* End of Switch: '<S4>/Switch3' */
    for (i = 0; i < 5; i = i + 1) {
      /* Outport: '<Root>/AHRSData' incorporates:
       *  Sum: '<S4>/Sum'
       */
      AHRS_Voter_Y.AHRSData[i] = (rtb_Switch1[i] + rtb_Switch2[i]) +
        rtb_Switch3[i];
    }

    /* End of Outputs for SubSystem: '<Root>/OneValue' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/ZeroValue' incorporates:
     *  ActionPort: '<S5>/ActionPort'
     *
     * Block requirements for '<Root>/ZeroValue':
     *  1. HighLevelReqs.slreqx:18
     */
    for (i_7 = 0; i_7 < 5; i_7 = i_7 + 1) {
      /* Outport: '<Root>/AHRSData' incorporates:
       *  Constant: '<S5>/Constant'
       */
      AHRS_Voter_Y.AHRSData[i_7] = 0.0;
    }

    /* End of Outputs for SubSystem: '<Root>/ZeroValue' */
    break;
  }

  /* End of SwitchCase: '<Root>/SwitchCase' */
}

/* Model initialize function */
void AHRS_Voter_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
