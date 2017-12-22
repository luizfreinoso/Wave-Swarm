#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t297367283;
// Persistent
struct Persistent_t139579123;
// InstantiateOptions
struct InstantiateOptions_t2050787706;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundController
struct  SoundController_t1686593041  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider SoundController::MusicSlider
	Slider_t297367283 * ___MusicSlider_2;
	// UnityEngine.UI.Slider SoundController::MasterSoundSlider
	Slider_t297367283 * ___MasterSoundSlider_3;
	// Persistent SoundController::Persistente
	Persistent_t139579123 * ___Persistente_4;
	// InstantiateOptions SoundController::optionsinstance
	InstantiateOptions_t2050787706 * ___optionsinstance_5;

public:
	inline static int32_t get_offset_of_MusicSlider_2() { return static_cast<int32_t>(offsetof(SoundController_t1686593041, ___MusicSlider_2)); }
	inline Slider_t297367283 * get_MusicSlider_2() const { return ___MusicSlider_2; }
	inline Slider_t297367283 ** get_address_of_MusicSlider_2() { return &___MusicSlider_2; }
	inline void set_MusicSlider_2(Slider_t297367283 * value)
	{
		___MusicSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___MusicSlider_2, value);
	}

	inline static int32_t get_offset_of_MasterSoundSlider_3() { return static_cast<int32_t>(offsetof(SoundController_t1686593041, ___MasterSoundSlider_3)); }
	inline Slider_t297367283 * get_MasterSoundSlider_3() const { return ___MasterSoundSlider_3; }
	inline Slider_t297367283 ** get_address_of_MasterSoundSlider_3() { return &___MasterSoundSlider_3; }
	inline void set_MasterSoundSlider_3(Slider_t297367283 * value)
	{
		___MasterSoundSlider_3 = value;
		Il2CppCodeGenWriteBarrier(&___MasterSoundSlider_3, value);
	}

	inline static int32_t get_offset_of_Persistente_4() { return static_cast<int32_t>(offsetof(SoundController_t1686593041, ___Persistente_4)); }
	inline Persistent_t139579123 * get_Persistente_4() const { return ___Persistente_4; }
	inline Persistent_t139579123 ** get_address_of_Persistente_4() { return &___Persistente_4; }
	inline void set_Persistente_4(Persistent_t139579123 * value)
	{
		___Persistente_4 = value;
		Il2CppCodeGenWriteBarrier(&___Persistente_4, value);
	}

	inline static int32_t get_offset_of_optionsinstance_5() { return static_cast<int32_t>(offsetof(SoundController_t1686593041, ___optionsinstance_5)); }
	inline InstantiateOptions_t2050787706 * get_optionsinstance_5() const { return ___optionsinstance_5; }
	inline InstantiateOptions_t2050787706 ** get_address_of_optionsinstance_5() { return &___optionsinstance_5; }
	inline void set_optionsinstance_5(InstantiateOptions_t2050787706 * value)
	{
		___optionsinstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___optionsinstance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
