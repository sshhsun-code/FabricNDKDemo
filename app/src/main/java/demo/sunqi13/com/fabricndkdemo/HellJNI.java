package demo.sunqi13.com.fabricndkdemo;

/**
 * Created by sunqi13 on 2018/12/29.
 */

public class HellJNI {

    static {
        System.loadLibrary("HelloC");
    }


    public native int AddC (int a, int b);
}
