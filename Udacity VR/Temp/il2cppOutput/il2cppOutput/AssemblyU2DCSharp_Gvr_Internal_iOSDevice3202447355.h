#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice1224326321.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.iOSDevice
struct  iOSDevice_t3202447355  : public GvrDevice_t1224326321
{
public:
	// System.Boolean Gvr.Internal.iOSDevice::isOpenGL
	bool ___isOpenGL_34;

public:
	inline static int32_t get_offset_of_isOpenGL_34() { return static_cast<int32_t>(offsetof(iOSDevice_t3202447355, ___isOpenGL_34)); }
	inline bool get_isOpenGL_34() const { return ___isOpenGL_34; }
	inline bool* get_address_of_isOpenGL_34() { return &___isOpenGL_34; }
	inline void set_isOpenGL_34(bool value)
	{
		___isOpenGL_34 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
