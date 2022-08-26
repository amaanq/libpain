LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

APP_OPTIM := debug      # debug mode
APP_CFLAGS := -g        # compiler instruction
APP_ABI := armeabi-v7a  # build for armeabi-v7a architecture

LOCAL_MODULE := pain
LOCAL_SRC_FILES := pain.cpp
LOCAL_LDLIBS := -llog   # to allow android logging

NDK_DEBUG := 1

include $(BUILD_SHARED_LIBRARY)
# You can find more information about Android.mk at https://developer.android.com/ndk/guides/android_mk.html.