/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: set_ai_power.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node_sub\set_ai_power.vi
 *  Generated UI: false
 *  Generated Debug Info: false
 *  Generated Serial Only: true
 *  Generated Stack Variables: false
 *  Generated Guard Code: true
 *  Generated Interrupt Code: false
 *  Generated C Function Calls: true
 *  Generated Integer Only : false
 *  Generated Expression Folding : false
 *  Generated memory model: dynamic
*****************************************************************************************/
#include "LVCGenIncludes.h"
#if CGEN_VERSION != 12000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _set_ai_power_heap { 
	int32 l_pow_CS;
	int32 l_pow_3;
	uInt16 n_Sensor_Power;
	uInt16 n_Sensor_Power_1;
	uInt16 n_Sensor_Power_2;
	uInt16 n_Sensor_Power_3;
	uInt16 n_Sensor_Power_4;
	uInt16 n_Sensor_Power_5;
	uInt16 n_Sensor_Power_9;
	uInt16 n_Sensor_Power_8;
	uInt16 n_Sensor_Power_6;
	uInt16 n_Sensor_Power_7;
	int16 i_IO_Channel_Number_8;
	int16 i_IO_Channel_Number_9;
	int16 i_IO_Channel_Number_7;
	int16 i_IO_Channel_Number_6;
	int16 i_IO_Channel_Number_5;
	int16 i_IO_Channel_Number_4;
	int16 i_IO_Channel_Number_10;
	int16 i_IO_Channel_Number_3;
	int16 i_IO_Channel_Number_2;
	int16 i_IO_Channel_Number_11;
} _DATA_SECTION __set_ai_power_heap; /* heap */

static struct _set_ai_power_heap _DATA_SECTION *heap = &__set_ai_power_heap; /* heap */



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION set_ai_power_CleanupLSRs(void);
void _TEXT_SECTION set_ai_power_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION set_ai_power_AddVIGlobalConstants(void);
void _TEXT_SECTION set_ai_power_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION set_ai_power_InitVIConstantList(void);
void _TEXT_SECTION set_ai_power_InitVIConstantList(void) {
}


/****** Block diagram code **********/


int32 set_ai_power_in_0_pow_31 = 0 ;
static DataType dtset_ai_power_in_0_pow_31 = int32DataType;
extern eRunStatus set_ai_power_Run(
				DataType dtset_ai_power_in_0_pow_31, int32  set_ai_power_in_0_pow_31	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	set_ai_power_InitVIConstantList();
	{
		heap->l_pow_3 = set_ai_power_in_0_pow_31;
		{ /* Select */
			heap->l_pow_CS = heap->l_pow_3;
			/* begin case */
			if ( ( (heap->l_pow_CS <= 25) && (heap->l_pow_CS >= 1) ) ) {
				{
					heap->n_Sensor_Power_3 = 2;
					heap->n_Sensor_Power_2 = 2;
					{
						heap->i_IO_Channel_Number_4 = 1;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_2;
							channel = heap->i_IO_Channel_Number_4;

							{
								#include "set_ai_power_inlineC__39.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
					{
						heap->i_IO_Channel_Number_5 = 0;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_3;
							channel = heap->i_IO_Channel_Number_5;

							{
								#include "set_ai_power_inlineC__2E.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
			} /* end case */
			/* begin case */
			else if ( ( (heap->l_pow_CS <= 100) && (heap->l_pow_CS >= 26) ) ) {
				{
					heap->n_Sensor_Power_5 = 3;
					heap->n_Sensor_Power_4 = 3;
					{
						heap->i_IO_Channel_Number_6 = 1;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_4;
							channel = heap->i_IO_Channel_Number_6;

							{
								#include "set_ai_power_inlineC__51.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
					{
						heap->i_IO_Channel_Number_7 = 0;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_5;
							channel = heap->i_IO_Channel_Number_7;

							{
								#include "set_ai_power_inlineC__46.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
			} /* end case */
			/* begin case */
			else if ( ( (heap->l_pow_CS <= 250) && (heap->l_pow_CS >= 101) ) ) {
				{
					heap->n_Sensor_Power_7 = 4;
					heap->n_Sensor_Power_6 = 4;
					{
						heap->i_IO_Channel_Number_8 = 1;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_6;
							channel = heap->i_IO_Channel_Number_8;

							{
								#include "set_ai_power_inlineC__69.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
					{
						heap->i_IO_Channel_Number_9 = 0;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_7;
							channel = heap->i_IO_Channel_Number_9;

							{
								#include "set_ai_power_inlineC__5E.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
			} /* end case */
			/* begin case */
			else if ( ( (heap->l_pow_CS >= 251) ) ) {
				{
					heap->n_Sensor_Power_9 = 254;
					heap->n_Sensor_Power_8 = 254;
					{
						heap->i_IO_Channel_Number_10 = 1;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_8;
							channel = heap->i_IO_Channel_Number_10;

							{
								#include "set_ai_power_inlineC__81.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
					{
						heap->i_IO_Channel_Number_11 = 0;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_9;
							channel = heap->i_IO_Channel_Number_11;

							{
								#include "set_ai_power_inlineC__76.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
			} /* end case */
			/* begin case */
			else {
				{
					heap->n_Sensor_Power_1 = 1;
					heap->n_Sensor_Power = 1;
					{
						heap->i_IO_Channel_Number_2 = 1;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power;
							channel = heap->i_IO_Channel_Number_2;

							{
								#include "set_ai_power_inlineC__21.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
					{
						heap->i_IO_Channel_Number_3 = 0;
/* Inline C node */
						{
							uInt16 mode = 0;
							int16 channel = 0;
							mode = heap->n_Sensor_Power_1;
							channel = heap->i_IO_Channel_Number_3;

							{
								#include "set_ai_power_inlineC__16.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
			} /* end case */
		} /* end switch */
		return eFinished;
	}
}


/****** Library interface **********/


Boolean set_ai_power(
				int32 set_ai_power_in_0_pow_31_in				)
{
	eRunStatus retStat = eFinished;
	retStat = set_ai_power_Run(
	(int32DataType),	(int32)	set_ai_power_in_0_pow_31_in	);
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


