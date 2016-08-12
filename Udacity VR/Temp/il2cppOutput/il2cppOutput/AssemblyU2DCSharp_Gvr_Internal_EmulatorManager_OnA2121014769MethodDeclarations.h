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

// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t2121014769;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent73037535.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent73037535MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::.ctor(System.Object,System.IntPtr)
extern "C"  void OnAccelEvent__ctor_m1064389 (OnAccelEvent_t2121014769 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::Invoke(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void OnAccelEvent_Invoke_m718084262 (OnAccelEvent_t2121014769 * __this, EmulatorAccelEvent_t73037535  ___accelEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OnAccelEvent_t2121014769(Il2CppObject* delegate, EmulatorAccelEvent_t73037535  ___accelEvent);
// System.IAsyncResult Gvr.Internal.EmulatorManager/OnAccelEvent::BeginInvoke(Gvr.Internal.EmulatorAccelEvent,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * OnAccelEvent_BeginInvoke_m1866329421 (OnAccelEvent_t2121014769 * __this, EmulatorAccelEvent_t73037535  ___accelEvent, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager/OnAccelEvent::EndInvoke(System.IAsyncResult)
extern "C"  void OnAccelEvent_EndInvoke_m852187733 (OnAccelEvent_t2121014769 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
