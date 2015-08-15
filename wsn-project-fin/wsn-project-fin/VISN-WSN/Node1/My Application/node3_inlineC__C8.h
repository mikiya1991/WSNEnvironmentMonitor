extern u8 embUserLEDStatus;
if(value) {
        embUserLEDOn();
        embUserLEDStatus=1;
} else {
        embUserLEDOff();
        embUserLEDStatus=0;
}
