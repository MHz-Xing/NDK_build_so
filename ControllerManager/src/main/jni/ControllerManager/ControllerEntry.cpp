#include "ControllerEntry.h"
#define MODULE  "ControllerEntry"

static ControllerManager* p_ControllerManager;

#ifdef __cplusplus
extern "C"
{
#endif

CMResult GetName(int devicename,char* name)
{
    p_ControllerManager = ControllerManager::GetInstance();
    p_ControllerManager->GetDeviceName(devicename,name);
    return CMResultSuccess;
}

#ifdef __cplusplus
}
#endif //extern C
