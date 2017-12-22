#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControl
struct  PlayerControl_t792727354  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator PlayerControl::MeuAnimador
	Animator_t69676727 * ___MeuAnimador_2;
	// System.Single PlayerControl::JumpForce
	float ___JumpForce_3;
	// System.Boolean PlayerControl::canJump
	bool ___canJump_4;
	// System.Single PlayerControl::JumpWait
	float ___JumpWait_5;
	// System.Single PlayerControl::WalkSpeed
	float ___WalkSpeed_6;
	// UnityEngine.Transform PlayerControl::Fonte
	Transform_t3275118058 * ___Fonte_7;
	// UnityEngine.Vector3 PlayerControl::Direction
	Vector3_t2243707580  ___Direction_8;
	// UnityEngine.GameObject PlayerControl::isgrounded
	GameObject_t1756533147 * ___isgrounded_9;
	// UnityEngine.GameObject PlayerControl::levelManager
	GameObject_t1756533147 * ___levelManager_10;
	// UnityEngine.GameObject PlayerControl::Particles
	GameObject_t1756533147 * ___Particles_11;
	// System.Single PlayerControl::distToGround
	float ___distToGround_12;
	// System.Boolean PlayerControl::notjumping
	bool ___notjumping_13;
	// System.Boolean PlayerControl::gameisRunning
	bool ___gameisRunning_14;
	// System.Boolean PlayerControl::hasbeenhitten
	bool ___hasbeenhitten_15;
	// System.Single PlayerControl::particlecollisionforce
	float ___particlecollisionforce_16;
	// UnityEngine.Vector3 PlayerControl::DirectionToFountain
	Vector3_t2243707580  ___DirectionToFountain_19;
	// System.Boolean PlayerControl::isPlayer
	bool ___isPlayer_20;
	// UnityEngine.RaycastHit PlayerControl::hit
	RaycastHit_t87180320  ___hit_21;
	// UnityEngine.AudioSource PlayerControl::JumpSound
	AudioSource_t1135106623 * ___JumpSound_22;

public:
	inline static int32_t get_offset_of_MeuAnimador_2() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___MeuAnimador_2)); }
	inline Animator_t69676727 * get_MeuAnimador_2() const { return ___MeuAnimador_2; }
	inline Animator_t69676727 ** get_address_of_MeuAnimador_2() { return &___MeuAnimador_2; }
	inline void set_MeuAnimador_2(Animator_t69676727 * value)
	{
		___MeuAnimador_2 = value;
		Il2CppCodeGenWriteBarrier(&___MeuAnimador_2, value);
	}

	inline static int32_t get_offset_of_JumpForce_3() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___JumpForce_3)); }
	inline float get_JumpForce_3() const { return ___JumpForce_3; }
	inline float* get_address_of_JumpForce_3() { return &___JumpForce_3; }
	inline void set_JumpForce_3(float value)
	{
		___JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_canJump_4() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___canJump_4)); }
	inline bool get_canJump_4() const { return ___canJump_4; }
	inline bool* get_address_of_canJump_4() { return &___canJump_4; }
	inline void set_canJump_4(bool value)
	{
		___canJump_4 = value;
	}

	inline static int32_t get_offset_of_JumpWait_5() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___JumpWait_5)); }
	inline float get_JumpWait_5() const { return ___JumpWait_5; }
	inline float* get_address_of_JumpWait_5() { return &___JumpWait_5; }
	inline void set_JumpWait_5(float value)
	{
		___JumpWait_5 = value;
	}

	inline static int32_t get_offset_of_WalkSpeed_6() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___WalkSpeed_6)); }
	inline float get_WalkSpeed_6() const { return ___WalkSpeed_6; }
	inline float* get_address_of_WalkSpeed_6() { return &___WalkSpeed_6; }
	inline void set_WalkSpeed_6(float value)
	{
		___WalkSpeed_6 = value;
	}

	inline static int32_t get_offset_of_Fonte_7() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___Fonte_7)); }
	inline Transform_t3275118058 * get_Fonte_7() const { return ___Fonte_7; }
	inline Transform_t3275118058 ** get_address_of_Fonte_7() { return &___Fonte_7; }
	inline void set_Fonte_7(Transform_t3275118058 * value)
	{
		___Fonte_7 = value;
		Il2CppCodeGenWriteBarrier(&___Fonte_7, value);
	}

	inline static int32_t get_offset_of_Direction_8() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___Direction_8)); }
	inline Vector3_t2243707580  get_Direction_8() const { return ___Direction_8; }
	inline Vector3_t2243707580 * get_address_of_Direction_8() { return &___Direction_8; }
	inline void set_Direction_8(Vector3_t2243707580  value)
	{
		___Direction_8 = value;
	}

	inline static int32_t get_offset_of_isgrounded_9() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___isgrounded_9)); }
	inline GameObject_t1756533147 * get_isgrounded_9() const { return ___isgrounded_9; }
	inline GameObject_t1756533147 ** get_address_of_isgrounded_9() { return &___isgrounded_9; }
	inline void set_isgrounded_9(GameObject_t1756533147 * value)
	{
		___isgrounded_9 = value;
		Il2CppCodeGenWriteBarrier(&___isgrounded_9, value);
	}

	inline static int32_t get_offset_of_levelManager_10() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___levelManager_10)); }
	inline GameObject_t1756533147 * get_levelManager_10() const { return ___levelManager_10; }
	inline GameObject_t1756533147 ** get_address_of_levelManager_10() { return &___levelManager_10; }
	inline void set_levelManager_10(GameObject_t1756533147 * value)
	{
		___levelManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_10, value);
	}

	inline static int32_t get_offset_of_Particles_11() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___Particles_11)); }
	inline GameObject_t1756533147 * get_Particles_11() const { return ___Particles_11; }
	inline GameObject_t1756533147 ** get_address_of_Particles_11() { return &___Particles_11; }
	inline void set_Particles_11(GameObject_t1756533147 * value)
	{
		___Particles_11 = value;
		Il2CppCodeGenWriteBarrier(&___Particles_11, value);
	}

	inline static int32_t get_offset_of_distToGround_12() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___distToGround_12)); }
	inline float get_distToGround_12() const { return ___distToGround_12; }
	inline float* get_address_of_distToGround_12() { return &___distToGround_12; }
	inline void set_distToGround_12(float value)
	{
		___distToGround_12 = value;
	}

	inline static int32_t get_offset_of_notjumping_13() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___notjumping_13)); }
	inline bool get_notjumping_13() const { return ___notjumping_13; }
	inline bool* get_address_of_notjumping_13() { return &___notjumping_13; }
	inline void set_notjumping_13(bool value)
	{
		___notjumping_13 = value;
	}

	inline static int32_t get_offset_of_gameisRunning_14() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___gameisRunning_14)); }
	inline bool get_gameisRunning_14() const { return ___gameisRunning_14; }
	inline bool* get_address_of_gameisRunning_14() { return &___gameisRunning_14; }
	inline void set_gameisRunning_14(bool value)
	{
		___gameisRunning_14 = value;
	}

	inline static int32_t get_offset_of_hasbeenhitten_15() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___hasbeenhitten_15)); }
	inline bool get_hasbeenhitten_15() const { return ___hasbeenhitten_15; }
	inline bool* get_address_of_hasbeenhitten_15() { return &___hasbeenhitten_15; }
	inline void set_hasbeenhitten_15(bool value)
	{
		___hasbeenhitten_15 = value;
	}

	inline static int32_t get_offset_of_particlecollisionforce_16() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___particlecollisionforce_16)); }
	inline float get_particlecollisionforce_16() const { return ___particlecollisionforce_16; }
	inline float* get_address_of_particlecollisionforce_16() { return &___particlecollisionforce_16; }
	inline void set_particlecollisionforce_16(float value)
	{
		___particlecollisionforce_16 = value;
	}

	inline static int32_t get_offset_of_DirectionToFountain_19() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___DirectionToFountain_19)); }
	inline Vector3_t2243707580  get_DirectionToFountain_19() const { return ___DirectionToFountain_19; }
	inline Vector3_t2243707580 * get_address_of_DirectionToFountain_19() { return &___DirectionToFountain_19; }
	inline void set_DirectionToFountain_19(Vector3_t2243707580  value)
	{
		___DirectionToFountain_19 = value;
	}

	inline static int32_t get_offset_of_isPlayer_20() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___isPlayer_20)); }
	inline bool get_isPlayer_20() const { return ___isPlayer_20; }
	inline bool* get_address_of_isPlayer_20() { return &___isPlayer_20; }
	inline void set_isPlayer_20(bool value)
	{
		___isPlayer_20 = value;
	}

	inline static int32_t get_offset_of_hit_21() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___hit_21)); }
	inline RaycastHit_t87180320  get_hit_21() const { return ___hit_21; }
	inline RaycastHit_t87180320 * get_address_of_hit_21() { return &___hit_21; }
	inline void set_hit_21(RaycastHit_t87180320  value)
	{
		___hit_21 = value;
	}

	inline static int32_t get_offset_of_JumpSound_22() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354, ___JumpSound_22)); }
	inline AudioSource_t1135106623 * get_JumpSound_22() const { return ___JumpSound_22; }
	inline AudioSource_t1135106623 ** get_address_of_JumpSound_22() { return &___JumpSound_22; }
	inline void set_JumpSound_22(AudioSource_t1135106623 * value)
	{
		___JumpSound_22 = value;
		Il2CppCodeGenWriteBarrier(&___JumpSound_22, value);
	}
};

struct PlayerControl_t792727354_StaticFields
{
public:
	// System.Boolean PlayerControl::GameFinished
	bool ___GameFinished_17;
	// System.Boolean PlayerControl::hasended
	bool ___hasended_18;
	// UnityEngine.GameObject PlayerControl::ImTheWinner
	GameObject_t1756533147 * ___ImTheWinner_23;

public:
	inline static int32_t get_offset_of_GameFinished_17() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354_StaticFields, ___GameFinished_17)); }
	inline bool get_GameFinished_17() const { return ___GameFinished_17; }
	inline bool* get_address_of_GameFinished_17() { return &___GameFinished_17; }
	inline void set_GameFinished_17(bool value)
	{
		___GameFinished_17 = value;
	}

	inline static int32_t get_offset_of_hasended_18() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354_StaticFields, ___hasended_18)); }
	inline bool get_hasended_18() const { return ___hasended_18; }
	inline bool* get_address_of_hasended_18() { return &___hasended_18; }
	inline void set_hasended_18(bool value)
	{
		___hasended_18 = value;
	}

	inline static int32_t get_offset_of_ImTheWinner_23() { return static_cast<int32_t>(offsetof(PlayerControl_t792727354_StaticFields, ___ImTheWinner_23)); }
	inline GameObject_t1756533147 * get_ImTheWinner_23() const { return ___ImTheWinner_23; }
	inline GameObject_t1756533147 ** get_address_of_ImTheWinner_23() { return &___ImTheWinner_23; }
	inline void set_ImTheWinner_23(GameObject_t1756533147 * value)
	{
		___ImTheWinner_23 = value;
		Il2CppCodeGenWriteBarrier(&___ImTheWinner_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
