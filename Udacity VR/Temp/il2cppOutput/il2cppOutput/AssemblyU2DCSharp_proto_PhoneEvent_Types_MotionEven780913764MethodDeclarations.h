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
// System.Collections.Generic.IList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer>
struct IList_1_t3430539959;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer
struct Pointer_t1264047646;
// Google.ProtocolBuffers.ICodedOutputStream
struct ICodedOutputStream_t9554353;
// System.Object
struct Il2CppObject;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// Google.ProtocolBuffers.ByteString
struct ByteString_t960030907;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1909229278;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1266638622;
// proto.PhoneEvent/Types/MotionEvent/Builder
struct Builder_t1895597948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_ByteS960030907.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1909229278.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEven780913764.h"

// System.Void proto.PhoneEvent/Types/MotionEvent::.ctor()
extern "C"  void MotionEvent__ctor_m227273514 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::.cctor()
extern "C"  void MotionEvent__cctor_m2268415427 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstance()
extern "C"  MotionEvent_t780913764 * MotionEvent_get_DefaultInstance_m3462003529 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_DefaultInstanceForType()
extern "C"  MotionEvent_t780913764 * MotionEvent_get_DefaultInstanceForType_m1577956476 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::get_ThisMessage()
extern "C"  MotionEvent_t780913764 * MotionEvent_get_ThisMessage_m3513833756 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasTimestamp()
extern "C"  bool MotionEvent_get_HasTimestamp_m1850751923 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 proto.PhoneEvent/Types/MotionEvent::get_Timestamp()
extern "C"  int64_t MotionEvent_get_Timestamp_m1630195590 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_HasAction()
extern "C"  bool MotionEvent_get_HasAction_m577177627 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_Action()
extern "C"  int32_t MotionEvent_get_Action_m3671431079 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<proto.PhoneEvent/Types/MotionEvent/Types/Pointer> proto.PhoneEvent/Types/MotionEvent::get_PointersList()
extern "C"  Il2CppObject* MotionEvent_get_PointersList_m1622234738 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_PointersCount()
extern "C"  int32_t MotionEvent_get_PointersCount_m1661986730 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent::GetPointers(System.Int32)
extern "C"  Pointer_t1264047646 * MotionEvent_GetPointers_m3014720433 (MotionEvent_t780913764 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::get_IsInitialized()
extern "C"  bool MotionEvent_get_IsInitialized_m1444755061 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void MotionEvent_WriteTo_m3890782745 (MotionEvent_t780913764 * __this, Il2CppObject * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::get_SerializedSize()
extern "C"  int32_t MotionEvent_get_SerializedSize_m2892296534 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent::GetHashCode()
extern "C"  int32_t MotionEvent_GetHashCode_m131955723 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent::Equals(System.Object)
extern "C"  bool MotionEvent_Equals_m1019701095 (MotionEvent_t780913764 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent::PrintTo(System.IO.TextWriter)
extern "C"  void MotionEvent_PrintTo_m4270036391 (MotionEvent_t780913764 * __this, TextWriter_t1689927879 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m3990443512 (Il2CppObject * __this /* static, unused */, ByteString_t960030907 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m889633978 (Il2CppObject * __this /* static, unused */, ByteString_t960030907 * ___data, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.Byte[])
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m2054529392 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m2783688770 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___data, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.IO.Stream)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m633401232 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m2916535842 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseDelimitedFrom(System.IO.Stream)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseDelimitedFrom_m1649790733 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseDelimitedFrom_m1836302149 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m2303080165 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  MotionEvent_t780913764 * MotionEvent_ParseFrom_m3393718893 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent proto.PhoneEvent/Types/MotionEvent::MakeReadOnly()
extern "C"  MotionEvent_t780913764 * MotionEvent_MakeReadOnly_m1217617238 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilder()
extern "C"  Builder_t1895597948 * MotionEvent_CreateBuilder_m1612899687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::ToBuilder()
extern "C"  Builder_t1895597948 * MotionEvent_ToBuilder_m3794723400 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilderForType()
extern "C"  Builder_t1895597948 * MotionEvent_CreateBuilderForType_m3131886750 (MotionEvent_t780913764 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Builder proto.PhoneEvent/Types/MotionEvent::CreateBuilder(proto.PhoneEvent/Types/MotionEvent)
extern "C"  Builder_t1895597948 * MotionEvent_CreateBuilder_m3590336374 (Il2CppObject * __this /* static, unused */, MotionEvent_t780913764 * ___prototype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
