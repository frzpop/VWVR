﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// UnityEngine.Application/AdvertisingIdentifierCallback
struct AdvertisingIdentifierCallback_t3961879090;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform1574985880.h"
#include "UnityEngine_UnityEngine_ApplicationInstallMode1641205467.h"
#include "UnityEngine_UnityEngine_ApplicationSandboxType2723104670.h"
#include "UnityEngine_UnityEngine_Application_AdvertisingIde3961879090.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_LogType3529269451.h"
#include "UnityEngine_UnityEngine_NetworkReachability1023863250.h"

// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C"  bool Application_get_isPlaying_m987993960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m1279348309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isWebPlayer()
extern "C"  bool Application_get_isWebPlayer_m4016870031 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C"  int32_t Application_get_platform_m2918632856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
extern "C"  bool Application_get_isMobilePlatform_m1741446941 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasProLicense()
extern "C"  bool Application_HasProLicense_m2584894363 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::HasAdvancedLicense()
extern "C"  bool Application_HasAdvancedLicense_m3815753722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::get_isHumanControllingUs()
extern "C"  bool Application_get_isHumanControllingUs_m2619103564 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m2554537447 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_unityVersion()
extern "C"  String_t* Application_get_unityVersion_m3443350436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_version()
extern "C"  String_t* Application_get_version_m3762569241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_bundleIdentifier()
extern "C"  String_t* Application_get_bundleIdentifier_m3578253516 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ApplicationInstallMode UnityEngine.Application::get_installMode()
extern "C"  int32_t Application_get_installMode_m3612203238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ApplicationSandboxType UnityEngine.Application::get_sandboxType()
extern "C"  int32_t Application_get_sandboxType_m784454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_cloudProjectId()
extern "C"  String_t* Application_get_cloudProjectId_m444058720 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::RequestAdvertisingIdentifierAsync(UnityEngine.Application/AdvertisingIdentifierCallback)
extern "C"  bool Application_RequestAdvertisingIdentifierAsync_m19925675 (Il2CppObject * __this /* static, unused */, AdvertisingIdentifierCallback_t3961879090 * ___delegateMethod0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
extern "C"  void Application_set_targetFrameRate_m498658007 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::CallLogCallback(System.String,System.String,UnityEngine.LogType,System.Boolean)
extern "C"  void Application_CallLogCallback_m419361836 (Il2CppObject * __this /* static, unused */, String_t* ___logString0, String_t* ___stackTrace1, int32_t ___type2, bool ___invokedOnMainThread3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
extern "C"  int32_t Application_get_internetReachability_m379356375 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::LoadLevel(System.String)
extern "C"  void Application_LoadLevel_m2722573885 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;