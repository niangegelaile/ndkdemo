package com.ange.ndkdemo.ndk;

/**
 * Created by liquanan on 2017/5/11.
 * email :1369650335@qq.com
 */

public class Ndk {
    // 1.加载实现了native函数的动态库，只需要写动态库的名字
    static {
        System.loadLibrary("MyJni");
    }
    // 2.声明这是一个native函数，由本地代码实现
    public static native String getStringFromNative();//本地方法

    public static native String getString_From_c();

}
