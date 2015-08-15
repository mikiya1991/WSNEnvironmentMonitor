/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: message_dio_control.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node_sub\message_dio_control.vi
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
struct _message_dio_control_heap { 
	VoidHand s_usermessage;
	VoidHand s__________1;
	VoidHand s_________;
	uInt8 by_f_4;
	uInt8 by_IO_Channel_Number_11;
	uInt8 by______s__t_f_7;
	uInt8 by_f_7;
	uInt8 by_t_7;
	uInt8 by______s__t_f_4;
	uInt8 by_IO_Channel_Number_8;
	uInt8 by_IO_Channel_Number_10;
	uInt8 by______s__t_f_6;
	uInt8 by_f_6;
	uInt8 by_t_6;
	uInt8 by_t_4;
	uInt8 by_t_5;
	uInt8 by_IO_Channel_Number_9;
	uInt8 by_f_5;
	uInt8 by______s__t_f_5;
	int8 n_Constant_9;
	Boolean b_VISN_WSN_Node1_DIO0_DIO0;
	Boolean b_VISN_WSN_Node1_DIO1_DIO1;
	Boolean b_VISN_WSN_Node1_DIO2_DIO2;
	Boolean b_VISN_WSN_Node1_DIO3_DIO3;
	Boolean b______________________CS;
	Boolean b_____________________;
} _DATA_SECTION __message_dio_control_heap; /* heap */

static struct _message_dio_control_heap _DATA_SECTION *heap = &__message_dio_control_heap; /* heap */

struct _tmessage_dio_control_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i17D;
	VoidHand	i1105;
} _DATA_SECTION __message_dio_control_GlobalConstantsHeap;
static struct _tmessage_dio_control_GlobalConstantsHeap _DATA_SECTION *message_dio_control_GlobalConstantsHeapPtr = &__message_dio_control_GlobalConstantsHeap;



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION message_dio_control_CleanupLSRs(void);
void _TEXT_SECTION message_dio_control_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION message_dio_control_AddVIGlobalConstants(void);
void _TEXT_SECTION message_dio_control_AddVIGlobalConstants(void) {
	MemSet(message_dio_control_GlobalConstantsHeapPtr,sizeof(*(message_dio_control_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION message_dio_control_CleanupVIGlobalConstants(void);
void _TEXT_SECTION message_dio_control_CleanupVIGlobalConstants(void) {
	(message_dio_control_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION message_dio_control_InitVIConstantList(void);
void _TEXT_SECTION message_dio_control_InitVIConstantList(void) {
	(message_dio_control_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


VoidHand message_dio_control_in_0_usermessage_35 = NULL;
static DataType dtmessage_dio_control_in_0_usermessage_35 = StringDataType;
extern eRunStatus message_dio_control_Run(
				DataType dtmessage_dio_control_in_0_usermessage_35, VoidHand  message_dio_control_in_0_usermessage_35	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	if (!message_dio_control_in_0_usermessage_35) {
		message_dio_control_in_0_usermessage_35 = PDAStrNewFromStr(_LVT(""));
	}
	message_dio_control_InitVIConstantList();
	{
		message_dio_control_GlobalConstantsHeapPtr->i17D = PDAStrNewFromBuf(_LVT("upd"),(uInt32)3);
		heap->s__________1 = message_dio_control_GlobalConstantsHeapPtr->i17D;
		message_dio_control_GlobalConstantsHeapPtr->i1105 = PDAStrNewFromStr(_LVT(""));
		heap->s_________ = message_dio_control_GlobalConstantsHeapPtr->i1105;
		heap->s_usermessage =message_dio_control_in_0_usermessage_35;
		PDAStrIncRefCnt(message_dio_control_in_0_usermessage_35,1);
		/**/
		/* 匹配真/假字符串 */
		/**/
	if (heap->s_usermessage && (((PDAStrPtr)heap->s_usermessage)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_usermessage)->refcnt == 0) && (!((PDAStrPtr)heap->s_usermessage)->staticStr)) {
				MemHandleFree( heap->s_usermessage );
				heap->s_usermessage=NULL;
			}
		}
	if (heap->s_________ && (((PDAStrPtr)heap->s_________)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_________)->refcnt == 0) && (!((PDAStrPtr)heap->s_________)->staticStr)) {
				MemHandleFree( heap->s_________ );
				heap->s_________=NULL;
			}
		}
	if (heap->s__________1 && (((PDAStrPtr)heap->s__________1)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s__________1)->refcnt == 0) && (!((PDAStrPtr)heap->s__________1)->staticStr)) {
				MemHandleFree( heap->s__________1 );
				heap->s__________1=NULL;
			}
		}
		{ /* Select */
			heap->b______________________CS = heap->b_____________________;
			/* begin case */
			if ( heap->b______________________CS ) {
				{
					{
						static uInt32 id = 0;
						static NetworkVariableAttrs attrs = { 
							/* url */ _LVT("\\\\169.254.62.215\\Node1\\DIO3"), 
							/* alias */ _LVT("VISN-WSN"), 
							/* buffering */ true, 
							/* buffer size limit */ 450 /* 0x1C2 */, 
							/* buffer value limit */ 50 /* 0x32 */
						};
						if (!NetworkVariableRead(&id, attrs, NULL, &(heap->b_VISN_WSN_Node1_DIO3_DIO3), BooleanDataType, NULL, NULL)) {
							CGenErr();
						}
					}
	{
						static uInt32 id = 0;
						static NetworkVariableAttrs attrs = { 
							/* url */ _LVT("\\\\169.254.62.215\\Node1\\DIO2"), 
							/* alias */ _LVT("VISN-WSN"), 
							/* buffering */ true, 
							/* buffer size limit */ 450 /* 0x1C2 */, 
							/* buffer value limit */ 50 /* 0x32 */
						};
						if (!NetworkVariableRead(&id, attrs, NULL, &(heap->b_VISN_WSN_Node1_DIO2_DIO2), BooleanDataType, NULL, NULL)) {
							CGenErr();
						}
					}
	{
						static uInt32 id = 0;
						static NetworkVariableAttrs attrs = { 
							/* url */ _LVT("\\\\169.254.62.215\\Node1\\DIO1"), 
							/* alias */ _LVT("VISN-WSN"), 
							/* buffering */ true, 
							/* buffer size limit */ 450 /* 0x1C2 */, 
							/* buffer value limit */ 50 /* 0x32 */
						};
						if (!NetworkVariableRead(&id, attrs, NULL, &(heap->b_VISN_WSN_Node1_DIO1_DIO1), BooleanDataType, NULL, NULL)) {
							CGenErr();
						}
					}
	{
						static uInt32 id = 0;
						static NetworkVariableAttrs attrs = { 
							/* url */ _LVT("\\\\169.254.62.215\\Node1\\DIO0"), 
							/* alias */ _LVT("VISN-WSN"), 
							/* buffering */ true, 
							/* buffer size limit */ 450 /* 0x1C2 */, 
							/* buffer value limit */ 50 /* 0x32 */
						};
						if (!NetworkVariableRead(&id, attrs, NULL, &(heap->b_VISN_WSN_Node1_DIO0_DIO0), BooleanDataType, NULL, NULL)) {
							CGenErr();
						}
					}
	{
						heap->n_Constant_9 = 0;
						{
							{
								heap->by_IO_Channel_Number_8 = 0;
								heap->by_t_4 = 1;
								heap->by_f_4 = 0;
								/**/
								/* 选择 */
								/**/
								if (heap->b_VISN_WSN_Node1_DIO0_DIO0) {
									heap->by______s__t_f_4 = heap->by_t_4;
	}
								else {
									heap->by______s__t_f_4 = heap->by_f_4;
	}
/* Inline C node */
								{
									uInt8 channel = 0;
									uInt8 value = 0;
									int8 unusedInput = 0;
									channel = heap->by_IO_Channel_Number_8;
									value = heap->by______s__t_f_4;
									unusedInput = heap->n_Constant_9;

									{
										#include "message_dio_control_inlineC__49.h"
									}

#undef log
#undef log2
#undef ln
								}
							}
							{
								heap->by_IO_Channel_Number_9 = 1;
								heap->by_t_5 = 1;
								heap->by_f_5 = 0;
								/**/
								/* 选择 */
								/**/
								if (heap->b_VISN_WSN_Node1_DIO1_DIO1) {
									heap->by______s__t_f_5 = heap->by_t_5;
	}
								else {
									heap->by______s__t_f_5 = heap->by_f_5;
	}
/* Inline C node */
								{
									uInt8 channel = 0;
									uInt8 value = 0;
									int8 unusedInput = 0;
									channel = heap->by_IO_Channel_Number_9;
									value = heap->by______s__t_f_5;
									unusedInput = heap->n_Constant_9;

									{
										#include "message_dio_control_inlineC__4E.h"
									}

#undef log
#undef log2
#undef ln
								}
							}
							{
								heap->by_IO_Channel_Number_10 = 2;
								heap->by_t_6 = 1;
								heap->by_f_6 = 0;
								/**/
								/* 选择 */
								/**/
								if (heap->b_VISN_WSN_Node1_DIO2_DIO2) {
									heap->by______s__t_f_6 = heap->by_t_6;
	}
								else {
									heap->by______s__t_f_6 = heap->by_f_6;
	}
/* Inline C node */
								{
									uInt8 channel = 0;
									uInt8 value = 0;
									int8 unusedInput = 0;
									channel = heap->by_IO_Channel_Number_10;
									value = heap->by______s__t_f_6;
									unusedInput = heap->n_Constant_9;

									{
										#include "message_dio_control_inlineC__53.h"
									}

#undef log
#undef log2
#undef ln
								}
							}
							{
								heap->by_IO_Channel_Number_11 = 3;
								heap->by_t_7 = 1;
								heap->by_f_7 = 0;
								/**/
								/* 选择 */
								/**/
								if (heap->b_VISN_WSN_Node1_DIO3_DIO3) {
									heap->by______s__t_f_7 = heap->by_t_7;
	}
								else {
									heap->by______s__t_f_7 = heap->by_f_7;
	}
/* Inline C node */
								{
									uInt8 channel = 0;
									uInt8 value = 0;
									int8 unusedInput = 0;
									channel = heap->by_IO_Channel_Number_11;
									value = heap->by______s__t_f_7;
									unusedInput = heap->n_Constant_9;

									{
										#include "message_dio_control_inlineC__58.h"
									}

#undef log
#undef log2
#undef ln
								}
							}
						}
						{
/* Inline C node */
							{
								int8 unusedInput = 0;
								unusedInput = heap->n_Constant_9;

								{
									#include "message_dio_control_inlineC__5A.h"
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
		message_dio_control_CleanupVIGlobalConstants();
		if (message_dio_control_in_0_usermessage_35 && (((PDAStrPtr)message_dio_control_in_0_usermessage_35)->refcnt == 1) && (((PDAStrPtr)message_dio_control_in_0_usermessage_35)->staticStr == false)) {
	if (message_dio_control_in_0_usermessage_35 && (((PDAStrPtr)message_dio_control_in_0_usermessage_35)->refcnt > 0)) {
				if ((--((PDAStrPtr)message_dio_control_in_0_usermessage_35)->refcnt == 0) && (!((PDAStrPtr)message_dio_control_in_0_usermessage_35)->staticStr)) {
					MemHandleFree( message_dio_control_in_0_usermessage_35 );
					message_dio_control_in_0_usermessage_35=NULL;
				}
			}
			message_dio_control_in_0_usermessage_35 = NULL;
		}
		else
		{
	if (message_dio_control_in_0_usermessage_35 && (((PDAStrPtr)message_dio_control_in_0_usermessage_35)->refcnt > 0)) {
				if ((--((PDAStrPtr)message_dio_control_in_0_usermessage_35)->refcnt == 0) && (!((PDAStrPtr)message_dio_control_in_0_usermessage_35)->staticStr)) {
					MemHandleFree( message_dio_control_in_0_usermessage_35 );
					message_dio_control_in_0_usermessage_35=NULL;
				}
			}
		}
		return eFinished;
	}
}


/****** Library interface **********/


Boolean message_dio_control(
				String message_dio_control_in_0_usermessage_35_in, int32 message_dio_control_in_0_usermessage_35_slen				)
{
	eRunStatus retStat = eFinished;
	retStat = message_dio_control_Run(
	(StringDataType),	(VoidHand)	message_dio_control_in_0_usermessage_35_in	);
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


