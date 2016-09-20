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

// TextureLoader
struct TextureLoader_t887857390;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void TextureLoader::.ctor()
extern "C"  void TextureLoader__ctor_m220851261 (TextureLoader_t887857390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureLoader::Awake()
extern "C"  void TextureLoader_Awake_m458456480 (TextureLoader_t887857390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureLoader::Update()
extern "C"  void TextureLoader_Update_m4278283888 (TextureLoader_t887857390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TextureLoader::LoadTexures(System.String)
extern "C"  Il2CppObject * TextureLoader_LoadTexures_m1497035091 (TextureLoader_t887857390 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureLoader::Loading(System.Boolean)
extern "C"  void TextureLoader_Loading_m1014081102 (TextureLoader_t887857390 * __this, bool ___loading0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TextureLoader::DelayedDestroy(System.Single)
extern "C"  Il2CppObject * TextureLoader_DelayedDestroy_m2738584116 (TextureLoader_t887857390 * __this, float ___dur0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TextureLoader::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float TextureLoader_Remap_m3542273167 (TextureLoader_t887857390 * __this, float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextureLoader::<Update>m__5()
extern "C"  void TextureLoader_U3CUpdateU3Em__5_m1450765320 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
