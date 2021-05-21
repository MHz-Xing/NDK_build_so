#include "VirtualController.h"
#include <string.h>

//PhyController*
#define MODULE "VirtualController"

int VirtualController::GetControllerName(int devicename,char* name)
{
	int ret = -1;
	//PLOGV(TAG,"Enter GetDeviceName devicename:%d",devicename);

	if(devicename == 1)
		memcpy(name,"device1",sizeof("device1"));
	else if(devicename == 2)
		memcpy(name,"device_2",sizeof("device_2"));
	ret = 0;
	return ret;
}


VirtualController::VirtualController()
{
    PLOGV(TAG,"%s construct",MODULE);
    PLOGI(TAG,"%s construct done",MODULE);
}

VirtualController::~VirtualController()
{
    PLOGV(TAG,"%s destruct",MODULE);
}

