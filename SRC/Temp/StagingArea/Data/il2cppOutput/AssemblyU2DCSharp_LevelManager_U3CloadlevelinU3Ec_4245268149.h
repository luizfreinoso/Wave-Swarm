﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// LevelManager
struct LevelManager_t3355282079;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager/<loadlevelin>c__Iterator1
struct  U3CloadlevelinU3Ec__Iterator1_t4245268149  : public Il2CppObject
{
public:
	// System.Single LevelManager/<loadlevelin>c__Iterator1::seconds
	float ___seconds_0;
	// System.String LevelManager/<loadlevelin>c__Iterator1::levelname
	String_t* ___levelname_1;
	// LevelManager LevelManager/<loadlevelin>c__Iterator1::$this
	LevelManager_t3355282079 * ___U24this_2;
	// System.Object LevelManager/<loadlevelin>c__Iterator1::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean LevelManager/<loadlevelin>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 LevelManager/<loadlevelin>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_seconds_0() { return static_cast<int32_t>(offsetof(U3CloadlevelinU3Ec__Iterator1_t4245268149, ___seconds_0)); }
	inline float get_seconds_0() const { return ___seconds_0; }
	inline float* get_address_of_seconds_0() { return &___seconds_0; }
	inline void set_seconds_0(float value)
	{
		___seconds_0 = value;
	}

	inline static int32_t get_offset_of_levelname_1() { return static_cast<int32_t>(offsetof(U3CloadlevelinU3Ec__Iterator1_t4245268149, ___levelname_1)); }
	inline String_t* get_levelname_1() const { return ___levelname_1; }
	inline String_t** get_address_of_levelname_1() { return &___levelname_1; }
	inline void set_levelname_1(String_t* value)
	{
		___levelname_1 = value;
		Il2CppCodeGenWriteBarrier(&___levelname_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CloadlevelinU3Ec__Iterator1_t4245268149, ___U24this_2)); }
	inline LevelManager_t3355282079 * get_U24this_2() const { return ___U24this_2; }
	inline LevelManager_t3355282079 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(LevelManager_t3355282079 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CloadlevelinU3Ec__Iterator1_t4245268149, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CloadlevelinU3Ec__Iterator1_t4245268149, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CloadlevelinU3Ec__Iterator1_t4245268149, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
