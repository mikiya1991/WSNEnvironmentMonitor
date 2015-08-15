#ifndef _LVGlobs_h
#define _LVGlobs_h
#define	HOST_IP_ADDRESS	"192.168.221.1"
#define	BUILD_SPECIFICATION_ID	""
#include "LVCGenIncludes.h"
#ifdef LV_MAIN
int32 nBigClusterSize = 32;
void GlobFiller(Boolean bShowFrontPanel);
void GlobFiller(Boolean bShowFrontPanel) {}
void Filler(void);
void Filler(void) {}
Boolean InitFPTermsFiller(ArgList* argsIn, Boolean bShowFrontPanel);
Boolean InitFPTermsFiller(ArgList* argsIn, Boolean bShowFrontPanel) { return true; }
InitFPTermsFunc globTable[] = {
	InitFPTermsFiller,
};

extern void node3_AddVIGlobalConstants(void);

extern void set_ai_power_AddVIGlobalConstants(void);

extern void sample_a1_AddVIGlobalConstants(void);

extern void sample_a0_AddVIGlobalConstants(void);

extern void A__________AddVIGlobalConstants(void);

extern void message_dio_control_AddVIGlobalConstants(void);

extern void set_red_state_AddVIGlobalConstants(void);
VoidFn globConstInitTable[] = {
	Filler,

	node3_AddVIGlobalConstants,

	set_ai_power_AddVIGlobalConstants,

	sample_a1_AddVIGlobalConstants,

	sample_a0_AddVIGlobalConstants,

	A__________AddVIGlobalConstants,

	message_dio_control_AddVIGlobalConstants,

	set_red_state_AddVIGlobalConstants,
};
VoidFn globConstCleanupTable[] = {
	Filler,
};
CleanUpFunc globCleanupTable[] = {
	GlobFiller,
};

extern void node3_CleanupLSRs(void);

extern void set_ai_power_CleanupLSRs(void);

extern void sample_a1_CleanupLSRs(void);

extern void sample_a0_CleanupLSRs(void);

extern void A__________CleanupLSRs(void);

extern void message_dio_control_CleanupLSRs(void);

extern void set_red_state_CleanupLSRs(void);
VoidFn lsrCleanupTable[] = {
	Filler,

	node3_CleanupLSRs,

	set_ai_power_CleanupLSRs,

	sample_a1_CleanupLSRs,

	sample_a0_CleanupLSRs,

	A__________CleanupLSRs,

	message_dio_control_CleanupLSRs,

	set_red_state_CleanupLSRs,
};
#else
extern InitFPTermsFunc globTable[];
extern VoidFn globCleanupTable[];
extern VoidFn globConstInitTable[];
extern VoidFn globConstCleanupTable[];
extern VoidFn lsrCleanupTable[];
extern int32 nBigClusterSize;
#endif /*LV_MAIN*/
#ifdef LV_MAIN
const uInt8 nArrTypeData[] = {
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	3, 	0, 	0, 	0, 	0, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 	2, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		int16DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	1, 	0, 	0, 	0, 		Timestamp128DataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 		ArrayDataType, 	0, 	4, 	0, 		ClusterDataType, 	0, 	0, 	0, 		VariantDataType, 	0, 	0, 	0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uCharDataType, 	0, 	0, 	0, 	2, 0, 0, 0, 
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 		ArrayDataType, 	0, 	6, 	0, 		ArrayDataType, 	0, 	7, 	0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	3, 	0, 	0, 	0, 		Timestamp128DataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 		ClusterDataType, 	0, 	8, 	0, 		ClusterDataType, 	0, 	0, 	0, 		VariantDataType, 	0, 	0, 	0, 
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	4, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 
	/* Enum */
	Enum16DataType, 	0, 	0, 	0, 	5, 	0, 	5, 
	'S', 	't', 	'a', 	'r', 	't', 	6, 
	'S', 	'a', 	'm', 	'p', 	'l', 	'e', 	7, 
	'R', 	'e', 	'c', 	'e', 	'i', 	'v', 	'e', 	21, 
	'N', 	'e', 	't', 	'w', 	'o', 	'r', 	'k', 	' ', 	'S', 	't', 	'a', 	't', 	'u', 	's', 	' ', 	'C', 	'h', 	'a', 	'n', 	'g', 	'e', 	16, 
	'D', 	'I', 	'O', 	' ', 	'N', 	'o', 	't', 	'i', 	'f', 	'i', 	'c', 	'a', 	't', 	'i', 	'o', 	'n', 0, 0, 
	0
};
uInt32 nArrClusterDataSizes[] = {
0,	0,	0,	0,	0
};
const uInt32 nArrTypeDataOffsets[] = {
	0, 	24, 	36, 	48, 	60, 	72, 	104, 	116, 	128, 	148, 	180, 	212, 	0
};
const uInt32 nArrTypeDataSize = 12;
#else
extern const uInt8 nArrTypeData[];
extern uInt32 nArrClusterDataSizes[];
extern const uInt32 nArrTypeDataOffsets[];
extern const uInt32 nArrTypeDataSize;
#endif
typedef struct cl_00000 {
	Boolean	el_0;
	int32	el_1;
	VoidHand	el_2;
} cl_00000;
typedef struct cl_50000 {
	int16	refcnt;
	int16	bStatic;
	Timestamp128	el_0;
	float64	el_1;
	PDAArrPtr	el_2;
	cl_00000	el_3;
	VoidHand	el_4;
} cl_50000;
typedef struct cl_80000 {
	PDAArrPtr	el_0;
	PDAArrPtr	el_1;
} cl_80000;
typedef struct cl_90000 {
	int16	refcnt;
	int16	bStatic;
	Timestamp128	el_0;
	float64	el_1;
	cl_80000	el_2;
	cl_00000	el_3;
	VoidHand	el_4;
} cl_90000;
typedef struct cl_A0000 {
	int32	el_0;
	int32	el_1;
	int32	el_2;
	int32	el_3;
	int32	el_4;
} cl_A0000;
#ifdef LV_MAIN
uInt32 gCallerID = 0;
#else
extern uInt32 gCallerID;
#endif /* LV_MAIN */


/**
* Profiling stubs
*/
#ifdef LV_MAIN
uInt32 gProfilingInfoSize = 0;
#else
extern uInt32 gProfilingInfoSize;
#endif /* LV_MAIN */

#ifdef LV_MAIN
ProfilingInfo* gProfilingInfo=NULL;
#else
extern ProfilingInfo* gProfilingInfo;
#endif /* LV_MAIN */


/**
* Call library node callback stubs
*/
#ifdef LV_MAIN
CLNInstanceData *gArrCLNInstanceData = NULL;
int32 gnArrCLNInstanceDataItems = 0;
#endif

/**
* Variable Manager IP address
*/
#if !defined(_WIN32_WCE) && !defined(CStatic)
#ifdef LV_MAIN
TextPtr gMPUVarManagerIPAddressStr = _LVT("192.168.221.1");
#else
extern TextPtr gMPUVarManagerIPAddressStr;
#endif // LV_MAIN
#endif // !defined(_WIN32_WCE) && !defined(CStatic)


/**
* ISR stubs
*/

#ifdef LV_MAIN
ISRInfoTableEntry gISRInfoTable[] = {{NULL, NULL}};
#else
extern ISRInfoTableEntry gISRInfoTable[];
#endif
#endif
