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

// Main
struct Main_t2809994845;
// Enemy
struct Enemy_t1088811588;
// WeaponDefinition
struct WeaponDefinition_t2840985793;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "AssemblyU2DCSharp_WeaponType3809625260.h"

// System.Void Main::.ctor()
extern "C"  void Main__ctor_m325986520 (Main_t2809994845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::ShipDestroyed(Enemy)
extern "C"  void Main_ShipDestroyed_m962088599 (Main_t2809994845 * __this, Enemy_t1088811588 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::Awake()
extern "C"  void Main_Awake_m955704701 (Main_t2809994845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// WeaponDefinition Main::GetWeaponDefinition(WeaponType)
extern "C"  WeaponDefinition_t2840985793 * Main_GetWeaponDefinition_m838416791 (Il2CppObject * __this /* static, unused */, int32_t ___wt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::Start()
extern "C"  void Main_Start_m2091519880 (Main_t2809994845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::SpawnEnemy()
extern "C"  void Main_SpawnEnemy_m2823945165 (Main_t2809994845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::DelayedRestart(System.Single)
extern "C"  void Main_DelayedRestart_m757171656 (Main_t2809994845 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Main::Restart()
extern "C"  void Main_Restart_m3531677459 (Main_t2809994845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
