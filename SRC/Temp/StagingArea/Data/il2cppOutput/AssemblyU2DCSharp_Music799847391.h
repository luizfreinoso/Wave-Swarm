#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Music
struct  Music_t799847391  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip[] Music::LevelMusicChangeArray
	AudioClipU5BU5D_t2203355011* ___LevelMusicChangeArray_2;
	// UnityEngine.AudioSource Music::LevelMusic
	AudioSource_t1135106623 * ___LevelMusic_3;

public:
	inline static int32_t get_offset_of_LevelMusicChangeArray_2() { return static_cast<int32_t>(offsetof(Music_t799847391, ___LevelMusicChangeArray_2)); }
	inline AudioClipU5BU5D_t2203355011* get_LevelMusicChangeArray_2() const { return ___LevelMusicChangeArray_2; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_LevelMusicChangeArray_2() { return &___LevelMusicChangeArray_2; }
	inline void set_LevelMusicChangeArray_2(AudioClipU5BU5D_t2203355011* value)
	{
		___LevelMusicChangeArray_2 = value;
		Il2CppCodeGenWriteBarrier(&___LevelMusicChangeArray_2, value);
	}

	inline static int32_t get_offset_of_LevelMusic_3() { return static_cast<int32_t>(offsetof(Music_t799847391, ___LevelMusic_3)); }
	inline AudioSource_t1135106623 * get_LevelMusic_3() const { return ___LevelMusic_3; }
	inline AudioSource_t1135106623 ** get_address_of_LevelMusic_3() { return &___LevelMusic_3; }
	inline void set_LevelMusic_3(AudioSource_t1135106623 * value)
	{
		___LevelMusic_3 = value;
		Il2CppCodeGenWriteBarrier(&___LevelMusic_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
