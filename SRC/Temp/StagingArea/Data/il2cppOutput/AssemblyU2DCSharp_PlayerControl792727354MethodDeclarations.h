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

// PlayerControl
struct PlayerControl_t792727354;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PlayerControl::.ctor()
extern "C"  void PlayerControl__ctor_m4206630767 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Awake()
extern "C"  void PlayerControl_Awake_m1232832358 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Start()
extern "C"  void PlayerControl_Start_m3254241707 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::PlayerMoviment()
extern "C"  void PlayerControl_PlayerMoviment_m1923800299 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Update()
extern "C"  void PlayerControl_Update_m3533035396 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::NPCMoviment()
extern "C"  void PlayerControl_NPCMoviment_m3940964857 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::JumpTimer()
extern "C"  Il2CppObject * PlayerControl_JumpTimer_m168636832 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerControl::isGrounded()
extern "C"  bool PlayerControl_isGrounded_m2079279717 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerControl_OnTriggerEnter_m3934379291 (PlayerControl_t792727354 * __this, Collider_t3497673348 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::Gamefinished(UnityEngine.Transform)
extern "C"  void PlayerControl_Gamefinished_m3363212098 (PlayerControl_t792727354 * __this, Transform_t3275118058 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::OnParticleCollision(UnityEngine.GameObject)
extern "C"  void PlayerControl_OnParticleCollision_m2346908830 (PlayerControl_t792727354 * __this, GameObject_t1756533147 * ___Other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerControl::cancollide()
extern "C"  Il2CppObject * PlayerControl_cancollide_m2200980961 (PlayerControl_t792727354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControl::.cctor()
extern "C"  void PlayerControl__cctor_m596885520 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
