/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: sample_a0.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node_sub\sample_a0.vi
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
struct _sample_a0_heap { 
	int32 l_For_____N_LT;
	int32 l_threshold_1;
	int32 l_times_7;
	int32 l_For_____i_1;
	int32 l_For_____N_1;
	float64 n__________vi_out;
	float64 n_________________1;
	float64 n____x_y_3;
	float32 n_____C______________ST_3;
	float32 n_____C______________XT_1;
	float32 XNodeTun38;  
	float32 n_reading_1;
	PDAArrPtr a__________vi_out_LT;
	uInt8 by_IO_Channel_Number_7;
	int8 n_Constant_5;
	Boolean b_For_____End;
	Boolean b__________CT_4;
	Boolean b________x___y__3;
	Boolean b________x___y__CS_3;
	Boolean b__________CT_5;
} _DATA_SECTION __sample_a0_heap; /* heap */

static struct _sample_a0_heap _DATA_SECTION *heap = &__sample_a0_heap; /* heap */



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION sample_a0_CleanupLSRs(void);
void _TEXT_SECTION sample_a0_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION sample_a0_AddVIGlobalConstants(void);
void _TEXT_SECTION sample_a0_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION sample_a0_InitVIConstantList(void);
void _TEXT_SECTION sample_a0_InitVIConstantList(void) {
}


/****** Block diagram code **********/


int32 sample_a0_in_1_times_31D = 0 ;
static DataType dtsample_a0_in_1_times_31D = int32DataType;
float32 sample_a0_out_1_ai_426_init_ = 0.0000000000000000000E+0 ;
static float32* sample_a0_out_1_ai_426 = &sample_a0_out_1_ai_426_init_;
static DataType dtsample_a0_out_1_ai_426 = floatDataType;
int32 sample_a0_in_0_threshold_138 = 0 ;
static DataType dtsample_a0_in_0_threshold_138 = int32DataType;
Boolean sample_a0_out_0_A______1DC_init_ = false;
static Boolean* sample_a0_out_0_A______1DC = &sample_a0_out_0_A______1DC_init_;
static DataType dtsample_a0_out_0_A______1DC = BooleanDataType;
extern eRunStatus sample_a0_Run(
				DataType dtsample_a0_in_0_threshold_138, int32  sample_a0_in_0_threshold_138,
				DataType dtsample_a0_in_1_times_31D, int32  sample_a0_in_1_times_31D,
				DataType dtsample_a0_out_0_A______1DC, Boolean*  sample_a0_out_0_A______1DC,
				DataType dtsample_a0_out_1_ai_426, float32*  sample_a0_out_1_ai_426	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	sample_a0_InitVIConstantList();
	{
		heap->l_times_7 = sample_a0_in_1_times_31D;
		heap->l_threshold_1 = sample_a0_in_0_threshold_138;
		heap->b__________CT_4 = false;
		heap->l_For_____N_1 = heap->l_times_7;
		if (!(heap->a__________vi_out_LT = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N_1, doubleDataType, uCharDataType, (ArrDimSize)0 ))){
			CGenErr();
		}
		heap->l_For_____N_LT = 0;
		for (heap->l_For_____i_1 = 0;(heap->l_For_____i_1 < heap->l_times_7) && !heap->b__________CT_4 && !gAppStop && !gLastError; (heap->l_For_____i_1)++) {
			{
				{
					heap->n_Constant_5 = 0;
					{
						heap->by_IO_Channel_Number_7 = 0;
						heap->n_reading_1 = 0.0000000000000000000E+0;
/* Inline C node */
						{
							uInt8 channel = 0;
							float32 value = 0.0;
							int8 unusedInput = 0;
							channel = heap->by_IO_Channel_Number_7;
							value = heap->n_reading_1;
							unusedInput = heap->n_Constant_5;

							{
								#include "sample_a0_inlineC__20.h"
								heap->n_____C______________XT_1 = value;
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
							unusedInput = heap->n_Constant_5;

							{
								#include "sample_a0_inlineC__21.h"
							}

#undef log
#undef log2
#undef ln
						}
					}
				}
				{
					extern float64 A__________out_0_out_152_init_;
					float64 A__________out_0_out_152 = A__________out_0_out_152_init_;
					{
						float64 castTemp0 = 0.0;
						CopyValueFree(&heap->n_____C______________XT_1, floatDataType, &castTemp0, doubleDataType);
						heap->n__________vi_out = A__________out_0_out_152_init_;
						if ((A__________Run( 	doubleDataType, &castTemp0,
						doubleDataType, &heap->n__________vi_out	)) == eFail) CGenErr();
					}
				}
				/**/
				/* 大于？ */
				/**/
				PDAFltBinop( &heap->n__________vi_out, doubleDataType, &heap->l_threshold_1, int32DataType, opGT, &heap->b________x___y__3, BooleanDataType);
				{ /* Select */
					heap->b________x___y__CS_3 = heap->b________x___y__3;
					/* begin case */
					if ( heap->b________x___y__CS_3 ) {
						{
							heap->b__________CT_4 = true;
							*sample_a0_out_0_A______1DC =heap->b__________CT_4;
						}
					} /* end case */
					/* begin case */
					else {
						{
							heap->b__________CT_4 = false;
						}
					} /* end case */
				} /* end switch */
				*(float64 *)LptunNthElem(heap->a__________vi_out_LT) = heap->n__________vi_out; 
				heap->b__________CT_4 = heap->b__________CT_4;
				/* Free tunnel value before reassigning. */
	heap->l_For_____N_LT = heap->l_times_7;
			}
		} /* end for */
		heap->a__________vi_out_LT = PDAArrCreate1DArrFromLpTunArr( heap->a__________vi_out_LT );
		/**/
		/* 数组元素相加 */
		/**/
		heap->n_________________1 = PDAArrSumElts(heap->a__________vi_out_LT);
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n_________________1, doubleDataType, &heap->l_For_____N_LT, int32DataType, opDiv, &heap->n____x_y_3, doubleDataType);
		*sample_a0_out_1_ai_426 = heap->n____x_y_3;
		return eFinished;
	}
}


/****** Library interface **********/


Boolean sample_a0(
				int32 sample_a0_in_0_threshold_138_in,
				int32 sample_a0_in_1_times_31D_in,
				Boolean* sample_a0_out_0_A______1DC_out,
				float32* sample_a0_out_1_ai_426_out				)
{
	eRunStatus retStat = eFinished;
	retStat = sample_a0_Run(
	(int32DataType),	(int32)	sample_a0_in_0_threshold_138_in,
	(int32DataType),	(int32)	sample_a0_in_1_times_31D_in,
	(BooleanDataType),	(Boolean*)	sample_a0_out_0_A______1DC_out,
	(floatDataType),	(float32*)	sample_a0_out_1_ai_426_out	);
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


