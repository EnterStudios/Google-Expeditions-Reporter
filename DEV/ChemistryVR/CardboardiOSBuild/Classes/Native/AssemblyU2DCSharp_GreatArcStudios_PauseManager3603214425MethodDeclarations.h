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

// GreatArcStudios.PauseManager
struct PauseManager_t3603214425;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void GreatArcStudios.PauseManager::.ctor()
extern "C"  void PauseManager__ctor_m2840266820 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::Start()
extern "C"  void PauseManager_Start_m706746952 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::Restart()
extern "C"  void PauseManager_Restart_m1591073833 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::Resume()
extern "C"  void PauseManager_Resume_m3690898567 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::quitOptions()
extern "C"  void PauseManager_quitOptions_m1949559711 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::quitGame()
extern "C"  void PauseManager_quitGame_m475416529 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::quitCancel()
extern "C"  void PauseManager_quitCancel_m3619007333 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::returnToMenu()
extern "C"  void PauseManager_returnToMenu_m1854443862 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::Update()
extern "C"  void PauseManager_Update_m1822454603 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::Audio()
extern "C"  void PauseManager_Audio_m3914117554 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::audioIn()
extern "C"  void PauseManager_audioIn_m1689701995 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateMasterVol(System.Single)
extern "C"  void PauseManager_updateMasterVol_m1791263415 (PauseManager_t3603214425 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateMusicVol(System.Single)
extern "C"  void PauseManager_updateMusicVol_m793993868 (PauseManager_t3603214425 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateEffectsVol(System.Single)
extern "C"  void PauseManager_updateEffectsVol_m2520502659 (PauseManager_t3603214425 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::applyAudio()
extern "C"  void PauseManager_applyAudio_m4200426852 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GreatArcStudios.PauseManager::applyAudioMain()
extern "C"  Il2CppObject * PauseManager_applyAudioMain_m4038978961 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::cancelAudio()
extern "C"  void PauseManager_cancelAudio_m218657008 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GreatArcStudios.PauseManager::cancelAudioMain()
extern "C"  Il2CppObject * PauseManager_cancelAudioMain_m2226494151 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::Video()
extern "C"  void PauseManager_Video_m1504942575 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::videoIn()
extern "C"  void PauseManager_videoIn_m3800497932 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::cancelVideo()
extern "C"  void PauseManager_cancelVideo_m3882311085 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GreatArcStudios.PauseManager::cancelVideoMain()
extern "C"  Il2CppObject * PauseManager_cancelVideoMain_m4209622988 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::apply()
extern "C"  void PauseManager_apply_m1729599156 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GreatArcStudios.PauseManager::applyVideo()
extern "C"  Il2CppObject * PauseManager_applyVideo_m881275909 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::toggleVSync(System.Boolean)
extern "C"  void PauseManager_toggleVSync_m2385024452 (PauseManager_t3603214425 * __this, bool ___B0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateTreeMeshAmt(System.Int32)
extern "C"  void PauseManager_updateTreeMeshAmt_m3660645699 (PauseManager_t3603214425 * __this, int32_t ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::lodBias(System.Single)
extern "C"  void PauseManager_lodBias_m1723314809 (PauseManager_t3603214425 * __this, float ___LoDBias0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateRenderDist(System.Single)
extern "C"  void PauseManager_updateRenderDist_m2432906144 (PauseManager_t3603214425 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateTex(System.Single)
extern "C"  void PauseManager_updateTex_m3433500059 (PauseManager_t3603214425 * __this, float ___qual0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateShadowDistance(System.Single)
extern "C"  void PauseManager_updateShadowDistance_m1025359439 (PauseManager_t3603214425 * __this, float ___dist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::treeMaxLod(System.Single)
extern "C"  void PauseManager_treeMaxLod_m564460620 (PauseManager_t3603214425 * __this, float ___qual0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateTerrainLod(System.Single)
extern "C"  void PauseManager_updateTerrainLod_m642367824 (PauseManager_t3603214425 * __this, float ___qual0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateFOV(System.Single)
extern "C"  void PauseManager_updateFOV_m232360737 (PauseManager_t3603214425 * __this, float ___fov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::toggleDOF(System.Boolean)
extern "C"  void PauseManager_toggleDOF_m1342894448 (PauseManager_t3603214425 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::toggleAO(System.Boolean)
extern "C"  void PauseManager_toggleAO_m2489023441 (PauseManager_t3603214425 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setFullScreen(System.Boolean)
extern "C"  void PauseManager_setFullScreen_m509548072 (PauseManager_t3603214425 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::nextRes()
extern "C"  void PauseManager_nextRes_m280451997 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::lastRes()
extern "C"  void PauseManager_lastRes_m3519111882 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::enableSimpleTerrain(System.Boolean)
extern "C"  void PauseManager_enableSimpleTerrain_m2003964461 (PauseManager_t3603214425 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::forceOnANISO()
extern "C"  void PauseManager_forceOnANISO_m3853222268 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::perTexANISO()
extern "C"  void PauseManager_perTexANISO_m4058125748 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::disableANISO()
extern "C"  void PauseManager_disableANISO_m3630013910 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateANISO(System.Int32)
extern "C"  void PauseManager_updateANISO_m1751873018 (PauseManager_t3603214425 * __this, int32_t ___anisoSetting0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateCascades(System.Single)
extern "C"  void PauseManager_updateCascades_m3064701651 (PauseManager_t3603214425 * __this, float ___cascades0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateDensity(System.Single)
extern "C"  void PauseManager_updateDensity_m2313659488 (PauseManager_t3603214425 * __this, float ___density0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::updateMSAA(System.Int32)
extern "C"  void PauseManager_updateMSAA_m3123441212 (PauseManager_t3603214425 * __this, int32_t ___msaaAmount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::disableMSAA()
extern "C"  void PauseManager_disableMSAA_m1825382398 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::twoMSAA()
extern "C"  void PauseManager_twoMSAA_m1301628364 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::fourMSAA()
extern "C"  void PauseManager_fourMSAA_m1297946328 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::eightMSAA()
extern "C"  void PauseManager_eightMSAA_m626557347 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::nextPreset()
extern "C"  void PauseManager_nextPreset_m2727223544 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::lastPreset()
extern "C"  void PauseManager_lastPreset_m934197317 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setMinimal()
extern "C"  void PauseManager_setMinimal_m1354556647 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setVeryLow()
extern "C"  void PauseManager_setVeryLow_m3625586752 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setLow()
extern "C"  void PauseManager_setLow_m3767036664 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setNormal()
extern "C"  void PauseManager_setNormal_m2258353607 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setVeryHigh()
extern "C"  void PauseManager_setVeryHigh_m1209540444 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setUltra()
extern "C"  void PauseManager_setUltra_m3236860844 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GreatArcStudios.PauseManager::setExtreme()
extern "C"  void PauseManager_setExtreme_m1706842894 (PauseManager_t3603214425 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
