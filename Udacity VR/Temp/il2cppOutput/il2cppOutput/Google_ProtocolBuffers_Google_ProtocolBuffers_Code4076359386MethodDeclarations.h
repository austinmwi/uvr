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

// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t98361006;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t4076359386;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t3830363377;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Wire3358870911.h"

// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeFloatSize(System.Int32,System.Single)
extern "C"  int32_t CodedOutputStream_ComputeFloatSize_m65298715 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt64Size(System.Int32,System.Int64)
extern "C"  int32_t CodedOutputStream_ComputeInt64Size_m1718363313 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32Size(System.Int32,System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32Size_m3699664239 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeMessageSize(System.Int32,Google.ProtocolBuffers.IMessageLite)
extern "C"  int32_t CodedOutputStream_ComputeMessageSize_m1597509401 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSize(System.Int32,System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSize_m1393339146 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeInt32SizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeInt32SizeNoTag_m1540664629 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeEnumSizeNoTag(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeEnumSizeNoTag_m4278042064 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint32Size(System.UInt32)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint32Size_m3154776802 (Il2CppObject * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeRawVarint64Size(System.UInt64)
extern "C"  int32_t CodedOutputStream_ComputeRawVarint64Size_m2971184036 (Il2CppObject * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::ComputeTagSize(System.Int32)
extern "C"  int32_t CodedOutputStream_ComputeTagSize_m1517401140 (Il2CppObject * __this /* static, unused */, int32_t ___fieldNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::.ctor(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream__ctor_m734597254 (CodedOutputStream_t4076359386 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[])
extern "C"  CodedOutputStream_t4076359386 * CodedOutputStream_CreateInstance_m3802784570 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___flatArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.CodedOutputStream Google.ProtocolBuffers.CodedOutputStream::CreateInstance(System.Byte[],System.Int32,System.Int32)
extern "C"  CodedOutputStream_t4076359386 * CodedOutputStream_CreateInstance_m869516314 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___flatArray, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloat(System.Int32,System.String,System.Single)
extern "C"  void CodedOutputStream_WriteFloat_m3588002640 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, String_t* ___fieldName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt64(System.Int32,System.String,System.Int64)
extern "C"  void CodedOutputStream_WriteInt64_m913588508 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, String_t* ___fieldName, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32(System.Int32,System.String,System.Int32)
extern "C"  void CodedOutputStream_WriteInt32_m2011528986 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, String_t* ___fieldName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteMessage(System.Int32,System.String,Google.ProtocolBuffers.IMessageLite)
extern "C"  void CodedOutputStream_WriteMessage_m2366649166 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, String_t* ___fieldName, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteEnum(System.Int32,System.String,System.Int32,System.Object)
extern "C"  void CodedOutputStream_WriteEnum_m3638986103 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, String_t* ___fieldName, int32_t ___value, Il2CppObject * ___rawValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteFloatNoTag(System.Single)
extern "C"  void CodedOutputStream_WriteFloatNoTag_m477583950 (CodedOutputStream_t4076359386 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteInt32NoTag(System.Int32)
extern "C"  void CodedOutputStream_WriteInt32NoTag_m3134807772 (CodedOutputStream_t4076359386 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WritePackedFloatArray(System.Int32,System.String,System.Int32,System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  void CodedOutputStream_WritePackedFloatArray_m634747521 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, String_t* ___fieldName, int32_t ___calculatedSize, Il2CppObject* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteTag(System.Int32,Google.ProtocolBuffers.WireFormat/WireType)
extern "C"  void CodedOutputStream_WriteTag_m290734255 (CodedOutputStream_t4076359386 * __this, int32_t ___fieldNumber, uint32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint32(System.UInt32)
extern "C"  void CodedOutputStream_WriteRawVarint32_m3990844169 (CodedOutputStream_t4076359386 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawVarint64(System.UInt64)
extern "C"  void CodedOutputStream_WriteRawVarint64_m2734740555 (CodedOutputStream_t4076359386 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawByte(System.Byte)
extern "C"  void CodedOutputStream_WriteRawByte_m2647428377 (CodedOutputStream_t4076359386 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::WriteRawBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void CodedOutputStream_WriteRawBytes_m2953237958 (CodedOutputStream_t4076359386 * __this, ByteU5BU5D_t58506160* ___value, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::RefreshBuffer()
extern "C"  void CodedOutputStream_RefreshBuffer_m1643705180 (CodedOutputStream_t4076359386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::CheckNoSpaceLeft()
extern "C"  void CodedOutputStream_CheckNoSpaceLeft_m1026714917 (CodedOutputStream_t4076359386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Google.ProtocolBuffers.CodedOutputStream::get_SpaceLeft()
extern "C"  int32_t CodedOutputStream_get_SpaceLeft_m250911719 (CodedOutputStream_t4076359386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.CodedOutputStream::.cctor()
extern "C"  void CodedOutputStream__cctor_m6508042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
