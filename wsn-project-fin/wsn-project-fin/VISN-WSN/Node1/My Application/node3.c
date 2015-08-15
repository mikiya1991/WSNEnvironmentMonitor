/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: node3.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node3.vi
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
struct _node3_heap { 
	cl_A0000 c_set_red_state_vi_set_ST_4;
	cl_A0000 c_Case_Structure_SR;
	cl_A0000 c_set_red_state_vi_set_ST_2;
	cl_A0000 c_set_red_state_vi_set_ST_1;
	cl_A0000 c_While_____SR_1;
	cl_A0000 c_Case_Structure_CT;
	cl_A0000 c_Case_Structure_CT_1;
	cl_A0000 c_set_red_state_vi_set_CT;
	cl_A0000 c__________CT_3;
	cl_A0000 c__________CT_1;
	cl_A0000 c_set_red_state_vi_set_ST_5;
	cl_A0000 c_While_____CT_3;
	cl_A0000 c_While_____ST_3;
	cl_A0000 c_While_____ST_1;
	cl_A0000 c_While_____ST;
	cl_A0000 c__________ST_1;
	cl_A0000 c_While_____CT_2;
	int32 l_pow;
	int32 l_bat;
	int32 l_While_____i;
	int32 l_________________1;
	int32 l_mod;
	int32 l_pow_1;
	int32 l________________mod_1;
	int32 l_delta_2;
	int32 l________________sh2_2;
	int32 l________________sh1_2;
	int32 l_times_5;
	int32 l_times_4;
	int32 l_times_3;
	int32 l_times_2;
	int32 l________________sh1_1;
	int32 l________________sh2_1;
	int32 l_delta_1;
	int32 l_times_1;
	int32 l_times;
	int32 l________________sh1;
	int32 l________________sh2;
	int32 l_delta;
	int32 l________________mod_CS_1;
	int32 l________________pow;
	int32 l_sh1;
	int32 l_sh2;
	int32 l________________;
	int32 l________________mod_CS;
	int32 l_mod_2;
	int32 l________________mod;
	int32 l_pow_2;
	int32 l_mod_1;
	float32 n_sampleInterval_1;
	float32 n_sampleInterval;
	float32 n_sampleInterval_2;
	float32 n_sample_a1_vi_ai_2;
	float32 n_sample_a0_vi_ai;
	float32 n_sample_a1_vi_ai;
	float32 n_sample_a0_vi_ai_2;
	float32 n_sampleInterval_3;
	float32 n_sampleRate;
	float32 n_sample_a0_vi_ai_1;
	float32 n_sample_a1_vi_ai_1;
	VoidHand s_____________________________S;
	VoidHand s_____________________________S_1;
	VoidHand s______________________________1;
	VoidHand Args754_1;  
	VoidHand Args2BC3_1;  
	VoidHand Args1D73_1;  
	VoidHand Args1636_1;  
	VoidHand s_sendDebugMessage_XT;
	VoidHand Args115C_1;  
	VoidHand s_____________________________X;
	VoidHand XNodeTun1454;  
	VoidHand Args18C0_1;  
	VoidHand s_________________________XT;
	VoidHand Args461F_1;  
	VoidHand s_Constant;
	VoidHand s________________________;
	VoidHand Args34E3_1;  
	VoidHand s_____________________________1;
	VoidHand Args2C55_1;  
	VoidHand Args82F_1;  
	VoidHand s_sendDebugMessage;
	PDAArrPtr a_____C_____________;
	PDAArrPtr a______________________________;
	PDAArrPtr a________________;
	PDAArrPtr a_______________________________1;
	PDAArrPtr a________________________;
	Enum32 e_sampleRateMode;
	uInt16 n_DIO_Drive_Mode_2;
	uInt16 n_DIO_Drive_Mode_1;
	uInt16 n_Range;
	uInt16 n_Range_1;
	uInt16 n_DIO_Drive_Mode;
	uInt16 n_DIO_Drive_Mode_3;
	int16 XNodeTun10B;  
	int16 XNodeTunC63;  
	int16 XNodeTunDF6;  
	int16 XNodeTunDD7;  
	int16 XNodeTun24B;  
	int16 XNodeTun251;  
	int16 XNodeTun1B01;  
	int16 XNodeTun1B16;  
	int16 XNodeTun2A65;  
	int16 i_Constant_1;
	int16 XNodeTun2A50;  
	int16 XNodeTunE47;  
	int16 XNodeTunE5C;  
	int16 i_____C______________4;
	int16 XNodeTunB2;  
	int16 XNodeTun144C;  
	int16 XNodeTun1450;  
	int16 XNodeTun82;  
	int16 i_IO_Channel_Number_1;
	int16 XNodeTun84E;  
	int16 i_IO_Channel_Number;
	int16 i_Constant;
	int16 XNodeTun84A;  
	Enum16 e_State_in_CS;
	Enum16 e_Network_Status;
	Enum16 e_____C______________CS;
	Enum16 XNodeTunC68;  
	Enum16 e_____C______________XT;
	Enum16 e_State_in;
	uInt8 by_Constant;
	uInt8 by_IO_Channel_Number;
	uInt8 by_f;
	uInt8 by______s__t_f;
	uInt8 by______s__t_f_1;
	uInt8 by_f_1;
	uInt8 by_t_1;
	uInt8 by_IO_Channel_Number_3;
	uInt8 by_IO_Channel_Number_1;
	uInt8 by_IO_Channel_Number_2;
	uInt8 by_t;
	int8 n_Constant_1;
	int8 n_Constant;
	Boolean b_bell_1;
	Boolean b_bell;
	Boolean b__________CS;
	Boolean b________x___y__CS;
	Boolean b__________CT_1;
	Boolean b________x___y_;
	Boolean b__________ST_1;
	Boolean b_Case_Structure_CT_1;
	Boolean b_While_____SR_1;
	Boolean b_Case_Structure_CT;
	Boolean b_Constant;
	Boolean b_Case_Structure_SR;
	Boolean b_While_____End;
} _DATA_SECTION __node3_heap; /* heap */

static struct _node3_heap _DATA_SECTION *heap = &__node3_heap; /* heap */

struct _tnode3_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i23A;
	VoidHand	i83B;
} _DATA_SECTION __node3_GlobalConstantsHeap;
static struct _tnode3_GlobalConstantsHeap _DATA_SECTION *node3_GlobalConstantsHeapPtr = &__node3_GlobalConstantsHeap;

struct _node3_heap_lsr { 
	cl_A0000 c_While_____SR;  
	Boolean b_While_____SR;  
} _DATA_SECTION __node3_heap_lsr; /* heap */

struct _node3_heap_lsr _DATA_SECTION *node3_heap_lsr = &__node3_heap_lsr; /* heap */


/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION node3_CleanupLSRs(void);
void _TEXT_SECTION node3_CleanupLSRs(void) {
	node3_heap_lsr->b_While_____SR = false;
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION node3_AddSubVIInstanceData(void);
void _TEXT_SECTION node3_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION node3_AddVIGlobalConstants(void);
void _TEXT_SECTION node3_AddVIGlobalConstants(void) {
	MemSet(node3_GlobalConstantsHeapPtr,sizeof(*(node3_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION node3_CleanupVIGlobalConstants(void);
void _TEXT_SECTION node3_CleanupVIGlobalConstants(void) {
	(node3_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION node3_InitVIConstantList(void);
void _TEXT_SECTION node3_InitVIConstantList(void) {
	(node3_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


Enum16 node3_in_0_State_in_31 = 0 ;
static DataType dtnode3_in_0_State_in_31 = 0xB0000 | Enum16DataType;
extern eRunStatus node3_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	node3_InitVIConstantList();
	{
		heap->e_State_in =node3_in_0_State_in_31;
		heap->l_While_____i = 0;
		do {
			{
				heap->b_Constant = true;
				heap->c_While_____SR_1 = node3_heap_lsr->c_While_____SR;
				heap->b_While_____SR_1 = node3_heap_lsr->b_While_____SR;
				{ /* Select */
					heap->e_State_in_CS = heap->e_State_in;
					switch ( heap->e_State_in_CS ) {
						/* begin case */
						case 0 : {
							/*********************************************************************************/
							/* mod0 \325\375\263\243\262\311\321\371 */
							/* mod1 \275\332\265\347\262\311\321\371 */
							/* mod2 \275\364\274\261\262\311\321\371 */
							/*********************************************************************************/
							{
								heap->n_sampleRate = 5.0000000000000000000E+0;
								heap->e_sampleRateMode = 1;
								heap->n_Range_1 = 3;
								heap->n_Range = 3;
								heap->n_DIO_Drive_Mode_3 = 3;
								heap->n_DIO_Drive_Mode_2 = 3;
								heap->n_DIO_Drive_Mode_1 = 3;
								heap->n_DIO_Drive_Mode = 3;
								heap->l_pow_1 = 100;
								heap->l_mod = 0;
								heap->l_bat = 3;
								heap->l_pow = 100;
								heap->l_sh1 = 35;
								heap->l_sh2 = 40;
								heap->b_Case_Structure_CT = false;
								if ((set_ai_power_Run( 	int32DataType, heap->l_pow_1	)) == eFail) CGenErr();
								{
									heap->by_IO_Channel_Number = 1;
/* Inline C node */
									{
										uInt8 channel = 0;
										uInt16 mode = 0;
										channel = heap->by_IO_Channel_Number;
										mode = heap->n_DIO_Drive_Mode;

										{
											#include "node3_inlineC__71.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
									heap->by_IO_Channel_Number_1 = 0;
/* Inline C node */
									{
										uInt8 channel = 0;
										uInt16 mode = 0;
										channel = heap->by_IO_Channel_Number_1;
										mode = heap->n_DIO_Drive_Mode_1;

										{
											#include "node3_inlineC__66.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
									heap->by_IO_Channel_Number_2 = 2;
/* Inline C node */
									{
										uInt8 channel = 0;
										uInt16 mode = 0;
										channel = heap->by_IO_Channel_Number_2;
										mode = heap->n_DIO_Drive_Mode_2;

										{
											#include "node3_inlineC__5B.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
									heap->by_IO_Channel_Number_3 = 3;
/* Inline C node */
									{
										uInt8 channel = 0;
										uInt16 mode = 0;
										channel = heap->by_IO_Channel_Number_3;
										mode = heap->n_DIO_Drive_Mode_3;

										{
											#include "node3_inlineC__50.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
									heap->i_IO_Channel_Number = 1;
/* Inline C node */
									{
										uInt16 range = 0;
										int16 channel = 0;
										range = heap->n_Range;
										channel = heap->i_IO_Channel_Number;

										{
											#include "node3_inlineC__45.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
									heap->i_IO_Channel_Number_1 = 0;
/* Inline C node */
									{
										uInt16 range = 0;
										int16 channel = 0;
										range = heap->n_Range_1;
										channel = heap->i_IO_Channel_Number_1;

										{
											#include "node3_inlineC__3A.h"
										}

#undef log
#undef log2
#undef ln
									}
								}
								{
									heap->XNodeTun82 = 0;
/* Inline C node */
									{
										int16 error = 0;
										uInt32 sampleIntervalMode = 0;
										float32 sampleInterval = 0.0;
										error = heap->XNodeTun82;
										sampleIntervalMode = heap->e_sampleRateMode;
										sampleInterval = heap->n_sampleRate;

										{
											#include "node3_inlineC__2F.h"
											heap->XNodeTunB2 = error;
										}

#undef log
#undef log2
#undef ln
									}
								}
/* Bundle by name */
								{
									cl_A0000* cl_001 = NULL;
									/* Cluster CopyOnModify */
									MemMove( &heap->c_Case_Structure_CT, &heap->c_While_____SR_1, sizeof( cl_A0000 ) );
									cl_001 = (cl_A0000*)&heap->c_Case_Structure_CT;
	cl_001->el_0 = heap->l_mod;
	cl_001->el_1 = heap->l_bat;
	cl_001->el_2 = heap->l_pow;
	cl_001->el_3 = heap->l_sh1;
	cl_001->el_4 = heap->l_sh2;
								}
							}
						} /* end case */
						break;
						/* begin case */
						case 1 : {
							{
								MemMove( &heap->c_While_____CT_2, &heap->c_While_____SR_1, sizeof( cl_A0000 ) );
								MemMove( &heap->c_While_____ST, &heap->c_While_____CT_2, sizeof( cl_A0000 ) );
								MemMove( &heap->c_While_____ST_1, &heap->c_While_____CT_2, sizeof( cl_A0000 ) );
								{
									MemMove( &heap->c_While_____ST_3, &heap->c_While_____ST_1, sizeof( cl_A0000 ) );
/* Unbundle by name */
									{
										cl_A0000* cl_002 = (cl_A0000*)&heap->c_While_____ST_3;
										heap->l________________mod = cl_002->el_0;
	}
									{ /* Select */
										heap->l________________mod_CS = heap->l________________mod;
										MemMove( &heap->c_While_____CT_3, &heap->c_While_____ST_3, sizeof( cl_A0000 ) );
										switch ( heap->l________________mod_CS ) {
											/* begin case */
											case 1 : {
												{
													heap->l_times_3 = 10;
													heap->l_times_2 = 10;
													heap->l_delta_1 = 5;
/* Unbundle by name */
													{
														cl_A0000* cl_003 = (cl_A0000*)&heap->c_While_____CT_3;
														heap->l________________sh1_1 = cl_003->el_3;
														heap->l________________sh2_1 = cl_003->el_4;
	}
													{
														extern Boolean sample_a0_out_0_A______1DC_init_;
														Boolean sample_a0_out_0_A______1DC = sample_a0_out_0_A______1DC_init_;
														extern float32 sample_a0_out_1_ai_426_init_;
														float32 sample_a0_out_1_ai_426 = sample_a0_out_1_ai_426_init_;
														heap->b_Case_Structure_CT = sample_a0_out_0_A______1DC_init_;
														heap->n_sample_a0_vi_ai_1 = sample_a0_out_1_ai_426_init_;
														if ((sample_a0_Run( 	int32DataType, heap->l________________sh1_1,
														int32DataType, heap->l_times_3,
														BooleanDataType, &heap->b_Case_Structure_CT,
														floatDataType, &heap->n_sample_a0_vi_ai_1	)) == eFail) CGenErr();
													}
													{
														static uInt32 id = 0;
														static NetworkVariableAttrs attrs = { 
															/* url */ _LVT("\\\\169.254.62.215\\Node1\\AI0"), 
															/* alias */ _LVT("VISN-WSN"), 
															/* buffering */ true, 
															/* buffer size limit */ 800 /* 0x320 */, 
															/* buffer value limit */ 50 /* 0x32 */
														};
														if (!NetworkVariableWrite(&id, attrs, NULL, &(heap->n_sample_a0_vi_ai_1), floatDataType, floatDataType, NULL)) {
															CGenErr();
														}
													}
	{
														extern float32 sample_a1_out_0_ai_426_init_;
														float32 sample_a1_out_0_ai_426 = sample_a1_out_0_ai_426_init_;
														heap->n_sample_a1_vi_ai_1 = sample_a1_out_0_ai_426_init_;
														if ((sample_a1_Run( 	int32DataType, heap->l_delta_1,
														int32DataType, heap->l________________sh2_1,
														int32DataType, heap->l_times_2,
														floatDataType, &heap->n_sample_a1_vi_ai_1	)) == eFail) CGenErr();
													}
													{
														static uInt32 id = 0;
														static NetworkVariableAttrs attrs = { 
															/* url */ _LVT("\\\\169.254.62.215\\Node1\\AI1"), 
															/* alias */ _LVT("VISN-WSN"), 
															/* buffering */ true, 
															/* buffer size limit */ 800 /* 0x320 */, 
															/* buffer value limit */ 50 /* 0x32 */
														};
														if (!NetworkVariableWrite(&id, attrs, NULL, &(heap->n_sample_a1_vi_ai_1), floatDataType, floatDataType, NULL)) {
															CGenErr();
														}
													}
	}
											} /* end case */
											break;
											/* begin case */
											case 2 : {
												{
													heap->l_times_4 = 1;
													heap->l_times_5 = 1;
													heap->l_delta_2 = 5;
/* Unbundle by name */
													{
														cl_A0000* cl_004 = (cl_A0000*)&heap->c_While_____CT_3;
														heap->l________________sh1_2 = cl_004->el_3;
														heap->l________________sh2_2 = cl_004->el_4;
	}
													{
														extern Boolean sample_a0_out_0_A______1DC_init_;
														Boolean sample_a0_out_0_A______1DC = sample_a0_out_0_A______1DC_init_;
														extern float32 sample_a0_out_1_ai_426_init_;
														float32 sample_a0_out_1_ai_426 = sample_a0_out_1_ai_426_init_;
														heap->b_Case_Structure_CT = sample_a0_out_0_A______1DC_init_;
														heap->n_sample_a0_vi_ai_2 = sample_a0_out_1_ai_426_init_;
														if ((sample_a0_Run( 	int32DataType, heap->l________________sh1_2,
														int32DataType, heap->l_times_4,
														BooleanDataType, &heap->b_Case_Structure_CT,
														floatDataType, &heap->n_sample_a0_vi_ai_2	)) == eFail) CGenErr();
													}
													{
														static uInt32 id = 0;
														static NetworkVariableAttrs attrs = { 
															/* url */ _LVT("\\\\169.254.62.215\\Node1\\AI0"), 
															/* alias */ _LVT("VISN-WSN"), 
															/* buffering */ true, 
															/* buffer size limit */ 800 /* 0x320 */, 
															/* buffer value limit */ 50 /* 0x32 */
														};
														if (!NetworkVariableWrite(&id, attrs, NULL, &(heap->n_sample_a0_vi_ai_2), floatDataType, floatDataType, NULL)) {
															CGenErr();
														}
													}
	{
														extern float32 sample_a1_out_0_ai_426_init_;
														float32 sample_a1_out_0_ai_426 = sample_a1_out_0_ai_426_init_;
														heap->n_sample_a1_vi_ai_2 = sample_a1_out_0_ai_426_init_;
														if ((sample_a1_Run( 	int32DataType, heap->l_delta_2,
														int32DataType, heap->l________________sh2_2,
														int32DataType, heap->l_times_5,
														floatDataType, &heap->n_sample_a1_vi_ai_2	)) == eFail) CGenErr();
													}
													{
														static uInt32 id = 0;
														static NetworkVariableAttrs attrs = { 
															/* url */ _LVT("\\\\169.254.62.215\\Node1\\AI1"), 
															/* alias */ _LVT("VISN-WSN"), 
															/* buffering */ true, 
															/* buffer size limit */ 800 /* 0x320 */, 
															/* buffer value limit */ 50 /* 0x32 */
														};
														if (!NetworkVariableWrite(&id, attrs, NULL, &(heap->n_sample_a1_vi_ai_2), floatDataType, floatDataType, NULL)) {
															CGenErr();
														}
													}
	}
											} /* end case */
											break;
											/* begin case */
											default : {
												{
													heap->l_times_1 = 3;
													heap->l_times = 3;
													heap->l_delta = 5;
/* Unbundle by name */
													{
														cl_A0000* cl_005 = (cl_A0000*)&heap->c_While_____CT_3;
														heap->l________________sh1 = cl_005->el_3;
														heap->l________________sh2 = cl_005->el_4;
	}
													{
														extern Boolean sample_a0_out_0_A______1DC_init_;
														Boolean sample_a0_out_0_A______1DC = sample_a0_out_0_A______1DC_init_;
														extern float32 sample_a0_out_1_ai_426_init_;
														float32 sample_a0_out_1_ai_426 = sample_a0_out_1_ai_426_init_;
														heap->b_Case_Structure_CT = sample_a0_out_0_A______1DC_init_;
														heap->n_sample_a0_vi_ai = sample_a0_out_1_ai_426_init_;
														if ((sample_a0_Run( 	int32DataType, heap->l________________sh1,
														int32DataType, heap->l_times_1,
														BooleanDataType, &heap->b_Case_Structure_CT,
														floatDataType, &heap->n_sample_a0_vi_ai	)) == eFail) CGenErr();
													}
													{
														static uInt32 id = 0;
														static NetworkVariableAttrs attrs = { 
															/* url */ _LVT("\\\\169.254.62.215\\Node1\\AI0"), 
															/* alias */ _LVT("VISN-WSN"), 
															/* buffering */ true, 
															/* buffer size limit */ 800 /* 0x320 */, 
															/* buffer value limit */ 50 /* 0x32 */
														};
														if (!NetworkVariableWrite(&id, attrs, NULL, &(heap->n_sample_a0_vi_ai), floatDataType, floatDataType, NULL)) {
															CGenErr();
														}
													}
	{
														extern float32 sample_a1_out_0_ai_426_init_;
														float32 sample_a1_out_0_ai_426 = sample_a1_out_0_ai_426_init_;
														heap->n_sample_a1_vi_ai = sample_a1_out_0_ai_426_init_;
														if ((sample_a1_Run( 	int32DataType, heap->l_delta,
														int32DataType, heap->l________________sh2,
														int32DataType, heap->l_times,
														floatDataType, &heap->n_sample_a1_vi_ai	)) == eFail) CGenErr();
													}
													{
														static uInt32 id = 0;
														static NetworkVariableAttrs attrs = { 
															/* url */ _LVT("\\\\169.254.62.215\\Node1\\AI1"), 
															/* alias */ _LVT("VISN-WSN"), 
															/* buffering */ true, 
															/* buffer size limit */ 800 /* 0x320 */, 
															/* buffer value limit */ 50 /* 0x32 */
														};
														if (!NetworkVariableWrite(&id, attrs, NULL, &(heap->n_sample_a1_vi_ai), floatDataType, floatDataType, NULL)) {
															CGenErr();
														}
													}
	}
											} /* end case */
											break;
										}
									} /* end switch */
									/**/
									/* 等于？ */
									/**/
									heap->b________x___y_ =  (heap->b_Case_Structure_CT == heap->b_While_____SR_1);
									{ /* Select */
										heap->b________x___y__CS = heap->b________x___y_;
										/* begin case */
										if ( heap->b________x___y__CS ) {
											{
												MemMove( &heap->c_Case_Structure_CT, &heap->c_While_____ST, sizeof( cl_A0000 ) );
											}
										} /* end case */
										/* begin case */
										else {
											{
												{ /* Select */
													heap->b__________CS = heap->b_Case_Structure_CT;
													/* begin case */
													if ( heap->b__________CS ) {
														/*********************************************************************************/
														/* \275\370\310\353\276\257\261\250\304\243\312\275 */
														/*********************************************************************************/
														{
															heap->l_mod_2 = 2;
															heap->n_sampleInterval_1 = 1.0000000000000000000E+0;
															heap->b_bell_1 = true;
															{
																heap->n_Constant_1 = 0;
																{
																	heap->by_t_1 = 1;
																	heap->by_f_1 = 0;
																	/**/
																	/* 选择 */
																	/**/
																	if (heap->b_bell_1) {
																		heap->by______s__t_f_1 = heap->by_t_1;
	}
																	else {
																		heap->by______s__t_f_1 = heap->by_f_1;
	}
/* Inline C node */
																	{
																		uInt8 value = 0;
																		int8 unusedInput = 0;
																		value = heap->by______s__t_f_1;
																		unusedInput = heap->n_Constant_1;

																		{
																			#include "node3_inlineC__EA.h"
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
																		unusedInput = heap->n_Constant_1;

																		{
																			#include "node3_inlineC__EC.h"
																		}

#undef log
#undef log2
#undef ln
																	}
																}
															}
															{
																heap->XNodeTun1B01 = 0;
/* Inline C node */
																{
																	int16 error = 0;
																	float32 sampleInterval = 0.0;
																	error = heap->XNodeTun1B01;
																	sampleInterval = heap->n_sampleInterval_1;

																	{
																		#include "node3_inlineC__D6.h"
																		heap->XNodeTun1B16 = error;
																	}

#undef log
#undef log2
#undef ln
																}
															}
/* Bundle by name */
															{
																cl_A0000* cl_006 = NULL;
																/* Cluster CopyOnModify */
																MemMove( &heap->c_Case_Structure_CT, &heap->c_While_____ST, sizeof( cl_A0000 ) );
																cl_006 = (cl_A0000*)&heap->c_Case_Structure_CT;
	cl_006->el_0 = heap->l_mod_2;
															}
														}
													} /* end case */
													/* begin case */
													else {
														{
															heap->n_sampleInterval = 5.0000000000000000000E+0;
															heap->l_mod_1 = 0;
															heap->b_bell = false;
															{
																heap->n_Constant = 0;
																{
																	heap->by_t = 1;
																	heap->by_f = 0;
																	/**/
																	/* 选择 */
																	/**/
																	if (heap->b_bell) {
																		heap->by______s__t_f = heap->by_t;
	}
																	else {
																		heap->by______s__t_f = heap->by_f;
	}
/* Inline C node */
																	{
																		uInt8 value = 0;
																		int8 unusedInput = 0;
																		value = heap->by______s__t_f;
																		unusedInput = heap->n_Constant;

																		{
																			#include "node3_inlineC__C8.h"
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
																		unusedInput = heap->n_Constant;

																		{
																			#include "node3_inlineC__CA.h"
																		}

#undef log
#undef log2
#undef ln
																	}
																}
															}
															{
																heap->XNodeTun2A50 = 0;
/* Inline C node */
																{
																	int16 error = 0;
																	float32 sampleInterval = 0.0;
																	error = heap->XNodeTun2A50;
																	sampleInterval = heap->n_sampleInterval;

																	{
																		#include "node3_inlineC__B3.h"
																		heap->XNodeTun2A65 = error;
																	}

#undef log
#undef log2
#undef ln
																}
															}
/* Bundle by name */
															{
																cl_A0000* cl_007 = NULL;
																/* Cluster CopyOnModify */
																MemMove( &heap->c_Case_Structure_CT, &heap->c_While_____ST, sizeof( cl_A0000 ) );
																cl_007 = (cl_A0000*)&heap->c_Case_Structure_CT;
	cl_007->el_0 = heap->l_mod_1;
															}
														}
													} /* end case */
												} /* end switch */
											}
										} /* end case */
									} /* end switch */
								}
								/* FreeLoopInputs. */
		/* FreeLoopInputs. */
	}
						} /* end case */
						break;
						/* begin case */
						case 2 : {
							{
								/*********************************************************************************/
								/* \311\350\326\303\304\243\312\275\241\242\262\311\321\371\274\344\270\364\241\242\264\253\270\320\306\367\265\347\324\264\321\241\317\356\241\242\301\275\270\366\264\253\270\320\306\367\343\320\326\265 */
								/* mod0\316\252\327\324\266\250\322\345\304\243\312\275\243\254\270\337\313\331\317\324\312\276\304\243\312\275 */
								/* mod1\316\252\275\332\265\347\324\313\320\320\304\243\312\275 */
								/*********************************************************************************/
								/*********************************************************************************/
								/* setmod0-1 */
								/*********************************************************************************/
								/*********************************************************************************/
								/* redint */
								/*********************************************************************************/
								/*********************************************************************************/
								/* setpow10 */
								/*********************************************************************************/
								{
									{
										heap->XNodeTun144C = 0;
										heap->i_Constant = 0;
										heap->by_Constant = 0;
										heap->i_Constant_1 = 127;
/* Array initialize */
										{
											ArrDimSize i;
											ArrDimSize size=1;
											heap->a________________________ = PDAArrNew1D((ArrDimSize)heap->i_Constant_1, uCharDataType);
											size = (ArrDimSize)heap->i_Constant_1;
											if (size < 0) {
												size = 0;
											}
											if (IsNotZero(&heap->by_Constant, uCharDataType)) {
												MemSet(FirstElem(heap->a________________________), size, heap->by_Constant);
											}
	}
/* Inline C node */
										{
											int16 error = 0;
											PDAArrPtr receivedUserMessage_nodeTempArrayHandle = NULL;
											uInt8* receivedUserMessage = NULL;
											int16 receivedUserMessageLength = 0;
											error = heap->XNodeTun144C;
											receivedUserMessage_nodeTempArrayHandle=PDAArrCopyOnModify( heap->a________________________ );
											receivedUserMessage = (VoidHand)FirstElem(receivedUserMessage_nodeTempArrayHandle);
											receivedUserMessageLength = heap->i_Constant;

											{
												#include "node3_inlineC__105.h"
												heap->XNodeTun1450 = error;
												heap->a_____C_____________ = receivedUserMessage_nodeTempArrayHandle;
												heap->i_____C______________4 = receivedUserMessageLength;
											}

#undef log
#undef log2
#undef ln
										}
										/* Array Subset */
										{
											Boolean bEmpty = false;
											Boolean bNullInput=false;
											ArrDimSize start0;
											if (!heap->a_____C_____________) {heap->a_____C_____________ = PDAArrNewEmptyWithNDims( uCharDataType, (ArrDimSize)1 );bNullInput=true;}
											{
												ArrDimSize nDimSize0=0;
												start0 = (ArrDimSize)0;
												if (start0 < 0) {
													start0 = 0;
												}

												if (start0 >= PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0)) {
													start0 = PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0);
												}
												nDimSize0 = (ArrDimSize)heap->i_____C______________4;
												if (nDimSize0 <= 0) {
													nDimSize0 = 0;
												}
												if ((start0 + nDimSize0) > PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0)) {
													nDimSize0 = PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0) - start0;
												}
												if (!(heap->a________________ = PDAArrNew1D((ArrDimSize)nDimSize0, uCharDataType))){
													CGenErr();
												}
											}
											{
												ArrDimSize end0;
												if (start0 >= PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0)) {
													bEmpty = true;
												}
												end0 = start0 + (ArrDimSize)heap->i_____C______________4;
												if ((end0 < 0) || (end0 <= start0)) {
													bEmpty = true;	}
												if (end0 > PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0)) {
													end0 = PDAArrNthDim(heap->a_____C_____________, (ArrDimSize)0);
													PDAArrSetDim(heap->a________________, (ArrDimSize)0, (end0 - start0) );
												}
												if (!bEmpty) {
													MemMove(NthElem(heap->a________________, 0), NthElem(heap->a_____C_____________, start0), (end0-start0)*DataSize(uCharDataType));
												}
												else {
													MemHandleFree( heap->a________________ ); //  Uninitialized
													if (!(heap->a________________ = PDAArrNewEmptyWithNDims( uCharDataType, (ArrDimSize)1 ))) CGenErr();
												}
	if ((heap->a_____C_____________) && ((heap->a_____C_____________)->refcnt > 0)) {
													if (((heap->a_____C_____________)->refcnt == 1) && ((heap->a_____C_____________)->staticArray == false)) {
														(heap->a_____C_____________)->refcnt--;
														MemHandleFree( heap->a_____C_____________ );
														heap->a_____C_____________=NULL;
													}
													else
													 	PDAArrFree(heap->a_____C_____________);
												}
											}
											if (bNullInput) heap->a_____C_____________ = NULL;
										}
										/**/
										/* 字节数组至字符串转换 */
										/**/
										if (!PDAArrToString(heap->a________________, &(heap->XNodeTun1454))) {
											CGenErr();
										}
									}
									heap->s_____________________________X = heap->XNodeTun1454;
									PDAStrIncRefCnt(heap->s_____________________________X, (uInt16)2); /* XNode: tunnel list */
									{
										extern cl_A0000 set_red_state_out_0_set_24A_init_;
										cl_A0000 set_red_state_out_0_set_24A = set_red_state_out_0_set_24A_init_;
										heap->c_set_red_state_vi_set_ST_1 = set_red_state_out_0_set_24A;
										if ((set_red_state_Run( 	StringDataType, heap->s_____________________________X,
										0xA0000 | ClusterDataType, heap->c_While_____SR_1,
										0xA0000 | ClusterDataType, &heap->c_set_red_state_vi_set_ST_1	)) == eFail) CGenErr();
									}
									if ((message_dio_control_Run( 	StringDataType, heap->s_____________________________X	)) == eFail) CGenErr();
									heap->s_____________________________S = heap->s_____________________________X;
								}
								/* FreeLoopInputs. */
	{
									heap->s_____________________________S_1 = heap->s_____________________________S;
									PDAStrIncRefCnt(heap->s_____________________________S_1, (uInt16)1); /* SequenceTunnel */
									MemMove( &heap->c_set_red_state_vi_set_ST_5, &heap->c_set_red_state_vi_set_ST_1, sizeof( cl_A0000 ) );
/* Unbundle by name */
									{
										cl_A0000* cl_008 = (cl_A0000*)&heap->c_set_red_state_vi_set_ST_5;
										heap->l________________mod_1 = cl_008->el_0;
	}
									{ /* Select */
										heap->l________________mod_CS_1 = heap->l________________mod_1;
										MemMove( &heap->c_set_red_state_vi_set_CT, &heap->c_set_red_state_vi_set_ST_5, sizeof( cl_A0000 ) );
										/* begin case */
										if ( ( (heap->l________________mod_CS_1 == 1) ) ) {
											{
												heap->n_sampleInterval_3 = 6.0000000000000000000E+1;
												heap->l_pow_2 = 100;
												/* Free unwired input select tunnel. */
	if ((set_ai_power_Run( 	int32DataType, heap->l_pow_2	)) == eFail) CGenErr();
												{
													heap->XNodeTunE47 = 0;
/* Inline C node */
													{
														int16 error = 0;
														float32 sampleInterval = 0.0;
														error = heap->XNodeTunE47;
														sampleInterval = heap->n_sampleInterval_3;

														{
															#include "node3_inlineC__124.h"
															heap->XNodeTunE5C = error;
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
												heap->n_sampleInterval_2 = 5.0000000000000000000E+0;
												{
													heap->XNodeTunDD7 = 0;
/* Inline C node */
													{
														int16 error = 0;
														float32 sampleInterval = 0.0;
														error = heap->XNodeTunDD7;
														sampleInterval = heap->n_sampleInterval_2;

														{
															#include "node3_inlineC__118.h"
															heap->XNodeTunDF6 = error;
														}

#undef log
#undef log2
#undef ln
													}
												}
/* Unbundle by name */
												{
													cl_A0000* cl_009 = (cl_A0000*)&heap->c_set_red_state_vi_set_CT;
													heap->l________________pow = cl_009->el_2;
	}
												if ((set_ai_power_Run( 	int32DataType, heap->l________________pow	)) == eFail) CGenErr();
											}
										} /* end case */
									} /* end switch */
									MemMove( &heap->c_Case_Structure_CT, &heap->c_set_red_state_vi_set_ST_5, sizeof( cl_A0000 ) );
								}
								/* FreeLoopInputs. */
	if (heap->s_____________________________S && (((PDAStrPtr)heap->s_____________________________S)->refcnt > 0)) {
									if ((--((PDAStrPtr)heap->s_____________________________S)->refcnt == 0) && (!((PDAStrPtr)heap->s_____________________________S)->staticStr)) {
										MemHandleFree( heap->s_____________________________S );
										heap->s_____________________________S=NULL;
									}
								}
								/* FreeLoopInputs. */
	{
									node3_GlobalConstantsHeapPtr->i83B = PDAStrNewFromBuf(_LVT("received: "),(uInt32)10);
									heap->s_Constant = node3_GlobalConstantsHeapPtr->i83B;
									PDAStrIncRefCnt(heap->s_____________________________S_1, (uInt16)1); /* SequenceTunnel */
									{
										ControlDataItemPtr cdPtr = LVGetCurrentControlData();
										CreateArgListStatic(heap->Args82F_1, 2, 1 );
										argIn(heap->Args82F_1, 0).nType = StringDataType;
										argIn(heap->Args82F_1, 0).pValue = (void *)&heap->s_Constant;
										argIn(heap->Args82F_1, 1).nType = StringDataType;
										argIn(heap->Args82F_1, 1).pValue = (void *)&heap->s_____________________________S_1;
										argOut(heap->Args82F_1, 0).nType = StringDataType;
										argOut(heap->Args82F_1, 0).pValue = (void *)&heap->s________________________;
										if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args82F_1)[0], (ArgList *)((ArgList **)heap->Args82F_1)[1] )) {
											CGenErr();
										}
										if (gAppStop) {
											gAppStop=true;
											return eFinished;
										}
									}
									{
										heap->XNodeTun84A = 0;
										heap->s_________________________XT = heap->s________________________;
										PDAStrIncRefCnt(heap->s_________________________XT, (uInt16)1); /* FrameTunnel */
										/**/
										/* 字符串长度 */
										/**/
										heap->l________________ = (int32)PDAStrLen(heap->s_________________________XT);
										/**/
										/* 字符串至字节数组转换 */
										/**/
										if (!PDAStrToArray(heap->s_________________________XT, &(heap->a______________________________))) {
											CGenErr();
										}
/* Inline C node */
										{
											int16 error = 0;
											PDAArrPtr sendDebugMessage_nodeTempArrayHandle = NULL;
											uInt8* sendDebugMessage = NULL;
											int32 sendDebugMessageLength = 0;
											error = heap->XNodeTun84A;
											sendDebugMessage_nodeTempArrayHandle=PDAArrCopyOnModify( heap->a______________________________ );
											sendDebugMessage = (VoidHand)FirstElem(sendDebugMessage_nodeTempArrayHandle);
											sendDebugMessageLength = heap->l________________;

											{
												#include "node3_inlineC__130.h"
												heap->XNodeTun84E = error;
											}

											/* Free input array without corresponding output in inline C node */
	if ((sendDebugMessage_nodeTempArrayHandle) && ((sendDebugMessage_nodeTempArrayHandle)->refcnt > 0)) {
												if (((sendDebugMessage_nodeTempArrayHandle)->refcnt == 1) && ((sendDebugMessage_nodeTempArrayHandle)->staticArray == false)) {
													(sendDebugMessage_nodeTempArrayHandle)->refcnt--;
													MemHandleFree( sendDebugMessage_nodeTempArrayHandle );
													sendDebugMessage_nodeTempArrayHandle=NULL;
												}
												else
												 	PDAArrFree(sendDebugMessage_nodeTempArrayHandle);
											}
#undef log
#undef log2
#undef ln
										}
									}
								}
								/* FreeLoopInputs. */
	if (heap->s_____________________________S_1 && (((PDAStrPtr)heap->s_____________________________S_1)->refcnt > 0)) {
									if ((--((PDAStrPtr)heap->s_____________________________S_1)->refcnt == 0) && (!((PDAStrPtr)heap->s_____________________________S_1)->staticStr)) {
										MemHandleFree( heap->s_____________________________S_1 );
										heap->s_____________________________S_1=NULL;
									}
								}
								heap->b_Case_Structure_CT = heap->b_While_____SR_1;
							}
						} /* end case */
						break;
						/* begin case */
						case 3 : {
							{
								MemMove( &heap->c_Case_Structure_CT, &heap->c_While_____SR_1, sizeof( cl_A0000 ) );
								{
									heap->XNodeTun10B = 0;
									heap->e_Network_Status = 0;
/* Inline C node */
									{
										int16 error = 0;
										uInt32 networkStatus = 0;
										error = heap->XNodeTun10B;
										networkStatus = heap->e_Network_Status;

										{
											#include "node3_inlineC__13B.h"
											heap->XNodeTunC63 = error;
											heap->e_____C______________XT = networkStatus;
										}

#undef log
#undef log2
#undef ln
									}
								}
								{ /* Select */
									heap->e_____C______________CS = heap->e_____C______________XT;
									/* begin case */
									if ( ( (heap->e_____C______________CS == 1) ) ) {
										{
											node3_GlobalConstantsHeapPtr->i23A = PDAStrNewFromBuf(_LVT("Node connected ..."),(uInt32)18);
											heap->s_sendDebugMessage = node3_GlobalConstantsHeapPtr->i23A;
											{
												heap->XNodeTun24B = 0;
												heap->s_sendDebugMessage_XT = heap->s_sendDebugMessage;
												PDAStrIncRefCnt(heap->s_sendDebugMessage_XT, (uInt16)1); /* FrameTunnel */
												/**/
												/* 字符串长度 */
												/**/
												heap->l_________________1 = (int32)PDAStrLen(heap->s_sendDebugMessage_XT);
												/**/
												/* 字符串至字节数组转换 */
												/**/
												if (!PDAStrToArray(heap->s_sendDebugMessage_XT, &(heap->a_______________________________1))) {
													CGenErr();
												}
/* Inline C node */
												{
													int16 error = 0;
													PDAArrPtr sendDebugMessage_nodeTempArrayHandle = NULL;
													uInt8* sendDebugMessage = NULL;
													int32 sendDebugMessageLength = 0;
													error = heap->XNodeTun24B;
													sendDebugMessage_nodeTempArrayHandle=PDAArrCopyOnModify( heap->a_______________________________1 );
													sendDebugMessage = (VoidHand)FirstElem(sendDebugMessage_nodeTempArrayHandle);
													sendDebugMessageLength = heap->l_________________1;

													{
														#include "node3_inlineC__148.h"
														heap->XNodeTun251 = error;
													}

													/* Free input array without corresponding output in inline C node */
	if ((sendDebugMessage_nodeTempArrayHandle) && ((sendDebugMessage_nodeTempArrayHandle)->refcnt > 0)) {
														if (((sendDebugMessage_nodeTempArrayHandle)->refcnt == 1) && ((sendDebugMessage_nodeTempArrayHandle)->staticArray == false)) {
															(sendDebugMessage_nodeTempArrayHandle)->refcnt--;
															MemHandleFree( sendDebugMessage_nodeTempArrayHandle );
															sendDebugMessage_nodeTempArrayHandle=NULL;
														}
														else
														 	PDAArrFree(sendDebugMessage_nodeTempArrayHandle);
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
										}
									} /* end case */
								} /* end switch */
								heap->b_Case_Structure_CT = heap->b_While_____SR_1;
							}
						} /* end case */
						break;
						/* begin case */
						case 4 : {
							{
								MemMove( &heap->c_Case_Structure_CT, &heap->c_While_____SR_1, sizeof( cl_A0000 ) );
								heap->b_Case_Structure_CT = heap->b_While_____SR_1;
							}
						} /* end case */
						break;
					}
				} /* end switch */
				MemMove( &heap->c_Case_Structure_SR, &heap->c_Case_Structure_CT, sizeof( cl_A0000 ) );
				MemMove(&node3_heap_lsr->c_While_____SR, &heap->c_Case_Structure_SR, sizeof(cl_A0000));
				heap->b_Case_Structure_SR = heap->b_Case_Structure_CT;
				node3_heap_lsr->b_While_____SR = heap->b_Case_Structure_SR;
			}
			(heap->l_While_____i)++;
		}
		while(!heap->b_Constant && !gAppStop && !gLastError);
		node3_CleanupVIGlobalConstants();
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr node3_VIName = "node3.vi";

eRunStatus node3_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus node3_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	node3_AddSubVIInstanceData();
	return node3_Run();
}


/****** Library interface **********/


Boolean node3(
				Enum16 node3_in_0_State_in_31_in				)
{
	eRunStatus retStat = eFinished;
	node3_in_0_State_in_31 = node3_in_0_State_in_31_in;
	retStat = node3_Run();
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


