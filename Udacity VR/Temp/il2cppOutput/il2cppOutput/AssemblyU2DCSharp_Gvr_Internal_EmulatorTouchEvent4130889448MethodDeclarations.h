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

// proto.PhoneEvent/Types/MotionEvent
struct MotionEvent_t780913764;
// System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>
struct List_1_t2061006614;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent4130889448.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEven780913764.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_1955883606.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_1264047645.h"

// System.Void Gvr.Internal.EmulatorTouchEvent::.ctor(proto.PhoneEvent/Types/MotionEvent,System.Int64)
extern "C"  void EmulatorTouchEvent__ctor_m460315732 (EmulatorTouchEvent_t4130889448 * __this, MotionEvent_t780913764 * ___proto, int64_t ___lastDownTimeMs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorTouchEvent::.ctor(Gvr.Internal.EmulatorTouchEvent/Action,System.Int32,System.Int32,System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>)
extern "C"  void EmulatorTouchEvent__ctor_m1030434664 (EmulatorTouchEvent_t4130889448 * __this, int32_t ___action, int32_t ___pointerId, int32_t ___relativeTimestamp, List_1_t2061006614 * ___pointers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorTouchEvent::.cctor()
extern "C"  void EmulatorTouchEvent__cctor_m1272376920 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorTouchEvent/Action Gvr.Internal.EmulatorTouchEvent::getActionMasked()
extern "C"  int32_t EmulatorTouchEvent_getActionMasked_m2425811928 (EmulatorTouchEvent_t4130889448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorTouchEvent/Pointer Gvr.Internal.EmulatorTouchEvent::getActionPointer()
extern "C"  Pointer_t1264047645  EmulatorTouchEvent_getActionPointer_m3680508945 (EmulatorTouchEvent_t4130889448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorTouchEvent::getActionUnmasked(Gvr.Internal.EmulatorTouchEvent/Action,System.Int32)
extern "C"  int32_t EmulatorTouchEvent_getActionUnmasked_m1743037333 (Il2CppObject * __this /* static, unused */, int32_t ___action, int32_t ___fingerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Gvr.Internal.EmulatorTouchEvent::findPointerIndex(System.Int32,System.Collections.Generic.List`1<Gvr.Internal.EmulatorTouchEvent/Pointer>)
extern "C"  int32_t EmulatorTouchEvent_findPointerIndex_m839828110 (Il2CppObject * __this /* static, unused */, int32_t ___fingerId, List_1_t2061006614 * ___pointers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Gvr.Internal.EmulatorTouchEvent::ToString()
extern "C"  String_t* EmulatorTouchEvent_ToString_m3028995352 (EmulatorTouchEvent_t4130889448 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
