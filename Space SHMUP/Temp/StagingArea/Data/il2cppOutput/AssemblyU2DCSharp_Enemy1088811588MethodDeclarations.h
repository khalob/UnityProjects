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

// Enemy
struct Enemy_t1088811588;
// UnityEngine.Collision
struct Collision_t2876846408;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"

// System.Void Enemy::.ctor()
extern "C"  void Enemy__ctor_m2474411757 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Awake()
extern "C"  void Enemy_Awake_m979073988 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C"  void Enemy_Start_m4271536181 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Update()
extern "C"  void Enemy_Update_m1726793138 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Move()
extern "C"  void Enemy_Move_m1768179118 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Enemy::get_pos()
extern "C"  Vector3_t2243707580  Enemy_get_pos_m8813716 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::set_pos(UnityEngine.Vector3)
extern "C"  void Enemy_set_pos_m4208214909 (Enemy_t1088811588 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::CheckOffscreen()
extern "C"  void Enemy_CheckOffscreen_m3547265778 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Enemy_OnCollisionEnter_m125428659 (Enemy_t1088811588 * __this, Collision_t2876846408 * ___coll0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::ShowDamage()
extern "C"  void Enemy_ShowDamage_m3937104593 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::UnShowDamage()
extern "C"  void Enemy_UnShowDamage_m2062775912 (Enemy_t1088811588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
