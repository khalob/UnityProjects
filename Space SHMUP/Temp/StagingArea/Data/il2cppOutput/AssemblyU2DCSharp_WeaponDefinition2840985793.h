#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_WeaponType3809625260.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponDefinition
struct  WeaponDefinition_t2840985793  : public Il2CppObject
{
public:
	// WeaponType WeaponDefinition::type
	int32_t ___type_0;
	// System.String WeaponDefinition::letter
	String_t* ___letter_1;
	// UnityEngine.Color WeaponDefinition::color
	Color_t2020392075  ___color_2;
	// UnityEngine.GameObject WeaponDefinition::projectilePrefab
	GameObject_t1756533147 * ___projectilePrefab_3;
	// UnityEngine.Color WeaponDefinition::projectileColor
	Color_t2020392075  ___projectileColor_4;
	// System.Single WeaponDefinition::damageOnHit
	float ___damageOnHit_5;
	// System.Single WeaponDefinition::continuousDamage
	float ___continuousDamage_6;
	// System.Single WeaponDefinition::delayBetweenShots
	float ___delayBetweenShots_7;
	// System.Single WeaponDefinition::velocity
	float ___velocity_8;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_letter_1() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___letter_1)); }
	inline String_t* get_letter_1() const { return ___letter_1; }
	inline String_t** get_address_of_letter_1() { return &___letter_1; }
	inline void set_letter_1(String_t* value)
	{
		___letter_1 = value;
		Il2CppCodeGenWriteBarrier(&___letter_1, value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_projectilePrefab_3() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___projectilePrefab_3)); }
	inline GameObject_t1756533147 * get_projectilePrefab_3() const { return ___projectilePrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_projectilePrefab_3() { return &___projectilePrefab_3; }
	inline void set_projectilePrefab_3(GameObject_t1756533147 * value)
	{
		___projectilePrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___projectilePrefab_3, value);
	}

	inline static int32_t get_offset_of_projectileColor_4() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___projectileColor_4)); }
	inline Color_t2020392075  get_projectileColor_4() const { return ___projectileColor_4; }
	inline Color_t2020392075 * get_address_of_projectileColor_4() { return &___projectileColor_4; }
	inline void set_projectileColor_4(Color_t2020392075  value)
	{
		___projectileColor_4 = value;
	}

	inline static int32_t get_offset_of_damageOnHit_5() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___damageOnHit_5)); }
	inline float get_damageOnHit_5() const { return ___damageOnHit_5; }
	inline float* get_address_of_damageOnHit_5() { return &___damageOnHit_5; }
	inline void set_damageOnHit_5(float value)
	{
		___damageOnHit_5 = value;
	}

	inline static int32_t get_offset_of_continuousDamage_6() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___continuousDamage_6)); }
	inline float get_continuousDamage_6() const { return ___continuousDamage_6; }
	inline float* get_address_of_continuousDamage_6() { return &___continuousDamage_6; }
	inline void set_continuousDamage_6(float value)
	{
		___continuousDamage_6 = value;
	}

	inline static int32_t get_offset_of_delayBetweenShots_7() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___delayBetweenShots_7)); }
	inline float get_delayBetweenShots_7() const { return ___delayBetweenShots_7; }
	inline float* get_address_of_delayBetweenShots_7() { return &___delayBetweenShots_7; }
	inline void set_delayBetweenShots_7(float value)
	{
		___delayBetweenShots_7 = value;
	}

	inline static int32_t get_offset_of_velocity_8() { return static_cast<int32_t>(offsetof(WeaponDefinition_t2840985793, ___velocity_8)); }
	inline float get_velocity_8() const { return ___velocity_8; }
	inline float* get_address_of_velocity_8() { return &___velocity_8; }
	inline void set_velocity_8(float value)
	{
		___velocity_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
