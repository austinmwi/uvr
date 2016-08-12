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

// System.IO.MonoSyncFileStream
struct MonoSyncFileStream_t821965729;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_IO_FileAccess995838663.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.IO.MonoSyncFileStream::.ctor(System.IntPtr,System.IO.FileAccess,System.Boolean,System.Int32)
extern "C"  void MonoSyncFileStream__ctor_m503341596 (MonoSyncFileStream_t821965729 * __this, IntPtr_t ___handle, int32_t ___access, bool ___ownsHandle, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MonoSyncFileStream_BeginWrite_m42028334 (MonoSyncFileStream_t821965729 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___cback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MonoSyncFileStream::EndWrite(System.IAsyncResult)
extern "C"  void MonoSyncFileStream_EndWrite_m1706010036 (MonoSyncFileStream_t821965729 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.IO.MonoSyncFileStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MonoSyncFileStream_BeginRead_m614334459 (MonoSyncFileStream_t821965729 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1363551830 * ___cback, Il2CppObject * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoSyncFileStream::EndRead(System.IAsyncResult)
extern "C"  int32_t MonoSyncFileStream_EndRead_m4255081611 (MonoSyncFileStream_t821965729 * __this, Il2CppObject * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
