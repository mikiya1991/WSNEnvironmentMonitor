{
if(!error){



/* Radio Messages */

#define RADIO_MESSAGE_BLOCK_ENABLE

LVTimeStamp now;

embGetLocalTime(&now);



if(!error){                              //0==Disconected, 1==Connected

  if(embGetNetworkStatus()){

    networkStatus = 1;

  }

  else{

    networkStatus = 0;

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
