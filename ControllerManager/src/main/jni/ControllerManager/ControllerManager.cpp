#include "ControllerManager.h"

#define VERSION "V0.0.1"
#define MODULE "ControllerManager"

PhyController *mControllerConnectInstance = NULL;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ControllerManager::GetDeviceName
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CMResult ControllerManager::GetDeviceName(int devicename,char* name)
{
    CMResult       result          = CMResultSuccess;
    if(Cc != NULL)
        Cc->GetControllerName(devicename,name);
    return result;
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ControllerManager::GetInstance
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ControllerManager* ControllerManager::GetInstance()
{
    static ControllerManager s_controllerManager;

    if (s_controllerManager.m_initStatus == CMInitInvalid)
    {
        s_controllerManager.Initialize();
    }

    return &s_controllerManager;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// ControllerManager::Initialize
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CMResult ControllerManager::Initialize()
{

    m_initStatus = CMInitRunning;

    CMResult       result          = CMResultSuccess;

    //result = init();

    if (CMResultSuccess == result)
    {

    }

    m_initStatus = CMInitDone;
    return result;
}


ControllerManager::ControllerManager()
{
    PLOGI(TAG,"%s construct",MODULE);
    printLog(ANDROID_LOG_ERROR,TAG,"%s Version %s",MODULE,VERSION);
    Cc = PhyController::GetInstance();
    PLOGI(TAG,"%s construct done",MODULE);
}

ControllerManager::~ControllerManager()
{
    PLOGI(TAG,"%s destruct",MODULE);
}

