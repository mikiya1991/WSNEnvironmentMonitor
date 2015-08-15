{
if(!error){



/* Radio Messages */

#define RADIO_MESSAGE_BLOCK_ENABLE

LVTimeStamp now;

embGetLocalTime(&now);



if(!error){

  if (sendDebugMessageLength > EMBSENDMESSAGE_MAX - 1) {

    sendDebugMessageLength = EMBSENDMESSAGE_MAX - 1;

  }

  extern u8 *sendMsgBuffer;

  if (!sendMsgBuffer) {

    sendMsgBuffer = MemHandleNew(EMBSENDMESSAGE_MAX);

  }

  sendMsgBuffer[0] = sendDebugMessageLength;

  MemMove(sendMsgBuffer+1, sendDebugMessage, sendDebugMessageLength);

  embSendDebugMessage (sendMsgBuffer,sendDebugMessageLength+1, &error);
}
if(error){
void WSNConvertInternalErrorCode(tError* error);
WSNConvertInternalErrorCode(&error);
}
#ifdef RADIO_MESSAGE_BLOCK_ENABLE
#undef RADIO_MESSAGE_BLOCK_ENABLE
embTxDataAsap();
#endif
}
}
