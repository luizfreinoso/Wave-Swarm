#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerControl
struct PlayerControl_t792727354;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AI
struct  AI_t2476083018  : public MonoBehaviour_t1158329972
{
public:
	// PlayerControl AI::AIControl
	PlayerControl_t792727354 * ___AIControl_2;
	// System.Single AI::aleatorio
	float ___aleatorio_3;

public:
	inline static int32_t get_offset_of_AIControl_2() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___AIControl_2)); }
	inline PlayerControl_t792727354 * get_AIControl_2() const { return ___AIControl_2; }
	inline PlayerControl_t792727354 ** get_address_of_AIControl_2() { return &___AIControl_2; }
	inline void set_AIControl_2(PlayerControl_t792727354 * value)
	{
		___AIControl_2 = value;
		Il2CppCodeGenWriteBarrier(&___AIControl_2, value);
	}

	inline static int32_t get_offset_of_aleatorio_3() { return static_cast<int32_t>(offsetof(AI_t2476083018, ___aleatorio_3)); }
	inline float get_aleatorio_3() const { return ___aleatorio_3; }
	inline float* get_address_of_aleatorio_3() { return &___aleatorio_3; }
	inline void set_aleatorio_3(float value)
	{
		___aleatorio_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
