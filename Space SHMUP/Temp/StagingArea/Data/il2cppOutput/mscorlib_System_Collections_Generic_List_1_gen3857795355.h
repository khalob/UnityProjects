﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Material>
struct  List_1_t3857795355  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3123989686* ____items_0;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(List_1_t3857795355, ____items_0)); }
	inline MaterialU5BU5D_t3123989686* get__items_0() const { return ____items_0; }
	inline MaterialU5BU5D_t3123989686** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(MaterialU5BU5D_t3123989686* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier(&____items_0, value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(List_1_t3857795355, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(List_1_t3857795355, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct List_1_t3857795355_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	MaterialU5BU5D_t3123989686* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(List_1_t3857795355_StaticFields, ___EmptyArray_3)); }
	inline MaterialU5BU5D_t3123989686* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline MaterialU5BU5D_t3123989686** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(MaterialU5BU5D_t3123989686* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
