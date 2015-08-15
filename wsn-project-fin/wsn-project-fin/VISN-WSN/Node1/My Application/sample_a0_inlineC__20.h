{                                                                        //LV WSN read analogue input routine
tError local_error = tError_NoError;
embPowerUp(EMBPOWER_ANALOGFRONTEND);
embReadIoChannel(MIS_CHAN_VN0 + channel,&value,4,&local_error);
}
