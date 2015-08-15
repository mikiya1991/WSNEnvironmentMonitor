/************************************************************************************/
//	��Ȩ���У�Copyright (c) 2005 - 2010 ICRoute INC.
/************************************************************************************/

#include "STC10F08XE.H"
#include "LDchip.h"
#include "Reg_RW.h"
#include "FlashDef.h"
#include "SubFuncs.h"
#include "math.h"


/************************************************************************************/
//	nAsrStatus ������main�������б�ʾ�������е�״̬������LD3320оƬ�ڲ���״̬�Ĵ���
//	LD_ASR_NONE:		��ʾû������ASRʶ��
//	LD_ASR_RUNING��		��ʾLD3320������ASRʶ����
//	LD_ASR_FOUNDOK:		��ʾһ��ʶ�����̽�������һ��ʶ����
//	LD_ASR_FOUNDZERO:	��ʾһ��ʶ�����̽�����û��ʶ����
//	LD_ASR_ERROR:		��ʾһ��ʶ��������LD3320оƬ�ڲ����ֲ���ȷ��״̬
/***********************************************************************************/
uint8 idata nAsrStatus=0;
	
#define Same_VOIC_COUNT  9		//���峤�ȺͲ�����������һ�£������жϷ���ֵ�Ƿ���Ҫ��������

extern void    _nop_     (void);

void MCU_init();
void FlashLED(uint8 nTimes);
void PlaySound(uint8 nCode);
uint8 RunASR();
void ProcessInt0();
void UART_init();
void OutputIO(uint8 nRes);
void LED_TEST();


//�������ģ��ӿ�
sbit Redout=P2^4;
sbit tiaozhi=P2^5;
sbit Redin=P2^7;

//�������ģ������ź�
sbit key1=P4^2;//�����������ʾ����ѧϰ״̬
sbit key2=P1^1;
sbit key3=P4^3;


unsigned char bianma[8][3]={0xB2,0x7B,0xE0,0xB2,0x9f,0x8c,0xB2,0x6b,0xe0};//����洢���ء������ڷ磨�أ�
unsigned char index;//���ڱ���洢������
unsigned char flag;//ѧϰ�ɹ���־
uint8 flag_shibie;
long int count;//���ڼ���
uint8 flag_fashe1,flag_fashe2;//�����־

unsigned char tmp,tt;

void xuexi();
void xuanze(uint8 nRes);
void fashe(uint8 nRes);

void fashe_yindao();
void fashe_1();
void fashe_0();


void  main()
{
//	uint8 idata nAsrRes;//ʶ������Ӧ�ı��
	MCU_init();
	//UART_init();
	LD_reset();
	BUZZ=0;//�ط�����
	nAsrStatus = LD_ASR_NONE;		//	��ʼ״̬��û������ASR	

	//����ģ��ӿڳ�ʼ��
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
		

		//if (bMp3Play!=0)			//	������ڲ���MP3�У���ȴ���ֱ��MP3������� ��bMp3Play==0
		//	continue;				//	bMp3Play �Ƕ����һ��ȫ�ֱ���������¼MP3���ŵ�״̬������LD3320оƬ�ڲ��ļĴ���
		
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
				if (RunASR()==0)	//	����һ��ASRʶ�����̣�ASR��ʼ����ASR��ӹؼ��������ASR����
				{
					nAsrStatus = LD_ASR_ERROR;
				}
				break;
			}
			case LD_ASR_FOUNDOK:
			{
				nAsrRes = LD_GetResult();	//	һ��ASRʶ�����̽�����ȥȡASRʶ����
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

		//����Ƿ��а��������ź�	
		if(key1==0)
		{
			delay(150);//����
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
			delay(150);//����
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
			delay(150);//����
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

//��ʱ��0����38KHZ�ĵ��Ʋ�
void time0int(void) interrupt 1 //13us�ж�һ��
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


//4.36ms�ĸߵ�ƽ��4.36ms�ĵ͵�ƽ
void fashe_yindao()
{
	//����������
	count=0;
	Redout=1;					
	while(count<340);
	Redout=0;
	count=0;	
	while(count<335);
}

//0.58ms�ĸߵ�ƽ��1.54ms�ĵ͵�ƽ
void fashe_1()
{
	count=0;	
	Redout=1;				
	while(count<42);
	Redout=0;
	count=0;
	while(count<124);
}

//0.58ms�ĸߵ�ƽ��0.52ms�ĵ͵�ƽ
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
	FlashLED(nRes+1);//��˸��Ӧ����
	//����������
	fashe_yindao();
	//�������
	for(i=0;i<3;i++)//�������α���
	{
		bianma_temp=bianma[nRes][i];
		for(j=0;j<2;j++)//����һ�α����е���������
		{	
			if(j==1)	bianma_temp=~bianma_temp;//��ת����
			//����
			for(k=0;k<8;k++)
			{
				flag01=(bianma_temp>>(7-k))&1;
			    //ÿ�η��䶼Ҫ��������
				if(flag01)//����1
				{
					fashe_1();
				}
				else//����0
				{	
					fashe_0();
				}	
			}
		}
	}
	//����0.58ms�ĸߵ�ƽ(����ԼΪ0.56ms)
	count=0;
	Redout=1;
	while(count<42);
	Redout=0;
	count=0;
	while(count<390);
	
	fashe_yindao();
	for(i=0;i<3;i++)//�������α���
	{
		bianma_temp=bianma[nRes][i];
		for(j=0;j<2;j++)//����һ�α����е���������
		{	
			if(j==1)	bianma_temp=~bianma_temp;//��ת����
			//����
			for(k=0;k<8;k++)
			{
				flag01=(bianma_temp>>(7-k))&1;
			    //ÿ�η��䶼Ҫ��������
				if(flag01)//����1
				{
					fashe_1();
				}
				else//����0
				{	
					fashe_0();
				}	
			}
		}
	}
	//����0.58ms�ĸߵ�ƽ(����ԼΪ0.56ms)
	count=0;
	Redout=1;
	while(count<41);
	TR0=0;
	Redout=0;	
	tiaozhi=0;
}

//ѧϰ
void xuexi()
{
	if(key1==0&&index<8)
	{
		//��ʼ���ƣ���ʾ����ѧϰ״̬
		unsigned char i,temp;
		FlashLED(index+1);//��˸��Ӧ����
		//�ȴ�������
	    while(Redin);//�ȵ��͵�ƽ���˳��ж��Ƿ�Ϊ������
		delay(50);//Լ��ʱ6.2ms�������뿪ʼΪ9ms�ĵ͵�ƽ
		if(Redin==0)//ȷʵΪ������
		{
			flag=0;//���±�־
			delay(31);//4.5ms
			while(Redin);//�ȴ����������
			for(i=0;i<32;i++)
			{
				while(Redin==0);
				count=0;//����ֵ����
				TH1=0xFF;
				TL1=0x98;
				TR1=1;//����ʱ��1
				while(Redin);
				TR1=0;
				temp=i/8;//�ڼ��α���
				//�������
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
			//�жϱ���ı����Ƿ�����
			if(bianma[index][2]==~bianma[index][3])
			{
				unsigned char yiwei;
				yiwei=1;
				yiwei<<=index;
				flag|=yiwei;//ѧϰ�ɹ�
				FlashLED(index+1);//��˸��Ӧ����
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
		//*******����������������*********//
	}
}




void MCU_init()
{
	P1M0 |= 1;//LD��ģʽѡ��λǿ�����0���У�1SPI
	P3M0 |= 8;//LD��RSλǿ���
	P4SW = 0xFF;//��P4������ΪIO
	P0 = 0xff;
	P1 = 0xff;
	P2 = 0xff;
	P3 = 0xf7;
	P4 = 0x3f;
	UART_init();


#if defined (SOFT_SPI_PORT)		//	���ģ��SPI��д
	LD_MODE = 1;				//	����MD�ܽ�Ϊ��
#elif defined (HARD_SPI_PORT)	//	Ӳ��ʵ��SPI��д
	LD_MODE = 1;				//	����MD�ܽ�Ϊ��
#else							//	���ж�д ��Ӳ��ʵ�ֻ������ģ�⣩��������ʹ������
	LD_MODE = 0;				//	����MD�ܽ�Ϊ��
#endif

	AUXR  =  0x15;//12��Ƶ��Ϊ��ʱ��ʼʱ��

	IP=0;
	IPH=0;

	PX0=1; 
	PT0=1;

	PS=1;
	IPH |= 1;//�ⲿ�ж�0�����ȼ����	
	
	EX0=0;
	EX1=0;
	EA=1;

	//��ʱ����ʼ��
	TMOD=0x22;
	EA=1;//�����ж�
	ET0 = 1;//����ʱ��0���ж�
	ET1=1;//����ʱ��1���ж�

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
//Ϊ����������ʱ�� ���� *** WARNING L15: MULTIPLE CALL TO SEGMENT
//�����жϺ�������Ҫ���õĺ������¸��Ʋ�����
//�������� Warning L15�����ұ������ں���������ܴ���������Bug
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
//	IO_Send_Byte()������MCU��spi-flash (�ͺ�Ϊ����� W25Q32)����ָ��
//	������Ӧ�ø����Լ�ʹ�õĴ洢оƬȥд����ĺ���
//
//	ICroute��˾�޷��Դ洢оƬ�Ķ�д�ṩ����֧�֣�
//	��������Ҫ�Լ����Լ�ʹ�õĴ洢оƬ�ĳ��̻�ü���֧��
//	������������������ش�����ĵ�
//
//	�����spi-flash�ļ���֧�ֵ��ĵ�ҳ���ڣ�
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
//	RunASR()����ʵ����һ��������ASR����ʶ������
//	LD_AsrStart() ����ʵ����ASR��ʼ��
//	LD_AsrAddFixed() ����ʵ������ӹؼ����ﵽLD3320оƬ��
//	LD_AsrRun()	����������һ��ASR����ʶ������
//
//	�κ�һ��ASRʶ�����̣�����Ҫ�������˳�򣬴ӳ�ʼ����ʼ����
/************************************************************************************/

uint8 RunASR()
{
	uint8 i=0;
	uint8 asrflag=0;
	for (i=0; i<5; i++)			//	��ֹ����Ӳ��ԭ����LD3320оƬ����������������һ������5������ASRʶ������
	{
		LD_AsrStart();
		delay(100);
		if (LD_AsrAddFixed()==0)
		{
			LD_reset();			//	LD3320оƬ�ڲ����ֲ���������������LD3320оƬ
			delay(100);			//	���ӳ�ʼ����ʼ����ASRʶ������
			continue;
		}
		delay(10);
		if (LD_AsrRun() == 0)
		{
			LD_reset();			//	LD3320оƬ�ڲ����ֲ���������������LD3320оƬ
			delay(100);			//	���ӳ�ʼ����ʼ����ASRʶ������
			continue;
		}

		asrflag=1;
		break;					//	ASR���������ɹ����˳���ǰforѭ������ʼ�ȴ�LD3320�ͳ����ж��ź�
	}

	return asrflag;
}

void ExtInt0Handler(void) interrupt 0  
{
	ProcessInt0();				//	LD3320 �ͳ��ж��źţ�����ASR�Ͳ���MP3���жϣ���Ҫ���жϴ������зֱ���
}

//-------------------------------------------------------
void UART_init()  			//���д��ڵ������Ϣ��ʼ������
{
#define   RELOAD_COUNT   0XFA

	SCON  =  0x50;             //0101��0000  8λ�ɱ䲨���ʣ�����żУ��λ
	BRT   =  RELOAD_COUNT;     ////���岨���ʷ���������ֵ������Ƶ��22.1184M,1T,SMOD=0;������115200bps    
	AUXR  =  0x15;  //��BRTR=1��BRTx12=1(1Tģʽ)��SBRS=1
	              //T0x12,T1x12,UART_M0x6,BRTR,S2SMOD,BRTx12,XRAM,SBRS
	              //Baud=Fosc/(256-RELOAD_COUNT)/32/12  (12Tģʽ)
	              //Baud=Fosc/(256-RELOAD_COUNT)/32     (1Tģʽ)
	              //BRTR=1���������������ʷ�����
	              //S1BRS=1������1ѡ����������ʷ�������Ϊ�����ʷ�����
	              //��ʱ��ʱ��1�����ͷų�����Ϊ��ʱ������������ʱ�����ʹ��
	//AUXR1=0x80��//�ͷŸ���ָ����пڴ�P3�л���P1����ƴ�����P1,��֧��


	//TMOD = 0x11; 	// 0010 0001 
					//���ö�ʱ��0Ϊ16λ������
					//���ö�ʱ��1Ϊ8λ�Զ����ؼ�����

	TR0 = 0;
	TR1 = 0;  	// ǰ��������ר�ò����ʷ���������ʹ��Timer1.

	ES    =   1;      //�������ж�
	EA    =   1;      //�����ж�	
	                                    
}

//���¼�������Ϊ�Ӵ��ڴ�ӡ��Ϣ��PC���ĺ����������߿���ֱ�ӵ���
void SendChar (uint8 data_to_tx) 
{
#ifdef LD_DEBUG
	//ES	  =		0;  //�ش����ж�
	//TI    =   0;  //���㴮�ڷ�������ж������־
	SBUF  =  data_to_tx;
	//while(TI==0); //�ȴ��������
	//TI    =   0;
	//ES    =   1;  //�������ж�
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




