#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LevelManager
struct LevelManager_t3355282079;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::savelastlevel()
extern "C"  void LevelManager_savelastlevel_m3197650171 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3014183236 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLastLevel()
extern "C"  void LevelManager_LoadLastLevel_m2726435458 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::StartAgain()
extern "C"  void LevelManager_StartAgain_m41098030 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::ReloadLevel()
extern "C"  void LevelManager_ReloadLevel_m386947765 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m4205287453 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevelin(System.Single)
extern "C"  void LevelManager_LoadNextLevelin_m424165799 (LevelManager_t3355282079 * __this, float ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LevelManager::loadin(System.Single)
extern "C"  Il2CppObject * LevelManager_loadin_m4252257410 (LevelManager_t3355282079 * __this, float ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevelin(System.Single,System.String)
extern "C"  void LevelManager_LoadLevelin_m567155074 (LevelManager_t3355282079 * __this, float ___seconds0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LevelManager::loadlevelin(System.Single,System.String)
extern "C"  Il2CppObject * LevelManager_loadlevelin_m1943990022 (LevelManager_t3355282079 * __this, float ___seconds0, String_t* ___levelname1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
