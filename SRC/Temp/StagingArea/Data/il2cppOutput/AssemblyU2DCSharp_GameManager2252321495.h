#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2252321495;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// HudController
struct HudController_t1835057611;
// SpawnController
struct SpawnController_t4134290561;
// Music
struct Music_t799847391;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera GameManager::PlayerCamera
	Camera_t189460977 * ___PlayerCamera_3;
	// UnityEngine.GameObject GameManager::EndWorldCamera
	GameObject_t1756533147 * ___EndWorldCamera_4;
	// UnityEngine.GameObject GameManager::EndGamePanel
	GameObject_t1756533147 * ___EndGamePanel_5;
	// HudController GameManager::Hud
	HudController_t1835057611 * ___Hud_6;
	// UnityEngine.GameObject GameManager::LevelManager
	GameObject_t1756533147 * ___LevelManager_7;
	// UnityEngine.GameObject GameManager::persistente
	GameObject_t1756533147 * ___persistente_8;
	// UnityEngine.GameObject GameManager::MainCanvas
	GameObject_t1756533147 * ___MainCanvas_9;
	// SpawnController GameManager::Spawner
	SpawnController_t4134290561 * ___Spawner_10;
	// Music GameManager::musicPlayer
	Music_t799847391 * ___musicPlayer_11;

public:
	inline static int32_t get_offset_of_PlayerCamera_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___PlayerCamera_3)); }
	inline Camera_t189460977 * get_PlayerCamera_3() const { return ___PlayerCamera_3; }
	inline Camera_t189460977 ** get_address_of_PlayerCamera_3() { return &___PlayerCamera_3; }
	inline void set_PlayerCamera_3(Camera_t189460977 * value)
	{
		___PlayerCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerCamera_3, value);
	}

	inline static int32_t get_offset_of_EndWorldCamera_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___EndWorldCamera_4)); }
	inline GameObject_t1756533147 * get_EndWorldCamera_4() const { return ___EndWorldCamera_4; }
	inline GameObject_t1756533147 ** get_address_of_EndWorldCamera_4() { return &___EndWorldCamera_4; }
	inline void set_EndWorldCamera_4(GameObject_t1756533147 * value)
	{
		___EndWorldCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___EndWorldCamera_4, value);
	}

	inline static int32_t get_offset_of_EndGamePanel_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___EndGamePanel_5)); }
	inline GameObject_t1756533147 * get_EndGamePanel_5() const { return ___EndGamePanel_5; }
	inline GameObject_t1756533147 ** get_address_of_EndGamePanel_5() { return &___EndGamePanel_5; }
	inline void set_EndGamePanel_5(GameObject_t1756533147 * value)
	{
		___EndGamePanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___EndGamePanel_5, value);
	}

	inline static int32_t get_offset_of_Hud_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___Hud_6)); }
	inline HudController_t1835057611 * get_Hud_6() const { return ___Hud_6; }
	inline HudController_t1835057611 ** get_address_of_Hud_6() { return &___Hud_6; }
	inline void set_Hud_6(HudController_t1835057611 * value)
	{
		___Hud_6 = value;
		Il2CppCodeGenWriteBarrier(&___Hud_6, value);
	}

	inline static int32_t get_offset_of_LevelManager_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___LevelManager_7)); }
	inline GameObject_t1756533147 * get_LevelManager_7() const { return ___LevelManager_7; }
	inline GameObject_t1756533147 ** get_address_of_LevelManager_7() { return &___LevelManager_7; }
	inline void set_LevelManager_7(GameObject_t1756533147 * value)
	{
		___LevelManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___LevelManager_7, value);
	}

	inline static int32_t get_offset_of_persistente_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___persistente_8)); }
	inline GameObject_t1756533147 * get_persistente_8() const { return ___persistente_8; }
	inline GameObject_t1756533147 ** get_address_of_persistente_8() { return &___persistente_8; }
	inline void set_persistente_8(GameObject_t1756533147 * value)
	{
		___persistente_8 = value;
		Il2CppCodeGenWriteBarrier(&___persistente_8, value);
	}

	inline static int32_t get_offset_of_MainCanvas_9() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___MainCanvas_9)); }
	inline GameObject_t1756533147 * get_MainCanvas_9() const { return ___MainCanvas_9; }
	inline GameObject_t1756533147 ** get_address_of_MainCanvas_9() { return &___MainCanvas_9; }
	inline void set_MainCanvas_9(GameObject_t1756533147 * value)
	{
		___MainCanvas_9 = value;
		Il2CppCodeGenWriteBarrier(&___MainCanvas_9, value);
	}

	inline static int32_t get_offset_of_Spawner_10() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___Spawner_10)); }
	inline SpawnController_t4134290561 * get_Spawner_10() const { return ___Spawner_10; }
	inline SpawnController_t4134290561 ** get_address_of_Spawner_10() { return &___Spawner_10; }
	inline void set_Spawner_10(SpawnController_t4134290561 * value)
	{
		___Spawner_10 = value;
		Il2CppCodeGenWriteBarrier(&___Spawner_10, value);
	}

	inline static int32_t get_offset_of_musicPlayer_11() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___musicPlayer_11)); }
	inline Music_t799847391 * get_musicPlayer_11() const { return ___musicPlayer_11; }
	inline Music_t799847391 ** get_address_of_musicPlayer_11() { return &___musicPlayer_11; }
	inline void set_musicPlayer_11(Music_t799847391 * value)
	{
		___musicPlayer_11 = value;
		Il2CppCodeGenWriteBarrier(&___musicPlayer_11, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// GameManager GameManager::SUP
	GameManager_t2252321495 * ___SUP_2;

public:
	inline static int32_t get_offset_of_SUP_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___SUP_2)); }
	inline GameManager_t2252321495 * get_SUP_2() const { return ___SUP_2; }
	inline GameManager_t2252321495 ** get_address_of_SUP_2() { return &___SUP_2; }
	inline void set_SUP_2(GameManager_t2252321495 * value)
	{
		___SUP_2 = value;
		Il2CppCodeGenWriteBarrier(&___SUP_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
