#ifndef CONTROLLERMANAGER_H
#define CONTROLLERMANAGER_H

#include "typedef.h"
#include "PhyController.h"
#include "LogUtils.h"

class ControllerManager{
public:
    static ControllerManager* GetInstance();
    CMResult GetDeviceName(int devicename,char* name);

    virtual ~ControllerManager();

private:
    ControllerManager();
    ControllerManager(ControllerManager const&);// copy ctor is hidden
    ControllerManager& operator=(ControllerManager const&);  //assign op is hidden

    enum CMInitStatus
    {
        CMInitInvalid = 0,
        CMInitRunning = 1,
        CMInitDone    = 2,
    };

    CMInitStatus m_initStatus;
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// Initialize
    ///
    /// @brief  Initialize the resources required to use Controller
    ///
    /// @return CMResult if success or appropriate error code.
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    CMResult Initialize();
    PhyController* Cc;
};


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


#ifdef __cplusplus
}
#endif //__cplusplus

#endif
