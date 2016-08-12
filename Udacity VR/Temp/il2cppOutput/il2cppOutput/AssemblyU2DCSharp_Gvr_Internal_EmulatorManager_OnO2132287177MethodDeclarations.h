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

// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t2132287177;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3633305399.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3633305399MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnOrientationEvent__ctor_m1309650653 (OnOrientationEvent_t2132287177 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::Invoke(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void OnOrientationEvent_Invoke_m1561636918 (OnOrientationEvent_t2132287177 * __this, EmulatorOrientationEvent_t3633305399  ___orientationEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnOrientationEvent_t2132287177(Il2CppObject* delegate, EmulatorOrientationEvent_t3633305399  ___orientationEvent);
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnOrientationEvent::BeginInvoke(Gvr.Internal.EmulatorOrientationEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnOrientationEvent_BeginInvoke_m1954321613 (OnOrientationEvent_t2132287177 * __this, EmulatorOrientationEvent_t3633305399  ___orientationEvent, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnOrientationEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnOrientationEvent_EndInvoke_m3114211181 (OnOrientationEvent_t2132287177 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
