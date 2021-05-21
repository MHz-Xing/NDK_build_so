
#ifndef PHYCONTROLLER_H
#define PHYCONTROLLER_H

#include "typedef.h"
#include "LogUtils.h"

class PhyController{
public:
    static PhyController* GetInstance() {
        static PhyController* mPhyControllerInstance;
            if (!mPhyControllerInstance)
            	mPhyControllerInstance = new PhyController();
            return mPhyControllerInstance;
        }

    CMResult GetControllerName(int devicename,char* name);

private:
    PhyController();
    ~PhyController();
    PhyController(PhyController const&);// copy ctor is hidden
    PhyController& operator=(PhyController const&);  //assign op is hidden
};

#endif

