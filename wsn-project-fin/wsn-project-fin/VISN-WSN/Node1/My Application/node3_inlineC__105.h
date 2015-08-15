{
if(!error){



/* Radio Messages */

#define RADIO_MESSAGE_BLOCK_ENABLE

LVTimeStamp now;

embGetLocalTime(&now);



if(!error){

															extern u8 *userMsgBuffer;

															extern u8 userMsgSize;

															MemMove (receivedUserMessage, userMsgBuffer, userMsgSize);

															receivedUserMessageLength = userMsgSize;
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
