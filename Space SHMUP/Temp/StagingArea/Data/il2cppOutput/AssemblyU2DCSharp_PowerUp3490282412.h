#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.TextMesh
struct TextMesh_t1641806576;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_WeaponType3809625260.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUp
struct  PowerUp_t3490282412  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 PowerUp::rotMinMax
	Vector2_t2243707579  ___rotMinMax_2;
	// UnityEngine.Vector2 PowerUp::driftMinMax
	Vector2_t2243707579  ___driftMinMax_3;
	// System.Single PowerUp::lifeTime
	float ___lifeTime_4;
	// System.Single PowerUp::fadeTime
	float ___fadeTime_5;
	// System.Boolean PowerUp::__________________
	bool ______________________6;
	// WeaponType PowerUp::type
	int32_t ___type_7;
	// UnityEngine.GameObject PowerUp::cube
	GameObject_t1756533147 * ___cube_8;
	// UnityEngine.TextMesh PowerUp::letter
	TextMesh_t1641806576 * ___letter_9;
	// UnityEngine.Vector3 PowerUp::rotPerSecond
	Vector3_t2243707580  ___rotPerSecond_10;
	// System.Single PowerUp::birthTime
	float ___birthTime_11;

public:
	inline static int32_t get_offset_of_rotMinMax_2() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___rotMinMax_2)); }
	inline Vector2_t2243707579  get_rotMinMax_2() const { return ___rotMinMax_2; }
	inline Vector2_t2243707579 * get_address_of_rotMinMax_2() { return &___rotMinMax_2; }
	inline void set_rotMinMax_2(Vector2_t2243707579  value)
	{
		___rotMinMax_2 = value;
	}

	inline static int32_t get_offset_of_driftMinMax_3() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___driftMinMax_3)); }
	inline Vector2_t2243707579  get_driftMinMax_3() const { return ___driftMinMax_3; }
	inline Vector2_t2243707579 * get_address_of_driftMinMax_3() { return &___driftMinMax_3; }
	inline void set_driftMinMax_3(Vector2_t2243707579  value)
	{
		___driftMinMax_3 = value;
	}

	inline static int32_t get_offset_of_lifeTime_4() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___lifeTime_4)); }
	inline float get_lifeTime_4() const { return ___lifeTime_4; }
	inline float* get_address_of_lifeTime_4() { return &___lifeTime_4; }
	inline void set_lifeTime_4(float value)
	{
		___lifeTime_4 = value;
	}

	inline static int32_t get_offset_of_fadeTime_5() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___fadeTime_5)); }
	inline float get_fadeTime_5() const { return ___fadeTime_5; }
	inline float* get_address_of_fadeTime_5() { return &___fadeTime_5; }
	inline void set_fadeTime_5(float value)
	{
		___fadeTime_5 = value;
	}

	inline static int32_t get_offset_of____________________6() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ______________________6)); }
	inline bool get____________________6() const { return ______________________6; }
	inline bool* get_address_of____________________6() { return &______________________6; }
	inline void set____________________6(bool value)
	{
		______________________6 = value;
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___type_7)); }
	inline int32_t get_type_7() const { return ___type_7; }
	inline int32_t* get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(int32_t value)
	{
		___type_7 = value;
	}

	inline static int32_t get_offset_of_cube_8() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___cube_8)); }
	inline GameObject_t1756533147 * get_cube_8() const { return ___cube_8; }
	inline GameObject_t1756533147 ** get_address_of_cube_8() { return &___cube_8; }
	inline void set_cube_8(GameObject_t1756533147 * value)
	{
		___cube_8 = value;
		Il2CppCodeGenWriteBarrier(&___cube_8, value);
	}

	inline static int32_t get_offset_of_letter_9() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___letter_9)); }
	inline TextMesh_t1641806576 * get_letter_9() const { return ___letter_9; }
	inline TextMesh_t1641806576 ** get_address_of_letter_9() { return &___letter_9; }
	inline void set_letter_9(TextMesh_t1641806576 * value)
	{
		___letter_9 = value;
		Il2CppCodeGenWriteBarrier(&___letter_9, value);
	}

	inline static int32_t get_offset_of_rotPerSecond_10() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___rotPerSecond_10)); }
	inline Vector3_t2243707580  get_rotPerSecond_10() const { return ___rotPerSecond_10; }
	inline Vector3_t2243707580 * get_address_of_rotPerSecond_10() { return &___rotPerSecond_10; }
	inline void set_rotPerSecond_10(Vector3_t2243707580  value)
	{
		___rotPerSecond_10 = value;
	}

	inline static int32_t get_offset_of_birthTime_11() { return static_cast<int32_t>(offsetof(PowerUp_t3490282412, ___birthTime_11)); }
	inline float get_birthTime_11() const { return ___birthTime_11; }
	inline float* get_address_of_birthTime_11() { return &___birthTime_11; }
	inline void set_birthTime_11(float value)
	{
		___birthTime_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
