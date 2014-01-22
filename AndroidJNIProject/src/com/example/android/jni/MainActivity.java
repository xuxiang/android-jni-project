package com.example.android.jni;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;

public class MainActivity extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		JNIHelper.helloWorld();
		JNIHelper.init(MainActivity.this);
		JNIHelper.printString("hello, world!\n");
	}

	void a(Context ctxt) {
	}
}
