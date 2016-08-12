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


// Methods for marshaling
struct ProcInfo_t3353625924;
struct ProcInfo_t3353625924_marshaled_pinvoke;

extern "C" void ProcInfo_t3353625924_marshal_pinvoke(const ProcInfo_t3353625924& unmarshaled, ProcInfo_t3353625924_marshaled_pinvoke& marshaled);
extern "C" void ProcInfo_t3353625924_marshal_pinvoke_back(const ProcInfo_t3353625924_marshaled_pinvoke& marshaled, ProcInfo_t3353625924& unmarshaled);
extern "C" void ProcInfo_t3353625924_marshal_pinvoke_cleanup(ProcInfo_t3353625924_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ProcInfo_t3353625924;
struct ProcInfo_t3353625924_marshaled_com;

extern "C" void ProcInfo_t3353625924_marshal_com(const ProcInfo_t3353625924& unmarshaled, ProcInfo_t3353625924_marshaled_com& marshaled);
extern "C" void ProcInfo_t3353625924_marshal_com_back(const ProcInfo_t3353625924_marshaled_com& marshaled, ProcInfo_t3353625924& unmarshaled);
extern "C" void ProcInfo_t3353625924_marshal_com_cleanup(ProcInfo_t3353625924_marshaled_com& marshaled);
