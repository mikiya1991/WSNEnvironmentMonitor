/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: sample_a1.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node_sub\sample_a1.vi
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
struct _sample_a1_heap { 
	int32 l_delta_3;
	int32 l____x_y;
	int32 l_threshold;
	int32 l____x_y_1;
	int32 l_times_6;
	int32 l_For_____i;
	int32 l_For_____N;
	float64 n_y_1;
	float64 n____x_y;
	float64 n_y;
	float64 n____x_y_1;
	float64 n____x_y_2;
	float64 n________________;
	float32 n_____C______________XT;
	float32 n_reading;
	float32 XNodeTun38;  
	float32 n_____C______________ST_1;
	PDAArrPtr a____x_y_LT;
	uInt8 by_t_3;
	uInt8 by______s__t_f_2;
	uInt8 by_IO_Channel_Number_6;
	uInt8 by_f_2;
	uInt8 by_t_2;
	uInt8 by_IO_Channel_Number_4;
	uInt8 by_IO_Channel_Number_5;
	uInt8 by_f_3;
	uInt8 by______s__t_f_3;
	int8 n_Constant_3;
	int8 n_Constant_4;
	int8 n_Constant_2;
	Boolean b_Constant_2;
	Boolean b_Constant_1;
	Boolean b________x___y__CS_1;
	Boolean b________x___y__2;
	Boolean b________x___y__1;
	Boolean b________x___y__CS_2;
} _DATA_SECTION __sample_a1_heap; /* heap */

static struct _sample_a1_heap _DATA_SECTION *heap = &__sample_a1_heap; /* heap */



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION sample_a1_CleanupLSRs(void);
void _TEXT_SECTION sample_a1_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION sample_a1_AddVIGlobalConstants(void);
void _TEXT_SECTION sample_a1_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION sample_a1_InitVIConstantList(void);
void _TEXT_SECTION sample_a1_InitVIConstantList(void) {
}


/****** Block diagram code **********/


int32 sample_a1_in_2_times_31D = 0 ;
static DataType dtsample_a1_in_2_times_31D = int32DataType;
float32 sample_a1_out_0_ai_426_init_ = 0.0000000000000000000E+0 ;
static float32* sample_a1_out_0_ai_426 = &sample_a1_out_0_ai_426_init_;
static DataType dtsample_a1_out_0_ai_426 = floatDataType;
int32 sample_a1_in_1_threshold_138 = 0 ;
static DataType dtsample_a1_in_1_threshold_138 = int32DataType;
int32 sample_a1_in_0_delta_9A2 = 0 ;
static DataType dtsample_a1_in_0_delta_9A2 = int32DataType;
extern eRunStatus sample_a1_Run(
				DataType dtsample_a1_in_0_delta_9A2, int32  sample_a1_in_0_delta_9A2,
				DataType dtsample_a1_in_1_threshold_138, int32  sample_a1_in_1_threshold_138,
				DataType dtsample_a1_in_2_times_31D, int32  sample_a1_in_2_times_31D,
				DataType dtsample_a1_out_0_ai_426, float32*  sample_a1_out_0_ai_426	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	sample_a1_InitVIConstantList();
	{
		heap->l_delta_3 = sample_a1_in_0_delta_9A2;
		heap->l_threshold = sample_a1_in_1_threshold_138;
		/**/
		/* 减 */
		/**/
		heap->l____x_y =  (heap->l_threshold - heap->l_delta_3);
		/**/
		/* 加 */
		/**/
		heap->l____x_y_1 =  (heap->l_threshold + heap->l_delta_3);
		heap->l_times_6 = sample_a1_in_2_times_31D;
		heap->l_For_____N = heap->l_times_6;
		if (!(heap->a____x_y_LT = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N, doubleDataType, uCharDataType, (ArrDimSize)0 ))){
			CGenErr();
		}
		for (heap->l_For_____i = 0;(heap->l_For_____i < heap->l_times_6) && !gAppStop && !gLastError; (heap->l_For_____i)++) {
			{
				heap->n_y_1 = 2.6182998657226562000E+2;
				heap->n_y = 2.0799999237060547000E+1;
				{
					heap->n_Constant_2 = 0;
					{
						heap->by_IO_Channel_Number_4 = 1;
						heap->n_reading = 0.0000000000000000000E+0;
/* Inline C node */
						{
							uInt8 channel = 0;
							float32 value = 0.0;
							int8 unusedInput = 0;
							channel = heap->by_IO_Channel_Number_4;
							value = heap->n_reading;
							unusedInput = heap->n_Constant_2;

							{
								#include "sample_a1_inlineC__23.h"
								heap->n_____C______________XT = value;
							}

#undef log
#undef log2
#undef ln
						}
					}
					{
/* Inline C node */
						{
							int8 unusedInput = 0;
							unusedInput = heap->n_Constant_2;

							{
								#include "sample_a1_inlineC__24.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
				/**/
				/* 除 */
				/**/
				PDAFltBinop( &heap->n_y_1, doubleDataType, &heap->n_____C______________XT, floatDataType, opDiv, &heap->n____x_y_2, doubleDataType);
				/**/
				/* 减 */
				/**/
				PDAFltBinop( &heap->n____x_y_2, doubleDataType, &heap->n_y, doubleDataType, opMinus, &heap->n____x_y_1, doubleDataType);
				/**/
				/* 小于？ */
				/**/
				PDAFltBinop( &heap->n____x_y_1, doubleDataType, &heap->l____x_y, int32DataType, opLT, &heap->b________x___y__1, BooleanDataType);
				{ /* Select */
					heap->b________x___y__CS_1 = heap->b________x___y__1;
					/* begin case */
					if ( heap->b________x___y__CS_1 ) {
						{
							heap->b_Constant_1 = true;
							{
								heap->n_Constant_3 = 0;
								{
									heap->by_IO_Channel_Number_5 = 0;
									heap->by_t_2 = 1;
									heap->by_f_2 = 0;
									/**/
									/* 选择 */
									/**/
									if (heap->b_Constant_1) {
										heap->by______s__t_f_2 = heap->by_t_2;
	}
									else {
										heap->by______s__t_f_2 = heap->by_f_2;
	}
/* Inline C node */
									{
										uInt8 channel = 0;
										uInt8 value = 0;
										int8 unusedInput = 0;
										channel = heap->by_IO_Channel_Number_5;
										value = heap->by______s__t_f_2;
										unusedInput = heap->n_Constant_3;

										{
											#include "sample_a1_inlineC__5C.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
/* Inline C node */
									{
										int8 unusedInput = 0;
										unusedInput = heap->n_Constant_3;

										{
											#include "sample_a1_inlineC__5E.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
							}
						}
					} /* end case */
					/* begin case */
					else {
						{
						}
					} /* end case */
				} /* end switch */
				/**/
				/* 大于？ */
				/**/
				PDAFltBinop( &heap->n____x_y_1, doubleDataType, &heap->l____x_y_1, int32DataType, opGT, &heap->b________x___y__2, BooleanDataType);
				{ /* Select */
					heap->b________x___y__CS_2 = heap->b________x___y__2;
					/* begin case */
					if ( heap->b________x___y__CS_2 ) {
						{
							heap->b_Constant_2 = false;
							{
								heap->n_Constant_4 = 0;
								{
									heap->by_IO_Channel_Number_6 = 0;
									heap->by_t_3 = 1;
									heap->by_f_3 = 0;
									/**/
									/* 选择 */
									/**/
									if (heap->b_Constant_2) {
										heap->by______s__t_f_3 = heap->by_t_3;
	}
									else {
										heap->by______s__t_f_3 = heap->by_f_3;
	}
/* Inline C node */
									{
										uInt8 channel = 0;
										uInt8 value = 0;
										int8 unusedInput = 0;
										channel = heap->by_IO_Channel_Number_6;
										value = heap->by______s__t_f_3;
										unusedInput = heap->n_Constant_4;

										{
											#include "sample_a1_inlineC__40.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
/* Inline C node */
									{
										int8 unusedInput = 0;
										unusedInput = heap->n_Constant_4;

										{
											#include "sample_a1_inlineC__42.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
							}
						}
					} /* end case */
					/* begin case */
					else {
						{
						}
					} /* end case */
				} /* end switch */
				*(float64 *)LptunNthElem(heap->a____x_y_LT) = heap->n____x_y_1; 
			}
		} /* end for */
		heap->a____x_y_LT = PDAArrCreate1DArrFromLpTunArr( heap->a____x_y_LT );
		/**/
		/* 数组元素相加 */
		/**/
		heap->n________________ = PDAArrSumElts(heap->a____x_y_LT);
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n________________, doubleDataType, &heap->l_times_6, int32DataType, opDiv, &heap->n____x_y, doubleDataType);
		*sample_a1_out_0_ai_426 = heap->n____x_y;
		return eFinished;
	}
}


/****** Library interface **********/


Boolean sample_a1(
				int32 sample_a1_in_0_delta_9A2_in,
				int32 sample_a1_in_1_threshold_138_in,
				int32 sample_a1_in_2_times_31D_in,
				float32* sample_a1_out_0_ai_426_out				)
{
	eRunStatus retStat = eFinished;
	retStat = sample_a1_Run(
	(int32DataType),	(int32)	sample_a1_in_0_delta_9A2_in,
	(int32DataType),	(int32)	sample_a1_in_1_threshold_138_in,
	(int32DataType),	(int32)	sample_a1_in_2_times_31D_in,
	(floatDataType),	(float32*)	sample_a1_out_0_ai_426_out	);
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


