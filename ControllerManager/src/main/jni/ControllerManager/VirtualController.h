
#ifndef VIRTUALCONTROLLER_H
#define VIRTUALCONTROLLER_H

#include "typedef.h"

class VirtualController{
public:
    static VirtualController* GetInstance() {
        static VirtualController* mViritualControllerInstance;
            if (!mViritualControllerInstance)
            	mViritualControllerInstance = new VirtualController();
            return mViritualControllerInstance;
        }

    int GetControllerName(int devicename,char* name);

private:
    VirtualController();
    ~VirtualController();
    VirtualController(VirtualController const&);// copy ctor is hidden
    VirtualController& operator=(VirtualController const&);  //assign op is hidden
};

#endif

