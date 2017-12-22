#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaveController
struct  WaveController_t1594920467  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] WaveController::ondaondaolhaaonda
	GameObjectU5BU5D_t3057952154* ___ondaondaolhaaonda_2;
	// System.Single WaveController::randomtimer
	float ___randomtimer_3;
	// System.Single WaveController::minSpawn
	float ___minSpawn_4;
	// System.Single WaveController::maxSpawn
	float ___maxSpawn_5;

public:
	inline static int32_t get_offset_of_ondaondaolhaaonda_2() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___ondaondaolhaaonda_2)); }
	inline GameObjectU5BU5D_t3057952154* get_ondaondaolhaaonda_2() const { return ___ondaondaolhaaonda_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_ondaondaolhaaonda_2() { return &___ondaondaolhaaonda_2; }
	inline void set_ondaondaolhaaonda_2(GameObjectU5BU5D_t3057952154* value)
	{
		___ondaondaolhaaonda_2 = value;
		Il2CppCodeGenWriteBarrier(&___ondaondaolhaaonda_2, value);
	}

	inline static int32_t get_offset_of_randomtimer_3() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___randomtimer_3)); }
	inline float get_randomtimer_3() const { return ___randomtimer_3; }
	inline float* get_address_of_randomtimer_3() { return &___randomtimer_3; }
	inline void set_randomtimer_3(float value)
	{
		___randomtimer_3 = value;
	}

	inline static int32_t get_offset_of_minSpawn_4() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___minSpawn_4)); }
	inline float get_minSpawn_4() const { return ___minSpawn_4; }
	inline float* get_address_of_minSpawn_4() { return &___minSpawn_4; }
	inline void set_minSpawn_4(float value)
	{
		___minSpawn_4 = value;
	}

	inline static int32_t get_offset_of_maxSpawn_5() { return static_cast<int32_t>(offsetof(WaveController_t1594920467, ___maxSpawn_5)); }
	inline float get_maxSpawn_5() const { return ___maxSpawn_5; }
	inline float* get_address_of_maxSpawn_5() { return &___maxSpawn_5; }
	inline void set_maxSpawn_5(float value)
	{
		___maxSpawn_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
