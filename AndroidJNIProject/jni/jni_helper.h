/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <android/log.h>
/* Header for class com_example_android_jni_JNIHelper */

#define DEBUG 1
#define LOG_TAG "JNI_HELPER"

#if DEBUG
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#else
#define LOGV(...)
#endif

#ifndef _Included_com_example_android_jni_JNIHelper
#define _Included_com_example_android_jni_JNIHelper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    helloWorld
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_helloWorld
  (JNIEnv *, jclass);

/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    init
 * Signature: (Landroid/content/Context;)V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_init
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    encode
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_example_android_jni_JNIHelper_encode
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    printString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_printString
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif
