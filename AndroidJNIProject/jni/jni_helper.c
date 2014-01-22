#include <stdio.h>
#include <stdlib.h>
#include "jni_helper.h"


/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    helloWorld
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_helloWorld
  (JNIEnv *env, jclass clazz) {
  ALOGE("Hello,Success~");
 }

/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    printString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_printString
  (JNIEnv *env, jclass clazz, jstring jmsg) {
  	const char *str;
  	str=(*env)->GetStringUTFChars(env, jmsg, NULL);;
  	if(str==NULL) {
  		return;
  	}  
  	ALOGE("params:%s",str);
  	(*env)->ReleaseStringUTFChars(env, jmsg, str);    
 }

 
/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    init
 * Signature: (Landroid/content/Context;)V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_init
  (JNIEnv *env, jclass clazz, jobject jobj) {
  	jclass ctxclazz = (*env)->FindClass(env, "android/content/Context");
  	jmethodID mid=(*env)->GetMethodID(env, ctxclazz,"getApplicationInfo","()Landroid/content/pm/ApplicationInfo");
	if (mid == NULL) {
		ALOGE("get jmethodID error");*
		return; 
	}
	ALOGE("id=:%u",(unsigned int)mid);
  }

/*
 * Class:     com_example_android_jni_JNIHelper
 * Method:    transcomand
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_example_android_jni_JNIHelper_transcomand
  (JNIEnv *env, jclass clazz, jbyteArray jdata){
  
 }