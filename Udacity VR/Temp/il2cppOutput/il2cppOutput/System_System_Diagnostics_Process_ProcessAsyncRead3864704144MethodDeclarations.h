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

// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t3864704144;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;

#include "codegen/il2cpp-codegen.h"

// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::get_IsCompleted()
extern "C"  bool ProcessAsyncReader_get_IsCompleted_m2290866373 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Diagnostics.Process/ProcessAsyncReader::get_WaitHandle()
extern "C"  WaitHandle_t361062656 * ProcessAsyncReader_get_WaitHandle_m3518133136 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::Close()
extern "C"  void ProcessAsyncReader_Close_m3559474383 (ProcessAsyncReader_t3864704144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
