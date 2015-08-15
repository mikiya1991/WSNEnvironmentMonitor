{
if(!error){



/* Config Node */

if(!error){                                                        //0==HostDriven, 1==VI Driven

  extern float embSampleIntervalCache;

  extern u8 embSampleIntervalMode;

  if(sampleIntervalMode){

    embSampleIntervalMode = 1;

    if (embSampleIntervalCache != 0) 

        embWriteChannel(MIS_CHAN_SAMPLEINTERVAL, &embSampleIntervalCache, &error);

  }

  else{

    float sampleInterval = -1;

    embSampleIntervalMode = 0;

    embWriteChannel(MIS_CHAN_SAMPLEINTERVAL, &sampleInterval, &error); 

  } 

}

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
