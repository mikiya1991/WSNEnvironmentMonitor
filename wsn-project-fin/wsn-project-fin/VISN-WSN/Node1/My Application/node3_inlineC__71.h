{
tError local_error = tError_NoError;
embWriteAttribute(MIS_CHAN_DO0 + channel, MIS_DOATTR_DRIVE, &mode, &local_error);
}
