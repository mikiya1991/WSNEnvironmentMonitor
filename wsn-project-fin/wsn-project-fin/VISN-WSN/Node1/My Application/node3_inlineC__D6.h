{
if(!error){



/* Config Node */

if(!error){

  extern u8 embSampleIntervalMode;

  extern float embSampleIntervalCache;



  embSampleIntervalCache = sampleInterval;

  if(embSampleIntervalMode){                                    //if embSampleIntervalMode==VI Driven

    embWriteChannel(MIS_CHAN_SAMPLEINTERVAL, &sampleInterval, &error); 

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
