#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Part
struct  Part_t3616564513  : public Il2CppObject
{
public:
	// System.String Part::name
	String_t* ___name_0;
	// System.Single Part::health
	float ___health_1;
	// System.String[] Part::protectedBy
	StringU5BU5D_t1642385972* ___protectedBy_2;
	// UnityEngine.GameObject Part::go
	GameObject_t1756533147 * ___go_3;
	// UnityEngine.Material Part::mat
	Material_t193706927 * ___mat_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Part_t3616564513, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_health_1() { return static_cast<int32_t>(offsetof(Part_t3616564513, ___health_1)); }
	inline float get_health_1() const { return ___health_1; }
	inline float* get_address_of_health_1() { return &___health_1; }
	inline void set_health_1(float value)
	{
		___health_1 = value;
	}

	inline static int32_t get_offset_of_protectedBy_2() { return static_cast<int32_t>(offsetof(Part_t3616564513, ___protectedBy_2)); }
	inline StringU5BU5D_t1642385972* get_protectedBy_2() const { return ___protectedBy_2; }
	inline StringU5BU5D_t1642385972** get_address_of_protectedBy_2() { return &___protectedBy_2; }
	inline void set_protectedBy_2(StringU5BU5D_t1642385972* value)
	{
		___protectedBy_2 = value;
		Il2CppCodeGenWriteBarrier(&___protectedBy_2, value);
	}

	inline static int32_t get_offset_of_go_3() { return static_cast<int32_t>(offsetof(Part_t3616564513, ___go_3)); }
	inline GameObject_t1756533147 * get_go_3() const { return ___go_3; }
	inline GameObject_t1756533147 ** get_address_of_go_3() { return &___go_3; }
	inline void set_go_3(GameObject_t1756533147 * value)
	{
		___go_3 = value;
		Il2CppCodeGenWriteBarrier(&___go_3, value);
	}

	inline static int32_t get_offset_of_mat_4() { return static_cast<int32_t>(offsetof(Part_t3616564513, ___mat_4)); }
	inline Material_t193706927 * get_mat_4() const { return ___mat_4; }
	inline Material_t193706927 ** get_address_of_mat_4() { return &___mat_4; }
	inline void set_mat_4(Material_t193706927 * value)
	{
		___mat_4 = value;
		Il2CppCodeGenWriteBarrier(&___mat_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
