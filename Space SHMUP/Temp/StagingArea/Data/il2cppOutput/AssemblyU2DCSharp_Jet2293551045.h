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
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Jet
struct  Jet_t2293551045  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Jet::maxFuel
	float ___maxFuel_2;
	// System.Single Jet::fuelUsedPerTick
	float ___fuelUsedPerTick_3;
	// System.Single Jet::regenDelay
	float ___regenDelay_4;
	// System.Single Jet::fuelGainedPerTick
	float ___fuelGainedPerTick_5;
	// System.Single Jet::regenSpeed
	float ___regenSpeed_6;
	// System.Single Jet::maxSpeed
	float ___maxSpeed_7;
	// UnityEngine.GameObject Jet::fireObject
	GameObject_t1756533147 * ___fireObject_8;
	// System.Single Jet::curFuel
	float ___curFuel_9;
	// System.Single Jet::lastTick
	float ___lastTick_10;
	// System.Single Jet::curRegenDelayCounter
	float ___curRegenDelayCounter_11;
	// System.Single Jet::defaultSpeed
	float ___defaultSpeed_12;
	// UnityEngine.SpriteRenderer Jet::fuelBar
	SpriteRenderer_t1209076198 * ___fuelBar_13;
	// UnityEngine.Vector3 Jet::fuelScale
	Vector3_t2243707580  ___fuelScale_14;

public:
	inline static int32_t get_offset_of_maxFuel_2() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___maxFuel_2)); }
	inline float get_maxFuel_2() const { return ___maxFuel_2; }
	inline float* get_address_of_maxFuel_2() { return &___maxFuel_2; }
	inline void set_maxFuel_2(float value)
	{
		___maxFuel_2 = value;
	}

	inline static int32_t get_offset_of_fuelUsedPerTick_3() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___fuelUsedPerTick_3)); }
	inline float get_fuelUsedPerTick_3() const { return ___fuelUsedPerTick_3; }
	inline float* get_address_of_fuelUsedPerTick_3() { return &___fuelUsedPerTick_3; }
	inline void set_fuelUsedPerTick_3(float value)
	{
		___fuelUsedPerTick_3 = value;
	}

	inline static int32_t get_offset_of_regenDelay_4() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___regenDelay_4)); }
	inline float get_regenDelay_4() const { return ___regenDelay_4; }
	inline float* get_address_of_regenDelay_4() { return &___regenDelay_4; }
	inline void set_regenDelay_4(float value)
	{
		___regenDelay_4 = value;
	}

	inline static int32_t get_offset_of_fuelGainedPerTick_5() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___fuelGainedPerTick_5)); }
	inline float get_fuelGainedPerTick_5() const { return ___fuelGainedPerTick_5; }
	inline float* get_address_of_fuelGainedPerTick_5() { return &___fuelGainedPerTick_5; }
	inline void set_fuelGainedPerTick_5(float value)
	{
		___fuelGainedPerTick_5 = value;
	}

	inline static int32_t get_offset_of_regenSpeed_6() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___regenSpeed_6)); }
	inline float get_regenSpeed_6() const { return ___regenSpeed_6; }
	inline float* get_address_of_regenSpeed_6() { return &___regenSpeed_6; }
	inline void set_regenSpeed_6(float value)
	{
		___regenSpeed_6 = value;
	}

	inline static int32_t get_offset_of_maxSpeed_7() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___maxSpeed_7)); }
	inline float get_maxSpeed_7() const { return ___maxSpeed_7; }
	inline float* get_address_of_maxSpeed_7() { return &___maxSpeed_7; }
	inline void set_maxSpeed_7(float value)
	{
		___maxSpeed_7 = value;
	}

	inline static int32_t get_offset_of_fireObject_8() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___fireObject_8)); }
	inline GameObject_t1756533147 * get_fireObject_8() const { return ___fireObject_8; }
	inline GameObject_t1756533147 ** get_address_of_fireObject_8() { return &___fireObject_8; }
	inline void set_fireObject_8(GameObject_t1756533147 * value)
	{
		___fireObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___fireObject_8, value);
	}

	inline static int32_t get_offset_of_curFuel_9() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___curFuel_9)); }
	inline float get_curFuel_9() const { return ___curFuel_9; }
	inline float* get_address_of_curFuel_9() { return &___curFuel_9; }
	inline void set_curFuel_9(float value)
	{
		___curFuel_9 = value;
	}

	inline static int32_t get_offset_of_lastTick_10() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___lastTick_10)); }
	inline float get_lastTick_10() const { return ___lastTick_10; }
	inline float* get_address_of_lastTick_10() { return &___lastTick_10; }
	inline void set_lastTick_10(float value)
	{
		___lastTick_10 = value;
	}

	inline static int32_t get_offset_of_curRegenDelayCounter_11() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___curRegenDelayCounter_11)); }
	inline float get_curRegenDelayCounter_11() const { return ___curRegenDelayCounter_11; }
	inline float* get_address_of_curRegenDelayCounter_11() { return &___curRegenDelayCounter_11; }
	inline void set_curRegenDelayCounter_11(float value)
	{
		___curRegenDelayCounter_11 = value;
	}

	inline static int32_t get_offset_of_defaultSpeed_12() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___defaultSpeed_12)); }
	inline float get_defaultSpeed_12() const { return ___defaultSpeed_12; }
	inline float* get_address_of_defaultSpeed_12() { return &___defaultSpeed_12; }
	inline void set_defaultSpeed_12(float value)
	{
		___defaultSpeed_12 = value;
	}

	inline static int32_t get_offset_of_fuelBar_13() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___fuelBar_13)); }
	inline SpriteRenderer_t1209076198 * get_fuelBar_13() const { return ___fuelBar_13; }
	inline SpriteRenderer_t1209076198 ** get_address_of_fuelBar_13() { return &___fuelBar_13; }
	inline void set_fuelBar_13(SpriteRenderer_t1209076198 * value)
	{
		___fuelBar_13 = value;
		Il2CppCodeGenWriteBarrier(&___fuelBar_13, value);
	}

	inline static int32_t get_offset_of_fuelScale_14() { return static_cast<int32_t>(offsetof(Jet_t2293551045, ___fuelScale_14)); }
	inline Vector3_t2243707580  get_fuelScale_14() const { return ___fuelScale_14; }
	inline Vector3_t2243707580 * get_address_of_fuelScale_14() { return &___fuelScale_14; }
	inline void set_fuelScale_14(Vector3_t2243707580  value)
	{
		___fuelScale_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
