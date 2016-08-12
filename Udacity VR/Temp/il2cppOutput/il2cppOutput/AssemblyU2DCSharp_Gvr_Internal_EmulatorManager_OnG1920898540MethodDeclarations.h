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

// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1920898540;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent536468654.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent536468654MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnGyroEvent__ctor_m595925110 (OnGyroEvent_t1920898540 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::Invoke(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void OnGyroEvent_Invoke_m2872936416 (OnGyroEvent_t1920898540 * __this, EmulatorGyroEvent_t536468654  ___gyroEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnGyroEvent_t1920898540(Il2CppObject* delegate, EmulatorGyroEvent_t536468654  ___gyroEvent);
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnGyroEvent::BeginInvoke(Gvr.Internal.EmulatorGyroEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnGyroEvent_BeginInvoke_m3498426683 (OnGyroEvent_t1920898540 * __this, EmulatorGyroEvent_t536468654  ___gyroEvent, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnGyroEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnGyroEvent_EndInvoke_m2968728966 (OnGyroEvent_t1920898540 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
