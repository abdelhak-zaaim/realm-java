/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_Group */

#ifndef _Included_com_tightdb_Group
#define _Included_com_tightdb_Group
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tightdb_Group
 * Method:    createNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_createNative__
  (JNIEnv *, jobject);

/*
 * Class:     com_tightdb_Group
 * Method:    createNative
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_createNative__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_tightdb_Group
 * Method:    createNative
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_createNative___3B
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_tightdb_Group
 * Method:    createNative
 * Signature: (Ljava/nio/ByteBuffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_createNative__Ljava_nio_ByteBuffer_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Group_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeHasTable
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Group_nativeHasTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeGetTableName
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Group_nativeGetTableName
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeGetTableNativePtr
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_nativeGetTableNativePtr
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeWriteToFile
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Group_nativeWriteToFile
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeLoadFromMem
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_Group_nativeLoadFromMem
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeWriteToMem
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tightdb_Group_nativeWriteToMem
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeToJson
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Group_nativeToJson
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeCommit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_Group_nativeCommit
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeToString
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Group_nativeToString
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_Group
 * Method:    nativeEquals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Group_nativeEquals
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
