LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := MyJni
LOCAL_SRC_FILES := testNdk.cpp
include $(BUILD_SHARED_LIBRARY)