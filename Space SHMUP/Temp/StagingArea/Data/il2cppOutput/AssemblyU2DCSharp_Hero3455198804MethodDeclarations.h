#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Hero
struct Hero_t3455198804;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Weapon
struct Weapon_t3342669500;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Hero::.ctor()
extern "C"  void Hero__ctor_m3866552179 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::Awake()
extern "C"  void Hero_Awake_m1980366320 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::Start()
extern "C"  void Hero_Start_m153605567 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::Update()
extern "C"  void Hero_Update_m1974712210 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Hero_OnTriggerEnter_m4015563223 (Hero_t3455198804 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::AbsorbPowerUp(UnityEngine.GameObject)
extern "C"  void Hero_AbsorbPowerUp_m3347344314 (Hero_t3455198804 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Weapon Hero::GetEmptyWeaponSlot()
extern "C"  Weapon_t3342669500 * Hero_GetEmptyWeaponSlot_m329812779 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::ClearWeapons()
extern "C"  void Hero_ClearWeapons_m1423627479 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Hero::get_shieldLevel()
extern "C"  float Hero_get_shieldLevel_m3453750169 (Hero_t3455198804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Hero::set_shieldLevel(System.Single)
extern "C"  void Hero_set_shieldLevel_m3857432438 (Hero_t3455198804 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
