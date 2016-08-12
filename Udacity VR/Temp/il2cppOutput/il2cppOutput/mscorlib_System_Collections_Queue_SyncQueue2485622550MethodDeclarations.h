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

// System.Collections.Queue/SyncQueue
struct SyncQueue_t2485622550;
// System.Collections.Queue
struct Queue_t1621224067;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Queue1621224067.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Collections.Queue/SyncQueue::.ctor(System.Collections.Queue)
extern "C"  void SyncQueue__ctor_m3005100633 (SyncQueue_t2485622550 * __this, Queue_t1621224067 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Queue/SyncQueue::get_Count()
extern "C"  int32_t SyncQueue_get_Count_m4011301626 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Queue/SyncQueue::get_IsSynchronized()
extern "C"  bool SyncQueue_get_IsSynchronized_m998787163 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::get_SyncRoot()
extern "C"  Il2CppObject * SyncQueue_get_SyncRoot_m334893325 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/SyncQueue::CopyTo(System.Array,System.Int32)
extern "C"  void SyncQueue_CopyTo_m1881278959 (SyncQueue_t2485622550 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Queue/SyncQueue::GetEnumerator()
extern "C"  Il2CppObject * SyncQueue_GetEnumerator_m318518932 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::Clone()
extern "C"  Il2CppObject * SyncQueue_Clone_m1778842936 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/SyncQueue::Clear()
extern "C"  void SyncQueue_Clear_m1787891645 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::Dequeue()
extern "C"  Il2CppObject * SyncQueue_Dequeue_m926617035 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue/SyncQueue::Enqueue(System.Object)
extern "C"  void SyncQueue_Enqueue_m1768873884 (SyncQueue_t2485622550 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Queue/SyncQueue::Peek()
extern "C"  Il2CppObject * SyncQueue_Peek_m561340994 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Queue/SyncQueue::ToArray()
extern "C"  ObjectU5BU5D_t11523773* SyncQueue_ToArray_m3930035995 (SyncQueue_t2485622550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
