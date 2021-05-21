
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2021 Pico Technologies, Inc.
// All Rights Reserved.
// Confidential and Proprietary - Pico Technologies, Inc.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// @file  typedef.h
/// @brief ControllerManager common types
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef TYPEDEF_H
#define TYPEDEF_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TAG "ControllerManager"
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/// The result code type to be returned from functions.
typedef int           CMResult;

static const CMResult CMResultSuccess           = 0;    ///< Operation was successful
static const CMResult CMResultEFailed           = 1;    ///< Operation encountered unspecified error
static const CMResult CMResultEUnsupported      = 2;    ///< Operation is not supported
static const CMResult CMResultEInvalidState     = 3;    ///< Invalid state
static const CMResult CMResultEInvalidArg       = 4;    ///< Invalid argument
static const CMResult CMResultEInvalidPointer   = 5;    ///< Invalid memory pointer
static const CMResult CMResultENoSuch           = 6;    ///< No such item exists or is valid
static const CMResult CMResultEOutOfBounds      = 7;    ///< Out of bounds
static const CMResult CMResultENoMemory         = 8;    ///< Out of memory
static const CMResult CMResultETimeout          = 9;    ///< Operation timed out
static const CMResult CMResultENoMore           = 10;   ///< No more items available
static const CMResult CMResultENeedMore         = 11;   ///< Operation requires more
static const CMResult CMResultEExists           = 12;   ///< Item exists
static const CMResult CMResultEPrivLevel        = 13;   ///< Privileges are insufficient for requested operation
static const CMResult CMResultEResource         = 14;   ///< Resources are insufficient for requested operation
static const CMResult CMResultEUnableToLoad     = 15;   ///< Unable to load library/object
static const CMResult CMResultEInProgress       = 16;   ///< Operation is already in progress
static const CMResult CMResultETryAgain         = 17;   ///< Could not complete request; try again
static const CMResult CMResultEBusy             = 18;   ///< Device or resource busy
static const CMResult CMResultEReentered        = 19;   ///< Non re-entrant API re-entered
static const CMResult CMResultEReadOnly         = 20;   ///< Cannot change read-only object or parameter
static const CMResult CMResultEOverflow         = 21;   ///< Value too large for defined data type
static const CMResult CMResultEOutOfDomain      = 22;   ///< Math argument or result out of domain
static const CMResult CMResultEInterrupted      = 23;   ///< Waitable call is interrupted
static const CMResult CMResultEWouldBlock       = 24;   ///< Operation would block
static const CMResult CMResultETooManyUsers     = 25;   ///< Too many users
static const CMResult CMResultENotImplemented   = 26;   ///< Function or method is not implemented
// Increment the count below if adding additional result codes.
static const CMResult CMResultCount             = 27;   ///< The number of result codes. Not to be used.

static const uint32_t CMInvalidId                    = 0xFFFFFFFF;   ///< Defining an Invalid Handle




#ifdef __cplusplus
}
#endif  //__cplusplus

#endif