/************************************************************************************

Filename    :   LogUtils.h
Content     :
Created     :   2021/5/12
Authors     :   Panda.xing

Copyright   :   Copyright (C), 2021-2021, PicoVR. Co., Ltd.

*************************************************************************************/
#ifndef LOGUTILS_H
#define LOGUTILS_H

#include <android/log.h>
#include <stdlib.h>

#include <stdio.h>

/*
 * JAVA LOG Level
    * Priority constant for the println method; use Log.v.
    public static final int VERBOSE = 2;

    * Priority constant for the println method; use Log.d.
    public static final int DEBUG = 3;

    * Priority constant for the println method; use Log.i.
    public static final int INFO = 4;

    * Priority constant for the println method; use Log.w.
    public static final int WARN = 5;

    * Priority constant for the println method; use Log.e.
    public static final int ERROR = 6;

    * Priority constant for the println method.
    public static final int ASSERT = 7;
*/

/*
    ANDROID_LOG_TAG
    ANDROID_LOG_UNKNOWN = 0,
    ANDROID_LOG_DEFAULT,    // only for SetMinPriority()
    ANDROID_LOG_VERBOSE,
    ANDROID_LOG_DEBUG,
    ANDROID_LOG_INFO,
    ANDROID_LOG_WARN,
    ANDROID_LOG_ERROR,
    ANDROID_LOG_FATAL,
    ANDROID_LOG_SILENT,     // only for SetMinPriority(); must be last
 */

int getConfigMiniLevel(void);
void setConfigMiniLevel(int level);
//char * getFileName(const char * fileTag);
void printLog(int prio, const char * fileOrTag, const char * fmt, ... );
void LogWithFileName(int prio,const char * fileTag, const char * fmt, ... );
void LogWithTAG(int prio,const char * tag, const char * fmt, ... );

#define PLOGDV( ... ) LogWithFileName( ANDROID_LOG_VERBOSE, __FILE__,__VA_ARGS__ )
#define PLOGDF( ... ) LogWithFileName( ANDROID_LOG_DEBUG, __FILE__,__VA_ARGS__ )
#define PLOGIF( ... ) LogWithFileName( ANDROID_LOG_INFO, __FILE__,__VA_ARGS__ )
#define PLOGWF( ... ) LogWithFileName( ANDROID_LOG_WARN,__FILE__, __VA_ARGS__ )
#define PLOGEF( ... ) LogWithFileName( ANDROID_LOG_ERROR,__FILE__,__VA_ARGS__ )

#define PFAIL( ... ) {PLOGEF(__VA_ARGS__ );abort();}

#define PLOGV(__tag__, ... ) LogWithTAG( ANDROID_LOG_VERBOSE, __tag__, __VA_ARGS__ )
#define PLOGD(__tag__, ... ) LogWithTAG( ANDROID_LOG_DEBUG, __tag__, __VA_ARGS__ )
#define PLOGI(__tag__, ... ) LogWithTAG( ANDROID_LOG_INFO, __tag__, __VA_ARGS__ )
#define PLOGW(__tag__, ... ) LogWithTAG( ANDROID_LOG_WARN,__tag__, __VA_ARGS__ )
#define PLOGE(__tag__, ... ) LogWithTAG( ANDROID_LOG_ERROR, __tag__, __VA_ARGS__ )


#endif // LOGUTILS_H
