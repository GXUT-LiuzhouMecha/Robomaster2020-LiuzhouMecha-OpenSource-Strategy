//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: RM.cpp
//
// Code generated for Simulink model 'RM'.
//
// Model version                  : 1.2
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Wed Aug 26 14:36:30 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "RM.h"
#include "RM_private.h"

// Named constants for Chart: '<Root>/Chart'
#define RM_IN_A                        ((uint8_T)1U)
#define RM_IN_ADDHP                    ((uint8_T)1U)
#define RM_IN_B                        ((uint8_T)2U)
#define RM_IN_C                        ((uint8_T)3U)
#define RM_IN_FIN2                     ((uint8_T)2U)
#define RM_IN_FIN3                     ((uint8_T)3U)
#define RM_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define RM_IN_SPEED                    ((uint8_T)4U)
#define RM_IN_TANK                     ((uint8_T)5U)
#define RM_IN_USU                      ((uint8_T)6U)

// Function for Chart: '<Root>/Chart'
void RMModelClass::RM_USU(void)
{
  switch (RM_DW.is_USU) {
   case RM_IN_A:
   case RM_IN_C:
    break;

   case RM_IN_B:
    RM_DW.is_USU = RM_IN_C;
    break;

   default:
    // case IN_D:
    RM_DW.is_USU = RM_IN_A;
    break;
  }
}

// Model step function
void RMModelClass::step()
{
  // Chart: '<Root>/Chart'
  if (RM_DW.is_active_c3_RM == 0U) {
    RM_DW.is_active_c3_RM = 1U;
    RM_DW.is_c3_RM = RM_IN_USU;
    RM_DW.is_USU = RM_IN_A;
  } else {
    switch (RM_DW.is_c3_RM) {
     case RM_IN_ADDHP:
      RM_DW.is_c3_RM = RM_IN_USU;
      RM_DW.is_USU = RM_IN_A;
      break;

     case RM_IN_FIN2:
      RM_DW.is_c3_RM = RM_IN_FIN3;
      break;

     case RM_IN_FIN3:
      RM_DW.is_c3_RM = RM_IN_FIN2;
      break;

     case RM_IN_SPEED:
      RM_DW.is_c3_RM = RM_IN_USU;
      RM_DW.is_USU = RM_IN_A;
      break;

     case RM_IN_TANK:
      RM_DW.is_c3_RM = RM_IN_USU;
      RM_DW.is_USU = RM_IN_A;
      break;

     default:
      // case IN_USU:
      RM_USU();
      break;
    }
  }

  // End of Chart: '<Root>/Chart'
}

// Model initialize function
void RMModelClass::initialize()
{
  // Registration code

  // initialize error status
  rtmSetErrorStatus((&RM_M), (NULL));

  // states (dwork)
  (void) memset((void *)&RM_DW, 0,
                sizeof(DW_RM_T));

  // SystemInitialize for Chart: '<Root>/Chart'
  RM_DW.is_USU = RM_IN_NO_ACTIVE_CHILD;
  RM_DW.is_active_c3_RM = 0U;
  RM_DW.is_c3_RM = RM_IN_NO_ACTIVE_CHILD;
}

// Model terminate function
void RMModelClass::terminate()
{
  // (no terminate code required)
}

// Constructor
RMModelClass::RMModelClass()
{
  // Currently there is no constructor body generated.
}

// Destructor
RMModelClass::~RMModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_RM_T * RMModelClass::getRTM()
{
  return (&RM_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
