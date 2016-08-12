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
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder
struct Builder_t1895597947;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_ByteS960030907.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1909229278.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1264047645.h"

// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.ctor()
extern "C"  void Pointer__ctor_m1124896594 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::.cctor()
extern "C"  void Pointer__cctor_m29959835 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstance()
extern "C"  Pointer_t1264047646 * Pointer_get_DefaultInstance_m1963180041 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_DefaultInstanceForType()
extern "C"  Pointer_t1264047646 * Pointer_get_DefaultInstanceForType_m3867219900 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_ThisMessage()
extern "C"  Pointer_t1264047646 * Pointer_get_ThisMessage_m1731919324 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasId()
extern "C"  bool Pointer_get_HasId_m3547053800 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_Id()
extern "C"  int32_t Pointer_get_Id_m2112317860 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedX()
extern "C"  bool Pointer_get_HasNormalizedX_m764414710 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedX()
extern "C"  float Pointer_get_NormalizedX_m1323681852 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_HasNormalizedY()
extern "C"  bool Pointer_get_HasNormalizedY_m764415671 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_NormalizedY()
extern "C"  float Pointer_get_NormalizedY_m1323682813 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_IsInitialized()
extern "C"  bool Pointer_get_IsInitialized_m2119895453 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::WriteTo(Google.ProtocolBuffers.ICodedOutputStream)
extern "C"  void Pointer_WriteTo_m718927089 (Pointer_t1264047646 * __this, Il2CppObject * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::get_SerializedSize()
extern "C"  int32_t Pointer_get_SerializedSize_m1214127534 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 proto.PhoneEvent/Types/MotionEvent/Types/Pointer::GetHashCode()
extern "C"  int32_t Pointer_GetHashCode_m84345523 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean proto.PhoneEvent/Types/MotionEvent/Types/Pointer::Equals(System.Object)
extern "C"  bool Pointer_Equals_m1289556111 (Pointer_t1264047646 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void proto.PhoneEvent/Types/MotionEvent/Types/Pointer::PrintTo(System.IO.TextWriter)
extern "C"  void Pointer_PrintTo_m1911630799 (Pointer_t1264047646 * __this, TextWriter_t1689927879 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ByteString)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m194918712 (Il2CppObject * __this /* static, unused */, ByteString_t960030907 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m4213866874 (Il2CppObject * __this /* static, unused */, ByteString_t960030907 * ___data, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.Byte[])
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m1084007600 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m3230752002 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___data, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.IO.Stream)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m1538532432 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m2683695458 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseDelimitedFrom(System.IO.Stream)
extern "C"  Pointer_t1264047646 * Pointer_ParseDelimitedFrom_m1339159117 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Pointer_t1264047646 * Pointer_ParseDelimitedFrom_m2332574725 (Il2CppObject * __this /* static, unused */, Stream_t219029575 * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m3390516133 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ParseFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Pointer_t1264047646 * Pointer_ParseFrom_m3053546925 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer proto.PhoneEvent/Types/MotionEvent/Types/Pointer::MakeReadOnly()
extern "C"  Pointer_t1264047646 * Pointer_MakeReadOnly_m3888738454 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder()
extern "C"  Builder_t1895597947 * Pointer_CreateBuilder_m298939687 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::ToBuilder()
extern "C"  Builder_t1895597947 * Pointer_ToBuilder_m3273347592 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilderForType()
extern "C"  Builder_t1895597947 * Pointer_CreateBuilderForType_m439420126 (Pointer_t1264047646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// proto.PhoneEvent/Types/MotionEvent/Types/Pointer/Builder proto.PhoneEvent/Types/MotionEvent/Types/Pointer::CreateBuilder(proto.PhoneEvent/Types/MotionEvent/Types/Pointer)
extern "C"  Builder_t1895597947 * Pointer_CreateBuilder_m277459166 (Il2CppObject * __this /* static, unused */, Pointer_t1264047646 * ___prototype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
