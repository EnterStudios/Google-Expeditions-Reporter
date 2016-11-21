#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoToScene3084403383.h"
#include "AssemblyU2DCSharp_ControllerDemoManager4136074806.h"
#include "AssemblyU2DCSharp_Teleport282063519.h"
#include "AssemblyU2DCSharp_GvrHead3923315805.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate1289521902.h"
#include "AssemblyU2DCSharp_GvrCameraUtils3683962711.h"
#include "AssemblyU2DCSharp_GvrEye3930157106.h"
#include "AssemblyU2DCSharp_GvrPostRender3118402863.h"
#include "AssemblyU2DCSharp_GvrPreRender2074710158.h"
#include "AssemblyU2DCSharp_GvrProfile2070273202.h"
#include "AssemblyU2DCSharp_GvrProfile_Screen839756045.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses2112994543.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV1743211906.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion550060296.h"
#include "AssemblyU2DCSharp_GvrProfile_Viewer1642017539.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes2720173411.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes2891453798.h"
#include "AssemblyU2DCSharp_StereoController3144380552.h"
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU33626315335.h"
#include "AssemblyU2DCSharp_StereoRenderEffect958489249.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice4004462063.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice635821333.h"
#include "AssemblyU2DCSharp_Gvr_Internal_iOSDevice1373308423.h"
#include "AssemblyU2DCSharp_GvrAudio2627885619.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality2125366261.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerType3348390394.h"
#include "AssemblyU2DCSharp_GvrAudioListener1521766837.h"
#include "AssemblyU2DCSharp_GvrAudioRoom1253442178.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3590751945.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1301118448.h"
#include "AssemblyU2DCSharp_GvrAudioSource2307460312.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2001911543.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig616150261.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode1624619217.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent1858389926.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent621139879.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent1122923020.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A936529327.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3000685002.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation4153005117.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent156276569.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent4043921137.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager3364249716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1804908545.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1967739812.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT4143287487.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnOr602701282.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnBu358370788.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C4253624923.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent3882078222.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2572128318.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types3648109718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type1530480861.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve4072706903.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1262104803.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1211758263.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2701542133.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve3452538341.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeE182225200.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_GyroscopeEv33558588.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1893725728.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1480486140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE1516604558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3483346914.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2038376807.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati2561526853.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent639576718.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_2056133158.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2537253112.h"
#include "AssemblyU2DCSharp_GazeInputModule197612175.h"
#include "AssemblyU2DCSharp_GvrViewer2583885279.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele1350813851.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye1346324485.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion351632083.h"
#include "AssemblyU2DCSharp_Pose3D3872859958.h"
#include "AssemblyU2DCSharp_MutablePose3D1015643808.h"
#include "AssemblyU2DCSharp_GvrGaze2249568644.h"
#include "AssemblyU2DCSharp_GvrReticle1834592217.h"
#include "AssemblyU2DCSharp_GvrFPS750935016.h"
#include "AssemblyU2DCSharp_GvrIntent542233401.h"
#include "AssemblyU2DCSharp_GreatArcStudios_PauseManager3603214425.h"
#include "AssemblyU2DCSharp_GreatArcStudios_PauseManager_U3C2583936022.h"
#include "AssemblyU2DCSharp_GreatArcStudios_PauseManager_U3C1765895437.h"
#include "AssemblyU2DCSharp_GreatArcStudios_PauseManager_U3C1439085869.h"
#include "AssemblyU2DCSharp_GreatArcStudios_PauseManager_U3C3467124013.h"
#include "AssemblyU2DCSharp_GreatArcStudios_SaveSettings154721934.h"
#include "AssemblyU2DCSharp_CoroutineUtilities2738139678.h"
#include "AssemblyU2DCSharp_CoroutineUtilities_U3CWaitForRea3508040781.h"
#include "AssemblyU2DCSharp_GreatArcStudios_Rotate223848977.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1486305137.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU2731437132.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU1568637717.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU3894236545.h"
#include "AssemblyU2DCSharp_U3CPrivateImplementationDetailsU2375206772.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (GoToScene_t3084403383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (ControllerDemoManager_t4136074806), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1801[9] = 
{
	ControllerDemoManager_t4136074806::get_offset_of_controllerPivot_2(),
	ControllerDemoManager_t4136074806::get_offset_of_messageCanvas_3(),
	ControllerDemoManager_t4136074806::get_offset_of_messageText_4(),
	ControllerDemoManager_t4136074806::get_offset_of_cubeInactiveMaterial_5(),
	ControllerDemoManager_t4136074806::get_offset_of_cubeHoverMaterial_6(),
	ControllerDemoManager_t4136074806::get_offset_of_cubeActiveMaterial_7(),
	ControllerDemoManager_t4136074806::get_offset_of_controllerCursorRenderer_8(),
	ControllerDemoManager_t4136074806::get_offset_of_selectedObject_9(),
	ControllerDemoManager_t4136074806::get_offset_of_dragging_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (Teleport_t282063519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1802[1] = 
{
	Teleport_t282063519::get_offset_of_startingPosition_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (GvrHead_t3923315805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[6] = 
{
	GvrHead_t3923315805::get_offset_of_trackRotation_2(),
	GvrHead_t3923315805::get_offset_of_trackPosition_3(),
	GvrHead_t3923315805::get_offset_of_target_4(),
	GvrHead_t3923315805::get_offset_of_updateEarly_5(),
	GvrHead_t3923315805::get_offset_of_OnHeadUpdated_6(),
	GvrHead_t3923315805::get_offset_of_updated_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (HeadUpdatedDelegate_t1289521902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (GvrCameraUtils_t3683962711), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (GvrEye_t3930157106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1806[8] = 
{
	GvrEye_t3930157106::get_offset_of_eye_2(),
	GvrEye_t3930157106::get_offset_of_toggleCullingMask_3(),
	GvrEye_t3930157106::get_offset_of_controller_4(),
	GvrEye_t3930157106::get_offset_of_stereoEffect_5(),
	GvrEye_t3930157106::get_offset_of_monoCamera_6(),
	GvrEye_t3930157106::get_offset_of_realProj_7(),
	GvrEye_t3930157106::get_offset_of_interpPosition_8(),
	GvrEye_t3930157106::get_offset_of_U3CcamU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (GvrPostRender_t3118402863), -1, sizeof(GvrPostRender_t3118402863_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1807[22] = 
{
	GvrPostRender_t3118402863::get_offset_of_U3CcamU3Ek__BackingField_2(),
	0,
	0,
	0,
	GvrPostRender_t3118402863::get_offset_of_distortionMesh_6(),
	GvrPostRender_t3118402863::get_offset_of_meshMaterial_7(),
	GvrPostRender_t3118402863::get_offset_of_uiMaterial_8(),
	GvrPostRender_t3118402863::get_offset_of_centerWidthPx_9(),
	GvrPostRender_t3118402863::get_offset_of_buttonWidthPx_10(),
	GvrPostRender_t3118402863::get_offset_of_xScale_11(),
	GvrPostRender_t3118402863::get_offset_of_yScale_12(),
	GvrPostRender_t3118402863::get_offset_of_xfm_13(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrPostRender_t3118402863_StaticFields::get_offset_of_Angles_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (GvrPreRender_t2074710158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1808[1] = 
{
	GvrPreRender_t2074710158::get_offset_of_U3CcamU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (GvrProfile_t2070273202), -1, sizeof(GvrProfile_t2070273202_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1809[15] = 
{
	GvrProfile_t2070273202::get_offset_of_screen_0(),
	GvrProfile_t2070273202::get_offset_of_viewer_1(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus5_2(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Nexus6_3(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyS6_4(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GalaxyNote4_5(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_LGG3_6(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone4_7(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone5_8(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6_9(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_iPhone6p_10(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardJun2014_11(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_CardboardMay2015_12(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_GoggleTechC1Glass_13(),
	GvrProfile_t2070273202_StaticFields::get_offset_of_Default_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (Screen_t839756045)+ sizeof (Il2CppObject), sizeof(Screen_t839756045 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[3] = 
{
	Screen_t839756045::get_offset_of_width_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_height_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t839756045::get_offset_of_border_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (Lenses_t2112994543)+ sizeof (Il2CppObject), sizeof(Lenses_t2112994543 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1811[7] = 
{
	Lenses_t2112994543::get_offset_of_separation_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_offset_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_screenDistance_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t2112994543::get_offset_of_alignment_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (MaxFOV_t1743211906)+ sizeof (Il2CppObject), sizeof(MaxFOV_t1743211906 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1812[4] = 
{
	MaxFOV_t1743211906::get_offset_of_outer_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_inner_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_upper_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t1743211906::get_offset_of_lower_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (Distortion_t550060296)+ sizeof (Il2CppObject), sizeof(Distortion_t550060296_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1813[1] = 
{
	Distortion_t550060296::get_offset_of_coef_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (Viewer_t1642017539)+ sizeof (Il2CppObject), sizeof(Viewer_t1642017539_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1814[4] = 
{
	Viewer_t1642017539::get_offset_of_lenses_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_maxFOV_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_distortion_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t1642017539::get_offset_of_inverse_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (ScreenSizes_t2720173411)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1815[10] = 
{
	ScreenSizes_t2720173411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (ViewerTypes_t2891453798)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1816[4] = 
{
	ViewerTypes_t2891453798::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (StereoController_t3144380552), -1, sizeof(StereoController_t3144380552_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1817[17] = 
{
	StereoController_t3144380552::get_offset_of_directRender_2(),
	StereoController_t3144380552::get_offset_of_keepStereoUpdated_3(),
	StereoController_t3144380552::get_offset_of_stereoMultiplier_4(),
	StereoController_t3144380552::get_offset_of_matchMonoFOV_5(),
	StereoController_t3144380552::get_offset_of_matchByZoom_6(),
	StereoController_t3144380552::get_offset_of_centerOfInterest_7(),
	StereoController_t3144380552::get_offset_of_radiusOfInterest_8(),
	StereoController_t3144380552::get_offset_of_checkStereoComfort_9(),
	StereoController_t3144380552::get_offset_of_stereoAdjustSmoothing_10(),
	StereoController_t3144380552::get_offset_of_screenParallax_11(),
	StereoController_t3144380552::get_offset_of_stereoPaddingX_12(),
	StereoController_t3144380552::get_offset_of_stereoPaddingY_13(),
	StereoController_t3144380552::get_offset_of_renderedStereo_14(),
	StereoController_t3144380552::get_offset_of_eyes_15(),
	StereoController_t3144380552::get_offset_of_head_16(),
	StereoController_t3144380552::get_offset_of_U3CcamU3Ek__BackingField_17(),
	StereoController_t3144380552_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t3626315335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1818[4] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24this_0(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24disposing_2(),
	U3CEndOfFrameU3Ec__Iterator0_t3626315335::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (StereoRenderEffect_t958489249), -1, sizeof(StereoRenderEffect_t958489249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1819[3] = 
{
	StereoRenderEffect_t958489249::get_offset_of_material_2(),
	StereoRenderEffect_t958489249::get_offset_of_cam_3(),
	StereoRenderEffect_t958489249_StaticFields::get_offset_of_fullRect_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { sizeof (BaseVRDevice_t4004462063), -1, sizeof(BaseVRDevice_t4004462063_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1820[19] = 
{
	BaseVRDevice_t4004462063_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t4004462063::get_offset_of_U3CProfileU3Ek__BackingField_1(),
	BaseVRDevice_t4004462063::get_offset_of_headPose_2(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyePose_3(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyePose_4(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedProjection_5(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedProjection_6(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedProjection_7(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedProjection_8(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeDistortedViewport_9(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeDistortedViewport_10(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeUndistortedViewport_11(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeUndistortedViewport_12(),
	BaseVRDevice_t4004462063::get_offset_of_recommendedTextureSize_13(),
	BaseVRDevice_t4004462063::get_offset_of_leftEyeOrientation_14(),
	BaseVRDevice_t4004462063::get_offset_of_rightEyeOrientation_15(),
	BaseVRDevice_t4004462063::get_offset_of_tilted_16(),
	BaseVRDevice_t4004462063::get_offset_of_profileChanged_17(),
	BaseVRDevice_t4004462063::get_offset_of_backButtonPressed_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (GvrDevice_t635821333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1821[13] = 
{
	0,
	0,
	0,
	0,
	GvrDevice_t635821333::get_offset_of_headData_23(),
	GvrDevice_t635821333::get_offset_of_viewData_24(),
	GvrDevice_t635821333::get_offset_of_profileData_25(),
	GvrDevice_t635821333::get_offset_of_headView_26(),
	GvrDevice_t635821333::get_offset_of_leftEyeView_27(),
	GvrDevice_t635821333::get_offset_of_rightEyeView_28(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeProjections_29(),
	GvrDevice_t635821333::get_offset_of_debugDisableNativeUILayer_30(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (iOSDevice_t1373308423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1822[1] = 
{
	iOSDevice_t1373308423::get_offset_of_isOpenGL_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (GvrAudio_t2627885619), -1, sizeof(GvrAudio_t2627885619_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1823[25] = 
{
	GvrAudio_t2627885619_StaticFields::get_offset_of_sampleRate_0(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_numChannels_1(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_framesPerBuffer_2(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrAudio_t2627885619_StaticFields::get_offset_of_bounds_17(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_enabledRooms_18(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_initialized_19(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_listenerTransform_20(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_occlusionMaskValue_21(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_pose_22(),
	GvrAudio_t2627885619_StaticFields::get_offset_of_worldScaleInverse_23(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (Quality_t2125366261)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1824[4] = 
{
	Quality_t2125366261::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (SpatializerType_t3348390394)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1825[3] = 
{
	SpatializerType_t3348390394::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (GvrAudioListener_t1521766837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[4] = 
{
	GvrAudioListener_t1521766837::get_offset_of_globalGainDb_2(),
	GvrAudioListener_t1521766837::get_offset_of_worldScale_3(),
	GvrAudioListener_t1521766837::get_offset_of_occlusionMask_4(),
	GvrAudioListener_t1521766837::get_offset_of_quality_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (GvrAudioRoom_t1253442178), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1827[12] = 
{
	GvrAudioRoom_t1253442178::get_offset_of_leftWall_2(),
	GvrAudioRoom_t1253442178::get_offset_of_rightWall_3(),
	GvrAudioRoom_t1253442178::get_offset_of_floor_4(),
	GvrAudioRoom_t1253442178::get_offset_of_ceiling_5(),
	GvrAudioRoom_t1253442178::get_offset_of_backWall_6(),
	GvrAudioRoom_t1253442178::get_offset_of_frontWall_7(),
	GvrAudioRoom_t1253442178::get_offset_of_reflectivity_8(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbGainDb_9(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbBrightness_10(),
	GvrAudioRoom_t1253442178::get_offset_of_reverbTime_11(),
	GvrAudioRoom_t1253442178::get_offset_of_size_12(),
	GvrAudioRoom_t1253442178::get_offset_of_surfaceMaterials_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (SurfaceMaterial_t3590751945)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1828[24] = 
{
	SurfaceMaterial_t3590751945::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (GvrAudioSoundfield_t1301118448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[12] = 
{
	GvrAudioSoundfield_t1301118448::get_offset_of_gainDb_2(),
	GvrAudioSoundfield_t1301118448::get_offset_of_playOnAwake_3(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldClip0102_4(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldClip0304_5(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldLoop_6(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldMute_7(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldPitch_8(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldPriority_9(),
	GvrAudioSoundfield_t1301118448::get_offset_of_soundfieldVolume_10(),
	GvrAudioSoundfield_t1301118448::get_offset_of_id_11(),
	GvrAudioSoundfield_t1301118448::get_offset_of_audioSources_12(),
	GvrAudioSoundfield_t1301118448::get_offset_of_isPaused_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (GvrAudioSource_t2307460312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[22] = 
{
	GvrAudioSource_t2307460312::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSource_t2307460312::get_offset_of_directivityAlpha_3(),
	GvrAudioSource_t2307460312::get_offset_of_directivitySharpness_4(),
	GvrAudioSource_t2307460312::get_offset_of_gainDb_5(),
	GvrAudioSource_t2307460312::get_offset_of_occlusionEnabled_6(),
	GvrAudioSource_t2307460312::get_offset_of_playOnAwake_7(),
	GvrAudioSource_t2307460312::get_offset_of_rolloffMode_8(),
	GvrAudioSource_t2307460312::get_offset_of_spread_9(),
	GvrAudioSource_t2307460312::get_offset_of_sourceClip_10(),
	GvrAudioSource_t2307460312::get_offset_of_sourceLoop_11(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMute_12(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePitch_13(),
	GvrAudioSource_t2307460312::get_offset_of_sourcePriority_14(),
	GvrAudioSource_t2307460312::get_offset_of_sourceVolume_15(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMaxDistance_16(),
	GvrAudioSource_t2307460312::get_offset_of_sourceMinDistance_17(),
	GvrAudioSource_t2307460312::get_offset_of_hrtfEnabled_18(),
	GvrAudioSource_t2307460312::get_offset_of_audioSource_19(),
	GvrAudioSource_t2307460312::get_offset_of_id_20(),
	GvrAudioSource_t2307460312::get_offset_of_currentOcclusion_21(),
	GvrAudioSource_t2307460312::get_offset_of_nextOcclusionUpdate_22(),
	GvrAudioSource_t2307460312::get_offset_of_isPaused_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (EmulatorClientSocket_t2001911543), -1, sizeof(EmulatorClientSocket_t2001911543_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1831[8] = 
{
	EmulatorClientSocket_t2001911543_StaticFields::get_offset_of_kPhoneEventPort_2(),
	0,
	0,
	EmulatorClientSocket_t2001911543::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2001911543::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2001911543::get_offset_of_phoneRemote_8(),
	EmulatorClientSocket_t2001911543::get_offset_of_U3CconnectedU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (EmulatorConfig_t616150261), -1, sizeof(EmulatorConfig_t616150261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1832[4] = 
{
	EmulatorConfig_t616150261_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t616150261::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t616150261_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (Mode_t1624619217)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1833[4] = 
{
	Mode_t1624619217::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (EmulatorGyroEvent_t1858389926)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t1858389926 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1834[2] = 
{
	EmulatorGyroEvent_t1858389926::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t1858389926::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (EmulatorAccelEvent_t621139879)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t621139879 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1835[2] = 
{
	EmulatorAccelEvent_t621139879::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t621139879::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (EmulatorTouchEvent_t1122923020)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t1122923020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1836[6] = 
{
	EmulatorTouchEvent_t1122923020::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t1122923020_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (Action_t936529327)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1837[10] = 
{
	Action_t936529327::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (Pointer_t3000685002)+ sizeof (Il2CppObject), sizeof(Pointer_t3000685002 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1838[3] = 
{
	Pointer_t3000685002::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3000685002::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (EmulatorOrientationEvent_t4153005117)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t4153005117 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1839[2] = 
{
	EmulatorOrientationEvent_t4153005117::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t4153005117::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (EmulatorButtonEvent_t156276569)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t156276569_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1840[2] = 
{
	EmulatorButtonEvent_t156276569::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t156276569::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (ButtonCode_t4043921137)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1841[7] = 
{
	ButtonCode_t4043921137::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (EmulatorManager_t3364249716), -1, sizeof(EmulatorManager_t3364249716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1842[16] = 
{
	EmulatorManager_t3364249716::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t3364249716::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t3364249716_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t3364249716::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t3364249716::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t3364249716::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t3364249716::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t3364249716::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t3364249716::get_offset_of_gyroEventListenersInternal_10(),
	EmulatorManager_t3364249716::get_offset_of_accelEventListenersInternal_11(),
	EmulatorManager_t3364249716::get_offset_of_touchEventListenersInternal_12(),
	EmulatorManager_t3364249716::get_offset_of_orientationEventListenersInternal_13(),
	EmulatorManager_t3364249716::get_offset_of_buttonEventListenersInternal_14(),
	EmulatorManager_t3364249716::get_offset_of_pendingEvents_15(),
	EmulatorManager_t3364249716::get_offset_of_socket_16(),
	EmulatorManager_t3364249716::get_offset_of_lastDownTimeMs_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (OnGyroEvent_t1804908545), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (OnAccelEvent_t1967739812), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (OnTouchEvent_t4143287487), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (OnOrientationEvent_t602701282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (OnButtonEvent_t358370788), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t4253624923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1848[5] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24locvar0_0(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24this_1(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24current_2(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24disposing_3(),
	U3CEndOfFrameU3Ec__Iterator0_t4253624923::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (PhoneEvent_t3882078222), -1, sizeof(PhoneEvent_t3882078222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1849[1] = 
{
	PhoneEvent_t3882078222_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (PhoneEvent_t2572128318), -1, sizeof(PhoneEvent_t2572128318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1850[25] = 
{
	PhoneEvent_t2572128318_StaticFields::get_offset_of_defaultInstance_0(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldNames_1(),
	PhoneEvent_t2572128318_StaticFields::get_offset_of__phoneEventFieldTags_2(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasType_4(),
	PhoneEvent_t2572128318::get_offset_of_type__5(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasMotionEvent_7(),
	PhoneEvent_t2572128318::get_offset_of_motionEvent__8(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasGyroscopeEvent_10(),
	PhoneEvent_t2572128318::get_offset_of_gyroscopeEvent__11(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasAccelerometerEvent_13(),
	PhoneEvent_t2572128318::get_offset_of_accelerometerEvent__14(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasDepthMapEvent_16(),
	PhoneEvent_t2572128318::get_offset_of_depthMapEvent__17(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasOrientationEvent_19(),
	PhoneEvent_t2572128318::get_offset_of_orientationEvent__20(),
	0,
	PhoneEvent_t2572128318::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t2572128318::get_offset_of_keyEvent__23(),
	PhoneEvent_t2572128318::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (Types_t3648109718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (Type_t1530480861)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1852[7] = 
{
	Type_t1530480861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (MotionEvent_t4072706903), -1, sizeof(MotionEvent_t4072706903_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1853[12] = 
{
	MotionEvent_t4072706903_StaticFields::get_offset_of_defaultInstance_0(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldNames_1(),
	MotionEvent_t4072706903_StaticFields::get_offset_of__motionEventFieldTags_2(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasTimestamp_4(),
	MotionEvent_t4072706903::get_offset_of_timestamp__5(),
	0,
	MotionEvent_t4072706903::get_offset_of_hasAction_7(),
	MotionEvent_t4072706903::get_offset_of_action__8(),
	0,
	MotionEvent_t4072706903::get_offset_of_pointers__10(),
	MotionEvent_t4072706903::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (Types_t1262104803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (Pointer_t1211758263), -1, sizeof(Pointer_t1211758263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1855[13] = 
{
	Pointer_t1211758263_StaticFields::get_offset_of_defaultInstance_0(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldNames_1(),
	Pointer_t1211758263_StaticFields::get_offset_of__pointerFieldTags_2(),
	0,
	Pointer_t1211758263::get_offset_of_hasId_4(),
	Pointer_t1211758263::get_offset_of_id__5(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedX_7(),
	Pointer_t1211758263::get_offset_of_normalizedX__8(),
	0,
	Pointer_t1211758263::get_offset_of_hasNormalizedY_10(),
	Pointer_t1211758263::get_offset_of_normalizedY__11(),
	Pointer_t1211758263::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (Builder_t2701542133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1856[2] = 
{
	Builder_t2701542133::get_offset_of_resultIsReadOnly_0(),
	Builder_t2701542133::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (Builder_t3452538341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1857[2] = 
{
	Builder_t3452538341::get_offset_of_resultIsReadOnly_0(),
	Builder_t3452538341::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (GyroscopeEvent_t182225200), -1, sizeof(GyroscopeEvent_t182225200_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1858[16] = 
{
	GyroscopeEvent_t182225200_StaticFields::get_offset_of_defaultInstance_0(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldNames_1(),
	GyroscopeEvent_t182225200_StaticFields::get_offset_of__gyroscopeEventFieldTags_2(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasTimestamp_4(),
	GyroscopeEvent_t182225200::get_offset_of_timestamp__5(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasX_7(),
	GyroscopeEvent_t182225200::get_offset_of_x__8(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasY_10(),
	GyroscopeEvent_t182225200::get_offset_of_y__11(),
	0,
	GyroscopeEvent_t182225200::get_offset_of_hasZ_13(),
	GyroscopeEvent_t182225200::get_offset_of_z__14(),
	GyroscopeEvent_t182225200::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (Builder_t33558588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1859[2] = 
{
	Builder_t33558588::get_offset_of_resultIsReadOnly_0(),
	Builder_t33558588::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (AccelerometerEvent_t1893725728), -1, sizeof(AccelerometerEvent_t1893725728_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1860[16] = 
{
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of_defaultInstance_0(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldNames_1(),
	AccelerometerEvent_t1893725728_StaticFields::get_offset_of__accelerometerEventFieldTags_2(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasTimestamp_4(),
	AccelerometerEvent_t1893725728::get_offset_of_timestamp__5(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasX_7(),
	AccelerometerEvent_t1893725728::get_offset_of_x__8(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasY_10(),
	AccelerometerEvent_t1893725728::get_offset_of_y__11(),
	0,
	AccelerometerEvent_t1893725728::get_offset_of_hasZ_13(),
	AccelerometerEvent_t1893725728::get_offset_of_z__14(),
	AccelerometerEvent_t1893725728::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (Builder_t1480486140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1861[2] = 
{
	Builder_t1480486140::get_offset_of_resultIsReadOnly_0(),
	Builder_t1480486140::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (DepthMapEvent_t1516604558), -1, sizeof(DepthMapEvent_t1516604558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1862[16] = 
{
	DepthMapEvent_t1516604558_StaticFields::get_offset_of_defaultInstance_0(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldNames_1(),
	DepthMapEvent_t1516604558_StaticFields::get_offset_of__depthMapEventFieldTags_2(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasTimestamp_4(),
	DepthMapEvent_t1516604558::get_offset_of_timestamp__5(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasWidth_7(),
	DepthMapEvent_t1516604558::get_offset_of_width__8(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_hasHeight_10(),
	DepthMapEvent_t1516604558::get_offset_of_height__11(),
	0,
	DepthMapEvent_t1516604558::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t1516604558::get_offset_of_zDistances__14(),
	DepthMapEvent_t1516604558::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (Builder_t3483346914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1863[2] = 
{
	Builder_t3483346914::get_offset_of_resultIsReadOnly_0(),
	Builder_t3483346914::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (OrientationEvent_t2038376807), -1, sizeof(OrientationEvent_t2038376807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1864[19] = 
{
	OrientationEvent_t2038376807_StaticFields::get_offset_of_defaultInstance_0(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldNames_1(),
	OrientationEvent_t2038376807_StaticFields::get_offset_of__orientationEventFieldTags_2(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasTimestamp_4(),
	OrientationEvent_t2038376807::get_offset_of_timestamp__5(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasX_7(),
	OrientationEvent_t2038376807::get_offset_of_x__8(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasY_10(),
	OrientationEvent_t2038376807::get_offset_of_y__11(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasZ_13(),
	OrientationEvent_t2038376807::get_offset_of_z__14(),
	0,
	OrientationEvent_t2038376807::get_offset_of_hasW_16(),
	OrientationEvent_t2038376807::get_offset_of_w__17(),
	OrientationEvent_t2038376807::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (Builder_t2561526853), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1865[2] = 
{
	Builder_t2561526853::get_offset_of_resultIsReadOnly_0(),
	Builder_t2561526853::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (KeyEvent_t639576718), -1, sizeof(KeyEvent_t639576718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1866[10] = 
{
	KeyEvent_t639576718_StaticFields::get_offset_of_defaultInstance_0(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldNames_1(),
	KeyEvent_t639576718_StaticFields::get_offset_of__keyEventFieldTags_2(),
	0,
	KeyEvent_t639576718::get_offset_of_hasAction_4(),
	KeyEvent_t639576718::get_offset_of_action__5(),
	0,
	KeyEvent_t639576718::get_offset_of_hasCode_7(),
	KeyEvent_t639576718::get_offset_of_code__8(),
	KeyEvent_t639576718::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (Builder_t2056133158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1867[2] = 
{
	Builder_t2056133158::get_offset_of_resultIsReadOnly_0(),
	Builder_t2056133158::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (Builder_t2537253112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1868[2] = 
{
	Builder_t2537253112::get_offset_of_resultIsReadOnly_0(),
	Builder_t2537253112::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (GazeInputModule_t197612175), -1, sizeof(GazeInputModule_t197612175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1869[6] = 
{
	GazeInputModule_t197612175::get_offset_of_vrModeOnly_8(),
	GazeInputModule_t197612175_StaticFields::get_offset_of_gazePointer_9(),
	GazeInputModule_t197612175::get_offset_of_pointerData_10(),
	GazeInputModule_t197612175::get_offset_of_lastHeadPose_11(),
	GazeInputModule_t197612175::get_offset_of_isActive_12(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (GvrViewer_t2583885279), -1, sizeof(GvrViewer_t2583885279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1870[19] = 
{
	0,
	GvrViewer_t2583885279_StaticFields::get_offset_of_instance_3(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentController_4(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_currentMainCamera_5(),
	GvrViewer_t2583885279::get_offset_of_vrModeEnabled_6(),
	GvrViewer_t2583885279::get_offset_of_distortionCorrectionEnabled_7(),
	GvrViewer_t2583885279::get_offset_of_neckModelScale_8(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_device_9(),
	GvrViewer_t2583885279::get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_10(),
	GvrViewer_t2583885279::get_offset_of_stereoScreenScale_11(),
	GvrViewer_t2583885279_StaticFields::get_offset_of_stereoScreen_12(),
	GvrViewer_t2583885279::get_offset_of_OnStereoScreenChanged_13(),
	GvrViewer_t2583885279::get_offset_of_defaultComfortableViewingRange_14(),
	GvrViewer_t2583885279::get_offset_of_DefaultDeviceProfile_15(),
	GvrViewer_t2583885279::get_offset_of_U3CTriggeredU3Ek__BackingField_16(),
	GvrViewer_t2583885279::get_offset_of_U3CTiltedU3Ek__BackingField_17(),
	GvrViewer_t2583885279::get_offset_of_U3CProfileChangedU3Ek__BackingField_18(),
	GvrViewer_t2583885279::get_offset_of_U3CBackButtonPressedU3Ek__BackingField_19(),
	GvrViewer_t2583885279::get_offset_of_updatedToFrame_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (StereoScreenChangeDelegate_t1350813851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (Eye_t1346324485)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1872[4] = 
{
	Eye_t1346324485::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { sizeof (Distortion_t351632083)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1873[3] = 
{
	Distortion_t351632083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (Pose3D_t3872859958), -1, sizeof(Pose3D_t3872859958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1874[4] = 
{
	Pose3D_t3872859958_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t3872859958::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t3872859958::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t3872859958::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (MutablePose3D_t1015643808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (GvrGaze_t2249568644), -1, sizeof(GvrGaze_t2249568644_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1876[10] = 
{
	GvrGaze_t2249568644::get_offset_of_pointerObject_2(),
	GvrGaze_t2249568644::get_offset_of_pointer_3(),
	GvrGaze_t2249568644::get_offset_of_U3CcamU3Ek__BackingField_4(),
	GvrGaze_t2249568644::get_offset_of_mask_5(),
	GvrGaze_t2249568644::get_offset_of_currentTarget_6(),
	GvrGaze_t2249568644::get_offset_of_currentGazeObject_7(),
	GvrGaze_t2249568644::get_offset_of_lastIntersectPosition_8(),
	GvrGaze_t2249568644::get_offset_of_isTriggered_9(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_10(),
	GvrGaze_t2249568644_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (GvrReticle_t1834592217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1877[14] = 
{
	GvrReticle_t1834592217::get_offset_of_reticleSegments_2(),
	GvrReticle_t1834592217::get_offset_of_reticleGrowthSpeed_3(),
	GvrReticle_t1834592217::get_offset_of_materialComp_4(),
	GvrReticle_t1834592217::get_offset_of_targetObj_5(),
	GvrReticle_t1834592217::get_offset_of_reticleInnerAngle_6(),
	GvrReticle_t1834592217::get_offset_of_reticleOuterAngle_7(),
	GvrReticle_t1834592217::get_offset_of_reticleDistanceInMeters_8(),
	0,
	0,
	0,
	0,
	0,
	GvrReticle_t1834592217::get_offset_of_reticleInnerDiameter_14(),
	GvrReticle_t1834592217::get_offset_of_reticleOuterDiameter_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (GvrFPS_t750935016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1880[6] = 
{
	0,
	0,
	0,
	GvrFPS_t750935016::get_offset_of_textField_5(),
	GvrFPS_t750935016::get_offset_of_fps_6(),
	GvrFPS_t750935016::get_offset_of_cam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (GvrIntent_t542233401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (PauseManager_t3603214425), -1, sizeof(PauseManager_t3603214425_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1882[81] = 
{
	PauseManager_t3603214425::get_offset_of_mainPanel_2(),
	PauseManager_t3603214425::get_offset_of_vidPanel_3(),
	PauseManager_t3603214425::get_offset_of_audioPanel_4(),
	PauseManager_t3603214425::get_offset_of_TitleTexts_5(),
	PauseManager_t3603214425::get_offset_of_mask_6(),
	PauseManager_t3603214425::get_offset_of_audioPanelAnimator_7(),
	PauseManager_t3603214425::get_offset_of_vidPanelAnimator_8(),
	PauseManager_t3603214425::get_offset_of_quitPanelAnimator_9(),
	PauseManager_t3603214425::get_offset_of_pauseMenu_10(),
	PauseManager_t3603214425::get_offset_of_mainMenu_11(),
	PauseManager_t3603214425::get_offset_of_DOFScriptName_12(),
	PauseManager_t3603214425::get_offset_of_AOScriptName_13(),
	PauseManager_t3603214425::get_offset_of_mainCam_14(),
	PauseManager_t3603214425_StaticFields::get_offset_of_mainCamShared_15(),
	PauseManager_t3603214425::get_offset_of_mainCamObj_16(),
	PauseManager_t3603214425::get_offset_of_detailDensity_17(),
	PauseManager_t3603214425::get_offset_of_timeScale_18(),
	PauseManager_t3603214425::get_offset_of_terrain_19(),
	PauseManager_t3603214425::get_offset_of_simpleTerrain_20(),
	PauseManager_t3603214425_StaticFields::get_offset_of_shadowDistINI_21(),
	PauseManager_t3603214425_StaticFields::get_offset_of_renderDistINI_22(),
	PauseManager_t3603214425_StaticFields::get_offset_of_aaQualINI_23(),
	PauseManager_t3603214425_StaticFields::get_offset_of_densityINI_24(),
	PauseManager_t3603214425_StaticFields::get_offset_of_treeMeshAmtINI_25(),
	PauseManager_t3603214425_StaticFields::get_offset_of_fovINI_26(),
	PauseManager_t3603214425_StaticFields::get_offset_of_msaaINI_27(),
	PauseManager_t3603214425_StaticFields::get_offset_of_vsyncINI_28(),
	PauseManager_t3603214425::get_offset_of_aaCombo_29(),
	PauseManager_t3603214425::get_offset_of_afCombo_30(),
	PauseManager_t3603214425::get_offset_of_fovSlider_31(),
	PauseManager_t3603214425::get_offset_of_modelQualSlider_32(),
	PauseManager_t3603214425::get_offset_of_terrainQualSlider_33(),
	PauseManager_t3603214425::get_offset_of_highQualTreeSlider_34(),
	PauseManager_t3603214425::get_offset_of_renderDistSlider_35(),
	PauseManager_t3603214425::get_offset_of_terrainDensitySlider_36(),
	PauseManager_t3603214425::get_offset_of_shadowDistSlider_37(),
	PauseManager_t3603214425::get_offset_of_audioMasterSlider_38(),
	PauseManager_t3603214425::get_offset_of_audioMusicSlider_39(),
	PauseManager_t3603214425::get_offset_of_audioEffectsSlider_40(),
	PauseManager_t3603214425::get_offset_of_masterTexSlider_41(),
	PauseManager_t3603214425::get_offset_of_shadowCascadesSlider_42(),
	PauseManager_t3603214425::get_offset_of_vSyncToggle_43(),
	PauseManager_t3603214425::get_offset_of_aoToggle_44(),
	PauseManager_t3603214425::get_offset_of_dofToggle_45(),
	PauseManager_t3603214425::get_offset_of_fullscreenToggle_46(),
	PauseManager_t3603214425::get_offset_of_presetLabel_47(),
	PauseManager_t3603214425::get_offset_of_resolutionLabel_48(),
	PauseManager_t3603214425::get_offset_of_LODBias_49(),
	PauseManager_t3603214425::get_offset_of_shadowDist_50(),
	PauseManager_t3603214425::get_offset_of_music_51(),
	PauseManager_t3603214425::get_offset_of_effects_52(),
	PauseManager_t3603214425::get_offset_of_otherUIElements_53(),
	PauseManager_t3603214425::get_offset_of_hardCodeSomeVideoSettings_54(),
	PauseManager_t3603214425::get_offset_of_useSimpleTerrain_55(),
	PauseManager_t3603214425_StaticFields::get_offset_of_readUseSimpleTerrain_56(),
	PauseManager_t3603214425::get_offset_of_uiEventSystem_57(),
	PauseManager_t3603214425::get_offset_of_defualtSelectedVideo_58(),
	PauseManager_t3603214425::get_offset_of_defualtSelectedAudio_59(),
	PauseManager_t3603214425::get_offset_of_defualtSelectedMain_60(),
	PauseManager_t3603214425_StaticFields::get_offset_of_lastMusicMult_61(),
	PauseManager_t3603214425_StaticFields::get_offset_of_lastAudioMult_62(),
	PauseManager_t3603214425_StaticFields::get_offset_of_beforeMaster_63(),
	PauseManager_t3603214425_StaticFields::get_offset_of_lastTexLimit_64(),
	PauseManager_t3603214425::get_offset_of__audioEffectAmt_65(),
	PauseManager_t3603214425::get_offset_of__beforeEffectVol_66(),
	PauseManager_t3603214425::get_offset_of__beforeMusic_67(),
	PauseManager_t3603214425::get_offset_of__currentLevel_68(),
	PauseManager_t3603214425::get_offset_of_allRes_69(),
	PauseManager_t3603214425::get_offset_of_tempScript_70(),
	PauseManager_t3603214425::get_offset_of_presets_71(),
	PauseManager_t3603214425::get_offset_of_isFullscreen_72(),
	PauseManager_t3603214425_StaticFields::get_offset_of_currentRes_73(),
	PauseManager_t3603214425::get_offset_of_beforeRes_74(),
	PauseManager_t3603214425_StaticFields::get_offset_of_lastShadowCascade_75(),
	PauseManager_t3603214425_StaticFields::get_offset_of_aoBool_76(),
	PauseManager_t3603214425_StaticFields::get_offset_of_dofBool_77(),
	PauseManager_t3603214425::get_offset_of_lastAOBool_78(),
	PauseManager_t3603214425::get_offset_of_lastDOFBool_79(),
	PauseManager_t3603214425_StaticFields::get_offset_of_readTerrain_80(),
	PauseManager_t3603214425_StaticFields::get_offset_of_readSimpleTerrain_81(),
	PauseManager_t3603214425::get_offset_of_saveSettings_82(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (U3CapplyAudioMainU3Ec__Iterator0_t2583936022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1883[4] = 
{
	U3CapplyAudioMainU3Ec__Iterator0_t2583936022::get_offset_of_U24this_0(),
	U3CapplyAudioMainU3Ec__Iterator0_t2583936022::get_offset_of_U24current_1(),
	U3CapplyAudioMainU3Ec__Iterator0_t2583936022::get_offset_of_U24disposing_2(),
	U3CapplyAudioMainU3Ec__Iterator0_t2583936022::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (U3CcancelAudioMainU3Ec__Iterator1_t1765895437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1884[4] = 
{
	U3CcancelAudioMainU3Ec__Iterator1_t1765895437::get_offset_of_U24this_0(),
	U3CcancelAudioMainU3Ec__Iterator1_t1765895437::get_offset_of_U24current_1(),
	U3CcancelAudioMainU3Ec__Iterator1_t1765895437::get_offset_of_U24disposing_2(),
	U3CcancelAudioMainU3Ec__Iterator1_t1765895437::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (U3CcancelVideoMainU3Ec__Iterator2_t1439085869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1885[4] = 
{
	U3CcancelVideoMainU3Ec__Iterator2_t1439085869::get_offset_of_U24this_0(),
	U3CcancelVideoMainU3Ec__Iterator2_t1439085869::get_offset_of_U24current_1(),
	U3CcancelVideoMainU3Ec__Iterator2_t1439085869::get_offset_of_U24disposing_2(),
	U3CcancelVideoMainU3Ec__Iterator2_t1439085869::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (U3CapplyVideoU3Ec__Iterator3_t3467124013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1886[4] = 
{
	U3CapplyVideoU3Ec__Iterator3_t3467124013::get_offset_of_U24this_0(),
	U3CapplyVideoU3Ec__Iterator3_t3467124013::get_offset_of_U24current_1(),
	U3CapplyVideoU3Ec__Iterator3_t3467124013::get_offset_of_U24disposing_2(),
	U3CapplyVideoU3Ec__Iterator3_t3467124013::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (SaveSettings_t154721934), -1, sizeof(SaveSettings_t154721934_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1887[24] = 
{
	SaveSettings_t154721934::get_offset_of_fileName_0(),
	SaveSettings_t154721934::get_offset_of_musicVolume_1(),
	SaveSettings_t154721934::get_offset_of_effectsVolume_2(),
	SaveSettings_t154721934::get_offset_of_masterVolume_3(),
	SaveSettings_t154721934::get_offset_of_shadowDistINI_4(),
	SaveSettings_t154721934::get_offset_of_renderDistINI_5(),
	SaveSettings_t154721934::get_offset_of_aaQualINI_6(),
	SaveSettings_t154721934::get_offset_of_densityINI_7(),
	SaveSettings_t154721934::get_offset_of_treeMeshAmtINI_8(),
	SaveSettings_t154721934::get_offset_of_fovINI_9(),
	SaveSettings_t154721934::get_offset_of_terrainHeightMapLOD_10(),
	SaveSettings_t154721934::get_offset_of_msaaINI_11(),
	SaveSettings_t154721934::get_offset_of_vsyncINI_12(),
	SaveSettings_t154721934::get_offset_of_textureLimit_13(),
	SaveSettings_t154721934::get_offset_of_curQualityLevel_14(),
	SaveSettings_t154721934::get_offset_of_lastShadowCascade_15(),
	SaveSettings_t154721934::get_offset_of_anisoLevel_16(),
	SaveSettings_t154721934::get_offset_of_aoBool_17(),
	SaveSettings_t154721934::get_offset_of_dofBool_18(),
	SaveSettings_t154721934::get_offset_of_useSimpleTerrain_19(),
	SaveSettings_t154721934::get_offset_of_fullscreenBool_20(),
	SaveSettings_t154721934::get_offset_of_resHeight_21(),
	SaveSettings_t154721934::get_offset_of_resWidth_22(),
	SaveSettings_t154721934_StaticFields::get_offset_of_jsonString_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (CoroutineUtilities_t2738139678), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (U3CWaitForRealTimeU3Ec__Iterator0_t3508040781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1889[5] = 
{
	U3CWaitForRealTimeU3Ec__Iterator0_t3508040781::get_offset_of_delay_0(),
	U3CWaitForRealTimeU3Ec__Iterator0_t3508040781::get_offset_of_U3CpauseEndTimeU3E__0_1(),
	U3CWaitForRealTimeU3Ec__Iterator0_t3508040781::get_offset_of_U24current_2(),
	U3CWaitForRealTimeU3Ec__Iterator0_t3508040781::get_offset_of_U24disposing_3(),
	U3CWaitForRealTimeU3Ec__Iterator0_t3508040781::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (Rotate_t223848977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1890[3] = 
{
	Rotate_t223848977::get_offset_of_x_2(),
	Rotate_t223848977::get_offset_of_y_3(),
	Rotate_t223848977::get_offset_of_z_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (U3CPrivateImplementationDetailsU3E_t1486305142), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1891[7] = 
{
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D51B2AA051AFFF21EBC28102EA2F57BEF007038AE_0(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D311441405B64B3EA9097AC8E07F3274962EC6BB4_1(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D16E2B412E9C2B8E31B780DE46254349320CCAAA0_2(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2DD7F443D0D86C2C79F284C1CA7CCCF3C9D9B7B6D8_3(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2D25B4B83D2A43393F4E18624598DDA694217A6622_4(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2DFADC743710841EB901D5F6FBC97F555D4BD94310_5(),
	U3CPrivateImplementationDetailsU3E_t1486305142_StaticFields::get_offset_of_U24fieldU2DC34ABF0A6BE7F2D67E7997A058AA0AA6985FFE6F_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (U24ArrayTypeU3D20_t2731437132)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D20_t2731437132 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (U24ArrayTypeU3D12_t1568637718)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D12_t1568637718 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (U24ArrayTypeU3D16_t3894236545)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D16_t3894236545 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (U24ArrayTypeU3D28_t2375206772)+ sizeof (Il2CppObject), sizeof(U24ArrayTypeU3D28_t2375206772 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
