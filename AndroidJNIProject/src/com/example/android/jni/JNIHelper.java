package com.example.android.jni;

import android.content.Context;

public class JNIHelper {
	public native static void helloWorld();
	public native static void init(Context context);
	public native static void transcomand(byte[] cmd);
	public native static void printString(String message);
	
	static {
		System.loadLibrary("jni_helper");
	}
}
