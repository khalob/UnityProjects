#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// WeaponDefinition
struct WeaponDefinition_t2840985793;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_WeaponType3809625260.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon
struct  Weapon_t3342669500  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Weapon::___________________________
	bool _______________________________3;
	// WeaponType Weapon::_type
	int32_t ____type_4;
	// WeaponDefinition Weapon::def
	WeaponDefinition_t2840985793 * ___def_5;
	// UnityEngine.GameObject Weapon::collar
	GameObject_t1756533147 * ___collar_6;
	// System.Single Weapon::lastShot
	float ___lastShot_7;

public:
	inline static int32_t get_offset_of_____________________________3() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, _______________________________3)); }
	inline bool get_____________________________3() const { return _______________________________3; }
	inline bool* get_address_of_____________________________3() { return &_______________________________3; }
	inline void set_____________________________3(bool value)
	{
		_______________________________3 = value;
	}

	inline static int32_t get_offset_of__type_4() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ____type_4)); }
	inline int32_t get__type_4() const { return ____type_4; }
	inline int32_t* get_address_of__type_4() { return &____type_4; }
	inline void set__type_4(int32_t value)
	{
		____type_4 = value;
	}

	inline static int32_t get_offset_of_def_5() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___def_5)); }
	inline WeaponDefinition_t2840985793 * get_def_5() const { return ___def_5; }
	inline WeaponDefinition_t2840985793 ** get_address_of_def_5() { return &___def_5; }
	inline void set_def_5(WeaponDefinition_t2840985793 * value)
	{
		___def_5 = value;
		Il2CppCodeGenWriteBarrier(&___def_5, value);
	}

	inline static int32_t get_offset_of_collar_6() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___collar_6)); }
	inline GameObject_t1756533147 * get_collar_6() const { return ___collar_6; }
	inline GameObject_t1756533147 ** get_address_of_collar_6() { return &___collar_6; }
	inline void set_collar_6(GameObject_t1756533147 * value)
	{
		___collar_6 = value;
		Il2CppCodeGenWriteBarrier(&___collar_6, value);
	}

	inline static int32_t get_offset_of_lastShot_7() { return static_cast<int32_t>(offsetof(Weapon_t3342669500, ___lastShot_7)); }
	inline float get_lastShot_7() const { return ___lastShot_7; }
	inline float* get_address_of_lastShot_7() { return &___lastShot_7; }
	inline void set_lastShot_7(float value)
	{
		___lastShot_7 = value;
	}
};

struct Weapon_t3342669500_StaticFields
{
public:
	// UnityEngine.Transform Weapon::PROJECTILE_ANCHOR
	Transform_t3275118058 * ___PROJECTILE_ANCHOR_2;

public:
	inline static int32_t get_offset_of_PROJECTILE_ANCHOR_2() { return static_cast<int32_t>(offsetof(Weapon_t3342669500_StaticFields, ___PROJECTILE_ANCHOR_2)); }
	inline Transform_t3275118058 * get_PROJECTILE_ANCHOR_2() const { return ___PROJECTILE_ANCHOR_2; }
	inline Transform_t3275118058 ** get_address_of_PROJECTILE_ANCHOR_2() { return &___PROJECTILE_ANCHOR_2; }
	inline void set_PROJECTILE_ANCHOR_2(Transform_t3275118058 * value)
	{
		___PROJECTILE_ANCHOR_2 = value;
		Il2CppCodeGenWriteBarrier(&___PROJECTILE_ANCHOR_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
