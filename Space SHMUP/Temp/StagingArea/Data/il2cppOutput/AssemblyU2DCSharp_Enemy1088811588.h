#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Color[]
struct ColorU5BU5D_t672350442;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1088811588  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Enemy::speed
	float ___speed_2;
	// System.Single Enemy::fireRate
	float ___fireRate_3;
	// System.Single Enemy::health
	float ___health_4;
	// System.Int32 Enemy::score
	int32_t ___score_5;
	// System.Int32 Enemy::showDamageForFrame
	int32_t ___showDamageForFrame_6;
	// System.Single Enemy::powerUpDropChance
	float ___powerUpDropChance_7;
	// System.Boolean Enemy::_________________
	bool _____________________8;
	// UnityEngine.Bounds Enemy::bounds
	Bounds_t3033363703  ___bounds_9;
	// UnityEngine.Vector3 Enemy::boundsCenterOffset
	Vector3_t2243707580  ___boundsCenterOffset_10;
	// UnityEngine.Color[] Enemy::originalColors
	ColorU5BU5D_t672350442* ___originalColors_11;
	// UnityEngine.Material[] Enemy::materials
	MaterialU5BU5D_t3123989686* ___materials_12;
	// System.Int32 Enemy::remainingDamageFrames
	int32_t ___remainingDamageFrames_13;
	// UnityEngine.GameObject Enemy::explosion
	GameObject_t1756533147 * ___explosion_14;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_fireRate_3() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___fireRate_3)); }
	inline float get_fireRate_3() const { return ___fireRate_3; }
	inline float* get_address_of_fireRate_3() { return &___fireRate_3; }
	inline void set_fireRate_3(float value)
	{
		___fireRate_3 = value;
	}

	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___score_5)); }
	inline int32_t get_score_5() const { return ___score_5; }
	inline int32_t* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(int32_t value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_showDamageForFrame_6() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___showDamageForFrame_6)); }
	inline int32_t get_showDamageForFrame_6() const { return ___showDamageForFrame_6; }
	inline int32_t* get_address_of_showDamageForFrame_6() { return &___showDamageForFrame_6; }
	inline void set_showDamageForFrame_6(int32_t value)
	{
		___showDamageForFrame_6 = value;
	}

	inline static int32_t get_offset_of_powerUpDropChance_7() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___powerUpDropChance_7)); }
	inline float get_powerUpDropChance_7() const { return ___powerUpDropChance_7; }
	inline float* get_address_of_powerUpDropChance_7() { return &___powerUpDropChance_7; }
	inline void set_powerUpDropChance_7(float value)
	{
		___powerUpDropChance_7 = value;
	}

	inline static int32_t get_offset_of___________________8() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, _____________________8)); }
	inline bool get___________________8() const { return _____________________8; }
	inline bool* get_address_of___________________8() { return &_____________________8; }
	inline void set___________________8(bool value)
	{
		_____________________8 = value;
	}

	inline static int32_t get_offset_of_bounds_9() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___bounds_9)); }
	inline Bounds_t3033363703  get_bounds_9() const { return ___bounds_9; }
	inline Bounds_t3033363703 * get_address_of_bounds_9() { return &___bounds_9; }
	inline void set_bounds_9(Bounds_t3033363703  value)
	{
		___bounds_9 = value;
	}

	inline static int32_t get_offset_of_boundsCenterOffset_10() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___boundsCenterOffset_10)); }
	inline Vector3_t2243707580  get_boundsCenterOffset_10() const { return ___boundsCenterOffset_10; }
	inline Vector3_t2243707580 * get_address_of_boundsCenterOffset_10() { return &___boundsCenterOffset_10; }
	inline void set_boundsCenterOffset_10(Vector3_t2243707580  value)
	{
		___boundsCenterOffset_10 = value;
	}

	inline static int32_t get_offset_of_originalColors_11() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___originalColors_11)); }
	inline ColorU5BU5D_t672350442* get_originalColors_11() const { return ___originalColors_11; }
	inline ColorU5BU5D_t672350442** get_address_of_originalColors_11() { return &___originalColors_11; }
	inline void set_originalColors_11(ColorU5BU5D_t672350442* value)
	{
		___originalColors_11 = value;
		Il2CppCodeGenWriteBarrier(&___originalColors_11, value);
	}

	inline static int32_t get_offset_of_materials_12() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___materials_12)); }
	inline MaterialU5BU5D_t3123989686* get_materials_12() const { return ___materials_12; }
	inline MaterialU5BU5D_t3123989686** get_address_of_materials_12() { return &___materials_12; }
	inline void set_materials_12(MaterialU5BU5D_t3123989686* value)
	{
		___materials_12 = value;
		Il2CppCodeGenWriteBarrier(&___materials_12, value);
	}

	inline static int32_t get_offset_of_remainingDamageFrames_13() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___remainingDamageFrames_13)); }
	inline int32_t get_remainingDamageFrames_13() const { return ___remainingDamageFrames_13; }
	inline int32_t* get_address_of_remainingDamageFrames_13() { return &___remainingDamageFrames_13; }
	inline void set_remainingDamageFrames_13(int32_t value)
	{
		___remainingDamageFrames_13 = value;
	}

	inline static int32_t get_offset_of_explosion_14() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___explosion_14)); }
	inline GameObject_t1756533147 * get_explosion_14() const { return ___explosion_14; }
	inline GameObject_t1756533147 ** get_address_of_explosion_14() { return &___explosion_14; }
	inline void set_explosion_14(GameObject_t1756533147 * value)
	{
		___explosion_14 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_14, value);
	}
};

struct Enemy_t1088811588_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Enemy::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_15() { return static_cast<int32_t>(offsetof(Enemy_t1088811588_StaticFields, ___U3CU3Ef__switchU24map0_15)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_15() const { return ___U3CU3Ef__switchU24map0_15; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_15() { return &___U3CU3Ef__switchU24map0_15; }
	inline void set_U3CU3Ef__switchU24map0_15(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
