#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// System.Single[]
struct SingleU5BU5D_t577127397;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnController
struct  SpawnController_t4134290561  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform SpawnController::PlayerTransform
	Transform_t3275118058 * ___PlayerTransform_2;
	// UnityEngine.Transform[] SpawnController::Positions
	TransformU5BU5D_t3764228911* ___Positions_3;
	// UnityEngine.Transform[] SpawnController::NPCSTransform
	TransformU5BU5D_t3764228911* ___NPCSTransform_4;
	// UnityEngine.GameObject SpawnController::PlayerObject
	GameObject_t1756533147 * ___PlayerObject_5;
	// UnityEngine.GameObject SpawnController::NPCs
	GameObject_t1756533147 * ___NPCs_6;
	// UnityEngine.Material[] SpawnController::skin
	MaterialU5BU5D_t3123989686* ___skin_7;
	// UnityEngine.Transform SpawnController::Fonte
	Transform_t3275118058 * ___Fonte_8;
	// System.Single SpawnController::PlayerDist
	float ___PlayerDist_9;
	// System.Single[] SpawnController::NPCDist
	SingleU5BU5D_t577127397* ___NPCDist_10;
	// System.Int32 SpawnController::RandomPosition
	int32_t ___RandomPosition_11;

public:
	inline static int32_t get_offset_of_PlayerTransform_2() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___PlayerTransform_2)); }
	inline Transform_t3275118058 * get_PlayerTransform_2() const { return ___PlayerTransform_2; }
	inline Transform_t3275118058 ** get_address_of_PlayerTransform_2() { return &___PlayerTransform_2; }
	inline void set_PlayerTransform_2(Transform_t3275118058 * value)
	{
		___PlayerTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerTransform_2, value);
	}

	inline static int32_t get_offset_of_Positions_3() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___Positions_3)); }
	inline TransformU5BU5D_t3764228911* get_Positions_3() const { return ___Positions_3; }
	inline TransformU5BU5D_t3764228911** get_address_of_Positions_3() { return &___Positions_3; }
	inline void set_Positions_3(TransformU5BU5D_t3764228911* value)
	{
		___Positions_3 = value;
		Il2CppCodeGenWriteBarrier(&___Positions_3, value);
	}

	inline static int32_t get_offset_of_NPCSTransform_4() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___NPCSTransform_4)); }
	inline TransformU5BU5D_t3764228911* get_NPCSTransform_4() const { return ___NPCSTransform_4; }
	inline TransformU5BU5D_t3764228911** get_address_of_NPCSTransform_4() { return &___NPCSTransform_4; }
	inline void set_NPCSTransform_4(TransformU5BU5D_t3764228911* value)
	{
		___NPCSTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___NPCSTransform_4, value);
	}

	inline static int32_t get_offset_of_PlayerObject_5() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___PlayerObject_5)); }
	inline GameObject_t1756533147 * get_PlayerObject_5() const { return ___PlayerObject_5; }
	inline GameObject_t1756533147 ** get_address_of_PlayerObject_5() { return &___PlayerObject_5; }
	inline void set_PlayerObject_5(GameObject_t1756533147 * value)
	{
		___PlayerObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerObject_5, value);
	}

	inline static int32_t get_offset_of_NPCs_6() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___NPCs_6)); }
	inline GameObject_t1756533147 * get_NPCs_6() const { return ___NPCs_6; }
	inline GameObject_t1756533147 ** get_address_of_NPCs_6() { return &___NPCs_6; }
	inline void set_NPCs_6(GameObject_t1756533147 * value)
	{
		___NPCs_6 = value;
		Il2CppCodeGenWriteBarrier(&___NPCs_6, value);
	}

	inline static int32_t get_offset_of_skin_7() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___skin_7)); }
	inline MaterialU5BU5D_t3123989686* get_skin_7() const { return ___skin_7; }
	inline MaterialU5BU5D_t3123989686** get_address_of_skin_7() { return &___skin_7; }
	inline void set_skin_7(MaterialU5BU5D_t3123989686* value)
	{
		___skin_7 = value;
		Il2CppCodeGenWriteBarrier(&___skin_7, value);
	}

	inline static int32_t get_offset_of_Fonte_8() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___Fonte_8)); }
	inline Transform_t3275118058 * get_Fonte_8() const { return ___Fonte_8; }
	inline Transform_t3275118058 ** get_address_of_Fonte_8() { return &___Fonte_8; }
	inline void set_Fonte_8(Transform_t3275118058 * value)
	{
		___Fonte_8 = value;
		Il2CppCodeGenWriteBarrier(&___Fonte_8, value);
	}

	inline static int32_t get_offset_of_PlayerDist_9() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___PlayerDist_9)); }
	inline float get_PlayerDist_9() const { return ___PlayerDist_9; }
	inline float* get_address_of_PlayerDist_9() { return &___PlayerDist_9; }
	inline void set_PlayerDist_9(float value)
	{
		___PlayerDist_9 = value;
	}

	inline static int32_t get_offset_of_NPCDist_10() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___NPCDist_10)); }
	inline SingleU5BU5D_t577127397* get_NPCDist_10() const { return ___NPCDist_10; }
	inline SingleU5BU5D_t577127397** get_address_of_NPCDist_10() { return &___NPCDist_10; }
	inline void set_NPCDist_10(SingleU5BU5D_t577127397* value)
	{
		___NPCDist_10 = value;
		Il2CppCodeGenWriteBarrier(&___NPCDist_10, value);
	}

	inline static int32_t get_offset_of_RandomPosition_11() { return static_cast<int32_t>(offsetof(SpawnController_t4134290561, ___RandomPosition_11)); }
	inline int32_t get_RandomPosition_11() const { return ___RandomPosition_11; }
	inline int32_t* get_address_of_RandomPosition_11() { return &___RandomPosition_11; }
	inline void set_RandomPosition_11(int32_t value)
	{
		___RandomPosition_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
