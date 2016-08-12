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

// Google.ProtocolBuffers.UninitializedMessageException
struct UninitializedMessageException_t1130109445;
// Google.ProtocolBuffers.InvalidProtocolBufferException
struct InvalidProtocolBufferException_t1784789954;
// Google.ProtocolBuffers.IMessageLite
struct IMessageLite_t98361006;

#include "codegen/il2cpp-codegen.h"

// Google.ProtocolBuffers.InvalidProtocolBufferException Google.ProtocolBuffers.UninitializedMessageException::AsInvalidProtocolBufferException()
extern "C"  InvalidProtocolBufferException_t1784789954 * UninitializedMessageException_AsInvalidProtocolBufferException_m3036469865 (UninitializedMessageException_t1130109445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Google.ProtocolBuffers.UninitializedMessageException::.ctor(Google.ProtocolBuffers.IMessageLite)
extern "C"  void UninitializedMessageException__ctor_m787888070 (UninitializedMessageException_t1130109445 * __this, Il2CppObject * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
