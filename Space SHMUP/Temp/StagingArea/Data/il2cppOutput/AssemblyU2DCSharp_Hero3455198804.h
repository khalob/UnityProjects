#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Hero
struct Hero_t3455198804;
// Weapon[]
struct WeaponU5BU5D_t3711789781;
// Hero/WeaponFireDelegate
struct WeaponFireDelegate_t3481061898;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hero
struct  Hero_t3455198804  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Hero::gameRestartDelay
	float ___gameRestartDelay_3;
	// System.Single Hero::speed
	float ___speed_4;
	// System.Single Hero::rollMult
	float ___rollMult_5;
	// System.Single Hero::pitchMult
	float ___pitchMult_6;
	// System.Single Hero::_shieldLevel
	float ____shieldLevel_7;
	// Weapon[] Hero::weapons
	WeaponU5BU5D_t3711789781* ___weapons_8;
	// System.Boolean Hero::______________________
	bool __________________________9;
	// UnityEngine.Bounds Hero::bounds
	Bounds_t3033363703  ___bounds_10;
	// Hero/WeaponFireDelegate Hero::fireDelegate
	WeaponFireDelegate_t3481061898 * ___fireDelegate_11;
	// UnityEngine.GameObject Hero::lastTriggerGo
	GameObject_t1756533147 * ___lastTriggerGo_12;

public:
	inline static int32_t get_offset_of_gameRestartDelay_3() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___gameRestartDelay_3)); }
	inline float get_gameRestartDelay_3() const { return ___gameRestartDelay_3; }
	inline float* get_address_of_gameRestartDelay_3() { return &___gameRestartDelay_3; }
	inline void set_gameRestartDelay_3(float value)
	{
		___gameRestartDelay_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rollMult_5() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___rollMult_5)); }
	inline float get_rollMult_5() const { return ___rollMult_5; }
	inline float* get_address_of_rollMult_5() { return &___rollMult_5; }
	inline void set_rollMult_5(float value)
	{
		___rollMult_5 = value;
	}

	inline static int32_t get_offset_of_pitchMult_6() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___pitchMult_6)); }
	inline float get_pitchMult_6() const { return ___pitchMult_6; }
	inline float* get_address_of_pitchMult_6() { return &___pitchMult_6; }
	inline void set_pitchMult_6(float value)
	{
		___pitchMult_6 = value;
	}

	inline static int32_t get_offset_of__shieldLevel_7() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ____shieldLevel_7)); }
	inline float get__shieldLevel_7() const { return ____shieldLevel_7; }
	inline float* get_address_of__shieldLevel_7() { return &____shieldLevel_7; }
	inline void set__shieldLevel_7(float value)
	{
		____shieldLevel_7 = value;
	}

	inline static int32_t get_offset_of_weapons_8() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___weapons_8)); }
	inline WeaponU5BU5D_t3711789781* get_weapons_8() const { return ___weapons_8; }
	inline WeaponU5BU5D_t3711789781** get_address_of_weapons_8() { return &___weapons_8; }
	inline void set_weapons_8(WeaponU5BU5D_t3711789781* value)
	{
		___weapons_8 = value;
		Il2CppCodeGenWriteBarrier(&___weapons_8, value);
	}

	inline static int32_t get_offset_of________________________9() { return static_cast<int32_t>(offsetof(Hero_t3455198804, __________________________9)); }
	inline bool get________________________9() const { return __________________________9; }
	inline bool* get_address_of________________________9() { return &__________________________9; }
	inline void set________________________9(bool value)
	{
		__________________________9 = value;
	}

	inline static int32_t get_offset_of_bounds_10() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___bounds_10)); }
	inline Bounds_t3033363703  get_bounds_10() const { return ___bounds_10; }
	inline Bounds_t3033363703 * get_address_of_bounds_10() { return &___bounds_10; }
	inline void set_bounds_10(Bounds_t3033363703  value)
	{
		___bounds_10 = value;
	}

	inline static int32_t get_offset_of_fireDelegate_11() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___fireDelegate_11)); }
	inline WeaponFireDelegate_t3481061898 * get_fireDelegate_11() const { return ___fireDelegate_11; }
	inline WeaponFireDelegate_t3481061898 ** get_address_of_fireDelegate_11() { return &___fireDelegate_11; }
	inline void set_fireDelegate_11(WeaponFireDelegate_t3481061898 * value)
	{
		___fireDelegate_11 = value;
		Il2CppCodeGenWriteBarrier(&___fireDelegate_11, value);
	}

	inline static int32_t get_offset_of_lastTriggerGo_12() { return static_cast<int32_t>(offsetof(Hero_t3455198804, ___lastTriggerGo_12)); }
	inline GameObject_t1756533147 * get_lastTriggerGo_12() const { return ___lastTriggerGo_12; }
	inline GameObject_t1756533147 ** get_address_of_lastTriggerGo_12() { return &___lastTriggerGo_12; }
	inline void set_lastTriggerGo_12(GameObject_t1756533147 * value)
	{
		___lastTriggerGo_12 = value;
		Il2CppCodeGenWriteBarrier(&___lastTriggerGo_12, value);
	}
};

struct Hero_t3455198804_StaticFields
{
public:
	// Hero Hero::S
	Hero_t3455198804 * ___S_2;

public:
	inline static int32_t get_offset_of_S_2() { return static_cast<int32_t>(offsetof(Hero_t3455198804_StaticFields, ___S_2)); }
	inline Hero_t3455198804 * get_S_2() const { return ___S_2; }
	inline Hero_t3455198804 ** get_address_of_S_2() { return &___S_2; }
	inline void set_S_2(Hero_t3455198804 * value)
	{
		___S_2 = value;
		Il2CppCodeGenWriteBarrier(&___S_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
