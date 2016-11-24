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

// Utils
struct Utils_t4194145797;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_BoundsTest2436899705.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"

// System.Void Utils::.ctor()
extern "C"  void Utils__ctor_m3542018736 (Utils_t4194145797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Utils::BoundsUnion(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  Bounds_t3033363703  Utils_BoundsUnion_m232540143 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703  ___b00, Bounds_t3033363703  ___b11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Utils::CombineBoundsOfChildren(UnityEngine.GameObject)
extern "C"  Bounds_t3033363703  Utils_CombineBoundsOfChildren_m848428395 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds Utils::get_camBounds()
extern "C"  Bounds_t3033363703  Utils_get_camBounds_m1874946752 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils::SetCameraBounds(UnityEngine.Camera)
extern "C"  void Utils_SetCameraBounds_m4014504570 (Il2CppObject * __this /* static, unused */, Camera_t189460977 * ___cam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utils::ScreenBoundsCheck(UnityEngine.Bounds,BoundsTest)
extern "C"  Vector3_t2243707580  Utils_ScreenBoundsCheck_m2281547752 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703  ___bnd0, int32_t ___test1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Utils::BoundsInBoundsCheck(UnityEngine.Bounds,UnityEngine.Bounds,BoundsTest)
extern "C"  Vector3_t2243707580  Utils_BoundsInBoundsCheck_m3642153900 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703  ___bigB0, Bounds_t3033363703  ___lilB1, int32_t ___test2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utils::FindTaggedParent(UnityEngine.GameObject)
extern "C"  GameObject_t1756533147 * Utils_FindTaggedParent_m165275620 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Utils::FindTaggedParent(UnityEngine.Transform)
extern "C"  GameObject_t1756533147 * Utils_FindTaggedParent_m2206564013 (Il2CppObject * __this /* static, unused */, Transform_t3275118058 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] Utils::GetAllMaterials(UnityEngine.GameObject)
extern "C"  MaterialU5BU5D_t3123989686* Utils_GetAllMaterials_m2915824544 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
