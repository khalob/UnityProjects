﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;

#include "AssemblyU2DCSharp_Enemy1088811588.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy_2
struct  Enemy_2_t235701077  : public Enemy_t1088811588
{
public:
	// UnityEngine.Vector3[] Enemy_2::points
	Vector3U5BU5D_t1172311765* ___points_16;
	// System.Single Enemy_2::birthTime
	float ___birthTime_17;
	// System.Single Enemy_2::lifeTime
	float ___lifeTime_18;
	// System.Single Enemy_2::sinEccentricity
	float ___sinEccentricity_19;

public:
	inline static int32_t get_offset_of_points_16() { return static_cast<int32_t>(offsetof(Enemy_2_t235701077, ___points_16)); }
	inline Vector3U5BU5D_t1172311765* get_points_16() const { return ___points_16; }
	inline Vector3U5BU5D_t1172311765** get_address_of_points_16() { return &___points_16; }
	inline void set_points_16(Vector3U5BU5D_t1172311765* value)
	{
		___points_16 = value;
		Il2CppCodeGenWriteBarrier(&___points_16, value);
	}

	inline static int32_t get_offset_of_birthTime_17() { return static_cast<int32_t>(offsetof(Enemy_2_t235701077, ___birthTime_17)); }
	inline float get_birthTime_17() const { return ___birthTime_17; }
	inline float* get_address_of_birthTime_17() { return &___birthTime_17; }
	inline void set_birthTime_17(float value)
	{
		___birthTime_17 = value;
	}

	inline static int32_t get_offset_of_lifeTime_18() { return static_cast<int32_t>(offsetof(Enemy_2_t235701077, ___lifeTime_18)); }
	inline float get_lifeTime_18() const { return ___lifeTime_18; }
	inline float* get_address_of_lifeTime_18() { return &___lifeTime_18; }
	inline void set_lifeTime_18(float value)
	{
		___lifeTime_18 = value;
	}

	inline static int32_t get_offset_of_sinEccentricity_19() { return static_cast<int32_t>(offsetof(Enemy_2_t235701077, ___sinEccentricity_19)); }
	inline float get_sinEccentricity_19() const { return ___sinEccentricity_19; }
	inline float* get_address_of_sinEccentricity_19() { return &___sinEccentricity_19; }
	inline void set_sinEccentricity_19(float value)
	{
		___sinEccentricity_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
