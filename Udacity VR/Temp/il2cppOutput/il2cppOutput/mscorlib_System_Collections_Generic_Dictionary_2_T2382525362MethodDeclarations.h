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

// System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>
struct Transform_1_t2382525362;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21776082610.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte2229152330.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m465064426_gshared (Transform_1_t2382525362 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m465064426(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2382525362 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m465064426_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t1776082610  Transform_1_Invoke_m457239758_gshared (Transform_1_t2382525362 * __this, ExtensionIntPair_t2229152330  ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m457239758(__this, ___key, ___value, method) ((  KeyValuePair_2_t1776082610  (*) (Transform_1_t2382525362 *, ExtensionIntPair_t2229152330 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m457239758_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m515149433_gshared (Transform_1_t2382525362 * __this, ExtensionIntPair_t2229152330  ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m515149433(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2382525362 *, ExtensionIntPair_t2229152330 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m515149433_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object,System.Collections.Generic.KeyValuePair`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t1776082610  Transform_1_EndInvoke_m1557219068_gshared (Transform_1_t2382525362 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1557219068(__this, ___result, method) ((  KeyValuePair_2_t1776082610  (*) (Transform_1_t2382525362 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1557219068_gshared)(__this, ___result, method)
