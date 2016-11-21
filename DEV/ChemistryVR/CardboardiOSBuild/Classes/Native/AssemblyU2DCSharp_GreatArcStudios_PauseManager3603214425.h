#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Terrain
struct Terrain_t59182933;
// UnityEngine.UI.Dropdown
struct Dropdown_t1985816271;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// System.Single[]
struct SingleU5BU5D_t577127397;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t665107673;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.String[]
struct StringU5BU5D_t1642385972;
// GreatArcStudios.SaveSettings
struct SaveSettings_t154721934;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Resolution3693662728.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GreatArcStudios.PauseManager
struct  PauseManager_t3603214425  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GreatArcStudios.PauseManager::mainPanel
	GameObject_t1756533147 * ___mainPanel_2;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::vidPanel
	GameObject_t1756533147 * ___vidPanel_3;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::audioPanel
	GameObject_t1756533147 * ___audioPanel_4;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::TitleTexts
	GameObject_t1756533147 * ___TitleTexts_5;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::mask
	GameObject_t1756533147 * ___mask_6;
	// UnityEngine.Animator GreatArcStudios.PauseManager::audioPanelAnimator
	Animator_t69676727 * ___audioPanelAnimator_7;
	// UnityEngine.Animator GreatArcStudios.PauseManager::vidPanelAnimator
	Animator_t69676727 * ___vidPanelAnimator_8;
	// UnityEngine.Animator GreatArcStudios.PauseManager::quitPanelAnimator
	Animator_t69676727 * ___quitPanelAnimator_9;
	// UnityEngine.UI.Text GreatArcStudios.PauseManager::pauseMenu
	Text_t356221433 * ___pauseMenu_10;
	// System.String GreatArcStudios.PauseManager::mainMenu
	String_t* ___mainMenu_11;
	// System.String GreatArcStudios.PauseManager::DOFScriptName
	String_t* ___DOFScriptName_12;
	// System.String GreatArcStudios.PauseManager::AOScriptName
	String_t* ___AOScriptName_13;
	// UnityEngine.Camera GreatArcStudios.PauseManager::mainCam
	Camera_t189460977 * ___mainCam_14;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::mainCamObj
	GameObject_t1756533147 * ___mainCamObj_16;
	// System.Single GreatArcStudios.PauseManager::detailDensity
	float ___detailDensity_17;
	// System.Single GreatArcStudios.PauseManager::timeScale
	float ___timeScale_18;
	// UnityEngine.Terrain GreatArcStudios.PauseManager::terrain
	Terrain_t59182933 * ___terrain_19;
	// UnityEngine.Terrain GreatArcStudios.PauseManager::simpleTerrain
	Terrain_t59182933 * ___simpleTerrain_20;
	// UnityEngine.UI.Dropdown GreatArcStudios.PauseManager::aaCombo
	Dropdown_t1985816271 * ___aaCombo_29;
	// UnityEngine.UI.Dropdown GreatArcStudios.PauseManager::afCombo
	Dropdown_t1985816271 * ___afCombo_30;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::fovSlider
	Slider_t297367283 * ___fovSlider_31;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::modelQualSlider
	Slider_t297367283 * ___modelQualSlider_32;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::terrainQualSlider
	Slider_t297367283 * ___terrainQualSlider_33;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::highQualTreeSlider
	Slider_t297367283 * ___highQualTreeSlider_34;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::renderDistSlider
	Slider_t297367283 * ___renderDistSlider_35;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::terrainDensitySlider
	Slider_t297367283 * ___terrainDensitySlider_36;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::shadowDistSlider
	Slider_t297367283 * ___shadowDistSlider_37;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::audioMasterSlider
	Slider_t297367283 * ___audioMasterSlider_38;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::audioMusicSlider
	Slider_t297367283 * ___audioMusicSlider_39;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::audioEffectsSlider
	Slider_t297367283 * ___audioEffectsSlider_40;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::masterTexSlider
	Slider_t297367283 * ___masterTexSlider_41;
	// UnityEngine.UI.Slider GreatArcStudios.PauseManager::shadowCascadesSlider
	Slider_t297367283 * ___shadowCascadesSlider_42;
	// UnityEngine.UI.Toggle GreatArcStudios.PauseManager::vSyncToggle
	Toggle_t3976754468 * ___vSyncToggle_43;
	// UnityEngine.UI.Toggle GreatArcStudios.PauseManager::aoToggle
	Toggle_t3976754468 * ___aoToggle_44;
	// UnityEngine.UI.Toggle GreatArcStudios.PauseManager::dofToggle
	Toggle_t3976754468 * ___dofToggle_45;
	// UnityEngine.UI.Toggle GreatArcStudios.PauseManager::fullscreenToggle
	Toggle_t3976754468 * ___fullscreenToggle_46;
	// UnityEngine.UI.Text GreatArcStudios.PauseManager::presetLabel
	Text_t356221433 * ___presetLabel_47;
	// UnityEngine.UI.Text GreatArcStudios.PauseManager::resolutionLabel
	Text_t356221433 * ___resolutionLabel_48;
	// System.Single[] GreatArcStudios.PauseManager::LODBias
	SingleU5BU5D_t577127397* ___LODBias_49;
	// System.Single[] GreatArcStudios.PauseManager::shadowDist
	SingleU5BU5D_t577127397* ___shadowDist_50;
	// UnityEngine.AudioSource[] GreatArcStudios.PauseManager::music
	AudioSourceU5BU5D_t1873220070* ___music_51;
	// UnityEngine.AudioSource[] GreatArcStudios.PauseManager::effects
	AudioSourceU5BU5D_t1873220070* ___effects_52;
	// UnityEngine.GameObject[] GreatArcStudios.PauseManager::otherUIElements
	GameObjectU5BU5D_t3057952154* ___otherUIElements_53;
	// System.Boolean GreatArcStudios.PauseManager::hardCodeSomeVideoSettings
	bool ___hardCodeSomeVideoSettings_54;
	// System.Boolean GreatArcStudios.PauseManager::useSimpleTerrain
	bool ___useSimpleTerrain_55;
	// UnityEngine.EventSystems.EventSystem GreatArcStudios.PauseManager::uiEventSystem
	EventSystem_t3466835263 * ___uiEventSystem_57;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::defualtSelectedVideo
	GameObject_t1756533147 * ___defualtSelectedVideo_58;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::defualtSelectedAudio
	GameObject_t1756533147 * ___defualtSelectedAudio_59;
	// UnityEngine.GameObject GreatArcStudios.PauseManager::defualtSelectedMain
	GameObject_t1756533147 * ___defualtSelectedMain_60;
	// System.Int32 GreatArcStudios.PauseManager::_audioEffectAmt
	int32_t ____audioEffectAmt_65;
	// System.Single[] GreatArcStudios.PauseManager::_beforeEffectVol
	SingleU5BU5D_t577127397* ____beforeEffectVol_66;
	// System.Single GreatArcStudios.PauseManager::_beforeMusic
	float ____beforeMusic_67;
	// System.Int32 GreatArcStudios.PauseManager::_currentLevel
	int32_t ____currentLevel_68;
	// UnityEngine.Resolution[] GreatArcStudios.PauseManager::allRes
	ResolutionU5BU5D_t665107673* ___allRes_69;
	// UnityEngine.MonoBehaviour GreatArcStudios.PauseManager::tempScript
	MonoBehaviour_t1158329972 * ___tempScript_70;
	// System.String[] GreatArcStudios.PauseManager::presets
	StringU5BU5D_t1642385972* ___presets_71;
	// System.Boolean GreatArcStudios.PauseManager::isFullscreen
	bool ___isFullscreen_72;
	// UnityEngine.Resolution GreatArcStudios.PauseManager::beforeRes
	Resolution_t3693662728  ___beforeRes_74;
	// System.Boolean GreatArcStudios.PauseManager::lastAOBool
	bool ___lastAOBool_78;
	// System.Boolean GreatArcStudios.PauseManager::lastDOFBool
	bool ___lastDOFBool_79;
	// GreatArcStudios.SaveSettings GreatArcStudios.PauseManager::saveSettings
	SaveSettings_t154721934 * ___saveSettings_82;

public:
	inline static int32_t get_offset_of_mainPanel_2() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___mainPanel_2)); }
	inline GameObject_t1756533147 * get_mainPanel_2() const { return ___mainPanel_2; }
	inline GameObject_t1756533147 ** get_address_of_mainPanel_2() { return &___mainPanel_2; }
	inline void set_mainPanel_2(GameObject_t1756533147 * value)
	{
		___mainPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainPanel_2, value);
	}

	inline static int32_t get_offset_of_vidPanel_3() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___vidPanel_3)); }
	inline GameObject_t1756533147 * get_vidPanel_3() const { return ___vidPanel_3; }
	inline GameObject_t1756533147 ** get_address_of_vidPanel_3() { return &___vidPanel_3; }
	inline void set_vidPanel_3(GameObject_t1756533147 * value)
	{
		___vidPanel_3 = value;
		Il2CppCodeGenWriteBarrier(&___vidPanel_3, value);
	}

	inline static int32_t get_offset_of_audioPanel_4() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___audioPanel_4)); }
	inline GameObject_t1756533147 * get_audioPanel_4() const { return ___audioPanel_4; }
	inline GameObject_t1756533147 ** get_address_of_audioPanel_4() { return &___audioPanel_4; }
	inline void set_audioPanel_4(GameObject_t1756533147 * value)
	{
		___audioPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioPanel_4, value);
	}

	inline static int32_t get_offset_of_TitleTexts_5() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___TitleTexts_5)); }
	inline GameObject_t1756533147 * get_TitleTexts_5() const { return ___TitleTexts_5; }
	inline GameObject_t1756533147 ** get_address_of_TitleTexts_5() { return &___TitleTexts_5; }
	inline void set_TitleTexts_5(GameObject_t1756533147 * value)
	{
		___TitleTexts_5 = value;
		Il2CppCodeGenWriteBarrier(&___TitleTexts_5, value);
	}

	inline static int32_t get_offset_of_mask_6() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___mask_6)); }
	inline GameObject_t1756533147 * get_mask_6() const { return ___mask_6; }
	inline GameObject_t1756533147 ** get_address_of_mask_6() { return &___mask_6; }
	inline void set_mask_6(GameObject_t1756533147 * value)
	{
		___mask_6 = value;
		Il2CppCodeGenWriteBarrier(&___mask_6, value);
	}

	inline static int32_t get_offset_of_audioPanelAnimator_7() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___audioPanelAnimator_7)); }
	inline Animator_t69676727 * get_audioPanelAnimator_7() const { return ___audioPanelAnimator_7; }
	inline Animator_t69676727 ** get_address_of_audioPanelAnimator_7() { return &___audioPanelAnimator_7; }
	inline void set_audioPanelAnimator_7(Animator_t69676727 * value)
	{
		___audioPanelAnimator_7 = value;
		Il2CppCodeGenWriteBarrier(&___audioPanelAnimator_7, value);
	}

	inline static int32_t get_offset_of_vidPanelAnimator_8() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___vidPanelAnimator_8)); }
	inline Animator_t69676727 * get_vidPanelAnimator_8() const { return ___vidPanelAnimator_8; }
	inline Animator_t69676727 ** get_address_of_vidPanelAnimator_8() { return &___vidPanelAnimator_8; }
	inline void set_vidPanelAnimator_8(Animator_t69676727 * value)
	{
		___vidPanelAnimator_8 = value;
		Il2CppCodeGenWriteBarrier(&___vidPanelAnimator_8, value);
	}

	inline static int32_t get_offset_of_quitPanelAnimator_9() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___quitPanelAnimator_9)); }
	inline Animator_t69676727 * get_quitPanelAnimator_9() const { return ___quitPanelAnimator_9; }
	inline Animator_t69676727 ** get_address_of_quitPanelAnimator_9() { return &___quitPanelAnimator_9; }
	inline void set_quitPanelAnimator_9(Animator_t69676727 * value)
	{
		___quitPanelAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___quitPanelAnimator_9, value);
	}

	inline static int32_t get_offset_of_pauseMenu_10() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___pauseMenu_10)); }
	inline Text_t356221433 * get_pauseMenu_10() const { return ___pauseMenu_10; }
	inline Text_t356221433 ** get_address_of_pauseMenu_10() { return &___pauseMenu_10; }
	inline void set_pauseMenu_10(Text_t356221433 * value)
	{
		___pauseMenu_10 = value;
		Il2CppCodeGenWriteBarrier(&___pauseMenu_10, value);
	}

	inline static int32_t get_offset_of_mainMenu_11() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___mainMenu_11)); }
	inline String_t* get_mainMenu_11() const { return ___mainMenu_11; }
	inline String_t** get_address_of_mainMenu_11() { return &___mainMenu_11; }
	inline void set_mainMenu_11(String_t* value)
	{
		___mainMenu_11 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_11, value);
	}

	inline static int32_t get_offset_of_DOFScriptName_12() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___DOFScriptName_12)); }
	inline String_t* get_DOFScriptName_12() const { return ___DOFScriptName_12; }
	inline String_t** get_address_of_DOFScriptName_12() { return &___DOFScriptName_12; }
	inline void set_DOFScriptName_12(String_t* value)
	{
		___DOFScriptName_12 = value;
		Il2CppCodeGenWriteBarrier(&___DOFScriptName_12, value);
	}

	inline static int32_t get_offset_of_AOScriptName_13() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___AOScriptName_13)); }
	inline String_t* get_AOScriptName_13() const { return ___AOScriptName_13; }
	inline String_t** get_address_of_AOScriptName_13() { return &___AOScriptName_13; }
	inline void set_AOScriptName_13(String_t* value)
	{
		___AOScriptName_13 = value;
		Il2CppCodeGenWriteBarrier(&___AOScriptName_13, value);
	}

	inline static int32_t get_offset_of_mainCam_14() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___mainCam_14)); }
	inline Camera_t189460977 * get_mainCam_14() const { return ___mainCam_14; }
	inline Camera_t189460977 ** get_address_of_mainCam_14() { return &___mainCam_14; }
	inline void set_mainCam_14(Camera_t189460977 * value)
	{
		___mainCam_14 = value;
		Il2CppCodeGenWriteBarrier(&___mainCam_14, value);
	}

	inline static int32_t get_offset_of_mainCamObj_16() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___mainCamObj_16)); }
	inline GameObject_t1756533147 * get_mainCamObj_16() const { return ___mainCamObj_16; }
	inline GameObject_t1756533147 ** get_address_of_mainCamObj_16() { return &___mainCamObj_16; }
	inline void set_mainCamObj_16(GameObject_t1756533147 * value)
	{
		___mainCamObj_16 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamObj_16, value);
	}

	inline static int32_t get_offset_of_detailDensity_17() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___detailDensity_17)); }
	inline float get_detailDensity_17() const { return ___detailDensity_17; }
	inline float* get_address_of_detailDensity_17() { return &___detailDensity_17; }
	inline void set_detailDensity_17(float value)
	{
		___detailDensity_17 = value;
	}

	inline static int32_t get_offset_of_timeScale_18() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___timeScale_18)); }
	inline float get_timeScale_18() const { return ___timeScale_18; }
	inline float* get_address_of_timeScale_18() { return &___timeScale_18; }
	inline void set_timeScale_18(float value)
	{
		___timeScale_18 = value;
	}

	inline static int32_t get_offset_of_terrain_19() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___terrain_19)); }
	inline Terrain_t59182933 * get_terrain_19() const { return ___terrain_19; }
	inline Terrain_t59182933 ** get_address_of_terrain_19() { return &___terrain_19; }
	inline void set_terrain_19(Terrain_t59182933 * value)
	{
		___terrain_19 = value;
		Il2CppCodeGenWriteBarrier(&___terrain_19, value);
	}

	inline static int32_t get_offset_of_simpleTerrain_20() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___simpleTerrain_20)); }
	inline Terrain_t59182933 * get_simpleTerrain_20() const { return ___simpleTerrain_20; }
	inline Terrain_t59182933 ** get_address_of_simpleTerrain_20() { return &___simpleTerrain_20; }
	inline void set_simpleTerrain_20(Terrain_t59182933 * value)
	{
		___simpleTerrain_20 = value;
		Il2CppCodeGenWriteBarrier(&___simpleTerrain_20, value);
	}

	inline static int32_t get_offset_of_aaCombo_29() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___aaCombo_29)); }
	inline Dropdown_t1985816271 * get_aaCombo_29() const { return ___aaCombo_29; }
	inline Dropdown_t1985816271 ** get_address_of_aaCombo_29() { return &___aaCombo_29; }
	inline void set_aaCombo_29(Dropdown_t1985816271 * value)
	{
		___aaCombo_29 = value;
		Il2CppCodeGenWriteBarrier(&___aaCombo_29, value);
	}

	inline static int32_t get_offset_of_afCombo_30() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___afCombo_30)); }
	inline Dropdown_t1985816271 * get_afCombo_30() const { return ___afCombo_30; }
	inline Dropdown_t1985816271 ** get_address_of_afCombo_30() { return &___afCombo_30; }
	inline void set_afCombo_30(Dropdown_t1985816271 * value)
	{
		___afCombo_30 = value;
		Il2CppCodeGenWriteBarrier(&___afCombo_30, value);
	}

	inline static int32_t get_offset_of_fovSlider_31() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___fovSlider_31)); }
	inline Slider_t297367283 * get_fovSlider_31() const { return ___fovSlider_31; }
	inline Slider_t297367283 ** get_address_of_fovSlider_31() { return &___fovSlider_31; }
	inline void set_fovSlider_31(Slider_t297367283 * value)
	{
		___fovSlider_31 = value;
		Il2CppCodeGenWriteBarrier(&___fovSlider_31, value);
	}

	inline static int32_t get_offset_of_modelQualSlider_32() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___modelQualSlider_32)); }
	inline Slider_t297367283 * get_modelQualSlider_32() const { return ___modelQualSlider_32; }
	inline Slider_t297367283 ** get_address_of_modelQualSlider_32() { return &___modelQualSlider_32; }
	inline void set_modelQualSlider_32(Slider_t297367283 * value)
	{
		___modelQualSlider_32 = value;
		Il2CppCodeGenWriteBarrier(&___modelQualSlider_32, value);
	}

	inline static int32_t get_offset_of_terrainQualSlider_33() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___terrainQualSlider_33)); }
	inline Slider_t297367283 * get_terrainQualSlider_33() const { return ___terrainQualSlider_33; }
	inline Slider_t297367283 ** get_address_of_terrainQualSlider_33() { return &___terrainQualSlider_33; }
	inline void set_terrainQualSlider_33(Slider_t297367283 * value)
	{
		___terrainQualSlider_33 = value;
		Il2CppCodeGenWriteBarrier(&___terrainQualSlider_33, value);
	}

	inline static int32_t get_offset_of_highQualTreeSlider_34() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___highQualTreeSlider_34)); }
	inline Slider_t297367283 * get_highQualTreeSlider_34() const { return ___highQualTreeSlider_34; }
	inline Slider_t297367283 ** get_address_of_highQualTreeSlider_34() { return &___highQualTreeSlider_34; }
	inline void set_highQualTreeSlider_34(Slider_t297367283 * value)
	{
		___highQualTreeSlider_34 = value;
		Il2CppCodeGenWriteBarrier(&___highQualTreeSlider_34, value);
	}

	inline static int32_t get_offset_of_renderDistSlider_35() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___renderDistSlider_35)); }
	inline Slider_t297367283 * get_renderDistSlider_35() const { return ___renderDistSlider_35; }
	inline Slider_t297367283 ** get_address_of_renderDistSlider_35() { return &___renderDistSlider_35; }
	inline void set_renderDistSlider_35(Slider_t297367283 * value)
	{
		___renderDistSlider_35 = value;
		Il2CppCodeGenWriteBarrier(&___renderDistSlider_35, value);
	}

	inline static int32_t get_offset_of_terrainDensitySlider_36() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___terrainDensitySlider_36)); }
	inline Slider_t297367283 * get_terrainDensitySlider_36() const { return ___terrainDensitySlider_36; }
	inline Slider_t297367283 ** get_address_of_terrainDensitySlider_36() { return &___terrainDensitySlider_36; }
	inline void set_terrainDensitySlider_36(Slider_t297367283 * value)
	{
		___terrainDensitySlider_36 = value;
		Il2CppCodeGenWriteBarrier(&___terrainDensitySlider_36, value);
	}

	inline static int32_t get_offset_of_shadowDistSlider_37() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___shadowDistSlider_37)); }
	inline Slider_t297367283 * get_shadowDistSlider_37() const { return ___shadowDistSlider_37; }
	inline Slider_t297367283 ** get_address_of_shadowDistSlider_37() { return &___shadowDistSlider_37; }
	inline void set_shadowDistSlider_37(Slider_t297367283 * value)
	{
		___shadowDistSlider_37 = value;
		Il2CppCodeGenWriteBarrier(&___shadowDistSlider_37, value);
	}

	inline static int32_t get_offset_of_audioMasterSlider_38() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___audioMasterSlider_38)); }
	inline Slider_t297367283 * get_audioMasterSlider_38() const { return ___audioMasterSlider_38; }
	inline Slider_t297367283 ** get_address_of_audioMasterSlider_38() { return &___audioMasterSlider_38; }
	inline void set_audioMasterSlider_38(Slider_t297367283 * value)
	{
		___audioMasterSlider_38 = value;
		Il2CppCodeGenWriteBarrier(&___audioMasterSlider_38, value);
	}

	inline static int32_t get_offset_of_audioMusicSlider_39() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___audioMusicSlider_39)); }
	inline Slider_t297367283 * get_audioMusicSlider_39() const { return ___audioMusicSlider_39; }
	inline Slider_t297367283 ** get_address_of_audioMusicSlider_39() { return &___audioMusicSlider_39; }
	inline void set_audioMusicSlider_39(Slider_t297367283 * value)
	{
		___audioMusicSlider_39 = value;
		Il2CppCodeGenWriteBarrier(&___audioMusicSlider_39, value);
	}

	inline static int32_t get_offset_of_audioEffectsSlider_40() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___audioEffectsSlider_40)); }
	inline Slider_t297367283 * get_audioEffectsSlider_40() const { return ___audioEffectsSlider_40; }
	inline Slider_t297367283 ** get_address_of_audioEffectsSlider_40() { return &___audioEffectsSlider_40; }
	inline void set_audioEffectsSlider_40(Slider_t297367283 * value)
	{
		___audioEffectsSlider_40 = value;
		Il2CppCodeGenWriteBarrier(&___audioEffectsSlider_40, value);
	}

	inline static int32_t get_offset_of_masterTexSlider_41() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___masterTexSlider_41)); }
	inline Slider_t297367283 * get_masterTexSlider_41() const { return ___masterTexSlider_41; }
	inline Slider_t297367283 ** get_address_of_masterTexSlider_41() { return &___masterTexSlider_41; }
	inline void set_masterTexSlider_41(Slider_t297367283 * value)
	{
		___masterTexSlider_41 = value;
		Il2CppCodeGenWriteBarrier(&___masterTexSlider_41, value);
	}

	inline static int32_t get_offset_of_shadowCascadesSlider_42() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___shadowCascadesSlider_42)); }
	inline Slider_t297367283 * get_shadowCascadesSlider_42() const { return ___shadowCascadesSlider_42; }
	inline Slider_t297367283 ** get_address_of_shadowCascadesSlider_42() { return &___shadowCascadesSlider_42; }
	inline void set_shadowCascadesSlider_42(Slider_t297367283 * value)
	{
		___shadowCascadesSlider_42 = value;
		Il2CppCodeGenWriteBarrier(&___shadowCascadesSlider_42, value);
	}

	inline static int32_t get_offset_of_vSyncToggle_43() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___vSyncToggle_43)); }
	inline Toggle_t3976754468 * get_vSyncToggle_43() const { return ___vSyncToggle_43; }
	inline Toggle_t3976754468 ** get_address_of_vSyncToggle_43() { return &___vSyncToggle_43; }
	inline void set_vSyncToggle_43(Toggle_t3976754468 * value)
	{
		___vSyncToggle_43 = value;
		Il2CppCodeGenWriteBarrier(&___vSyncToggle_43, value);
	}

	inline static int32_t get_offset_of_aoToggle_44() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___aoToggle_44)); }
	inline Toggle_t3976754468 * get_aoToggle_44() const { return ___aoToggle_44; }
	inline Toggle_t3976754468 ** get_address_of_aoToggle_44() { return &___aoToggle_44; }
	inline void set_aoToggle_44(Toggle_t3976754468 * value)
	{
		___aoToggle_44 = value;
		Il2CppCodeGenWriteBarrier(&___aoToggle_44, value);
	}

	inline static int32_t get_offset_of_dofToggle_45() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___dofToggle_45)); }
	inline Toggle_t3976754468 * get_dofToggle_45() const { return ___dofToggle_45; }
	inline Toggle_t3976754468 ** get_address_of_dofToggle_45() { return &___dofToggle_45; }
	inline void set_dofToggle_45(Toggle_t3976754468 * value)
	{
		___dofToggle_45 = value;
		Il2CppCodeGenWriteBarrier(&___dofToggle_45, value);
	}

	inline static int32_t get_offset_of_fullscreenToggle_46() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___fullscreenToggle_46)); }
	inline Toggle_t3976754468 * get_fullscreenToggle_46() const { return ___fullscreenToggle_46; }
	inline Toggle_t3976754468 ** get_address_of_fullscreenToggle_46() { return &___fullscreenToggle_46; }
	inline void set_fullscreenToggle_46(Toggle_t3976754468 * value)
	{
		___fullscreenToggle_46 = value;
		Il2CppCodeGenWriteBarrier(&___fullscreenToggle_46, value);
	}

	inline static int32_t get_offset_of_presetLabel_47() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___presetLabel_47)); }
	inline Text_t356221433 * get_presetLabel_47() const { return ___presetLabel_47; }
	inline Text_t356221433 ** get_address_of_presetLabel_47() { return &___presetLabel_47; }
	inline void set_presetLabel_47(Text_t356221433 * value)
	{
		___presetLabel_47 = value;
		Il2CppCodeGenWriteBarrier(&___presetLabel_47, value);
	}

	inline static int32_t get_offset_of_resolutionLabel_48() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___resolutionLabel_48)); }
	inline Text_t356221433 * get_resolutionLabel_48() const { return ___resolutionLabel_48; }
	inline Text_t356221433 ** get_address_of_resolutionLabel_48() { return &___resolutionLabel_48; }
	inline void set_resolutionLabel_48(Text_t356221433 * value)
	{
		___resolutionLabel_48 = value;
		Il2CppCodeGenWriteBarrier(&___resolutionLabel_48, value);
	}

	inline static int32_t get_offset_of_LODBias_49() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___LODBias_49)); }
	inline SingleU5BU5D_t577127397* get_LODBias_49() const { return ___LODBias_49; }
	inline SingleU5BU5D_t577127397** get_address_of_LODBias_49() { return &___LODBias_49; }
	inline void set_LODBias_49(SingleU5BU5D_t577127397* value)
	{
		___LODBias_49 = value;
		Il2CppCodeGenWriteBarrier(&___LODBias_49, value);
	}

	inline static int32_t get_offset_of_shadowDist_50() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___shadowDist_50)); }
	inline SingleU5BU5D_t577127397* get_shadowDist_50() const { return ___shadowDist_50; }
	inline SingleU5BU5D_t577127397** get_address_of_shadowDist_50() { return &___shadowDist_50; }
	inline void set_shadowDist_50(SingleU5BU5D_t577127397* value)
	{
		___shadowDist_50 = value;
		Il2CppCodeGenWriteBarrier(&___shadowDist_50, value);
	}

	inline static int32_t get_offset_of_music_51() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___music_51)); }
	inline AudioSourceU5BU5D_t1873220070* get_music_51() const { return ___music_51; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_music_51() { return &___music_51; }
	inline void set_music_51(AudioSourceU5BU5D_t1873220070* value)
	{
		___music_51 = value;
		Il2CppCodeGenWriteBarrier(&___music_51, value);
	}

	inline static int32_t get_offset_of_effects_52() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___effects_52)); }
	inline AudioSourceU5BU5D_t1873220070* get_effects_52() const { return ___effects_52; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_effects_52() { return &___effects_52; }
	inline void set_effects_52(AudioSourceU5BU5D_t1873220070* value)
	{
		___effects_52 = value;
		Il2CppCodeGenWriteBarrier(&___effects_52, value);
	}

	inline static int32_t get_offset_of_otherUIElements_53() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___otherUIElements_53)); }
	inline GameObjectU5BU5D_t3057952154* get_otherUIElements_53() const { return ___otherUIElements_53; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_otherUIElements_53() { return &___otherUIElements_53; }
	inline void set_otherUIElements_53(GameObjectU5BU5D_t3057952154* value)
	{
		___otherUIElements_53 = value;
		Il2CppCodeGenWriteBarrier(&___otherUIElements_53, value);
	}

	inline static int32_t get_offset_of_hardCodeSomeVideoSettings_54() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___hardCodeSomeVideoSettings_54)); }
	inline bool get_hardCodeSomeVideoSettings_54() const { return ___hardCodeSomeVideoSettings_54; }
	inline bool* get_address_of_hardCodeSomeVideoSettings_54() { return &___hardCodeSomeVideoSettings_54; }
	inline void set_hardCodeSomeVideoSettings_54(bool value)
	{
		___hardCodeSomeVideoSettings_54 = value;
	}

	inline static int32_t get_offset_of_useSimpleTerrain_55() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___useSimpleTerrain_55)); }
	inline bool get_useSimpleTerrain_55() const { return ___useSimpleTerrain_55; }
	inline bool* get_address_of_useSimpleTerrain_55() { return &___useSimpleTerrain_55; }
	inline void set_useSimpleTerrain_55(bool value)
	{
		___useSimpleTerrain_55 = value;
	}

	inline static int32_t get_offset_of_uiEventSystem_57() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___uiEventSystem_57)); }
	inline EventSystem_t3466835263 * get_uiEventSystem_57() const { return ___uiEventSystem_57; }
	inline EventSystem_t3466835263 ** get_address_of_uiEventSystem_57() { return &___uiEventSystem_57; }
	inline void set_uiEventSystem_57(EventSystem_t3466835263 * value)
	{
		___uiEventSystem_57 = value;
		Il2CppCodeGenWriteBarrier(&___uiEventSystem_57, value);
	}

	inline static int32_t get_offset_of_defualtSelectedVideo_58() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___defualtSelectedVideo_58)); }
	inline GameObject_t1756533147 * get_defualtSelectedVideo_58() const { return ___defualtSelectedVideo_58; }
	inline GameObject_t1756533147 ** get_address_of_defualtSelectedVideo_58() { return &___defualtSelectedVideo_58; }
	inline void set_defualtSelectedVideo_58(GameObject_t1756533147 * value)
	{
		___defualtSelectedVideo_58 = value;
		Il2CppCodeGenWriteBarrier(&___defualtSelectedVideo_58, value);
	}

	inline static int32_t get_offset_of_defualtSelectedAudio_59() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___defualtSelectedAudio_59)); }
	inline GameObject_t1756533147 * get_defualtSelectedAudio_59() const { return ___defualtSelectedAudio_59; }
	inline GameObject_t1756533147 ** get_address_of_defualtSelectedAudio_59() { return &___defualtSelectedAudio_59; }
	inline void set_defualtSelectedAudio_59(GameObject_t1756533147 * value)
	{
		___defualtSelectedAudio_59 = value;
		Il2CppCodeGenWriteBarrier(&___defualtSelectedAudio_59, value);
	}

	inline static int32_t get_offset_of_defualtSelectedMain_60() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___defualtSelectedMain_60)); }
	inline GameObject_t1756533147 * get_defualtSelectedMain_60() const { return ___defualtSelectedMain_60; }
	inline GameObject_t1756533147 ** get_address_of_defualtSelectedMain_60() { return &___defualtSelectedMain_60; }
	inline void set_defualtSelectedMain_60(GameObject_t1756533147 * value)
	{
		___defualtSelectedMain_60 = value;
		Il2CppCodeGenWriteBarrier(&___defualtSelectedMain_60, value);
	}

	inline static int32_t get_offset_of__audioEffectAmt_65() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ____audioEffectAmt_65)); }
	inline int32_t get__audioEffectAmt_65() const { return ____audioEffectAmt_65; }
	inline int32_t* get_address_of__audioEffectAmt_65() { return &____audioEffectAmt_65; }
	inline void set__audioEffectAmt_65(int32_t value)
	{
		____audioEffectAmt_65 = value;
	}

	inline static int32_t get_offset_of__beforeEffectVol_66() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ____beforeEffectVol_66)); }
	inline SingleU5BU5D_t577127397* get__beforeEffectVol_66() const { return ____beforeEffectVol_66; }
	inline SingleU5BU5D_t577127397** get_address_of__beforeEffectVol_66() { return &____beforeEffectVol_66; }
	inline void set__beforeEffectVol_66(SingleU5BU5D_t577127397* value)
	{
		____beforeEffectVol_66 = value;
		Il2CppCodeGenWriteBarrier(&____beforeEffectVol_66, value);
	}

	inline static int32_t get_offset_of__beforeMusic_67() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ____beforeMusic_67)); }
	inline float get__beforeMusic_67() const { return ____beforeMusic_67; }
	inline float* get_address_of__beforeMusic_67() { return &____beforeMusic_67; }
	inline void set__beforeMusic_67(float value)
	{
		____beforeMusic_67 = value;
	}

	inline static int32_t get_offset_of__currentLevel_68() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ____currentLevel_68)); }
	inline int32_t get__currentLevel_68() const { return ____currentLevel_68; }
	inline int32_t* get_address_of__currentLevel_68() { return &____currentLevel_68; }
	inline void set__currentLevel_68(int32_t value)
	{
		____currentLevel_68 = value;
	}

	inline static int32_t get_offset_of_allRes_69() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___allRes_69)); }
	inline ResolutionU5BU5D_t665107673* get_allRes_69() const { return ___allRes_69; }
	inline ResolutionU5BU5D_t665107673** get_address_of_allRes_69() { return &___allRes_69; }
	inline void set_allRes_69(ResolutionU5BU5D_t665107673* value)
	{
		___allRes_69 = value;
		Il2CppCodeGenWriteBarrier(&___allRes_69, value);
	}

	inline static int32_t get_offset_of_tempScript_70() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___tempScript_70)); }
	inline MonoBehaviour_t1158329972 * get_tempScript_70() const { return ___tempScript_70; }
	inline MonoBehaviour_t1158329972 ** get_address_of_tempScript_70() { return &___tempScript_70; }
	inline void set_tempScript_70(MonoBehaviour_t1158329972 * value)
	{
		___tempScript_70 = value;
		Il2CppCodeGenWriteBarrier(&___tempScript_70, value);
	}

	inline static int32_t get_offset_of_presets_71() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___presets_71)); }
	inline StringU5BU5D_t1642385972* get_presets_71() const { return ___presets_71; }
	inline StringU5BU5D_t1642385972** get_address_of_presets_71() { return &___presets_71; }
	inline void set_presets_71(StringU5BU5D_t1642385972* value)
	{
		___presets_71 = value;
		Il2CppCodeGenWriteBarrier(&___presets_71, value);
	}

	inline static int32_t get_offset_of_isFullscreen_72() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___isFullscreen_72)); }
	inline bool get_isFullscreen_72() const { return ___isFullscreen_72; }
	inline bool* get_address_of_isFullscreen_72() { return &___isFullscreen_72; }
	inline void set_isFullscreen_72(bool value)
	{
		___isFullscreen_72 = value;
	}

	inline static int32_t get_offset_of_beforeRes_74() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___beforeRes_74)); }
	inline Resolution_t3693662728  get_beforeRes_74() const { return ___beforeRes_74; }
	inline Resolution_t3693662728 * get_address_of_beforeRes_74() { return &___beforeRes_74; }
	inline void set_beforeRes_74(Resolution_t3693662728  value)
	{
		___beforeRes_74 = value;
	}

	inline static int32_t get_offset_of_lastAOBool_78() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___lastAOBool_78)); }
	inline bool get_lastAOBool_78() const { return ___lastAOBool_78; }
	inline bool* get_address_of_lastAOBool_78() { return &___lastAOBool_78; }
	inline void set_lastAOBool_78(bool value)
	{
		___lastAOBool_78 = value;
	}

	inline static int32_t get_offset_of_lastDOFBool_79() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___lastDOFBool_79)); }
	inline bool get_lastDOFBool_79() const { return ___lastDOFBool_79; }
	inline bool* get_address_of_lastDOFBool_79() { return &___lastDOFBool_79; }
	inline void set_lastDOFBool_79(bool value)
	{
		___lastDOFBool_79 = value;
	}

	inline static int32_t get_offset_of_saveSettings_82() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425, ___saveSettings_82)); }
	inline SaveSettings_t154721934 * get_saveSettings_82() const { return ___saveSettings_82; }
	inline SaveSettings_t154721934 ** get_address_of_saveSettings_82() { return &___saveSettings_82; }
	inline void set_saveSettings_82(SaveSettings_t154721934 * value)
	{
		___saveSettings_82 = value;
		Il2CppCodeGenWriteBarrier(&___saveSettings_82, value);
	}
};

struct PauseManager_t3603214425_StaticFields
{
public:
	// UnityEngine.Camera GreatArcStudios.PauseManager::mainCamShared
	Camera_t189460977 * ___mainCamShared_15;
	// System.Single GreatArcStudios.PauseManager::shadowDistINI
	float ___shadowDistINI_21;
	// System.Single GreatArcStudios.PauseManager::renderDistINI
	float ___renderDistINI_22;
	// System.Single GreatArcStudios.PauseManager::aaQualINI
	float ___aaQualINI_23;
	// System.Single GreatArcStudios.PauseManager::densityINI
	float ___densityINI_24;
	// System.Single GreatArcStudios.PauseManager::treeMeshAmtINI
	float ___treeMeshAmtINI_25;
	// System.Single GreatArcStudios.PauseManager::fovINI
	float ___fovINI_26;
	// System.Int32 GreatArcStudios.PauseManager::msaaINI
	int32_t ___msaaINI_27;
	// System.Int32 GreatArcStudios.PauseManager::vsyncINI
	int32_t ___vsyncINI_28;
	// System.Boolean GreatArcStudios.PauseManager::readUseSimpleTerrain
	bool ___readUseSimpleTerrain_56;
	// System.Single GreatArcStudios.PauseManager::lastMusicMult
	float ___lastMusicMult_61;
	// System.Single GreatArcStudios.PauseManager::lastAudioMult
	float ___lastAudioMult_62;
	// System.Single GreatArcStudios.PauseManager::beforeMaster
	float ___beforeMaster_63;
	// System.Int32 GreatArcStudios.PauseManager::lastTexLimit
	int32_t ___lastTexLimit_64;
	// UnityEngine.Resolution GreatArcStudios.PauseManager::currentRes
	Resolution_t3693662728  ___currentRes_73;
	// System.Int32 GreatArcStudios.PauseManager::lastShadowCascade
	int32_t ___lastShadowCascade_75;
	// System.Boolean GreatArcStudios.PauseManager::aoBool
	bool ___aoBool_76;
	// System.Boolean GreatArcStudios.PauseManager::dofBool
	bool ___dofBool_77;
	// UnityEngine.Terrain GreatArcStudios.PauseManager::readTerrain
	Terrain_t59182933 * ___readTerrain_80;
	// UnityEngine.Terrain GreatArcStudios.PauseManager::readSimpleTerrain
	Terrain_t59182933 * ___readSimpleTerrain_81;

public:
	inline static int32_t get_offset_of_mainCamShared_15() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___mainCamShared_15)); }
	inline Camera_t189460977 * get_mainCamShared_15() const { return ___mainCamShared_15; }
	inline Camera_t189460977 ** get_address_of_mainCamShared_15() { return &___mainCamShared_15; }
	inline void set_mainCamShared_15(Camera_t189460977 * value)
	{
		___mainCamShared_15 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamShared_15, value);
	}

	inline static int32_t get_offset_of_shadowDistINI_21() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___shadowDistINI_21)); }
	inline float get_shadowDistINI_21() const { return ___shadowDistINI_21; }
	inline float* get_address_of_shadowDistINI_21() { return &___shadowDistINI_21; }
	inline void set_shadowDistINI_21(float value)
	{
		___shadowDistINI_21 = value;
	}

	inline static int32_t get_offset_of_renderDistINI_22() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___renderDistINI_22)); }
	inline float get_renderDistINI_22() const { return ___renderDistINI_22; }
	inline float* get_address_of_renderDistINI_22() { return &___renderDistINI_22; }
	inline void set_renderDistINI_22(float value)
	{
		___renderDistINI_22 = value;
	}

	inline static int32_t get_offset_of_aaQualINI_23() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___aaQualINI_23)); }
	inline float get_aaQualINI_23() const { return ___aaQualINI_23; }
	inline float* get_address_of_aaQualINI_23() { return &___aaQualINI_23; }
	inline void set_aaQualINI_23(float value)
	{
		___aaQualINI_23 = value;
	}

	inline static int32_t get_offset_of_densityINI_24() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___densityINI_24)); }
	inline float get_densityINI_24() const { return ___densityINI_24; }
	inline float* get_address_of_densityINI_24() { return &___densityINI_24; }
	inline void set_densityINI_24(float value)
	{
		___densityINI_24 = value;
	}

	inline static int32_t get_offset_of_treeMeshAmtINI_25() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___treeMeshAmtINI_25)); }
	inline float get_treeMeshAmtINI_25() const { return ___treeMeshAmtINI_25; }
	inline float* get_address_of_treeMeshAmtINI_25() { return &___treeMeshAmtINI_25; }
	inline void set_treeMeshAmtINI_25(float value)
	{
		___treeMeshAmtINI_25 = value;
	}

	inline static int32_t get_offset_of_fovINI_26() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___fovINI_26)); }
	inline float get_fovINI_26() const { return ___fovINI_26; }
	inline float* get_address_of_fovINI_26() { return &___fovINI_26; }
	inline void set_fovINI_26(float value)
	{
		___fovINI_26 = value;
	}

	inline static int32_t get_offset_of_msaaINI_27() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___msaaINI_27)); }
	inline int32_t get_msaaINI_27() const { return ___msaaINI_27; }
	inline int32_t* get_address_of_msaaINI_27() { return &___msaaINI_27; }
	inline void set_msaaINI_27(int32_t value)
	{
		___msaaINI_27 = value;
	}

	inline static int32_t get_offset_of_vsyncINI_28() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___vsyncINI_28)); }
	inline int32_t get_vsyncINI_28() const { return ___vsyncINI_28; }
	inline int32_t* get_address_of_vsyncINI_28() { return &___vsyncINI_28; }
	inline void set_vsyncINI_28(int32_t value)
	{
		___vsyncINI_28 = value;
	}

	inline static int32_t get_offset_of_readUseSimpleTerrain_56() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___readUseSimpleTerrain_56)); }
	inline bool get_readUseSimpleTerrain_56() const { return ___readUseSimpleTerrain_56; }
	inline bool* get_address_of_readUseSimpleTerrain_56() { return &___readUseSimpleTerrain_56; }
	inline void set_readUseSimpleTerrain_56(bool value)
	{
		___readUseSimpleTerrain_56 = value;
	}

	inline static int32_t get_offset_of_lastMusicMult_61() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___lastMusicMult_61)); }
	inline float get_lastMusicMult_61() const { return ___lastMusicMult_61; }
	inline float* get_address_of_lastMusicMult_61() { return &___lastMusicMult_61; }
	inline void set_lastMusicMult_61(float value)
	{
		___lastMusicMult_61 = value;
	}

	inline static int32_t get_offset_of_lastAudioMult_62() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___lastAudioMult_62)); }
	inline float get_lastAudioMult_62() const { return ___lastAudioMult_62; }
	inline float* get_address_of_lastAudioMult_62() { return &___lastAudioMult_62; }
	inline void set_lastAudioMult_62(float value)
	{
		___lastAudioMult_62 = value;
	}

	inline static int32_t get_offset_of_beforeMaster_63() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___beforeMaster_63)); }
	inline float get_beforeMaster_63() const { return ___beforeMaster_63; }
	inline float* get_address_of_beforeMaster_63() { return &___beforeMaster_63; }
	inline void set_beforeMaster_63(float value)
	{
		___beforeMaster_63 = value;
	}

	inline static int32_t get_offset_of_lastTexLimit_64() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___lastTexLimit_64)); }
	inline int32_t get_lastTexLimit_64() const { return ___lastTexLimit_64; }
	inline int32_t* get_address_of_lastTexLimit_64() { return &___lastTexLimit_64; }
	inline void set_lastTexLimit_64(int32_t value)
	{
		___lastTexLimit_64 = value;
	}

	inline static int32_t get_offset_of_currentRes_73() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___currentRes_73)); }
	inline Resolution_t3693662728  get_currentRes_73() const { return ___currentRes_73; }
	inline Resolution_t3693662728 * get_address_of_currentRes_73() { return &___currentRes_73; }
	inline void set_currentRes_73(Resolution_t3693662728  value)
	{
		___currentRes_73 = value;
	}

	inline static int32_t get_offset_of_lastShadowCascade_75() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___lastShadowCascade_75)); }
	inline int32_t get_lastShadowCascade_75() const { return ___lastShadowCascade_75; }
	inline int32_t* get_address_of_lastShadowCascade_75() { return &___lastShadowCascade_75; }
	inline void set_lastShadowCascade_75(int32_t value)
	{
		___lastShadowCascade_75 = value;
	}

	inline static int32_t get_offset_of_aoBool_76() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___aoBool_76)); }
	inline bool get_aoBool_76() const { return ___aoBool_76; }
	inline bool* get_address_of_aoBool_76() { return &___aoBool_76; }
	inline void set_aoBool_76(bool value)
	{
		___aoBool_76 = value;
	}

	inline static int32_t get_offset_of_dofBool_77() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___dofBool_77)); }
	inline bool get_dofBool_77() const { return ___dofBool_77; }
	inline bool* get_address_of_dofBool_77() { return &___dofBool_77; }
	inline void set_dofBool_77(bool value)
	{
		___dofBool_77 = value;
	}

	inline static int32_t get_offset_of_readTerrain_80() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___readTerrain_80)); }
	inline Terrain_t59182933 * get_readTerrain_80() const { return ___readTerrain_80; }
	inline Terrain_t59182933 ** get_address_of_readTerrain_80() { return &___readTerrain_80; }
	inline void set_readTerrain_80(Terrain_t59182933 * value)
	{
		___readTerrain_80 = value;
		Il2CppCodeGenWriteBarrier(&___readTerrain_80, value);
	}

	inline static int32_t get_offset_of_readSimpleTerrain_81() { return static_cast<int32_t>(offsetof(PauseManager_t3603214425_StaticFields, ___readSimpleTerrain_81)); }
	inline Terrain_t59182933 * get_readSimpleTerrain_81() const { return ___readSimpleTerrain_81; }
	inline Terrain_t59182933 ** get_address_of_readSimpleTerrain_81() { return &___readSimpleTerrain_81; }
	inline void set_readSimpleTerrain_81(Terrain_t59182933 * value)
	{
		___readSimpleTerrain_81 = value;
		Il2CppCodeGenWriteBarrier(&___readSimpleTerrain_81, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
