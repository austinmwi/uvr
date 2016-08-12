#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleRayCast
struct  ExampleRayCast_t80169439  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.RaycastHit ExampleRayCast::_hit
	RaycastHit_t46221527  ____hit_2;
	// System.Boolean ExampleRayCast::_focused
	bool ____focused_3;

public:
	inline static int32_t get_offset_of__hit_2() { return static_cast<int32_t>(offsetof(ExampleRayCast_t80169439, ____hit_2)); }
	inline RaycastHit_t46221527  get__hit_2() const { return ____hit_2; }
	inline RaycastHit_t46221527 * get_address_of__hit_2() { return &____hit_2; }
	inline void set__hit_2(RaycastHit_t46221527  value)
	{
		____hit_2 = value;
	}

	inline static int32_t get_offset_of__focused_3() { return static_cast<int32_t>(offsetof(ExampleRayCast_t80169439, ____focused_3)); }
	inline bool get__focused_3() const { return ____focused_3; }
	inline bool* get_address_of__focused_3() { return &____focused_3; }
	inline void set__focused_3(bool value)
	{
		____focused_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
