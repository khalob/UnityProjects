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

// Enemy_4
struct Enemy_4_t235701071;
// UnityEngine.Collision
struct Collision_t2876846408;
// Part
struct Part_t3616564513;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_Part3616564513.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// System.Void Enemy_4::.ctor()
extern "C"  void Enemy_4__ctor_m4196966886 (Enemy_4_t235701071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_4::Start()
extern "C"  void Enemy_4_Start_m1250323754 (Enemy_4_t235701071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_4::InitMovement()
extern "C"  void Enemy_4_InitMovement_m900149863 (Enemy_4_t235701071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_4::Move()
extern "C"  void Enemy_4_Move_m3821093763 (Enemy_4_t235701071 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_4::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Enemy_4_OnCollisionEnter_m627416608 (Enemy_4_t235701071 * __this, Collision_t2876846408 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Part Enemy_4::FindPart(System.String)
extern "C"  Part_t3616564513 * Enemy_4_FindPart_m3611369236 (Enemy_4_t235701071 * __this, String_t* ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Part Enemy_4::FindPart(UnityEngine.GameObject)
extern "C"  Part_t3616564513 * Enemy_4_FindPart_m616684764 (Enemy_4_t235701071 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy_4::Destroyed(UnityEngine.GameObject)
extern "C"  bool Enemy_4_Destroyed_m811631593 (Enemy_4_t235701071 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy_4::Destroyed(System.String)
extern "C"  bool Enemy_4_Destroyed_m1923027167 (Enemy_4_t235701071 * __this, String_t* ___n0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Enemy_4::Destroyed(Part)
extern "C"  bool Enemy_4_Destroyed_m540636564 (Enemy_4_t235701071 * __this, Part_t3616564513 * ___prt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_4::ShowLocalizedDamage(UnityEngine.Material)
extern "C"  void Enemy_4_ShowLocalizedDamage_m4024485101 (Enemy_4_t235701071 * __this, Material_t193706927 * ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
