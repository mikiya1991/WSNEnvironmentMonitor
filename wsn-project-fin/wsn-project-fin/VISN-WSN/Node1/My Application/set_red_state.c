/****************************************************************************************
 *	LabVIEW (TM) Code Generator 12.0
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: set_red_state.vi
 *	Generated from: E:\大学文档\大四下\毕设\wsn-project-fin\node\node_sub\set_red_state.vi
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
struct _set_red_state_heap { 
	cl_A0000 c__________CT_4;
	cl_A0000 c_red;
	cl_A0000 c_red_CT_11;
	cl_A0000 c_red_CT_10;
	cl_A0000 c__________CT_5;
	cl_A0000 c__________CT_7;
	int32 l______________________________;
	int32 l_______;
	int32 l_________________4;
	int32 l_________________CS_1;
	int32 l_______________________________1;
	int32 l________1;
	int32 l_________________2;
	int32 l______________________________1;
	int32 l________2;
	int32 l__________CT_1;
	int32 l_____________________________1;
	int32 l________3;
	int32 l_________________CS_2;
	int32 l__________CT;
	int32 l_________________CS;
	int32 l_________________3;
	int32 l_____________________________2;
	int32 l________4;
	VoidHand Args6A0_1;  
	VoidHand s_______________________1;
	VoidHand s______________________________;
	VoidHand Args588_1;  
	VoidHand s_______________________________1;
	VoidHand Args524_1;  
	VoidHand s_______;
	VoidHand Args6B0_1;  
	VoidHand s______________________;
	VoidHand ArgsAD2_1;  
	VoidHand Args4F2_1;  
	VoidHand ArgsB24_1;  
	VoidHand ArgsBA0_1;  
	VoidHand Args3FB_1;  
	VoidHand ArgsBE5_1;  
	PDAArrPtr a___________;
	PDAArrPtr a____________1;
	PDAArrPtr a______________________________1;
	int16 XNodeTun34C;  
	int16 XNodeTun361;  
} _DATA_SECTION __set_red_state_heap; /* heap */

static struct _set_red_state_heap _DATA_SECTION *heap = &__set_red_state_heap; /* heap */

struct _tset_red_state_GlobalConstantsHeap {
	uInt8	refCnt;
	PDAArrPtr	i13D;
	PDAArrPtr	i188;
} _DATA_SECTION __set_red_state_GlobalConstantsHeap;
static struct _tset_red_state_GlobalConstantsHeap _DATA_SECTION *set_red_state_GlobalConstantsHeapPtr = &__set_red_state_GlobalConstantsHeap;

_DATA_SECTION  cl_A0000 set_red_state_in_1_red_704_init_ = 
{0, 0, 0, 0, 0};

_DATA_SECTION  cl_A0000 set_red_state_out_0_set_24A_init_ = 
{0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 3, _LVT('m'),_LVT('o'),_LVT('d')};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 3, _LVT('b'),_LVT('a'),_LVT('t')};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 3, _LVT('p'),_LVT('o'),_LVT('w')};

struct _g_string_4 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 3, _LVT('s'),_LVT('h'),_LVT('1')};

struct _g_string_5 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_5 g_string_5 = 
{1, 1, 3, _LVT('s'),_LVT('h'),_LVT('2')};

struct _g_array_1 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[5];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{StringDataType, 1, 1, true, 1, 5,
	{(PDAStrPtr)(&g_string_1), (PDAStrPtr)(&g_string_2), (PDAStrPtr)(&g_string_3), (PDAStrPtr)(&g_string_4), (PDAStrPtr)(&g_string_5)
	}
};

struct _g_string_6 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_6 g_string_6 = 
{1, 1, 3, _LVT('s'),_LVT('e'),_LVT('t')};

struct _g_string_7 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[5];
};
static  struct _g_string_7 g_string_7 = 
{1, 1, 3, _LVT('r'),_LVT('e'),_LVT('d')};

struct _g_array_2 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[2];
};
_DATA_SECTION static  struct _g_array_2 g_array_2 = 
{StringDataType, 1, 1, true, 1, 2,
	{(PDAStrPtr)(&g_string_6), (PDAStrPtr)(&g_string_7)
	}
};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION set_red_state_CleanupLSRs(void);
void _TEXT_SECTION set_red_state_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION set_red_state_AddVIGlobalConstants(void);
void _TEXT_SECTION set_red_state_AddVIGlobalConstants(void) {
	MemSet(set_red_state_GlobalConstantsHeapPtr,sizeof(*(set_red_state_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION set_red_state_CleanupVIGlobalConstants(void);
void _TEXT_SECTION set_red_state_CleanupVIGlobalConstants(void) {
	(set_red_state_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION set_red_state_InitVIConstantList(void);
void _TEXT_SECTION set_red_state_InitVIConstantList(void) {
	(set_red_state_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static int32 index__E9_init_ = 0 ;
static int32* index__E9 = &index__E9_init_;
static DataType dtindex__E9 = int32DataType;
VoidHand set_red_state_in_0_A________31 = NULL;
static DataType dtset_red_state_in_0_A________31 = StringDataType;
cl_A0000 set_red_state_in_1_red_704;
static DataType dtset_red_state_in_1_red_704 = 0xA0000 | ClusterDataType;
cl_A0000 set_red_state_out_0_set_24A_tmp_;
static cl_A0000* set_red_state_out_0_set_24A = &set_red_state_out_0_set_24A_tmp_;
static DataType dtset_red_state_out_0_set_24A = 0xA0000 | ClusterDataType;
extern eRunStatus set_red_state_Run(
				DataType dtset_red_state_in_0_A________31, VoidHand  set_red_state_in_0_A________31,
				DataType dtset_red_state_in_1_red_704, cl_A0000  set_red_state_in_1_red_704,
				DataType dtset_red_state_out_0_set_24A, cl_A0000*  set_red_state_out_0_set_24A	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	if (!set_red_state_in_0_A________31) {
		set_red_state_in_0_A________31 = PDAStrNewFromStr(_LVT(""));
	}
	*set_red_state_out_0_set_24A = set_red_state_out_0_set_24A_init_;
	PDAClusterIncRefCnt(set_red_state_out_0_set_24A, 0xA0000 | ClusterDataType, 1);
	set_red_state_InitVIConstantList();
	{
		PDAArrIncRefCnt((PDAArrPtr)(&g_array_1),1);
		set_red_state_GlobalConstantsHeapPtr->i13D = (void*)&g_array_1;
		heap->a____________1 = set_red_state_GlobalConstantsHeapPtr->i13D;
		PDAArrIncRefCnt((PDAArrPtr)(&g_array_2),1);
		set_red_state_GlobalConstantsHeapPtr->i188 = (void*)&g_array_2;
		heap->a___________ = set_red_state_GlobalConstantsHeapPtr->i188;
		heap->s_______ =set_red_state_in_0_A________31;
		PDAStrIncRefCnt(set_red_state_in_0_A________31,1);
		/**/
		/* 匹配字符串 */
		/**/
		{
			PDAStrLen_t i;
			if (!PDAStrIndexStrip(heap->a___________, heap->s_______, &(heap->s______________________), &i)){
				CGenErr();
			}
			heap->l_________________2 = i;
		}
		/**/
		/* 匹配字符串 */
		/**/
		{
			PDAStrLen_t i;
			if (!PDAStrIndexStrip(heap->a____________1, heap->s______________________, &(heap->s_______________________1), &i)){
				CGenErr();
			}
			heap->l_________________3 = i;
		}
		MemMove(&heap->c_red, &set_red_state_in_1_red_704, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&set_red_state_in_1_red_704,0xA0000 | ClusterDataType,1);
		{ /* Select */
			heap->l_________________CS = heap->l_________________2;
			switch ( heap->l_________________CS ) {
				/* begin case */
				case 0 : {
					{
						{ /* Select */
							heap->l_________________CS_1 = heap->l_________________3;
							switch ( heap->l_________________CS_1 ) {
								/* begin case */
								case 0 : {
									{
										heap->l_______ = 0;
										/**/
										/* 十进制数字符串至数值转换 */
										/**/
										PDAStrTextToNum( &(heap->s_______________________1), StringDataType, 'd', &(heap->l_______), int32DataType, NULL, uCharDataType, NULL, &(heap->l______________________________), int32DataType );
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
											if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
												MemHandleFree( heap->s_______________________1 );
												heap->s_______________________1=NULL;
											}
										}
/* Bundle by name */
										{
											cl_A0000* cl_001 = NULL;
											/* Cluster CopyOnModify */
											MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
											cl_001 = (cl_A0000*)&heap->c__________CT_4;
	cl_001->el_0 = heap->l______________________________;
										}
									}
								} /* end case */
								break;
								/* begin case */
								case 1 : {
									{
										heap->l________1 = 0;
										/**/
										/* 十进制数字符串至数值转换 */
										/**/
										PDAStrTextToNum( &(heap->s_______________________1), StringDataType, 'd', &(heap->l________1), int32DataType, NULL, uCharDataType, NULL, &(heap->l_______________________________1), int32DataType );
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
											if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
												MemHandleFree( heap->s_______________________1 );
												heap->s_______________________1=NULL;
											}
										}
/* Bundle by name */
										{
											cl_A0000* cl_002 = NULL;
											/* Cluster CopyOnModify */
											MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
											cl_002 = (cl_A0000*)&heap->c__________CT_4;
	cl_002->el_1 = heap->l_______________________________1;
										}
									}
								} /* end case */
								break;
								/* begin case */
								case 2 : {
									{
										heap->l________2 = 0;
										/**/
										/* 十进制数字符串至数值转换 */
										/**/
										PDAStrTextToNum( &(heap->s_______________________1), StringDataType, 'd', &(heap->l________2), int32DataType, NULL, uCharDataType, NULL, &(heap->l______________________________1), int32DataType );
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
											if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
												MemHandleFree( heap->s_______________________1 );
												heap->s_______________________1=NULL;
											}
										}
/* Bundle by name */
										{
											cl_A0000* cl_003 = NULL;
											/* Cluster CopyOnModify */
											MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
											cl_003 = (cl_A0000*)&heap->c__________CT_4;
	cl_003->el_2 = heap->l______________________________1;
										}
									}
								} /* end case */
								break;
								/* begin case */
								case 3 : {
									{
										heap->l________3 = 0;
										/**/
										/* 十进制数字符串至数值转换 */
										/**/
										PDAStrTextToNum( &(heap->s_______________________1), StringDataType, 'd', &(heap->l________3), int32DataType, NULL, uCharDataType, NULL, &(heap->l_____________________________1), int32DataType );
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
											if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
												MemHandleFree( heap->s_______________________1 );
												heap->s_______________________1=NULL;
											}
										}
/* Bundle by name */
										{
											cl_A0000* cl_004 = NULL;
											/* Cluster CopyOnModify */
											MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
											cl_004 = (cl_A0000*)&heap->c__________CT_4;
	cl_004->el_3 = heap->l_____________________________1;
										}
									}
								} /* end case */
								break;
								/* begin case */
								case 4 : {
									{
										heap->l________4 = 0;
										/**/
										/* 十进制数字符串至数值转换 */
										/**/
										PDAStrTextToNum( &(heap->s_______________________1), StringDataType, 'd', &(heap->l________4), int32DataType, NULL, uCharDataType, NULL, &(heap->l_____________________________2), int32DataType );
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
											if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
												MemHandleFree( heap->s_______________________1 );
												heap->s_______________________1=NULL;
											}
										}
/* Bundle by name */
										{
											cl_A0000* cl_005 = NULL;
											/* Cluster CopyOnModify */
											MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
											cl_005 = (cl_A0000*)&heap->c__________CT_4;
	cl_005->el_4 = heap->l_____________________________2;
										}
									}
								} /* end case */
								break;
								/* begin case */
								default : {
									{
										MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
										/* Free unwired input select tunnel. */
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
											if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
												MemHandleFree( heap->s_______________________1 );
												heap->s_______________________1=NULL;
											}
										}
									}
								} /* end case */
								break;
							}
						} /* end switch */
						*index__E9 = heap->l_________________3;
					}
				} /* end case */
				break;
				/* begin case */
				case 1 : {
					{
						/* Free unwired input select tunnel. */
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
							if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
								MemHandleFree( heap->s_______________________1 );
								heap->s_______________________1=NULL;
							}
						}
						MemMove( &heap->c_red_CT_10, &heap->c_red, sizeof( cl_A0000 ) );
						{ /* Select */
							heap->l_________________CS_2 = heap->l_________________3;
							MemMove( &heap->c_red_CT_11, &heap->c_red_CT_10, sizeof( cl_A0000 ) );
							switch ( heap->l_________________CS_2 ) {
								/* begin case */
								case 0 : {
									{
/* Unbundle by name */
										{
											cl_A0000* cl_006 = (cl_A0000*)&heap->c_red_CT_11;
											heap->l__________CT = cl_006->el_0;
	}
									}
								} /* end case */
								break;
								/* begin case */
								case 1 : {
									{
/* Unbundle by name */
										{
											cl_A0000* cl_007 = (cl_A0000*)&heap->c_red_CT_11;
											heap->l__________CT = cl_007->el_1;
	}
									}
								} /* end case */
								break;
								/* begin case */
								case 2 : {
									{
/* Unbundle by name */
										{
											cl_A0000* cl_008 = (cl_A0000*)&heap->c_red_CT_11;
											heap->l__________CT = cl_008->el_2;
	}
									}
								} /* end case */
								break;
								/* begin case */
								case 3 : {
									{
/* Unbundle by name */
										{
											cl_A0000* cl_009 = (cl_A0000*)&heap->c_red_CT_11;
											heap->l__________CT = cl_009->el_3;
	}
									}
								} /* end case */
								break;
								/* begin case */
								case 4 : {
									{
/* Unbundle by name */
										{
											cl_A0000* cl_010 = (cl_A0000*)&heap->c_red_CT_11;
											heap->l__________CT = cl_010->el_4;
	}
									}
								} /* end case */
								break;
								/* begin case */
								default : {
									{
										heap->l__________CT = -1;
										/* Free unwired input select tunnel. */
	}
								} /* end case */
								break;
							}
						} /* end switch */
						/**/
						/* 数值至十进制数字符串转换 */
						/**/
						if (!(PDAStrNumToText( &(heap->l__________CT), int32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s______________________________), StringDataType ))){
							CGenErr();
						}
	{
							heap->XNodeTun34C = 0;
							heap->s_______________________________1 = heap->s______________________________;
							PDAStrIncRefCnt(heap->s_______________________________1, (uInt16)1); /* FrameTunnel */
							/**/
							/* 字符串长度 */
							/**/
							heap->l_________________4 = (int32)PDAStrLen(heap->s_______________________________1);
							/**/
							/* 字符串至字节数组转换 */
							/**/
							if (!PDAStrToArray(heap->s_______________________________1, &(heap->a______________________________1))) {
								CGenErr();
							}
/* Inline C node */
							{
								int16 error = 0;
								PDAArrPtr sendUserMessage_nodeTempArrayHandle = NULL;
								uInt8* sendUserMessage = NULL;
								int32 sendUserMessageLength = 0;
								error = heap->XNodeTun34C;
								sendUserMessage_nodeTempArrayHandle=PDAArrCopyOnModify( heap->a______________________________1 );
								sendUserMessage = (VoidHand)FirstElem(sendUserMessage_nodeTempArrayHandle);
								sendUserMessageLength = heap->l_________________4;

								{
									#include "set_red_state_inlineC__43.h"
									heap->XNodeTun361 = error;
								}

								/* Free input array without corresponding output in inline C node */
	if ((sendUserMessage_nodeTempArrayHandle) && ((sendUserMessage_nodeTempArrayHandle)->refcnt > 0)) {
									if (((sendUserMessage_nodeTempArrayHandle)->refcnt == 1) && ((sendUserMessage_nodeTempArrayHandle)->staticArray == false)) {
										(sendUserMessage_nodeTempArrayHandle)->refcnt--;
										MemHandleFree( sendUserMessage_nodeTempArrayHandle );
										sendUserMessage_nodeTempArrayHandle=NULL;
									}
									else
									 	PDAArrFree(sendUserMessage_nodeTempArrayHandle);
								}
#undef log
#undef log2
#undef ln
							}
						}
						MemMove( &heap->c__________CT_4, &heap->c_red_CT_10, sizeof( cl_A0000 ) );
					}
				} /* end case */
				break;
				/* begin case */
				default : {
					{
						/* Free unwired input select tunnel. */
	if (heap->s_______________________1 && (((PDAStrPtr)heap->s_______________________1)->refcnt > 0)) {
							if ((--((PDAStrPtr)heap->s_______________________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________1)->staticStr)) {
								MemHandleFree( heap->s_______________________1 );
								heap->s_______________________1=NULL;
							}
						}
						MemMove( &heap->c__________CT_4, &heap->c_red, sizeof( cl_A0000 ) );
					}
				} /* end case */
				break;
			}
		} /* end switch */
		if (set_red_state_out_0_set_24A) {
			PDAClusterCopyOnModify(&heap->c__________CT_4, 0xA0000 | ClusterDataType, set_red_state_out_0_set_24A);
		}
		else {
		}
		set_red_state_CleanupVIGlobalConstants();
		if (set_red_state_in_0_A________31 && (((PDAStrPtr)set_red_state_in_0_A________31)->refcnt == 1) && (((PDAStrPtr)set_red_state_in_0_A________31)->staticStr == false)) {
	if (set_red_state_in_0_A________31 && (((PDAStrPtr)set_red_state_in_0_A________31)->refcnt > 0)) {
				if ((--((PDAStrPtr)set_red_state_in_0_A________31)->refcnt == 0) && (!((PDAStrPtr)set_red_state_in_0_A________31)->staticStr)) {
					MemHandleFree( set_red_state_in_0_A________31 );
					set_red_state_in_0_A________31=NULL;
				}
			}
			set_red_state_in_0_A________31 = NULL;
		}
		else
		{
	if (set_red_state_in_0_A________31 && (((PDAStrPtr)set_red_state_in_0_A________31)->refcnt > 0)) {
				if ((--((PDAStrPtr)set_red_state_in_0_A________31)->refcnt == 0) && (!((PDAStrPtr)set_red_state_in_0_A________31)->staticStr)) {
					MemHandleFree( set_red_state_in_0_A________31 );
					set_red_state_in_0_A________31=NULL;
				}
			}
		}
		PDAClusterFree( &set_red_state_in_1_red_704, 0xA0000 | ClusterDataType);
		return eFinished;
	}
}


/****** Library interface **********/


Boolean set_red_state(
				String set_red_state_in_0_A________31_in, int32 set_red_state_in_0_A________31_slen,
				Cluster set_red_state_in_1_red_704_in,
				Cluster  set_red_state_out_0_set_24A_out				)
{
	eRunStatus retStat = eFinished;
	retStat = set_red_state_Run(
	(StringDataType),	(VoidHand)	set_red_state_in_0_A________31_in,
	(0xA0000 | ClusterDataType),	*(cl_A0000*)	set_red_state_in_1_red_704_in,
	(0xA0000 | ClusterDataType),	(cl_A0000*)	set_red_state_out_0_set_24A_out	);
	if (retStat != eFinished) {
		return false;
	}
	return true;
}



/****** End of generated code **********/


