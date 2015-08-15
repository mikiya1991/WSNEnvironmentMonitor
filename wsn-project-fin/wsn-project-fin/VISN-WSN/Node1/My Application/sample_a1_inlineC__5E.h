//Scripted code at the end of EIO block 
if (embGetPowerStatus() & EMBPOWER_ANALOGFRONTEND)	{
embPowerDown (EMBPOWER_ANALOGFRONTEND);
}


