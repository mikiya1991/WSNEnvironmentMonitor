#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr node3_VIName;
extern eRunStatus node3_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define node3_formID 2000

extern TextPtr set_ai_power_VIName;
extern eRunStatus set_ai_power_Run(
				DataType dtset_ai_power_in_0_pow_31, int32  set_ai_power_in_0_pow_31	);
#define set_ai_power_formID 2100

extern TextPtr sample_a1_VIName;
extern eRunStatus sample_a1_Run(
				DataType dtsample_a1_in_0_delta_9A2, int32  sample_a1_in_0_delta_9A2,
				DataType dtsample_a1_in_1_threshold_138, int32  sample_a1_in_1_threshold_138,
				DataType dtsample_a1_in_2_times_31D, int32  sample_a1_in_2_times_31D,
				DataType dtsample_a1_out_0_ai_426, float32*  sample_a1_out_0_ai_426	);
#define sample_a1_formID 2200

extern TextPtr sample_a0_VIName;
extern eRunStatus sample_a0_Run(
				DataType dtsample_a0_in_0_threshold_138, int32  sample_a0_in_0_threshold_138,
				DataType dtsample_a0_in_1_times_31D, int32  sample_a0_in_1_times_31D,
				DataType dtsample_a0_out_0_A______1DC, Boolean*  sample_a0_out_0_A______1DC,
				DataType dtsample_a0_out_1_ai_426, float32*  sample_a0_out_1_ai_426	);
#define sample_a0_formID 2300

extern TextPtr A__________VIName;
extern eRunStatus A__________Run(
				DataType dtA__________in_0_in_31, float64* A__________in_0_in_31,
				DataType dtA__________out_0_out_152, float64*  A__________out_0_out_152	);
#define A__________formID 2400

extern TextPtr message_dio_control_VIName;
extern eRunStatus message_dio_control_Run(
				DataType dtmessage_dio_control_in_0_usermessage_35, VoidHand  message_dio_control_in_0_usermessage_35	);
#define message_dio_control_formID 2500

extern TextPtr set_red_state_VIName;
extern eRunStatus set_red_state_Run(
				DataType dtset_red_state_in_0_A________31, VoidHand  set_red_state_in_0_A________31,
				DataType dtset_red_state_in_1_red_704, cl_A0000  set_red_state_in_1_red_704,
				DataType dtset_red_state_out_0_set_24A, cl_A0000*  set_red_state_out_0_set_24A	);
#define set_red_state_formID 2600

#ifdef LV_MAIN
FormTableEntry formTable[] = {
{ node3_formID, node3_Start, &node3_VIName },
};
uInt8 formTableSize = 1;
#ifndef No_OS
LVCriticalSection gVICriticalSections[1];
uInt8 gVICriticalSectionsSize = 0;
#endif
#else
extern FormTableEntry formTable[];
#endif

#endif
