#include "PhyController.h"
#include <string.h>

//PhyController*
#define MODULE "PhyController"

CMResult PhyController::GetControllerName(int devicename,char* name)
{
	CMResult ret = CMInvalidId;
	//PLOGV(TAG,"Enter GetDeviceName devicename:%d",devicename);

	if(devicename == 1)
		memcpy(name,"device1",sizeof("device1"));
	else if(devicename == 2)
		memcpy(name,"device_2",sizeof("device_2"));
	ret = CMResultSuccess;
	return ret;
}


PhyController::PhyController()
{
    PLOGV(TAG,"%s construct",MODULE);

    PLOGI(TAG,"%s construct done",MODULE);
}

PhyController::~PhyController()
{
    PLOGV(TAG,"%s destruct",MODULE);
}

