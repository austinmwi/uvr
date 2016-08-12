#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.UInt32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>
struct Transform_1_t903320934;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23150375597.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.UInt32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3858467378_gshared (Transform_1_t903320934 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3858467378(__this, ___object, ___method, method) ((  void (*) (Transform_1_t903320934 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3858467378_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3150375597  Transform_1_Invoke_m3185028870_gshared (Transform_1_t903320934 * __this, uint32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3185028870(__this, ___key, ___value, method) ((  KeyValuePair_2_t3150375597  (*) (Transform_1_t903320934 *, uint32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m3185028870_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.UInt32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3027989553_gshared (Transform_1_t903320934 * __this, uint32_t ___key, int32_t ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3027989553(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t903320934 *, uint32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3027989553_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.UInt32,System.Int32,System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Int32>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3150375597  Transform_1_EndInvoke_m2930340292_gshared (Transform_1_t903320934 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2930340292(__this, ___result, method) ((  KeyValuePair_2_t3150375597  (*) (Transform_1_t903320934 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2930340292_gshared)(__this, ___result, method)
