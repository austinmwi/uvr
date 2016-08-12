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


#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_IO_MonoIOError2381806790.h"

// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C"  bool MonoIO_Close_m2122881708 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C"  IntPtr_t MonoIO_get_ConsoleOutput_m3480549602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C"  IntPtr_t MonoIO_get_ConsoleInput_m1787762475 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C"  IntPtr_t MonoIO_get_ConsoleError_m2648898025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreatePipe(System.IntPtr&,System.IntPtr&)
extern "C"  bool MonoIO_CreatePipe_m3049951276 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___read_handle, IntPtr_t* ___write_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DuplicateHandle(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr&,System.Int32,System.Int32,System.Int32)
extern "C"  bool MonoIO_DuplicateHandle_m48672548 (Il2CppObject * __this /* static, unused */, IntPtr_t ___source_process_handle, IntPtr_t ___source_handle, IntPtr_t ___target_process_handle, IntPtr_t* ___target_handle, int32_t ___access, int32_t ___inherit, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
