#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shield
struct  Shield_t3327121081  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Shield::rotationsPerSecond
	float ___rotationsPerSecond_2;
	// System.Boolean Shield::_____________________________
	bool _________________________________3;
	// System.Int32 Shield::levelShown
	int32_t ___levelShown_4;

public:
	inline static int32_t get_offset_of_rotationsPerSecond_2() { return static_cast<int32_t>(offsetof(Shield_t3327121081, ___rotationsPerSecond_2)); }
	inline float get_rotationsPerSecond_2() const { return ___rotationsPerSecond_2; }
	inline float* get_address_of_rotationsPerSecond_2() { return &___rotationsPerSecond_2; }
	inline void set_rotationsPerSecond_2(float value)
	{
		___rotationsPerSecond_2 = value;
	}

	inline static int32_t get_offset_of_______________________________3() { return static_cast<int32_t>(offsetof(Shield_t3327121081, _________________________________3)); }
	inline bool get_______________________________3() const { return _________________________________3; }
	inline bool* get_address_of_______________________________3() { return &_________________________________3; }
	inline void set_______________________________3(bool value)
	{
		_________________________________3 = value;
	}

	inline static int32_t get_offset_of_levelShown_4() { return static_cast<int32_t>(offsetof(Shield_t3327121081, ___levelShown_4)); }
	inline int32_t get_levelShown_4() const { return ___levelShown_4; }
	inline int32_t* get_address_of_levelShown_4() { return &___levelShown_4; }
	inline void set_levelShown_4(int32_t value)
	{
		___levelShown_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
