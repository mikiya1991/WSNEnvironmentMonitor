/***************************************************************************************
	NI CONFIDENTIAL

	WSNmain.c - description

	© 2003-2006 National Instruments Corporation.
     This code is for internal use only and may not be used outside of the LabVIEW embedded product
     (LabVIEW Embedded Development Module) and may not be copied, modified, or redistributed.  The code may
     only be used in accordance with the terms of the license agreement entered into between
     National Instruments Corporation and the authorized user.  Your use of the code designates your
     acceptance of the terms of the license agreement.

********************************************************************************************/

// C RunTime Header Files
#include <stdlib.h>

#define LV_MAIN

#include "LVCGenIncludes.h"

#include "LVContext.h"
#include "LVForms.h"
#include "LVGlobs.h"
#ifdef _Include_LVISRSupport
#include "LVISRList.h"
#endif
#include "LVFuncsUsed.h"
#include "firmware.h"
#include "LvChannels.h"
#include "WSNExtRAMSupport.h"

volatile VoidFn tempfn;
extern void main(void);
extern void Startup(void);

extern size_t stack_start;
extern size_t stack_size;

const size_t STACK_FILL_WORD = 0x57ac;

static void __init_stack_usage_check()
{
	volatile size_t *sp;
	size_t *crt_sp = (size_t *) &sp; //first local variable allocated last -> get SP
	for (sp = (size_t *) &stack_start; sp < crt_sp; sp++)
	  *sp = STACK_FILL_WORD;
}

int __is_stack_overflow()
{
 	size_t *sp = (size_t *) &stack_start;
	//if lowest two fill words are corrupt, assume a stack overflow
	return (*sp != STACK_FILL_WORD || *(sp+1) != STACK_FILL_WORD);
}

size_t __computeStackUsageMax()
{
	volatile size_t *sp;
	size_t *crt_sp = (size_t *) &sp; //first local variable allocated last -> get SP
	size_t orig_sp = (size_t) &stack_start + (size_t) &stack_size;
	for (sp = (size_t *) &stack_start; *sp == STACK_FILL_WORD && sp < crt_sp; sp++);
	return (orig_sp - (size_t)sp);
}

size_t __computeStackUsageCurrent()
{
	volatile size_t orig_sp = (size_t) &stack_start + (size_t) &stack_size;
	size_t crt_sp = (size_t) &orig_sp; //first local variable allocated last -> get SP
	return (orig_sp - crt_sp);
}


void WSN_Init() 
{
	int16 i;
	LVCGenRTInit();
	/* init stack usage/overflow checking */
	__init_stack_usage_check();
	__init_mem_check();
	
	/* init serial debug trace */
	embInitTrace();
	
	/* init external RAM manager */
#if LVWSN_EXTRAM_LENGTH > 0
	embInitExtRAMMng();
#endif
		
	/* Init globals */
	for (i=0;i<sizeof(globTable)/sizeof(InitFPTermsFunc);i++) {
		(*(globTable[i]))(NULL, false);
	}

	/* Init VI Constants */
	for (i=0;i<sizeof(globConstInitTable)/sizeof(VoidFn);i++) {
		tempfn=globConstInitTable[i];
		(*(tempfn))();
	}
}

Boolean WSN_MAIN_VI(Enum16);

void CallVI(uInt16 state)
{
	uInt16 e_Enum = state;

	if ( WSN_MAIN_VI ( e_Enum ) == eFail) CGenErr();
	/* Check for stack overflow */
	if (__is_stack_overflow()) SetError(kGenCModNum, eAppFailed);
}

void VI_initApp(tError* error)
{
	WSN_Init();

	CallVI(0);
}

void VI_stopApp(tError* error)
{
	/*do nothing for now*/
}

void VI_sampleAllChannels(tError* error)
{
	CallVI(1);
}

u8 *userMsgBuffer;
u8 userMsgSize;
u8 *sendMsgBuffer = NULL;

void VI_receive(tError* error)
{
	tError local_error = tError_NoError;	
	u8* tbuf =embGetReceivedUserMessage(&userMsgSize, &local_error)+1;
	u8 userMsgBufferStack[EMBSENDMESSAGE_MAX];
	userMsgSize--;
	userMsgBuffer = userMsgBufferStack;
	MemMove(userMsgBuffer, tbuf, userMsgSize);
	embReleaseReceivedUserMessage(tbuf-1);
	CallVI(2);
	userMsgSize = 0;
}

void VI_NwkStatusNotify(tError* error)
{
	CallVI(3);
}

u8 wsn_DIO_Events;
u8 wsnDIOEventMask;
u8 wsnDIOEventEdge;


void VI_DIOnotify(u8 events, tError* error)
{
	wsn_DIO_Events = events;
	CallVI(4);
	/*The event counters show 0 in all states except the DIO notification state*/
	wsn_DIO_Events = 0;
}




const embLVCallbackStruct embCallbacks= {
	VI_initApp,
	VI_NwkStatusNotify,
	VI_sampleAllChannels,
	VI_receive,
	VI_DIOnotify,
	VI_NwkStatusNotify,
	VI_stopApp
};



