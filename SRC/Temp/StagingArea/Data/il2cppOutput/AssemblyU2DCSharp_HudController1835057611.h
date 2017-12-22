#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Transform
struct Transform_t3275118058;
// SpawnController
struct SpawnController_t4134290561;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HudController
struct  HudController_t1835057611  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text HudController::time
	Text_t356221433 * ___time_2;
	// UnityEngine.UI.Text HudController::position
	Text_t356221433 * ___position_3;
	// UnityEngine.UI.Text HudController::finalPosition
	Text_t356221433 * ___finalPosition_4;
	// UnityEngine.UI.Text HudController::finalTime
	Text_t356221433 * ___finalTime_5;
	// UnityEngine.UI.Text HudController::Distance
	Text_t356221433 * ___Distance_6;
	// System.Single HudController::distance
	float ___distance_7;
	// UnityEngine.Transform HudController::Player
	Transform_t3275118058 * ___Player_8;
	// UnityEngine.Transform HudController::Fountain
	Transform_t3275118058 * ___Fountain_9;
	// SpawnController HudController::Spawner
	SpawnController_t4134290561 * ___Spawner_10;
	// System.Single HudController::TimeWhenFinished
	float ___TimeWhenFinished_11;
	// System.Int32 HudController::colocacao
	int32_t ___colocacao_12;
	// System.Boolean HudController::panelshowed
	bool ___panelshowed_13;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___time_2)); }
	inline Text_t356221433 * get_time_2() const { return ___time_2; }
	inline Text_t356221433 ** get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(Text_t356221433 * value)
	{
		___time_2 = value;
		Il2CppCodeGenWriteBarrier(&___time_2, value);
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___position_3)); }
	inline Text_t356221433 * get_position_3() const { return ___position_3; }
	inline Text_t356221433 ** get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Text_t356221433 * value)
	{
		___position_3 = value;
		Il2CppCodeGenWriteBarrier(&___position_3, value);
	}

	inline static int32_t get_offset_of_finalPosition_4() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___finalPosition_4)); }
	inline Text_t356221433 * get_finalPosition_4() const { return ___finalPosition_4; }
	inline Text_t356221433 ** get_address_of_finalPosition_4() { return &___finalPosition_4; }
	inline void set_finalPosition_4(Text_t356221433 * value)
	{
		___finalPosition_4 = value;
		Il2CppCodeGenWriteBarrier(&___finalPosition_4, value);
	}

	inline static int32_t get_offset_of_finalTime_5() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___finalTime_5)); }
	inline Text_t356221433 * get_finalTime_5() const { return ___finalTime_5; }
	inline Text_t356221433 ** get_address_of_finalTime_5() { return &___finalTime_5; }
	inline void set_finalTime_5(Text_t356221433 * value)
	{
		___finalTime_5 = value;
		Il2CppCodeGenWriteBarrier(&___finalTime_5, value);
	}

	inline static int32_t get_offset_of_Distance_6() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___Distance_6)); }
	inline Text_t356221433 * get_Distance_6() const { return ___Distance_6; }
	inline Text_t356221433 ** get_address_of_Distance_6() { return &___Distance_6; }
	inline void set_Distance_6(Text_t356221433 * value)
	{
		___Distance_6 = value;
		Il2CppCodeGenWriteBarrier(&___Distance_6, value);
	}

	inline static int32_t get_offset_of_distance_7() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___distance_7)); }
	inline float get_distance_7() const { return ___distance_7; }
	inline float* get_address_of_distance_7() { return &___distance_7; }
	inline void set_distance_7(float value)
	{
		___distance_7 = value;
	}

	inline static int32_t get_offset_of_Player_8() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___Player_8)); }
	inline Transform_t3275118058 * get_Player_8() const { return ___Player_8; }
	inline Transform_t3275118058 ** get_address_of_Player_8() { return &___Player_8; }
	inline void set_Player_8(Transform_t3275118058 * value)
	{
		___Player_8 = value;
		Il2CppCodeGenWriteBarrier(&___Player_8, value);
	}

	inline static int32_t get_offset_of_Fountain_9() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___Fountain_9)); }
	inline Transform_t3275118058 * get_Fountain_9() const { return ___Fountain_9; }
	inline Transform_t3275118058 ** get_address_of_Fountain_9() { return &___Fountain_9; }
	inline void set_Fountain_9(Transform_t3275118058 * value)
	{
		___Fountain_9 = value;
		Il2CppCodeGenWriteBarrier(&___Fountain_9, value);
	}

	inline static int32_t get_offset_of_Spawner_10() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___Spawner_10)); }
	inline SpawnController_t4134290561 * get_Spawner_10() const { return ___Spawner_10; }
	inline SpawnController_t4134290561 ** get_address_of_Spawner_10() { return &___Spawner_10; }
	inline void set_Spawner_10(SpawnController_t4134290561 * value)
	{
		___Spawner_10 = value;
		Il2CppCodeGenWriteBarrier(&___Spawner_10, value);
	}

	inline static int32_t get_offset_of_TimeWhenFinished_11() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___TimeWhenFinished_11)); }
	inline float get_TimeWhenFinished_11() const { return ___TimeWhenFinished_11; }
	inline float* get_address_of_TimeWhenFinished_11() { return &___TimeWhenFinished_11; }
	inline void set_TimeWhenFinished_11(float value)
	{
		___TimeWhenFinished_11 = value;
	}

	inline static int32_t get_offset_of_colocacao_12() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___colocacao_12)); }
	inline int32_t get_colocacao_12() const { return ___colocacao_12; }
	inline int32_t* get_address_of_colocacao_12() { return &___colocacao_12; }
	inline void set_colocacao_12(int32_t value)
	{
		___colocacao_12 = value;
	}

	inline static int32_t get_offset_of_panelshowed_13() { return static_cast<int32_t>(offsetof(HudController_t1835057611, ___panelshowed_13)); }
	inline bool get_panelshowed_13() const { return ___panelshowed_13; }
	inline bool* get_address_of_panelshowed_13() { return &___panelshowed_13; }
	inline void set_panelshowed_13(bool value)
	{
		___panelshowed_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
