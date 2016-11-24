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

// UnityEngine.Material
struct Material_t193706927;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Material193706927.h"

// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t2020392075  Material_get_color_m668215843 (Material_t193706927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m577844242 (Material_t193706927 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m3533368774 (Material_t193706927 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m650857509 (Material_t193706927 * __this, String_t* ___propertyName0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m1191533068 (Material_t193706927 * __this, int32_t ___nameID0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m1364511001 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, int32_t ___nameID1, Color_t2020392075 * ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t2020392075  Material_GetColor_m2326771174 (Material_t193706927 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C"  Color_t2020392075  Material_GetColor_m2968960621 (Material_t193706927 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_GetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_GetColor_m558759949 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, int32_t ___nameID1, Color_t2020392075 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m3084369360 (Material_t193706927 * __this, String_t* ___propertyName0, Vector2_t2243707579  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m4252917387 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, String_t* ___propertyName1, Vector2_t2243707579 * ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
