//
// Created by Sun,Qi(Int'l RD) on 2018/12/29.
//
#include "demo_sunqi13_com_fabricndkdemo_HellJNI.h"
#include "../../../../../../Library/Android/sdk/ndk-bundle/sysroot/usr/include/jni.h"

JNIEXPORT jint JNICALL Java_demo_sunqi13_com_fabricndkdemo_HellJNI_AddC
        (JNIEnv * env, jobject obj, jint a, jint b){

    return a + b;
}