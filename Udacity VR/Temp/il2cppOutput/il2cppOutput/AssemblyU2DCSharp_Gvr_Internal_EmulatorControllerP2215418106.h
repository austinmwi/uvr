#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Gvr.Internal.ControllerState
struct ControllerState_t3958628717;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Gvr.Internal.EmulatorControllerProvider
struct  EmulatorControllerProvider_t2215418106  : public Il2CppObject
{
public:
	// Gvr.Internal.ControllerState Gvr.Internal.EmulatorControllerProvider::state
	ControllerState_t3958628717 * ___state_0;
	// UnityEngine.Quaternion Gvr.Internal.EmulatorControllerProvider::yawCorrection
	Quaternion_t1891715979  ___yawCorrection_1;
	// System.Boolean Gvr.Internal.EmulatorControllerProvider::initialRecenterDone
	bool ___initialRecenterDone_2;
	// UnityEngine.Quaternion Gvr.Internal.EmulatorControllerProvider::lastRawOrientation
	Quaternion_t1891715979  ___lastRawOrientation_3;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EmulatorControllerProvider_t2215418106, ___state_0)); }
	inline ControllerState_t3958628717 * get_state_0() const { return ___state_0; }
	inline ControllerState_t3958628717 ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(ControllerState_t3958628717 * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier(&___state_0, value);
	}

	inline static int32_t get_offset_of_yawCorrection_1() { return static_cast<int32_t>(offsetof(EmulatorControllerProvider_t2215418106, ___yawCorrection_1)); }
	inline Quaternion_t1891715979  get_yawCorrection_1() const { return ___yawCorrection_1; }
	inline Quaternion_t1891715979 * get_address_of_yawCorrection_1() { return &___yawCorrection_1; }
	inline void set_yawCorrection_1(Quaternion_t1891715979  value)
	{
		___yawCorrection_1 = value;
	}

	inline static int32_t get_offset_of_initialRecenterDone_2() { return static_cast<int32_t>(offsetof(EmulatorControllerProvider_t2215418106, ___initialRecenterDone_2)); }
	inline bool get_initialRecenterDone_2() const { return ___initialRecenterDone_2; }
	inline bool* get_address_of_initialRecenterDone_2() { return &___initialRecenterDone_2; }
	inline void set_initialRecenterDone_2(bool value)
	{
		___initialRecenterDone_2 = value;
	}

	inline static int32_t get_offset_of_lastRawOrientation_3() { return static_cast<int32_t>(offsetof(EmulatorControllerProvider_t2215418106, ___lastRawOrientation_3)); }
	inline Quaternion_t1891715979  get_lastRawOrientation_3() const { return ___lastRawOrientation_3; }
	inline Quaternion_t1891715979 * get_address_of_lastRawOrientation_3() { return &___lastRawOrientation_3; }
	inline void set_lastRawOrientation_3(Quaternion_t1891715979  value)
	{
		___lastRawOrientation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
