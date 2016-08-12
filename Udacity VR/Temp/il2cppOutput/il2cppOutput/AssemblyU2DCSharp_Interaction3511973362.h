#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Interaction
struct  Interaction_t3511973362  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Interaction::force
	float ___force_2;
	// System.Boolean Interaction::locked
	bool ___locked_3;
	// System.Boolean Interaction::attached
	bool ___attached_4;
	// System.Int32 Interaction::interactions
	int32_t ___interactions_5;
	// System.Int32 Interaction::_interactions
	int32_t ____interactions_6;
	// UnityEngine.Rigidbody Interaction::_rigid_body
	Rigidbody_t1972007546 * ____rigid_body_7;
	// System.Boolean Interaction::_focused
	bool ____focused_8;

public:
	inline static int32_t get_offset_of_force_2() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ___force_2)); }
	inline float get_force_2() const { return ___force_2; }
	inline float* get_address_of_force_2() { return &___force_2; }
	inline void set_force_2(float value)
	{
		___force_2 = value;
	}

	inline static int32_t get_offset_of_locked_3() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ___locked_3)); }
	inline bool get_locked_3() const { return ___locked_3; }
	inline bool* get_address_of_locked_3() { return &___locked_3; }
	inline void set_locked_3(bool value)
	{
		___locked_3 = value;
	}

	inline static int32_t get_offset_of_attached_4() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ___attached_4)); }
	inline bool get_attached_4() const { return ___attached_4; }
	inline bool* get_address_of_attached_4() { return &___attached_4; }
	inline void set_attached_4(bool value)
	{
		___attached_4 = value;
	}

	inline static int32_t get_offset_of_interactions_5() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ___interactions_5)); }
	inline int32_t get_interactions_5() const { return ___interactions_5; }
	inline int32_t* get_address_of_interactions_5() { return &___interactions_5; }
	inline void set_interactions_5(int32_t value)
	{
		___interactions_5 = value;
	}

	inline static int32_t get_offset_of__interactions_6() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ____interactions_6)); }
	inline int32_t get__interactions_6() const { return ____interactions_6; }
	inline int32_t* get_address_of__interactions_6() { return &____interactions_6; }
	inline void set__interactions_6(int32_t value)
	{
		____interactions_6 = value;
	}

	inline static int32_t get_offset_of__rigid_body_7() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ____rigid_body_7)); }
	inline Rigidbody_t1972007546 * get__rigid_body_7() const { return ____rigid_body_7; }
	inline Rigidbody_t1972007546 ** get_address_of__rigid_body_7() { return &____rigid_body_7; }
	inline void set__rigid_body_7(Rigidbody_t1972007546 * value)
	{
		____rigid_body_7 = value;
		Il2CppCodeGenWriteBarrier(&____rigid_body_7, value);
	}

	inline static int32_t get_offset_of__focused_8() { return static_cast<int32_t>(offsetof(Interaction_t3511973362, ____focused_8)); }
	inline bool get__focused_8() const { return ____focused_8; }
	inline bool* get_address_of__focused_8() { return &____focused_8; }
	inline void set__focused_8(bool value)
	{
		____focused_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
