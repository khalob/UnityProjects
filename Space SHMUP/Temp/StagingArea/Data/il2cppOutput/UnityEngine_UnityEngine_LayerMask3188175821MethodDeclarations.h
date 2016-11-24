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

// System.String
struct String_t;
// UnityEngine.LayerMask
struct LayerMask_t3188175821;
struct LayerMask_t3188175821_marshaled_pinvoke;
struct LayerMask_t3188175821_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
extern "C"  int32_t LayerMask_NameToLayer_m1506372053 (Il2CppObject * __this /* static, unused */, String_t* ___layerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LayerMask_t3188175821;
struct LayerMask_t3188175821_marshaled_pinvoke;

extern "C" void LayerMask_t3188175821_marshal_pinvoke(const LayerMask_t3188175821& unmarshaled, LayerMask_t3188175821_marshaled_pinvoke& marshaled);
extern "C" void LayerMask_t3188175821_marshal_pinvoke_back(const LayerMask_t3188175821_marshaled_pinvoke& marshaled, LayerMask_t3188175821& unmarshaled);
extern "C" void LayerMask_t3188175821_marshal_pinvoke_cleanup(LayerMask_t3188175821_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LayerMask_t3188175821;
struct LayerMask_t3188175821_marshaled_com;

extern "C" void LayerMask_t3188175821_marshal_com(const LayerMask_t3188175821& unmarshaled, LayerMask_t3188175821_marshaled_com& marshaled);
extern "C" void LayerMask_t3188175821_marshal_com_back(const LayerMask_t3188175821_marshaled_com& marshaled, LayerMask_t3188175821& unmarshaled);
extern "C" void LayerMask_t3188175821_marshal_com_cleanup(LayerMask_t3188175821_marshaled_com& marshaled);
