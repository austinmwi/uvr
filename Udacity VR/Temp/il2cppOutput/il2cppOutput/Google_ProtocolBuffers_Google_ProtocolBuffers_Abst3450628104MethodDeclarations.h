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

// Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>
struct AbstractBuilderLite_2_t3450628104;
// System.Object
struct Il2CppObject;
// Google.ProtocolBuffers.ICodedInputStream
struct ICodedInputStream_t1266638622;
// System.IO.Stream
struct Stream_t219029575;
// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1909229278;
// Google.ProtocolBuffers.ByteString
struct ByteString_t960030907;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Google.ProtocolBuffers.IBuilderLite
struct IBuilderLite_t3737904194;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t98361006;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_Exte1909229278.h"
#include "Google_ProtocolBuffers_Google_ProtocolBuffers_ByteS960030907.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ICodedInputStream)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m3226280556_gshared (AbstractBuilderLite_2_t3450628104 * __this, Il2CppObject * ___input, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m3226280556(__this, ___input, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, Il2CppObject *, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m3226280556_gshared)(__this, ___input, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeDelimitedFrom(System.IO.Stream)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeDelimitedFrom_m2997626470_gshared (AbstractBuilderLite_2_t3450628104 * __this, Stream_t219029575 * ___input, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeDelimitedFrom_m2997626470(__this, ___input, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, Stream_t219029575 *, const MethodInfo*))AbstractBuilderLite_2_MergeDelimitedFrom_m2997626470_gshared)(__this, ___input, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeDelimitedFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeDelimitedFrom_m3977953292_gshared (AbstractBuilderLite_2_t3450628104 * __this, Stream_t219029575 * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeDelimitedFrom_m3977953292(__this, ___input, ___extensionRegistry, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, Stream_t219029575 *, ExtensionRegistry_t1909229278 *, const MethodInfo*))AbstractBuilderLite_2_MergeDelimitedFrom_m3977953292_gshared)(__this, ___input, ___extensionRegistry, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ByteString)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m1437811793_gshared (AbstractBuilderLite_2_t3450628104 * __this, ByteString_t960030907 * ___data, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m1437811793(__this, ___data, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, ByteString_t960030907 *, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m1437811793_gshared)(__this, ___data, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(Google.ProtocolBuffers.ByteString,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m1591740033_gshared (AbstractBuilderLite_2_t3450628104 * __this, ByteString_t960030907 * ___data, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m1591740033(__this, ___data, ___extensionRegistry, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, ByteString_t960030907 *, ExtensionRegistry_t1909229278 *, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m1591740033_gshared)(__this, ___data, ___extensionRegistry, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.Byte[])
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m2564388425_gshared (AbstractBuilderLite_2_t3450628104 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m2564388425(__this, ___data, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, ByteU5BU5D_t58506160*, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m2564388425_gshared)(__this, ___data, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.Byte[],Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m3887098761_gshared (AbstractBuilderLite_2_t3450628104 * __this, ByteU5BU5D_t58506160* ___data, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m3887098761(__this, ___data, ___extensionRegistry, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, ByteU5BU5D_t58506160*, ExtensionRegistry_t1909229278 *, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m3887098761_gshared)(__this, ___data, ___extensionRegistry, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.IO.Stream)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m2839494679_gshared (AbstractBuilderLite_2_t3450628104 * __this, Stream_t219029575 * ___input, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m2839494679(__this, ___input, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, Stream_t219029575 *, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m2839494679_gshared)(__this, ___input, method)
// TBuilder Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::MergeFrom(System.IO.Stream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Il2CppObject * AbstractBuilderLite_2_MergeFrom_m923894139_gshared (AbstractBuilderLite_2_t3450628104 * __this, Stream_t219029575 * ___input, ExtensionRegistry_t1909229278 * ___extensionRegistry, const MethodInfo* method);
#define AbstractBuilderLite_2_MergeFrom_m923894139(__this, ___input, ___extensionRegistry, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, Stream_t219029575 *, ExtensionRegistry_t1909229278 *, const MethodInfo*))AbstractBuilderLite_2_MergeFrom_m923894139_gshared)(__this, ___input, ___extensionRegistry, method)
// Google.ProtocolBuffers.IBuilderLite Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::Google.ProtocolBuffers.IBuilderLite.WeakMergeFrom(Google.ProtocolBuffers.ICodedInputStream,Google.ProtocolBuffers.ExtensionRegistry)
extern "C"  Il2CppObject * AbstractBuilderLite_2_Google_ProtocolBuffers_IBuilderLite_WeakMergeFrom_m3717606847_gshared (AbstractBuilderLite_2_t3450628104 * __this, Il2CppObject * ___input, ExtensionRegistry_t1909229278 * ___registry, const MethodInfo* method);
#define AbstractBuilderLite_2_Google_ProtocolBuffers_IBuilderLite_WeakMergeFrom_m3717606847(__this, ___input, ___registry, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, Il2CppObject *, ExtensionRegistry_t1909229278 *, const MethodInfo*))AbstractBuilderLite_2_Google_ProtocolBuffers_IBuilderLite_WeakMergeFrom_m3717606847_gshared)(__this, ___input, ___registry, method)
// Google.ProtocolBuffers.IMessageLite Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::Google.ProtocolBuffers.IBuilderLite.WeakBuildPartial()
extern "C"  Il2CppObject * AbstractBuilderLite_2_Google_ProtocolBuffers_IBuilderLite_WeakBuildPartial_m355371900_gshared (AbstractBuilderLite_2_t3450628104 * __this, const MethodInfo* method);
#define AbstractBuilderLite_2_Google_ProtocolBuffers_IBuilderLite_WeakBuildPartial_m355371900(__this, method) ((  Il2CppObject * (*) (AbstractBuilderLite_2_t3450628104 *, const MethodInfo*))AbstractBuilderLite_2_Google_ProtocolBuffers_IBuilderLite_WeakBuildPartial_m355371900_gshared)(__this, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AbstractBuilderLite_2_System_Runtime_Serialization_ISerializable_GetObjectData_m4223003601_gshared (AbstractBuilderLite_2_t3450628104 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define AbstractBuilderLite_2_System_Runtime_Serialization_ISerializable_GetObjectData_m4223003601(__this, ___info, ___context, method) ((  void (*) (AbstractBuilderLite_2_t3450628104 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))AbstractBuilderLite_2_System_Runtime_Serialization_ISerializable_GetObjectData_m4223003601_gshared)(__this, ___info, ___context, method)
// System.Void Google.ProtocolBuffers.AbstractBuilderLite`2<System.Object,System.Object>::.ctor()
extern "C"  void AbstractBuilderLite_2__ctor_m3316003194_gshared (AbstractBuilderLite_2_t3450628104 * __this, const MethodInfo* method);
#define AbstractBuilderLite_2__ctor_m3316003194(__this, method) ((  void (*) (AbstractBuilderLite_2_t3450628104 *, const MethodInfo*))AbstractBuilderLite_2__ctor_m3316003194_gshared)(__this, method)
