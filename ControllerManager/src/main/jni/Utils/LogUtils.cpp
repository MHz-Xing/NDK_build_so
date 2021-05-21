/************************************************************************************

Filename    :   LogUtils.cpp
Content     :
Created     :   2021/5/12
Authors     :   Panda.xing

Copyright   :   Copyright (C), 2021-2021, PicoVR. Co., Ltd.

*************************************************************************************/
#include "LogUtils.h"
#include <assert.h>
//#include <map>
#include "stdlib.h"
#include "stdio.h"

static bool isInit = false;
static int minLogLevel = 0;

void configFileRead()
{
    minLogLevel = 7;
    printLog(ANDROID_LOG_ERROR, "LogConfig", "Config file open Fail");
}

int getLoglevel()
{
    int level = 2;
    printLog(ANDROID_LOG_INFO, "LogConfig", "getConfigMiniLevel:%d",level);
    if(level >= 0 && level <= 7)
    {
    	return level;
    }
    else
    	level = 7;
    return level;
}




int getConfigMiniLevel()
{
	if(!isInit)
	{
		configFileRead();
		minLogLevel = getLoglevel();
		isInit = true ;
	}

	printLog(ANDROID_LOG_INFO, "LogConfig", "getConfigMiniLevel:%d",minLogLevel);
	return minLogLevel;
}

void setConfigMiniLevel(int level)
{
	minLogLevel = level;
	isInit = true ;
	printLog(ANDROID_LOG_INFO, "LogConfig", "setConfigMiniLevel:%d",minLogLevel);
}

bool isLoggable(int logLevel)
{
	return logLevel >= minLogLevel;
}

void printLog(int prio, const char * fileOrTag, const char * fmt, ... )
{
	va_list ap;
	va_start(ap, fmt);
	__android_log_vprint(prio, fileOrTag, fmt, ap);
	va_end(ap);
}

void LogWithFileName(int prio,const char * fileTag, const char * fmt, ... )
{
	if (!isInit) {
		getConfigMiniLevel();
	}
	if (isLoggable(prio)) {
		//char *fileName = getFileName(fileTag);
		char *fileName = NULL;
		va_list ap;
		va_start(ap, fmt);
		__android_log_vprint(prio, fileName, fmt, ap);
		va_end(ap);
		free(fileName);
	}
}

void LogWithTAG(int prio,const char * tag, const char * fmt, ... )
{
	if (!isInit) {
		getConfigMiniLevel();
	}
	if (isLoggable(prio)) {
		va_list ap;
		va_start(ap, fmt);
		__android_log_vprint(prio, tag, fmt, ap);
		va_end(ap);
	}
}

