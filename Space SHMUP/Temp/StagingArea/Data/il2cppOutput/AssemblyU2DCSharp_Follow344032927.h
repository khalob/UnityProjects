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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Follow
struct  Follow_t344032927  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Follow::whatToFollow
	GameObject_t1756533147 * ___whatToFollow_2;
	// System.Single Follow::Xoffset
	float ___Xoffset_3;
	// System.Single Follow::Yoffset
	float ___Yoffset_4;

public:
	inline static int32_t get_offset_of_whatToFollow_2() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___whatToFollow_2)); }
	inline GameObject_t1756533147 * get_whatToFollow_2() const { return ___whatToFollow_2; }
	inline GameObject_t1756533147 ** get_address_of_whatToFollow_2() { return &___whatToFollow_2; }
	inline void set_whatToFollow_2(GameObject_t1756533147 * value)
	{
		___whatToFollow_2 = value;
		Il2CppCodeGenWriteBarrier(&___whatToFollow_2, value);
	}

	inline static int32_t get_offset_of_Xoffset_3() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___Xoffset_3)); }
	inline float get_Xoffset_3() const { return ___Xoffset_3; }
	inline float* get_address_of_Xoffset_3() { return &___Xoffset_3; }
	inline void set_Xoffset_3(float value)
	{
		___Xoffset_3 = value;
	}

	inline static int32_t get_offset_of_Yoffset_4() { return static_cast<int32_t>(offsetof(Follow_t344032927, ___Yoffset_4)); }
	inline float get_Yoffset_4() const { return ___Yoffset_4; }
	inline float* get_address_of_Yoffset_4() { return &___Yoffset_4; }
	inline void set_Yoffset_4(float value)
	{
		___Yoffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
