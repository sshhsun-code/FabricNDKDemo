LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := HelloC
LOCAL_SRC_FILES := demo_sunqi13_com_fabricndkdemo_HellJNI.c

include $(BUILD_SHARED_LIBRARY)
