//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: RM.h
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
#ifndef RTW_HEADER_RM_h_
#define RTW_HEADER_RM_h_
#include <stddef.h>
#include <string.h>
#ifndef RM_COMMON_INCLUDES_
# define RM_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // RM_COMMON_INCLUDES_

#include "RM_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block states (default storage) for system '<Root>'
typedef struct {
  uint8_T is_active_c3_RM;             // '<Root>/Chart'
  uint8_T is_c3_RM;                    // '<Root>/Chart'
  uint8_T is_USU;                      // '<Root>/Chart'
} DW_RM_T;

// Real-time Model Data Structure
struct tag_RTM_RM_T {
  const char_T * volatile errorStatus;
};

// Class declaration for model RM
class RMModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  RMModelClass();

  // Destructor
  ~RMModelClass();

  // Real-Time Model get method
  RT_MODEL_RM_T * getRTM();

  // private data and function members
 private:
  // Block states
  DW_RM_T RM_DW;

  // Real-Time Model
  RT_MODEL_RM_T RM_M;

  // private member function(s) for subsystem '<Root>'
  void RM_USU(void);
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'RM'
//  '<S1>'   : 'RM/Chart'

#endif                                 // RTW_HEADER_RM_h_

//
// File trailer for generated code.
//
// [EOF]
//
