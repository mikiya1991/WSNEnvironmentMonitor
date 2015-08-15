/************************************************************************************/
//	版权所有：Copyright (c) 2005 - 2010 ICRoute INC.
/************************************************************************************/

#include "STC10F08XE.H"
#include "LDchip.h"
#include "Reg_RW.h"
#include "FlashDef.h"
#include "SubFuncs.h"
#include "math.h"


/************************************************************************************/
//	nAsrStatus 用来在main主程序中表示程序运行的状态，不是LD3320芯片内部的状态寄存器
//	LD_ASR_NONE:		表示没有在作ASR识别
//	LD_ASR_RUNING：		表示LD3320正在作ASR识别中
//	LD_ASR_FOUNDOK:		表示一次识别流程结束后，有一个识别结果
//	LD_ASR_FOUNDZERO:	表示一次识别流程结束后，没有识别结果
//	LD_ASR_ERROR:		表示一次识别流程中LD3320芯片内部出现不正确的状态
/***********************************************************************************/
uint8 idata nAsrStatus=0;
	
#define Same_VOIC_COUNT  9		//定义长度和播放语音长度一致，用以判断返回值是否需要播放语音

extern void    _nop_     (void);

void MCU_init();
void FlashLED(uint8 nTimes);
void PlaySound(uint8 nCode);
uint8 RunASR();
void ProcessInt0();
void UART_init();
void OutputIO(uint8 nRes);
void LED_TEST();


//定义红外模块接口
sbit Redout=P2^4;
sbit tiaozhi=P2^5;
sbit Redin=P2^7;

//定义红外模块控制信号
sbit key1=P4^2;//按键按下则表示进入学习状态
sbit key2=P1^1;
sbit key3=P4^3;


unsigned char bianma[8][3]={0xB2,0x7B,0xE0,0xB2,0x9f,0x8c,0xB2,0x6b,0xe0};//编码存储器关、开、摆风（关）
unsigned char index;//用于编码存储器计数
unsigned char flag;//学习成功标志
uint8 flag_shibie;
long int count;//用于计数
uint8 flag_fashe1,flag_fashe2;//发射标志

unsigned char tmp,tt;

void xuexi();
void xuanze(uint8 nRes);
void fashe(uint8 nRes);

void fashe_yindao();
void fashe_1();
void fashe_0();


void  main()
{
//	uint8 idata nAsrRes;//识别结果对应的标号
	MCU_init();
	//UART_init();
	LD_reset();
	BUZZ=0;//关蜂鸣器
	nAsrStatus = LD_ASR_NONE;		//	初始状态：没有在作ASR	

	//红外模块接口初始化
	tiaozhi=0;
	Redout=0;
	count=0;
	flag=0;
	index=0;
	flag_fashe1=0;
	flag_fashe2=0;
	flag_shibie=0;

	tmp=0;
	tt=0;

	while(1)
	{
		

		//if (bMp3Play!=0)			//	如果还在播放MP3中，则等待，直到MP3播放完毕 即bMp3Play==0
		//	continue;				//	bMp3Play 是定义的一个全局变量用来记录MP3播放的状态，不是LD3320芯片内部的寄存器
		
		//if(flag==0)continue;
		/*
		switch(nAsrStatus)
		{
			case LD_ASR_RUNING:
			case LD_ASR_ERROR:		
				break;
			case LD_ASR_NONE:
			{

				nAsrStatus=LD_ASR_RUNING;
				if (RunASR()==0)	//	启动一次ASR识别流程：ASR初始化，ASR添加关键词语，启动ASR运算
				{
					nAsrStatus = LD_ASR_ERROR;
				}
				break;
			}
			case LD_ASR_FOUNDOK:
			{
				nAsrRes = LD_GetResult();	//	一次ASR识别流程结束，去取ASR识别结果
				FlashLED(nAsrRes+1);
				fashe(nAsrRes);
				nAsrStatus = LD_ASR_NONE;				
				break;
			}
			case LD_ASR_FOUNDZERO:
			default:
			{
				nAsrStatus = LD_ASR_NONE;
				break;
			}
		}// switch
		*/

		//检测是否有按键发射信号	
		if(key1==0)
		{
			delay(150);//消抖
			if(key1==0)
			{
				
				fashe(0);
				SendChar('1');
				Redin=1;
				delay(10300);
			}
		}

		if(key2==0)
		{
			delay(150);//消抖
			if(key2==0)
			{
				
				fashe(1);
				SendChar('2');
				Redin=0;
				delay(10300);
			}
		}

		if(key3==0)
		{
			delay(150);//消抖
			if(key3==0)
			{
				
				fashe(2);
				SendChar('3');
				delay(10300);
			}
		}

		if(tt)
		{
			if(tmp=='0')fashe(0);
			else if(tmp=='1')fashe(1);
			else if(tmp=='2')fashe(2);

			tt=0;
		}

	}// while

}

//定时器0产生38KHZ的调制波
void time0int(void) interrupt 1 //13us中断一次
{
	count++;
	tiaozhi=~tiaozhi;	
}


void Uart_Isr(void) interrupt 4
{
	if(RI)
	{
		RI=0;
		tmp=SBUF;
		//tt=1;
		SendChar(tmp);
		//if(tmp=='0') fashe(0);//off
		//else if(tmp=='1') fashe(1);//on
		//else if(tmp=='2') fashe(2);
		tt=1;
		
	}
	if(TI)
	{
		TI=0;	
	}
}


//4.36ms的高电平；4.36ms的低电平
void fashe_yindao()
{
	//发射引导码
	count=0;
	Redout=1;					
	while(count<340);
	Redout=0;
	count=0;	
	while(count<335);
}

//0.58ms的高电平；1.54ms的低电平
void fashe_1()
{
	count=0;	
	Redout=1;				
	while(count<42);
	Redout=0;
	count=0;
	while(count<124);
}

//0.58ms的高电平；0.52ms的低电平
void fashe_0()
{
	count=0;
	Redout=1;
	while(count<42);
	Redout=0;
	count=0;
	while(count<42);
}


void fashe(uint8 nRes)
{
	unsigned char i,j,k,bianma_temp,flag01;
	TR0=1;
	FlashLED(nRes+1);//闪烁相应次数
	//发射引导码
	fashe_yindao();
	//发射编码
	for(i=0;i<3;i++)//发射三段编码
	{
		bianma_temp=bianma[nRes][i];
		for(j=0;j<2;j++)//发射一段编码中的正、反码
		{	
			if(j==1)	bianma_temp=~bianma_temp;//反转编码
			//发射
			for(k=0;k<8;k++)
			{
				flag01=(bianma_temp>>(7-k))&1;
			    //每次发射都要重新置数
				if(flag01)//发射1
				{
					fashe_1();
				}
				else//发射0
				{	
					fashe_0();
				}	
			}
		}
	}
	//发射0.58ms的高电平(这里约为0.56ms)
	count=0;
	Redout=1;
	while(count<42);
	Redout=0;
	count=0;
	while(count<390);
	
	fashe_yindao();
	for(i=0;i<3;i++)//发射三段编码
	{
		bianma_temp=bianma[nRes][i];
		for(j=0;j<2;j++)//发射一段编码中的正、反码
		{	
			if(j==1)	bianma_temp=~bianma_temp;//反转编码
			//发射
			for(k=0;k<8;k++)
			{
				flag01=(bianma_temp>>(7-k))&1;
			    //每次发射都要重新置数
				if(flag01)//发射1
				{
					fashe_1();
				}
				else//发射0
				{	
					fashe_0();
				}	
			}
		}
	}
	//发射0.58ms的高电平(这里约为0.56ms)
	count=0;
	Redout=1;
	while(count<41);
	TR0=0;
	Redout=0;	
	tiaozhi=0;
}

//学习
void xuexi()
{
	if(key1==0&&index<8)
	{
		//开始闪灯，提示进入学习状态
		unsigned char i,temp;
		FlashLED(index+1);//闪烁相应次数
		//等待引导码
	    while(Redin);//等到低电平，退出判断是否为引导码
		delay(50);//约延时6.2ms，引导码开始为9ms的低电平
		if(Redin==0)//确实为引导码
		{
			flag=0;//重新标志
			delay(31);//4.5ms
			while(Redin);//等待引导码结束
			for(i=0;i<32;i++)
			{
				while(Redin==0);
				count=0;//计数值清零
				TH1=0xFF;
				TL1=0x98;
				TR1=1;//开定时器1
				while(Redin);
				TR1=0;
				temp=i/8;//第几段编码
				//保存编码
				if(abs(10-count)<2)
				{
					bianma[index][temp]|=0;
					bianma[index][temp]<<=1;
				}
				else
				{
					bianma[index][temp]|=1;
					bianma[index][temp]<<=1;
				}	
			}
			//判断保存的编码是否有误
			if(bianma[index][2]==~bianma[index][3])
			{
				unsigned char yiwei;
				yiwei=1;
				yiwei<<=index;
				flag|=yiwei;//学习成功
				FlashLED(index+1);//闪烁相应次数
				index++;
			}
		}

	}
}


void xuanze(uint8 nRes)
{
	switch(nRes)
	{
		case 0:
			if((flag>>7)&1)	fashe(0);break;
		case 1:
			if((flag>>6)&1)	fashe(1);break;
		case 2:
			if((flag>>5)&1)	fashe(2);break;
		case 3:
			if((flag>>4)&1)	fashe(3);break;
		case 4:
			if((flag>>3)&1)	fashe(4);break;
		case 5:
			if((flag>>2)&1)	fashe(5);break;
		case 6:
			if((flag>>1)&1)	fashe(6);break;
		case 7:
			if(flag&1)	fashe(7);break;
		//*******更多操作请自行添加*********//
	}
}




void MCU_init()
{
	P1M0 |= 1;//LD的模式选择位强输出：0并行；1SPI
	P3M0 |= 8;//LD的RS位强输出
	P4SW = 0xFF;//将P4口设置为IO
	P0 = 0xff;
	P1 = 0xff;
	P2 = 0xff;
	P3 = 0xf7;
	P4 = 0x3f;
	UART_init();


#if defined (SOFT_SPI_PORT)		//	软件模拟SPI读写
	LD_MODE = 1;				//	设置MD管脚为高
#elif defined (HARD_SPI_PORT)	//	硬件实现SPI读写
	LD_MODE = 1;				//	设置MD管脚为高
#else							//	并行读写 （硬件实现或者软件模拟），开发板使用这项
	LD_MODE = 0;				//	设置MD管脚为低
#endif

	AUXR  =  0x15;//12分频作为定时器始时钟

	IP=0;
	IPH=0;

	PX0=1; 
	PT0=1;

	PS=1;
	IPH |= 1;//外部中断0的优先级最高	
	
	EX0=0;
	EX1=0;
	EA=1;

	//定时器初始化
	TMOD=0x22;
	EA=1;//开总中断
	ET0 = 1;//开定时器0的中断
	ET1=1;//开定时器1的中断

  	TH0=0xe8;
	TL0=0xe8;

	TR0=0;
	TR1=0;
}

void  delay(unsigned long uldata)
{
	unsigned int j  =  0;
	unsigned long g  =  0;
	for (j=0;j<5;j++)
	{
		for (g=0;g<uldata;g++)
		{
			_nop_();
			_nop_();
			_nop_();
		}
	}
}


/*********************************************************************
//为了消除编译时的 警告 *** WARNING L15: MULTIPLE CALL TO SEGMENT
//把在中断函数中需要调用的函数重新复制并命名
//消除警告 Warning L15，并且避免由于函数重入可能带来的隐藏Bug
/*********************************************************************/

void  delay_2(unsigned long uldata)
{
	unsigned int j  =  0;
	unsigned long g  =  0;
	for (j=0;j<5;j++)
	{
		for (g=0;g<uldata;g++)
		{
			_nop_();
			_nop_();
			_nop_();
		}
	}
}

void FlashLED(uint8 nTimes)
{
	uint8 k;
	for (k=0; k<nTimes; k++)
	{
		DS01=0;
		//DS02=0;
		//BUZZ=1;
		delay(5300);
		DS01=1;
		//DS02=1;
		//BUZZ=0;
		delay(5300);
	}
}

/************************************************************************************/
//
//	IO_Send_Byte()是主控MCU向spi-flash (型号为华邦的 W25Q32)发送指令
//	开发者应该根据自己使用的存储芯片去写具体的函数
//
//	ICroute公司无法对存储芯片的读写提供技术支持，
//	开发者需要自己向自己使用的存储芯片的厂商获得技术支持
//	或者在网络上搜索相关代码和文档
//
//	华邦的spi-flash的技术支持的文档页面在：
//	http://www.winbond.com.tw/hq/cht/ProductAndSales/ProductLines/FlashMemory/SerialFlash/
//	http://www.xtdpj.com/show_hdr.php?xname=915RL41&dname=23T0M41&xpos=84
/************************************************************************************/

void IO_Send_Byte(uint8 dataout)
{
	 uint8 i = 0; 
	 FLASH_CS = 0;
	 for (i=0; i<8; i++)
	 {
		  if ((dataout & 0x80) == 0x80) 
			   FLASH_DIO = 1;
		  else
			   FLASH_DIO = 0;
		  FLASH_CLK = 1;
		  dataout = (dataout << 1); 
		  FLASH_CLK = 0;   
	 }
}


/************************************************************************************/
//	RunASR()函数实现了一次完整的ASR语音识别流程
//	LD_AsrStart() 函数实现了ASR初始化
//	LD_AsrAddFixed() 函数实现了添加关键词语到LD3320芯片中
//	LD_AsrRun()	函数启动了一次ASR语音识别流程
//
//	任何一次ASR识别流程，都需要按照这个顺序，从初始化开始进行
/************************************************************************************/

uint8 RunASR()
{
	uint8 i=0;
	uint8 asrflag=0;
	for (i=0; i<5; i++)			//	防止由于硬件原因导致LD3320芯片工作不正常，所以一共尝试5次启动ASR识别流程
	{
		LD_AsrStart();
		delay(100);
		if (LD_AsrAddFixed()==0)
		{
			LD_reset();			//	LD3320芯片内部出现不正常，立即重启LD3320芯片
			delay(100);			//	并从初始化开始重新ASR识别流程
			continue;
		}
		delay(10);
		if (LD_AsrRun() == 0)
		{
			LD_reset();			//	LD3320芯片内部出现不正常，立即重启LD3320芯片
			delay(100);			//	并从初始化开始重新ASR识别流程
			continue;
		}

		asrflag=1;
		break;					//	ASR流程启动成功，退出当前for循环。开始等待LD3320送出的中断信号
	}

	return asrflag;
}

void ExtInt0Handler(void) interrupt 0  
{
	ProcessInt0();				//	LD3320 送出中断信号，包括ASR和播放MP3的中断，需要在中断处理函数中分别处理
}

//-------------------------------------------------------
void UART_init()  			//进行串口的相关信息初始化工作
{
#define   RELOAD_COUNT   0XFA

	SCON  =  0x50;             //0101，0000  8位可变波特率，无奇偶校验位
	BRT   =  RELOAD_COUNT;     ////定义波特率发生器重载值，晶体频率22.1184M,1T,SMOD=0;波特率115200bps    
	AUXR  =  0x15;  //将BRTR=1，BRTx12=1(1T模式)，SBRS=1
	              //T0x12,T1x12,UART_M0x6,BRTR,S2SMOD,BRTx12,XRAM,SBRS
	              //Baud=Fosc/(256-RELOAD_COUNT)/32/12  (12T模式)
	              //Baud=Fosc/(256-RELOAD_COUNT)/32     (1T模式)
	              //BRTR=1，启动独立波特率发生器
	              //S1BRS=1，串口1选择独立波特率发生器作为波特率发生器
	              //此时定时器1可以释放出来作为定时器，计数器，时钟输出使用
	//AUXR1=0x80；//释放该行指令，则串行口从P3切换到P1，设计串口在P1,不支持


	//TMOD = 0x11; 	// 0010 0001 
					//设置定时器0为16位计数器
					//设置定时器1为8位自动重载计数器

	TR0 = 0;
	TR1 = 0;  	// 前面设置了专用波特率发生器。不使用Timer1.

	ES    =   1;      //允许串口中断
	EA    =   1;      //开总中断	
	                                    
}

//以下几个函数为从串口打印信息到PC机的函数，开发者可以直接调用
void SendChar (uint8 data_to_tx) 
{
#ifdef LD_DEBUG
	//ES	  =		0;  //关串口中断
	//TI    =   0;  //清零串口发送完成中断请求标志
	SBUF  =  data_to_tx;
	//while(TI==0); //等待发送完成
	//TI    =   0;
	//ES    =   1;  //允许串口中断
#endif
}

void SendLineEnd(void) 
{
#ifdef LD_DEBUG
	SendChar(0x0D);
	SendChar(0x0A);
#endif
}

void SendString(unsigned char *pt)
{
#ifdef LD_DEBUG
    while(*pt)
		SendChar(*(pt++));
#endif
}

void SendByteHex (uint8 value)
{
#ifdef LD_DEBUG
	uint8 idata ch1 = value & 0xF0;
	ch1 = ch1>>4;
	if (ch1>9)
		ch1 = 'A' + ch1 - 10;
	else 
		ch1 = '0' + ch1;
	SendChar(ch1);
	ch1 = value & 0x0F;
	if (ch1>9)
		ch1 = 'A' + ch1 - 10;
	else 
		ch1 = '0' + ch1;
	SendChar(ch1);
	SendChar(' ');
#endif
}

void SendLongHex (uint32 value)
{
#ifdef LD_DEBUG
	uint8 idata bt;
	SendChar('[');
	bt = (uint8)(value>>24);
	SendByteHex(bt);
	bt = (uint8)((value&0x00FF0000L)>>16);
	SendByteHex(bt);
	bt = (uint8)((value&0x0000FF00L)>>8);
	SendByteHex(bt);
	bt = (uint8)((value&0x000000FFL));
	SendByteHex(bt);
	SendChar(']');
	SendChar(' ');
#endif
}




