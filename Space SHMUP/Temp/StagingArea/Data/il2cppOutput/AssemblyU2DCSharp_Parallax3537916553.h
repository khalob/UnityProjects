#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Parallax
struct  Parallax_t3537916553  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Parallax::poi
	GameObject_t1756533147 * ___poi_2;
	// UnityEngine.GameObject[] Parallax::panels
	GameObjectU5BU5D_t3057952154* ___panels_3;
	// System.Single Parallax::scrollSpeed
	float ___scrollSpeed_4;
	// System.Single Parallax::motionMult
	float ___motionMult_5;
	// System.Single Parallax::panelHt
	float ___panelHt_6;
	// System.Single Parallax::depth
	float ___depth_7;

public:
	inline static int32_t get_offset_of_poi_2() { return static_cast<int32_t>(offsetof(Parallax_t3537916553, ___poi_2)); }
	inline GameObject_t1756533147 * get_poi_2() const { return ___poi_2; }
	inline GameObject_t1756533147 ** get_address_of_poi_2() { return &___poi_2; }
	inline void set_poi_2(GameObject_t1756533147 * value)
	{
		___poi_2 = value;
		Il2CppCodeGenWriteBarrier(&___poi_2, value);
	}

	inline static int32_t get_offset_of_panels_3() { return static_cast<int32_t>(offsetof(Parallax_t3537916553, ___panels_3)); }
	inline GameObjectU5BU5D_t3057952154* get_panels_3() const { return ___panels_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_panels_3() { return &___panels_3; }
	inline void set_panels_3(GameObjectU5BU5D_t3057952154* value)
	{
		___panels_3 = value;
		Il2CppCodeGenWriteBarrier(&___panels_3, value);
	}

	inline static int32_t get_offset_of_scrollSpeed_4() { return static_cast<int32_t>(offsetof(Parallax_t3537916553, ___scrollSpeed_4)); }
	inline float get_scrollSpeed_4() const { return ___scrollSpeed_4; }
	inline float* get_address_of_scrollSpeed_4() { return &___scrollSpeed_4; }
	inline void set_scrollSpeed_4(float value)
	{
		___scrollSpeed_4 = value;
	}

	inline static int32_t get_offset_of_motionMult_5() { return static_cast<int32_t>(offsetof(Parallax_t3537916553, ___motionMult_5)); }
	inline float get_motionMult_5() const { return ___motionMult_5; }
	inline float* get_address_of_motionMult_5() { return &___motionMult_5; }
	inline void set_motionMult_5(float value)
	{
		___motionMult_5 = value;
	}

	inline static int32_t get_offset_of_panelHt_6() { return static_cast<int32_t>(offsetof(Parallax_t3537916553, ___panelHt_6)); }
	inline float get_panelHt_6() const { return ___panelHt_6; }
	inline float* get_address_of_panelHt_6() { return &___panelHt_6; }
	inline void set_panelHt_6(float value)
	{
		___panelHt_6 = value;
	}

	inline static int32_t get_offset_of_depth_7() { return static_cast<int32_t>(offsetof(Parallax_t3537916553, ___depth_7)); }
	inline float get_depth_7() const { return ___depth_7; }
	inline float* get_address_of_depth_7() { return &___depth_7; }
	inline void set_depth_7(float value)
	{
		___depth_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
