/************************************************************************************/
//	版权所有：Copyright (c) 2005 - 2010 ICRoute INC.
/************************************************************************************/

#include "STC10F08XE.H"
#include "LDChip.h"
#include "Reg_RW.h"
#include "FlashDef.h"
#include "AsrItem.h"
#include "SubFuncs.h"

sbit RSTB=P3^3;
sbit CSB=P2^6;

uint32 nMp3StartPos=0;
uint32 nMp3Size=0;
uint32 nMp3Pos=0;
uint32 nCurMp3Pos=0;
uint8  idata nLD_Mode = LD_MODE_IDLE;		//	用来记录当前是在进行ASR识别还是在播放MP3
uint8 bMp3Play=0;							//	用来记录播放MP3的状态
uint8 idata ucRegVal;
uint8 idata ucHighInt;
uint8 idata ucLowInt;
uint8 idata ucStatus;
uint8 idata ucSPVol=15; // MAX=15 MIN=0		//	Speaker喇叭输出的音量

extern uint8 idata nAsrStatus;
void ProcessInt0();

/************************************************************************************/
//	这个C文件里面包含的函数，相当于LD3320的驱动，以C语言源代码的形式提供
//	开发者在没有调试通过之前，一定不要修改这里面的函数
//	
//	LD_ReloadMp3Data()函数由于牵涉到主控MCU向外部存储芯片读取MP3数据的操作
//	所以开发者应该根据自己的实际使用的存储芯片，去修改这个函数
//	但是要保证对于LD3320芯片的操作不改变
//
//	LD_GetResult()函数目前只简单取了第一候选结果作为识别结果
//	开发者应该根据自己产品设计，决定是否要读取其他的识别候选结果
/************************************************************************************/



void LD_reset()
{
	RSTB=1;
	delay(1);
	RSTB=0;
	delay(1);
	RSTB=1;

	delay(1);
	CSB=0;
	delay(1);
	CSB=1;
	delay(1);
}

void LD_Init_Common()
{
	bMp3Play = 0;

	LD_ReadReg(0x06);  
	LD_WriteReg(0x17, 0x35); 
	delay(10);
	LD_ReadReg(0x06);  

	LD_WriteReg(0x89, 0x03);  
	delay(5);
	LD_WriteReg(0xCF, 0x43);   
	delay(5);
	LD_WriteReg(0xCB, 0x02);
	
	/*PLL setting*/
	LD_WriteReg(0x11, LD_PLL_11);       
	if (nLD_Mode == LD_MODE_MP3)
	{
		LD_WriteReg(0x1E, 0x00); 
		LD_WriteReg(0x19, LD_PLL_MP3_19);   
		LD_WriteReg(0x1B, LD_PLL_MP3_1B);   
		LD_WriteReg(0x1D, LD_PLL_MP3_1D);
	}
	else
	{
		LD_WriteReg(0x1E,0x00);
		LD_WriteReg(0x19, LD_PLL_ASR_19); 
		LD_WriteReg(0x1B, LD_PLL_ASR_1B);		
	    LD_WriteReg(0x1D, LD_PLL_ASR_1D);
	}
	delay(10);
	
	LD_WriteReg(0xCD, 0x04);
	LD_WriteReg(0x17, 0x4C); 
	delay(5);
	LD_WriteReg(0xB9, 0x00);
	LD_WriteReg(0xCF, 0x4F); 
	LD_WriteReg(0x6F, 0xFF); 
}

void LD_Init_MP3()
{
	nLD_Mode = LD_MODE_MP3;
	LD_Init_Common();

	LD_WriteReg(0xBD,0x02);
	LD_WriteReg(0x17, 0x48);
	delay(10);

	LD_WriteReg(0x85, 0x52); 
	LD_WriteReg(0x8F, 0x00);  
	LD_WriteReg(0x81, 0x00);
	LD_WriteReg(0x83, 0x00);
	LD_WriteReg(0x8E, 0xff);
	LD_WriteReg(0x8D, 0xff);
    delay(1);
	LD_WriteReg(0x87, 0xff);
	LD_WriteReg(0x89, 0xff);
	delay(1);
	LD_WriteReg(0x22, 0x00);    
	LD_WriteReg(0x23, 0x00);
	LD_WriteReg(0x20, 0xef);    
	LD_WriteReg(0x21, 0x07);
	LD_WriteReg(0x24, 0x77);          
    LD_WriteReg(0x25, 0x03);
    LD_WriteReg(0x26, 0xbb);    
    LD_WriteReg(0x27, 0x01); 
}
	
void LD_Init_ASR()
{
	nLD_Mode=LD_MODE_ASR_RUN;
	LD_Init_Common();

	LD_WriteReg(0xBD, 0x00);
	LD_WriteReg(0x17, 0x48);
	delay( 10 );

	LD_WriteReg(0x3C, 0x80);    
	LD_WriteReg(0x3E, 0x07);
	LD_WriteReg(0x38, 0xff);    
	LD_WriteReg(0x3A, 0x07);
	
	LD_WriteReg(0x40, 0);          
	LD_WriteReg(0x42, 8);
	LD_WriteReg(0x44, 0);    
	LD_WriteReg(0x46, 8); 
	delay( 1 );
}


void ProcessInt0()
{
	uint8 nAsrResCount=0;

	EX0=0;
	
	ucRegVal = LD_ReadReg(0x2B);
	if(nLD_Mode == LD_MODE_ASR_RUN)
	{
		// 语音识别产生的中断
		// （有声音输入，不论识别成功或失败都有中断）
		LD_WriteReg(0x29,0) ;
		LD_WriteReg(0x02,0) ;
		if((ucRegVal & 0x10) &&
			LD_ReadReg(0xb2)==0x21 && 
			LD_ReadReg(0xbf)==0x35)
		{
			nAsrResCount = LD_ReadReg(0xba);
			if(nAsrResCount>0 && nAsrResCount<=4) 
			{
				nAsrStatus=LD_ASR_FOUNDOK;
			}
			else
		    {
				nAsrStatus=LD_ASR_FOUNDZERO;
			}	
		}
		else
		{
			nAsrStatus=LD_ASR_FOUNDZERO;
		}
			
		LD_WriteReg(0x2b, 0);
    	LD_WriteReg(0x1C,0);
		return;
	}
	
	// 声音播放产生的中断，有三种：
	// A. 声音数据已全部播放完。
	// B. 声音数据已发送完毕。
	// C. 声音数据暂时将要用完，需要放入新的数据。	
	ucHighInt = LD_ReadReg(0x29); 
	ucLowInt=LD_ReadReg(0x02); 
	LD_WriteReg(0x29,0) ;
	LD_WriteReg(0x02,0) ;
    if(LD_ReadReg(0xBA)&CAUSE_MP3_SONG_END)
    {
	// A. 声音数据已全部播放完。

		LD_WriteReg(0x2B,  0);
      	LD_WriteReg(0xBA, 0);	
		LD_WriteReg(0xBC,0x0);	
		bMp3Play=0;					// 声音数据全部播放完后，修改bMp3Play的变量
		LD_WriteReg(0x08,1);
		delay_2(5);
      	LD_WriteReg(0x08,0);
		LD_WriteReg(0x33, 0);

		return ;
     }

	 if(nMp3Pos>=nMp3Size)
	{
	// B. 声音数据已发送完毕。

		LD_WriteReg(0xBC, 0x01);
		LD_WriteReg(0x29, 0x10);
//		bMp3Play=0;				//	此时，只是主控MCU把所有MP3数据发送到LD3320芯片内，但是还没有把送入的数据全部播放完毕
		EX0=1;

		return;	
	}

	// C. 声音数据暂时将要用完，需要放入新的数据。	

	LD_ReloadMp3Data_2();
		
	LD_WriteReg(0x29,ucHighInt); 
	LD_WriteReg(0x02,ucLowInt) ;

	delay_2(10);
	EX0=1;

}




void LD_play()
{
	nMp3Pos=0;
	bMp3Play=1;

	if (nMp3Pos >=  nMp3Size)
		return ; 

	LD_ReloadMp3Data();

    LD_WriteReg(0xBA, 0x00);
	LD_WriteReg(0x17, 0x48);
	LD_WriteReg(0x33, 0x01);
	LD_WriteReg(0x29, 0x04);
	
	LD_WriteReg(0x02, 0x01); 
	LD_WriteReg(0x85, 0x5A);

	EX0=1;

}

void LD_AdjustMIX2SPVolume(uint8 val)
{
	ucSPVol = val;
	val = ((15-val)&0x0f) << 2;
	LD_WriteReg(0x8E, val | 0xc3); 
	LD_WriteReg(0x87, 0x78); 
}

void LD_ReloadMp3Data()
{
	uint32 nCurMp3Pos;
	uint8 val;
	uint8 k;

	nCurMp3Pos = nMp3StartPos + nMp3Pos;
	FLASH_CS=1;
	FLASH_CLK=0;
	FLASH_CS=0;

	 IO_Send_Byte(W25P_FastReadData);   
	 IO_Send_Byte(((nCurMp3Pos & 0xFFFFFF) >> 16));  
	 IO_Send_Byte(((nCurMp3Pos & 0xFFFF) >> 8));
	 IO_Send_Byte(nCurMp3Pos & 0xFF);
	 IO_Send_Byte(0xFF);

	ucStatus = LD_ReadReg(0x06);
	while ( !(ucStatus&MASK_FIFO_STATUS_AFULL) && (nMp3Pos<nMp3Size) )
	{
		val=0;
		for(k=0;k<8;k++)
		{
			FLASH_CLK=0;
			val<<=1;
			FLASH_CLK=1;
			val|=FLASH_DO;
		}
		LD_WriteReg(0x01,val);

		nMp3Pos++;

		ucStatus = LD_ReadReg(0x06);
	}
	
	FLASH_CS=1;
	FLASH_CLK=0;

}
/*********************************************************************
//为了消除编译时的 警告 *** WARNING L15: MULTIPLE CALL TO SEGMENT
//把在中断函数中需要调用的函数重新复制并命名
//消除警告 Warning L15，并且避免由于函数重入可能带来的隐藏Bug
/*********************************************************************/

void LD_ReloadMp3Data_2()
{
	uint32 nCurMp3Pos;
	uint8 val;
	uint8 k;

	nCurMp3Pos = nMp3StartPos + nMp3Pos;
	FLASH_CS=1;
	FLASH_CLK=0;
	FLASH_CS=0;

	 IO_Send_Byte(W25P_FastReadData);   
	 IO_Send_Byte(((nCurMp3Pos & 0xFFFFFF) >> 16));  
	 IO_Send_Byte(((nCurMp3Pos & 0xFFFF) >> 8));
	 IO_Send_Byte(nCurMp3Pos & 0xFF);
	 IO_Send_Byte(0xFF);

	ucStatus = LD_ReadReg(0x06);
	while ( !(ucStatus&MASK_FIFO_STATUS_AFULL) && (nMp3Pos<nMp3Size) )
	{
		val=0;
		for(k=0;k<8;k++)
		{
			FLASH_CLK=0;
			val<<=1;
			FLASH_CLK=1;
			val|=FLASH_DO;
		}
		LD_WriteReg(0x01,val);

		nMp3Pos++;

		ucStatus = LD_ReadReg(0x06);
	}
	
	FLASH_CS=1;
	FLASH_CLK=0;

}

// Return 1: success.
uint8 LD_Check_ASRBusyFlag_b2()
{
	uint8 j;
	uint8 flag = 0;
	for (j=0; j<10; j++)
	{
		if (LD_ReadReg(0xb2) == 0x21)
		{
			flag = 1;
			break;
		}
		delay(10);		
	}
	return flag;
}

void LD_AsrStart()
{
	LD_Init_ASR();
}

// Return 1: success.
uint8 LD_AsrRun()
{
	SendString("LD_AsrRun().");
	SendLineEnd();

	LD_WriteReg(0x35, MIC_VOL);
//	LD_WriteReg(0xB3, 0x0D);	// 用户阅读 开发手册 理解B3寄存器的调整对于灵敏度和识别距离的影响


	LD_WriteReg(0x1C, 0x09);
	LD_WriteReg(0xBD, 0x20);
	LD_WriteReg(0x08, 0x01);
	delay( 1 );
	LD_WriteReg(0x08, 0x00);
	delay( 1 );

	if(LD_Check_ASRBusyFlag_b2() == 0)
	{
		return 0;
	}

	LD_WriteReg(0xB2, 0xff);	
	LD_WriteReg(0x37, 0x06);
	delay( 5 );
	LD_WriteReg(0x1C, 0x0b);
	LD_WriteReg(0x29, 0x10);
	
	LD_WriteReg(0xBD, 0x00);
	EX0=1;
	return 1;
}

void LD_AsrAddFixed_ByString(char * pRecogString, uint8 k)
{
	uint8 nAsrAddLength;

	SendByteHex(k);
	SendString("    ");
	SendString(pRecogString);
	SendLineEnd();

	if (*pRecogString==0)
		return;

	LD_WriteReg(0xc1, k );
	LD_WriteReg(0xc3, 0 );
	LD_WriteReg(0x08, 0x04);
	delay(1);
	LD_WriteReg(0x08, 0x00);
	delay(1);




	for (nAsrAddLength=0; nAsrAddLength<50; nAsrAddLength++)
	{
		if (pRecogString[nAsrAddLength] == 0)
			break;
		LD_WriteReg(0x5, pRecogString[nAsrAddLength]);
	}
	
	LD_WriteReg(0xb9, nAsrAddLength);
	LD_WriteReg(0xb2, 0xff);
	LD_WriteReg(0x37, 0x04);
}

void LD_AsrAddFixed_ByIndex(uint8 nIndex)
{
	switch(nIndex)
	{
	case  0: LD_AsrAddFixed_ByString(STR_00,nIndex); break;
	case  1: LD_AsrAddFixed_ByString(STR_01,nIndex); break;
	case  2: LD_AsrAddFixed_ByString(STR_02,nIndex); break;
	case  3: LD_AsrAddFixed_ByString(STR_03,nIndex); break;
	case  4: LD_AsrAddFixed_ByString(STR_04,nIndex); break;
	case  5: LD_AsrAddFixed_ByString(STR_05,nIndex); break;
	case  6: LD_AsrAddFixed_ByString(STR_06,nIndex); break;
	case  7: LD_AsrAddFixed_ByString(STR_07,nIndex); break;
	case  8: LD_AsrAddFixed_ByString(STR_08,nIndex); break;
	case  9: LD_AsrAddFixed_ByString(STR_09,nIndex); break;
	case 10: LD_AsrAddFixed_ByString(STR_10,nIndex); break;
	case 11: LD_AsrAddFixed_ByString(STR_11,nIndex); break;
	case 12: LD_AsrAddFixed_ByString(STR_12,nIndex); break;
	case 13: LD_AsrAddFixed_ByString(STR_13,nIndex); break;
	case 14: LD_AsrAddFixed_ByString(STR_14,nIndex); break;
	case 15: LD_AsrAddFixed_ByString(STR_15,nIndex); break;
	case 16: LD_AsrAddFixed_ByString(STR_16,nIndex); break;
	case 17: LD_AsrAddFixed_ByString(STR_17,nIndex); break;
	case 18: LD_AsrAddFixed_ByString(STR_18,nIndex); break;
	case 19: LD_AsrAddFixed_ByString(STR_19,nIndex); break;
	case 20: LD_AsrAddFixed_ByString(STR_20,nIndex); break;
	case 21: LD_AsrAddFixed_ByString(STR_21,nIndex); break;
	case 22: LD_AsrAddFixed_ByString(STR_22,nIndex); break;
	case 23: LD_AsrAddFixed_ByString(STR_23,nIndex); break;
	case 24: LD_AsrAddFixed_ByString(STR_24,nIndex); break;
	case 25: LD_AsrAddFixed_ByString(STR_25,nIndex); break;
	case 26: LD_AsrAddFixed_ByString(STR_26,nIndex); break;
	case 27: LD_AsrAddFixed_ByString(STR_27,nIndex); break;
	case 28: LD_AsrAddFixed_ByString(STR_28,nIndex); break;
	case 29: LD_AsrAddFixed_ByString(STR_29,nIndex); break;
	case 30: LD_AsrAddFixed_ByString(STR_30,nIndex); break;
	case 31: LD_AsrAddFixed_ByString(STR_31,nIndex); break;
	case 32: LD_AsrAddFixed_ByString(STR_32,nIndex); break;
	case 33: LD_AsrAddFixed_ByString(STR_33,nIndex); break;
	case 34: LD_AsrAddFixed_ByString(STR_34,nIndex); break;
	case 35: LD_AsrAddFixed_ByString(STR_35,nIndex); break;
	case 36: LD_AsrAddFixed_ByString(STR_36,nIndex); break;
	case 37: LD_AsrAddFixed_ByString(STR_37,nIndex); break;
	case 38: LD_AsrAddFixed_ByString(STR_38,nIndex); break;
	case 39: LD_AsrAddFixed_ByString(STR_39,nIndex); break;
	case 40: LD_AsrAddFixed_ByString(STR_40,nIndex); break;
	case 41: LD_AsrAddFixed_ByString(STR_41,nIndex); break;
	case 42: LD_AsrAddFixed_ByString(STR_42,nIndex); break;
	case 43: LD_AsrAddFixed_ByString(STR_43,nIndex); break;
	case 44: LD_AsrAddFixed_ByString(STR_44,nIndex); break;
	case 45: LD_AsrAddFixed_ByString(STR_45,nIndex); break;
	case 46: LD_AsrAddFixed_ByString(STR_46,nIndex); break;
	case 47: LD_AsrAddFixed_ByString(STR_47,nIndex); break;
	case 48: LD_AsrAddFixed_ByString(STR_48,nIndex); break;
	case 49: LD_AsrAddFixed_ByString(STR_49,nIndex); break;

	}

}


// Return 1: success.
//	添加识别关键词语，开发者可以学习"语音识别芯片LD3320高阶秘籍.pdf"中关于垃圾词语吸收错误的用法
uint8 LD_AsrAddFixed()
{
	uint8 k, flag;
		
	SendString("\nLD_AsrAddFixed().");
	SendLineEnd();


	flag = 1;
	for (k=0; k<ITEM_COUNT; k++)
	{
			
		if(LD_Check_ASRBusyFlag_b2() == 0)
		{
			flag = 0;
			break;
		}
		
		LD_AsrAddFixed_ByIndex(k);
	}
    return flag;
}



uint8 LD_GetResult()
{
	uint8 res;

	res = LD_ReadReg(0xc5);
	SendString("ASR Result = ");
	SendByteHex(res);
	SendLineEnd();

	return res;
}


void PlaySound(uint8 nCode)
{
	if (nCode>=ITEM_COUNT)
		return;


	nMp3StartPos = pAsrItem[nCode].nSoundStart;
	nMp3Size = pAsrItem[nCode].nSoundSize;

	SendString("PlaySound - ");
	SendByteHex(nCode);
	SendLongHex(nMp3StartPos);
	SendLongHex(nMp3Size);
	SendLineEnd();

	LD_Init_MP3();
	LD_AdjustMIX2SPVolume(SPEAKER_VOL);
	LD_play();
}

void Send_getbacknum(unsigned char Rnum)
{
SendString("ASR Result =");
SendByteHex(Rnum);
switch (Rnum)
{
case  9: SendString(STR_09);SendLineEnd(); break;
case  10: SendString(STR_10);SendLineEnd(); break;
case  11: SendString(STR_11);SendLineEnd(); break;
case  12: SendString(STR_12);SendLineEnd(); break;
case  13: SendString(STR_13);SendLineEnd(); break;
}

}
