#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t27321462;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t27321461;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32>
struct Dictionary_2_t3661844299;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshHelper
struct  MeshHelper_t2707752987  : public Il2CppObject
{
public:

public:
};

struct MeshHelper_t2707752987_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MeshHelper::vertices
	List_1_t27321462 * ___vertices_0;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> MeshHelper::normals
	List_1_t27321462 * ___normals_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> MeshHelper::uvs
	List_1_t27321461 * ___uvs_2;
	// System.Collections.Generic.List`1<System.Int32> MeshHelper::indices
	List_1_t3644373756 * ___indices_3;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.Int32> MeshHelper::newVectices
	Dictionary_2_t3661844299 * ___newVectices_4;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(MeshHelper_t2707752987_StaticFields, ___vertices_0)); }
	inline List_1_t27321462 * get_vertices_0() const { return ___vertices_0; }
	inline List_1_t27321462 ** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(List_1_t27321462 * value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_0, value);
	}

	inline static int32_t get_offset_of_normals_1() { return static_cast<int32_t>(offsetof(MeshHelper_t2707752987_StaticFields, ___normals_1)); }
	inline List_1_t27321462 * get_normals_1() const { return ___normals_1; }
	inline List_1_t27321462 ** get_address_of_normals_1() { return &___normals_1; }
	inline void set_normals_1(List_1_t27321462 * value)
	{
		___normals_1 = value;
		Il2CppCodeGenWriteBarrier(&___normals_1, value);
	}

	inline static int32_t get_offset_of_uvs_2() { return static_cast<int32_t>(offsetof(MeshHelper_t2707752987_StaticFields, ___uvs_2)); }
	inline List_1_t27321461 * get_uvs_2() const { return ___uvs_2; }
	inline List_1_t27321461 ** get_address_of_uvs_2() { return &___uvs_2; }
	inline void set_uvs_2(List_1_t27321461 * value)
	{
		___uvs_2 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_2, value);
	}

	inline static int32_t get_offset_of_indices_3() { return static_cast<int32_t>(offsetof(MeshHelper_t2707752987_StaticFields, ___indices_3)); }
	inline List_1_t3644373756 * get_indices_3() const { return ___indices_3; }
	inline List_1_t3644373756 ** get_address_of_indices_3() { return &___indices_3; }
	inline void set_indices_3(List_1_t3644373756 * value)
	{
		___indices_3 = value;
		Il2CppCodeGenWriteBarrier(&___indices_3, value);
	}

	inline static int32_t get_offset_of_newVectices_4() { return static_cast<int32_t>(offsetof(MeshHelper_t2707752987_StaticFields, ___newVectices_4)); }
	inline Dictionary_2_t3661844299 * get_newVectices_4() const { return ___newVectices_4; }
	inline Dictionary_2_t3661844299 ** get_address_of_newVectices_4() { return &___newVectices_4; }
	inline void set_newVectices_4(Dictionary_2_t3661844299 * value)
	{
		___newVectices_4 = value;
		Il2CppCodeGenWriteBarrier(&___newVectices_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
