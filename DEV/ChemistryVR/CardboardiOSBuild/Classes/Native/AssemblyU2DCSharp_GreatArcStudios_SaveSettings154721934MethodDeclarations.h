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

// GreatArcStudios.SaveSettings
struct SaveSettings_t154721934;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GreatArcStudios.SaveSettings::.ctor()
extern "C"  void SaveSettings__ctor_m3749397527 (SaveSettings_t154721934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object GreatArcStudios.SaveSettings::createJSONOBJ(System.String)
extern "C"  Il2CppObject * SaveSettings_createJSONOBJ_m1477226623 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.SaveSettings::LoadGameSettings(System.String)
extern "C"  void SaveSettings_LoadGameSettings_m706915870 (SaveSettings_t154721934 * __this, String_t* ___readString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.SaveSettings::SaveGameSettings()
extern "C"  void SaveSettings_SaveGameSettings_m2053337605 (SaveSettings_t154721934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
