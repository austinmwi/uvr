#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlockRenderer
struct  FlockRenderer_t1565251156  : public MonoBehaviour_t3012272455
{
public:

public:
};

struct FlockRenderer_t1565251156_StaticFields
{
public:
	// UnityEngine.Matrix4x4 FlockRenderer::_matrix_local_to_world
	Matrix4x4_t277289660  ____matrix_local_to_world_2;
	// System.Boolean FlockRenderer::draw_direction_lines
	bool ___draw_direction_lines_3;

public:
	inline static int32_t get_offset_of__matrix_local_to_world_2() { return static_cast<int32_t>(offsetof(FlockRenderer_t1565251156_StaticFields, ____matrix_local_to_world_2)); }
	inline Matrix4x4_t277289660  get__matrix_local_to_world_2() const { return ____matrix_local_to_world_2; }
	inline Matrix4x4_t277289660 * get_address_of__matrix_local_to_world_2() { return &____matrix_local_to_world_2; }
	inline void set__matrix_local_to_world_2(Matrix4x4_t277289660  value)
	{
		____matrix_local_to_world_2 = value;
	}

	inline static int32_t get_offset_of_draw_direction_lines_3() { return static_cast<int32_t>(offsetof(FlockRenderer_t1565251156_StaticFields, ___draw_direction_lines_3)); }
	inline bool get_draw_direction_lines_3() const { return ___draw_direction_lines_3; }
	inline bool* get_address_of_draw_direction_lines_3() { return &___draw_direction_lines_3; }
	inline void set_draw_direction_lines_3(bool value)
	{
		___draw_direction_lines_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
