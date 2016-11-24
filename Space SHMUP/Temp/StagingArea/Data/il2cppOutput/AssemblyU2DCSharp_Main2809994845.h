#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Main
struct Main_t2809994845;
// System.Collections.Generic.Dictionary`2<WeaponType,WeaponDefinition>
struct Dictionary_2_t1772092464;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// WeaponDefinition[]
struct WeaponDefinitionU5BU5D_t562480924;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// WeaponType[]
struct WeaponTypeU5BU5D_t2953680677;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Main
struct  Main_t2809994845  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Main::prefabEnemies
	GameObjectU5BU5D_t3057952154* ___prefabEnemies_4;
	// System.Single Main::enemySpawnPerSecond
	float ___enemySpawnPerSecond_5;
	// System.Single Main::enemySpawnPadding
	float ___enemySpawnPadding_6;
	// WeaponDefinition[] Main::weaponDefinitions
	WeaponDefinitionU5BU5D_t562480924* ___weaponDefinitions_7;
	// UnityEngine.GameObject Main::prefabPowerUp
	GameObject_t1756533147 * ___prefabPowerUp_8;
	// WeaponType[] Main::powerUpFrequency
	WeaponTypeU5BU5D_t2953680677* ___powerUpFrequency_9;
	// System.Boolean Main::_________________
	bool _____________________10;
	// WeaponType[] Main::activeWeaponTypes
	WeaponTypeU5BU5D_t2953680677* ___activeWeaponTypes_11;
	// System.Single Main::enemySpawnRate
	float ___enemySpawnRate_12;

public:
	inline static int32_t get_offset_of_prefabEnemies_4() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___prefabEnemies_4)); }
	inline GameObjectU5BU5D_t3057952154* get_prefabEnemies_4() const { return ___prefabEnemies_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_prefabEnemies_4() { return &___prefabEnemies_4; }
	inline void set_prefabEnemies_4(GameObjectU5BU5D_t3057952154* value)
	{
		___prefabEnemies_4 = value;
		Il2CppCodeGenWriteBarrier(&___prefabEnemies_4, value);
	}

	inline static int32_t get_offset_of_enemySpawnPerSecond_5() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___enemySpawnPerSecond_5)); }
	inline float get_enemySpawnPerSecond_5() const { return ___enemySpawnPerSecond_5; }
	inline float* get_address_of_enemySpawnPerSecond_5() { return &___enemySpawnPerSecond_5; }
	inline void set_enemySpawnPerSecond_5(float value)
	{
		___enemySpawnPerSecond_5 = value;
	}

	inline static int32_t get_offset_of_enemySpawnPadding_6() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___enemySpawnPadding_6)); }
	inline float get_enemySpawnPadding_6() const { return ___enemySpawnPadding_6; }
	inline float* get_address_of_enemySpawnPadding_6() { return &___enemySpawnPadding_6; }
	inline void set_enemySpawnPadding_6(float value)
	{
		___enemySpawnPadding_6 = value;
	}

	inline static int32_t get_offset_of_weaponDefinitions_7() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___weaponDefinitions_7)); }
	inline WeaponDefinitionU5BU5D_t562480924* get_weaponDefinitions_7() const { return ___weaponDefinitions_7; }
	inline WeaponDefinitionU5BU5D_t562480924** get_address_of_weaponDefinitions_7() { return &___weaponDefinitions_7; }
	inline void set_weaponDefinitions_7(WeaponDefinitionU5BU5D_t562480924* value)
	{
		___weaponDefinitions_7 = value;
		Il2CppCodeGenWriteBarrier(&___weaponDefinitions_7, value);
	}

	inline static int32_t get_offset_of_prefabPowerUp_8() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___prefabPowerUp_8)); }
	inline GameObject_t1756533147 * get_prefabPowerUp_8() const { return ___prefabPowerUp_8; }
	inline GameObject_t1756533147 ** get_address_of_prefabPowerUp_8() { return &___prefabPowerUp_8; }
	inline void set_prefabPowerUp_8(GameObject_t1756533147 * value)
	{
		___prefabPowerUp_8 = value;
		Il2CppCodeGenWriteBarrier(&___prefabPowerUp_8, value);
	}

	inline static int32_t get_offset_of_powerUpFrequency_9() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___powerUpFrequency_9)); }
	inline WeaponTypeU5BU5D_t2953680677* get_powerUpFrequency_9() const { return ___powerUpFrequency_9; }
	inline WeaponTypeU5BU5D_t2953680677** get_address_of_powerUpFrequency_9() { return &___powerUpFrequency_9; }
	inline void set_powerUpFrequency_9(WeaponTypeU5BU5D_t2953680677* value)
	{
		___powerUpFrequency_9 = value;
		Il2CppCodeGenWriteBarrier(&___powerUpFrequency_9, value);
	}

	inline static int32_t get_offset_of___________________10() { return static_cast<int32_t>(offsetof(Main_t2809994845, _____________________10)); }
	inline bool get___________________10() const { return _____________________10; }
	inline bool* get_address_of___________________10() { return &_____________________10; }
	inline void set___________________10(bool value)
	{
		_____________________10 = value;
	}

	inline static int32_t get_offset_of_activeWeaponTypes_11() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___activeWeaponTypes_11)); }
	inline WeaponTypeU5BU5D_t2953680677* get_activeWeaponTypes_11() const { return ___activeWeaponTypes_11; }
	inline WeaponTypeU5BU5D_t2953680677** get_address_of_activeWeaponTypes_11() { return &___activeWeaponTypes_11; }
	inline void set_activeWeaponTypes_11(WeaponTypeU5BU5D_t2953680677* value)
	{
		___activeWeaponTypes_11 = value;
		Il2CppCodeGenWriteBarrier(&___activeWeaponTypes_11, value);
	}

	inline static int32_t get_offset_of_enemySpawnRate_12() { return static_cast<int32_t>(offsetof(Main_t2809994845, ___enemySpawnRate_12)); }
	inline float get_enemySpawnRate_12() const { return ___enemySpawnRate_12; }
	inline float* get_address_of_enemySpawnRate_12() { return &___enemySpawnRate_12; }
	inline void set_enemySpawnRate_12(float value)
	{
		___enemySpawnRate_12 = value;
	}
};

struct Main_t2809994845_StaticFields
{
public:
	// Main Main::S
	Main_t2809994845 * ___S_2;
	// System.Collections.Generic.Dictionary`2<WeaponType,WeaponDefinition> Main::W_DEFS
	Dictionary_2_t1772092464 * ___W_DEFS_3;

public:
	inline static int32_t get_offset_of_S_2() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___S_2)); }
	inline Main_t2809994845 * get_S_2() const { return ___S_2; }
	inline Main_t2809994845 ** get_address_of_S_2() { return &___S_2; }
	inline void set_S_2(Main_t2809994845 * value)
	{
		___S_2 = value;
		Il2CppCodeGenWriteBarrier(&___S_2, value);
	}

	inline static int32_t get_offset_of_W_DEFS_3() { return static_cast<int32_t>(offsetof(Main_t2809994845_StaticFields, ___W_DEFS_3)); }
	inline Dictionary_2_t1772092464 * get_W_DEFS_3() const { return ___W_DEFS_3; }
	inline Dictionary_2_t1772092464 ** get_address_of_W_DEFS_3() { return &___W_DEFS_3; }
	inline void set_W_DEFS_3(Dictionary_2_t1772092464 * value)
	{
		___W_DEFS_3 = value;
		Il2CppCodeGenWriteBarrier(&___W_DEFS_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
