#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleLoopVisualization
struct  ExampleLoopVisualization_t2463300790  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] ExampleLoopVisualization::game_object
	GameObjectU5BU5D_t3499186955* ___game_object_2;
	// UnityEngine.Vector3[] ExampleLoopVisualization::loop_position
	Vector3U5BU5D_t3227571696* ___loop_position_3;
	// UnityEngine.Vector3[] ExampleLoopVisualization::array_position
	Vector3U5BU5D_t3227571696* ___array_position_4;
	// System.Int32 ExampleLoopVisualization::_index
	int32_t ____index_5;
	// System.Single ExampleLoopVisualization::_interpolant
	float ____interpolant_6;
	// UnityEngine.Vector3 ExampleLoopVisualization::_index_origin
	Vector3_t3525329789  ____index_origin_7;
	// System.Boolean ExampleLoopVisualization::loop
	bool ___loop_8;

public:
	inline static int32_t get_offset_of_game_object_2() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ___game_object_2)); }
	inline GameObjectU5BU5D_t3499186955* get_game_object_2() const { return ___game_object_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_game_object_2() { return &___game_object_2; }
	inline void set_game_object_2(GameObjectU5BU5D_t3499186955* value)
	{
		___game_object_2 = value;
		Il2CppCodeGenWriteBarrier(&___game_object_2, value);
	}

	inline static int32_t get_offset_of_loop_position_3() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ___loop_position_3)); }
	inline Vector3U5BU5D_t3227571696* get_loop_position_3() const { return ___loop_position_3; }
	inline Vector3U5BU5D_t3227571696** get_address_of_loop_position_3() { return &___loop_position_3; }
	inline void set_loop_position_3(Vector3U5BU5D_t3227571696* value)
	{
		___loop_position_3 = value;
		Il2CppCodeGenWriteBarrier(&___loop_position_3, value);
	}

	inline static int32_t get_offset_of_array_position_4() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ___array_position_4)); }
	inline Vector3U5BU5D_t3227571696* get_array_position_4() const { return ___array_position_4; }
	inline Vector3U5BU5D_t3227571696** get_address_of_array_position_4() { return &___array_position_4; }
	inline void set_array_position_4(Vector3U5BU5D_t3227571696* value)
	{
		___array_position_4 = value;
		Il2CppCodeGenWriteBarrier(&___array_position_4, value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}

	inline static int32_t get_offset_of__interpolant_6() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ____interpolant_6)); }
	inline float get__interpolant_6() const { return ____interpolant_6; }
	inline float* get_address_of__interpolant_6() { return &____interpolant_6; }
	inline void set__interpolant_6(float value)
	{
		____interpolant_6 = value;
	}

	inline static int32_t get_offset_of__index_origin_7() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ____index_origin_7)); }
	inline Vector3_t3525329789  get__index_origin_7() const { return ____index_origin_7; }
	inline Vector3_t3525329789 * get_address_of__index_origin_7() { return &____index_origin_7; }
	inline void set__index_origin_7(Vector3_t3525329789  value)
	{
		____index_origin_7 = value;
	}

	inline static int32_t get_offset_of_loop_8() { return static_cast<int32_t>(offsetof(ExampleLoopVisualization_t2463300790, ___loop_8)); }
	inline bool get_loop_8() const { return ___loop_8; }
	inline bool* get_address_of_loop_8() { return &___loop_8; }
	inline void set_loop_8(bool value)
	{
		___loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
