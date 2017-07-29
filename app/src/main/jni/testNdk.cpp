//
// Created by ange on 2017/5/11.
//
#include "com_ange_ndkdemo_ndk_Ndk.h"
#include "jni.h"


JNIEXPORT jstring JNICALL Java_com_ange_ndkdemo_ndk_Ndk_getStringFromNative
  (JNIEnv * env, jclass){
    return (*env).NewStringUTF("ndk");
}

JNIEXPORT jstring JNICALL Java_com_ange_ndkdemo_ndk_Ndk_getString_1From_1c
  (JNIEnv * env, jclass){

       return env->NewStringUTF("ndk ,我来也！");
}