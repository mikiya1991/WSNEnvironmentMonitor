{
if(!error){



/* Radio Messages */

#define RADIO_MESSAGE_BLOCK_ENABLE

LVTimeStamp now;

embGetLocalTime(&now);



if(!error){

  if (sendUserMessageLength > EMBSENDMESSAGE_MAX -1) {

    error = tError_InvalidArg;

  } else {

      extern u8 *sendMsgBuffer;

      if (!sendMsgBuffer) {

        sendMsgBuffer = MemHandleNew(EMBSENDMESSAGE_MAX);

      }

      sendMsgBuffer[0]=sendUserMessageLength;

      MemMove(sendMsgBuffer+1, sendUserMessage, sendUserMessageLength);

      embSendUserMessage (sendMsgBuffer,sendUserMessageLength+1, &error);

  }
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
