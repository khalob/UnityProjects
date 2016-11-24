#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// Part[]
struct PartU5BU5D_t650077500;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "AssemblyU2DCSharp_Enemy1088811588.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy_4
struct  Enemy_4_t235701071  : public Enemy_t1088811588
{
public:
	// UnityEngine.Vector3[] Enemy_4::points
	Vector3U5BU5D_t1172311765* ___points_16;
	// System.Single Enemy_4::timeStart
	float ___timeStart_17;
	// Part[] Enemy_4::parts
	PartU5BU5D_t650077500* ___parts_18;
	// System.Single Enemy_4::duration
	float ___duration_19;

public:
	inline static int32_t get_offset_of_points_16() { return static_cast<int32_t>(offsetof(Enemy_4_t235701071, ___points_16)); }
	inline Vector3U5BU5D_t1172311765* get_points_16() const { return ___points_16; }
	inline Vector3U5BU5D_t1172311765** get_address_of_points_16() { return &___points_16; }
	inline void set_points_16(Vector3U5BU5D_t1172311765* value)
	{
		___points_16 = value;
		Il2CppCodeGenWriteBarrier(&___points_16, value);
	}

	inline static int32_t get_offset_of_timeStart_17() { return static_cast<int32_t>(offsetof(Enemy_4_t235701071, ___timeStart_17)); }
	inline float get_timeStart_17() const { return ___timeStart_17; }
	inline float* get_address_of_timeStart_17() { return &___timeStart_17; }
	inline void set_timeStart_17(float value)
	{
		___timeStart_17 = value;
	}

	inline static int32_t get_offset_of_parts_18() { return static_cast<int32_t>(offsetof(Enemy_4_t235701071, ___parts_18)); }
	inline PartU5BU5D_t650077500* get_parts_18() const { return ___parts_18; }
	inline PartU5BU5D_t650077500** get_address_of_parts_18() { return &___parts_18; }
	inline void set_parts_18(PartU5BU5D_t650077500* value)
	{
		___parts_18 = value;
		Il2CppCodeGenWriteBarrier(&___parts_18, value);
	}

	inline static int32_t get_offset_of_duration_19() { return static_cast<int32_t>(offsetof(Enemy_4_t235701071, ___duration_19)); }
	inline float get_duration_19() const { return ___duration_19; }
	inline float* get_address_of_duration_19() { return &___duration_19; }
	inline void set_duration_19(float value)
	{
		___duration_19 = value;
	}
};

struct Enemy_4_t235701071_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Enemy_4::<>f__switch$map1
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_20() { return static_cast<int32_t>(offsetof(Enemy_4_t235701071_StaticFields, ___U3CU3Ef__switchU24map1_20)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1_20() const { return ___U3CU3Ef__switchU24map1_20; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1_20() { return &___U3CU3Ef__switchU24map1_20; }
	inline void set_U3CU3Ef__switchU24map1_20(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
