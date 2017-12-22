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

// MultiplicadordeÁgua
struct  MultiplicadordeUC1gua_t2204954160  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MultiplicadordeÁgua::waterprefab
	GameObject_t1756533147 * ___waterprefab_2;
	// System.Single MultiplicadordeÁgua::xOffset
	float ___xOffset_3;
	// System.Single MultiplicadordeÁgua::zOffset
	float ___zOffset_4;

public:
	inline static int32_t get_offset_of_waterprefab_2() { return static_cast<int32_t>(offsetof(MultiplicadordeUC1gua_t2204954160, ___waterprefab_2)); }
	inline GameObject_t1756533147 * get_waterprefab_2() const { return ___waterprefab_2; }
	inline GameObject_t1756533147 ** get_address_of_waterprefab_2() { return &___waterprefab_2; }
	inline void set_waterprefab_2(GameObject_t1756533147 * value)
	{
		___waterprefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___waterprefab_2, value);
	}

	inline static int32_t get_offset_of_xOffset_3() { return static_cast<int32_t>(offsetof(MultiplicadordeUC1gua_t2204954160, ___xOffset_3)); }
	inline float get_xOffset_3() const { return ___xOffset_3; }
	inline float* get_address_of_xOffset_3() { return &___xOffset_3; }
	inline void set_xOffset_3(float value)
	{
		___xOffset_3 = value;
	}

	inline static int32_t get_offset_of_zOffset_4() { return static_cast<int32_t>(offsetof(MultiplicadordeUC1gua_t2204954160, ___zOffset_4)); }
	inline float get_zOffset_4() const { return ___zOffset_4; }
	inline float* get_address_of_zOffset_4() { return &___zOffset_4; }
	inline void set_zOffset_4(float value)
	{
		___zOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
