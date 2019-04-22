#include <jni.h>
#include <string>

extern "C" JNIEXPORT jint JNICALL
Java_com_jni_szcatic_myapplication_MainActivity_resultFromJNI(
        JNIEnv* env,
        jobject /* this */,jint count1,jint count2) {
    return count1+count2;
}
