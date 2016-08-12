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

// Google.ProtocolBuffers.ExtensionRegistry
struct ExtensionRegistry_t1909229278;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>
struct Dictionary_2_t1682353283;
// System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>
struct Dictionary_2_t2802748837;

#include "codegen/il2cpp-codegen.h"

// System.Void Google.ProtocolBuffers.ExtensionRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.Dictionary`2<System.String,Google.ProtocolBuffers.IGeneratedExtensionLite>>,System.Collections.Generic.Dictionary`2<Google.ProtocolBuffers.ExtensionRegistry/ExtensionIntPair,Google.ProtocolBuffers.IGeneratedExtensionLite>,System.Boolean)
extern "C"  void ExtensionRegistry__ctor_m2795137368 (ExtensionRegistry_t1909229278 * __this, Dictionary_2_t1682353283 * ___byName, Dictionary_2_t2802748837 * ___byNumber, bool ___readOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::CreateInstance()
extern "C"  ExtensionRegistry_t1909229278 * ExtensionRegistry_CreateInstance_m3058044271 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Google.ProtocolBuffers.ExtensionRegistry Google.ProtocolBuffers.ExtensionRegistry::get_Empty()
extern "C"  ExtensionRegistry_t1909229278 * ExtensionRegistry_get_Empty_m1266638344 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.ExtensionRegistry::.cctor()
extern "C"  void ExtensionRegistry__cctor_m1625575694 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
