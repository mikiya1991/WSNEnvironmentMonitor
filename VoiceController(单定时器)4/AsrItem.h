
#ifndef AsrItemH
#define AsrItemH

#define MIC_VOL 0x4C
#define SPEAKER_VOL 0x07

#define ITEM_COUNT 14	//定义识别语音个数
#define VOIC_COUNT 9	//定义播放语音个数

typedef struct 
{
	uint32 nSoundStart; 
	uint32 nSoundSize; 
}ST_ASR_DATA; 

const ST_ASR_DATA xdata	pAsrItem[VOIC_COUNT]  =
{
	//通过FLASH下载软件可以找到声音文件的起始点和大小

    {0, 41088}, //1.mp3 3960
    {41089, 29803}, //2.mp3 
    {70893, 35236}, //3.mp3 
    {106130, 29385}, //4.mp3 
    {135516, 29385}, //5.mp3 
    {164902, 29385}, //6.mp3 
    {194288, 32728}, //7.mp3 
    {227017, 31474}, //8.mp3
};
//======识别结果有语音播放============
#define STR_00 "guan"
#define STR_01 "kai"
#define STR_02 "yao"
#define STR_03 ""
#define STR_04 ""
#define STR_05 ""
#define STR_06 ""
#define STR_07 ""
#define STR_08 ""

//=======识别结果无语音播放============
#define STR_09 ""
#define STR_10 ""
#define STR_11 ""
#define STR_12 ""
#define STR_13 ""
//=======更多识别语音请在下面自行添加，并修改相应代码========
#define STR_14 ""
#define STR_15 ""
#define STR_16 ""
#define STR_17 ""
#define STR_18 ""
#define STR_19 ""
#define STR_20 ""
#define STR_21 ""
#define STR_22 ""
#define STR_23 ""
#define STR_24 ""
#define STR_25 ""
#define STR_26 ""
#define STR_27 ""
#define STR_28 ""
#define STR_29 ""
#define STR_30 ""
#define STR_31 ""
#define STR_32 ""
#define STR_33 ""
#define STR_34 ""
#define STR_35 ""
#define STR_36 ""
#define STR_37 ""
#define STR_38 ""
#define STR_39 ""
#define STR_40 ""
#define STR_41 ""
#define STR_42 ""
#define STR_43 ""
#define STR_44 ""
#define STR_45 ""
#define STR_46 ""
#define STR_47 ""
#define STR_48 ""
#define STR_49 ""

#endif
