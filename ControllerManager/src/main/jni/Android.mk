#******************************************************************#
#******************************************************************#
LOCAL_PATH := $(call my-dir)


include $(CLEAR_VARS)

LOCAL_LDLIBS	+= -llog			# logging
LOCAL_LDLIBS	+= -landroid		# native windows

LOCAL_CFLAGS	:= -DANDROID_NDK
#LOCAL_CFLAGS	+= -Werror			# error on warnings
LOCAL_CFLAGS	+= -Wall
LOCAL_CFLAGS	+= -Wextra
LOCAL_CFLAGS	+= -Wno-strict-aliasing		# TODO: need to rewrite some code
LOCAL_CFLAGS	+= -Wno-unused-parameter
LOCAL_CFLAGS	+= -Wno-unused-variable
LOCAL_CFLAGS	+= -Wno-unused-function
LOCAL_CFLAGS	+= -Wno-missing-field-initializers	# warns on this: SwipeAction	ret = {}
LOCAL_CFLAGS	+= -Wno-multichar	# used in internal Android headers:  DISPLAY_EVENT_VSYNC = 'vsyn',
LOCAL_CFLAGS	+= -Wno-array-bounds
LOCAL_CPPFLAGS := -Wno-type-limits
LOCAL_CPPFLAGS += -Wno-invalid-offsetof
LOCAL_CPPFLAGS += -std=c++11
LOCAL_CPPFLAGS += -stdlib=libstdc++
#LOCAL_CPPFLAGS += -stdlib=libc++ -lc++ -lc++abi

LOCAL_MODULE := ControllerManager.pxr

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
					$(LOCAL_PATH)/ControllerManager\
					$(LOCAL_PATH)/Utils

LOCAL_SRC_FILES := ControllerManager/ControllerEntry.cpp\
				   ControllerManager/ControllerManager.cpp\
				   ControllerManager/PhyController.cpp\
				   Utils/LogUtils.cpp\

#include $(BUILD_EXECUTABLE)
include $(BUILD_SHARED_LIBRARY)
