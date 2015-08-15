#ifndef SubFuncsH
#define SubFuncsH

#define LD_DEBUG

void SendChar (uint8 data_to_tx); 
void SendLineEnd(void); 
void SendString(unsigned char *pt);
void SendByteHex (uint8 value);
void SendLongHex (uint32 value);


void  delay(unsigned long uldata);
void  delay_2(unsigned long uldata);

#endif
