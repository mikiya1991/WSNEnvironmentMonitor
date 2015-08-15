/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: 温度转换.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node_sub\温度转换.vi
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
struct _A__________heap { 
	float64 n_Constant_6;
	float64 n____x_y_4;
	float64 n____x_y_5;
	float64 n_Constant_7;
	float64 n_in;
	float64 n_Constant_8;
	float64 n______x_2;
	float64 n______________;
} _DATA_SECTION __A__________heap; /* heap */

static struct _A__________heap _DATA_SECTION *heap = &__A__________heap; /* heap */



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION A__________CleanupLSRs(void);
void _TEXT_SECTION A__________CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION A__________AddVIGlobalConstants(void);
void _TEXT_SECTION A__________AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION A__________InitVIConstantList(void);
void _TEXT_SECTION A__________InitVIConstantList(void) {
}


/****** Block diagram code **********/


float64 A__________in_0_in_31_init_ = 0.0000000000000000000E+0 ;
static DataType dtA__________in_0_in_31 = doubleDataType;
float64 A__________out_0_out_152_init_ = 0.0000000000000000000E+0 ;
static float64* A__________out_0_out_152 = &A__________out_0_out_152_init_;
static DataType dtA__________out_0_out_152 = doubleDataType;
extern eRunStatus A__________Run(
				DataType dtA__________in_0_in_31, float64* A__________in_0_in_31,
				DataType dtA__________out_0_out_152, float64*  A__________out_0_out_152	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	A__________InitVIConstantList();
	{
		heap->n_Constant_8 = 2.1960000693798065000E-1;
		heap->n_Constant_7 = -1.0590000152587891000E+1;
		heap->n_Constant_6 = 8.0290000915527344000E+1;
		heap->n_in = *A__________in_0_in_31;
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n_in, doubleDataType, &heap->n_Constant_7, doubleDataType, opMult, &heap->n____x_y_4, doubleDataType);
		/**/
		/* 平方 */
		/**/
		PDAFltUnop( &(heap->n_in), doubleDataType, opSq, &(heap->n______x_2), doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n______x_2, doubleDataType, &heap->n_Constant_8, doubleDataType, opMult, &heap->n____x_y_5, doubleDataType);
		/* Begin CpdArith */
		PDAFltBinop( &heap->n_Constant_6, doubleDataType, &heap->n____x_y_4, doubleDataType, opPlus, &heap->n______________, doubleDataType);
		PDAFltBinop( &heap->n______________, doubleDataType, &heap->n____x_y_5, doubleDataType, opPlus, &heap->n______________, doubleDataType);
		/* End CpdArith */
		*A__________out_0_out_152 = heap->n______________;
		return eFinished;
	}
}


/****** Library interface **********/


Boolean A_________(
				float64 A__________in_0_in_31_in,
				float64* A__________out_0_out_152_out				)
{
	eRunStatus retStat = eFinished;
	retStat = A__________Run(
	(doubleDataType),	&(A__________in_0_in_31_in),
	(doubleDataType),	(float64*)	A__________out_0_out_152_out	);
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


