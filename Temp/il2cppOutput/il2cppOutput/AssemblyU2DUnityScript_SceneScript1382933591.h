#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityScript.Lang.Array
struct Array_t1209885965;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t872225289;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Button
struct Button_t990034267;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneScript
struct  SceneScript_t1382933591  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 SceneScript::ROWS
	int32_t ___ROWS_2;
	// System.Int32 SceneScript::COLS
	int32_t ___COLS_3;
	// System.Single SceneScript::MARGIN
	float ___MARGIN_4;
	// System.Single SceneScript::CENTER_HALF_LENGTH
	float ___CENTER_HALF_LENGTH_5;
	// System.Single SceneScript::CENTER_SCALE
	float ___CENTER_SCALE_6;
	// System.Single SceneScript::SCREEN_WIDTH
	float ___SCREEN_WIDTH_7;
	// System.Single SceneScript::SCREEN_HEIGHT
	float ___SCREEN_HEIGHT_8;
	// UnityEngine.GameObject SceneScript::centerPrefab
	GameObject_t4012695102 * ___centerPrefab_9;
	// UnityEngine.GameObject SceneScript::leafPrefab
	GameObject_t4012695102 * ___leafPrefab_10;
	// System.Single SceneScript::LEAF_WIDTH
	float ___LEAF_WIDTH_11;
	// System.Single SceneScript::VERTICAL_ADJUST
	float ___VERTICAL_ADJUST_12;
	// System.Single SceneScript::LEAF_SCALE
	float ___LEAF_SCALE_13;
	// UnityScript.Lang.Array SceneScript::leaves
	Array_t1209885965 * ___leaves_14;
	// System.Collections.Hashtable SceneScript::colorDict
	Hashtable_t3875263730 * ___colorDict_15;
	// System.Int32 SceneScript::FIRST_COLOR
	int32_t ___FIRST_COLOR_16;
	// System.Int32 SceneScript::SECOND_COLOR
	int32_t ___SECOND_COLOR_17;
	// System.Single SceneScript::userRotation
	float ___userRotation_18;
	// UnityEngine.GameObject[] SceneScript::userRotateLeaves
	GameObjectU5BU5D_t3499186955* ___userRotateLeaves_19;
	// System.Single SceneScript::USER_ROTATE_SPEED
	float ___USER_ROTATE_SPEED_20;
	// UnityEngine.Vector3 SceneScript::userRotateCenter
	Vector3_t3525329789  ___userRotateCenter_21;
	// System.Boolean SceneScript::inUserRotation
	bool ___inUserRotation_22;
	// System.Boolean SceneScript::inFlip
	bool ___inFlip_23;
	// System.Boolean SceneScript::isScaling
	bool ___isScaling_24;
	// System.Boolean SceneScript::isTilting
	bool ___isTilting_25;
	// UnityEngine.GameObject SceneScript::lastTouchCenter
	GameObject_t4012695102 * ___lastTouchCenter_26;
	// System.Int32 SceneScript::totalColorNum
	int32_t ___totalColorNum_27;
	// System.Int32 SceneScript::CENTER_NUM
	int32_t ___CENTER_NUM_28;
	// System.Boolean SceneScript::needCheckDeadlock
	bool ___needCheckDeadlock_29;
	// System.Single SceneScript::lastSuccessfulRotationTime
	float ___lastSuccessfulRotationTime_30;
	// System.Single SceneScript::hintTime
	float ___hintTime_31;
	// System.Int32 SceneScript::colorForHint
	int32_t ___colorForHint_32;
	// UnityEngine.GameObject SceneScript::scoreCirclePrefab
	GameObject_t4012695102 * ___scoreCirclePrefab_33;
	// System.Single SceneScript::UIStartingPosition
	float ___UIStartingPosition_34;
	// System.Single SceneScript::EMPTY_SPACE
	float ___EMPTY_SPACE_35;
	// System.Single SceneScript::SCORE_CIRCLE_SCALE
	float ___SCORE_CIRCLE_SCALE_36;
	// System.Int32 SceneScript::SCORE_CIRCLE_NUM
	int32_t ___SCORE_CIRCLE_NUM_37;
	// UnityScript.Lang.Array SceneScript::hintArray
	Array_t1209885965 * ___hintArray_38;
	// System.Int32 SceneScript::scores
	int32_t ___scores_39;
	// UnityScript.Lang.Array SceneScript::scoreBoard
	Array_t1209885965 * ___scoreBoard_40;
	// System.Single SceneScript::TIME_STAMP_LENGTH
	float ___TIME_STAMP_LENGTH_41;
	// System.Single SceneScript::TIME_STAMP_SCALE
	float ___TIME_STAMP_SCALE_42;
	// System.Int32 SceneScript::TIME_STAMP_NUM
	int32_t ___TIME_STAMP_NUM_43;
	// UnityScript.Lang.Array SceneScript::timeStamps
	Array_t1209885965 * ___timeStamps_44;
	// System.Int32 SceneScript::accuTime
	int32_t ___accuTime_45;
	// UnityEngine.Canvas SceneScript::canvas
	Canvas_t3534013893 * ___canvas_46;
	// System.Boolean SceneScript::isScoreAdded
	bool ___isScoreAdded_47;
	// System.Int32 SceneScript::scoreToAdded
	int32_t ___scoreToAdded_48;
	// System.Single SceneScript::gameStartTime
	float ___gameStartTime_49;
	// UnityScript.Lang.Array SceneScript::centers
	Array_t1209885965 * ___centers_50;
	// System.Boolean SceneScript::isGameOverHandled
	bool ___isGameOverHandled_51;
	// System.Single SceneScript::GAME_TIME
	float ___GAME_TIME_52;
	// System.Boolean SceneScript::leavesAreOpen
	bool ___leavesAreOpen_53;
	// System.Boolean SceneScript::collidersEnable
	bool ___collidersEnable_54;
	// UnityEngine.GameObject SceneScript::timeStampPrefab
	GameObject_t4012695102 * ___timeStampPrefab_55;
	// System.Boolean SceneScript::isPause
	bool ___isPause_56;
	// System.Boolean SceneScript::scoreBoardInRotation
	bool ___scoreBoardInRotation_57;
	// System.Int32 SceneScript::STAMP_INITTIME
	int32_t ___STAMP_INITTIME_58;
	// UnityEngine.UI.CanvasScaler SceneScript::canvasScaler
	CanvasScaler_t872225289 * ___canvasScaler_59;
	// System.Single SceneScript::UIScaleFactorX
	float ___UIScaleFactorX_60;
	// System.Single SceneScript::UIScaleFactorY
	float ___UIScaleFactorY_61;
	// UnityEngine.UI.Text SceneScript::tutorial
	Text_t3286458198 * ___tutorial_62;
	// UnityEngine.UI.Text SceneScript::addScoreText
	Text_t3286458198 * ___addScoreText_63;
	// UnityEngine.UI.Text SceneScript::highestScoreText
	Text_t3286458198 * ___highestScoreText_64;
	// UnityEngine.UI.Button SceneScript::startButton
	Button_t990034267 * ___startButton_65;
	// UnityEngine.UI.Button SceneScript::pauseButton
	Button_t990034267 * ___pauseButton_66;
	// UnityEngine.UI.Button SceneScript::resumeButton
	Button_t990034267 * ___resumeButton_67;
	// UnityEngine.UI.Button SceneScript::restartButton
	Button_t990034267 * ___restartButton_68;

public:
	inline static int32_t get_offset_of_ROWS_2() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___ROWS_2)); }
	inline int32_t get_ROWS_2() const { return ___ROWS_2; }
	inline int32_t* get_address_of_ROWS_2() { return &___ROWS_2; }
	inline void set_ROWS_2(int32_t value)
	{
		___ROWS_2 = value;
	}

	inline static int32_t get_offset_of_COLS_3() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___COLS_3)); }
	inline int32_t get_COLS_3() const { return ___COLS_3; }
	inline int32_t* get_address_of_COLS_3() { return &___COLS_3; }
	inline void set_COLS_3(int32_t value)
	{
		___COLS_3 = value;
	}

	inline static int32_t get_offset_of_MARGIN_4() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___MARGIN_4)); }
	inline float get_MARGIN_4() const { return ___MARGIN_4; }
	inline float* get_address_of_MARGIN_4() { return &___MARGIN_4; }
	inline void set_MARGIN_4(float value)
	{
		___MARGIN_4 = value;
	}

	inline static int32_t get_offset_of_CENTER_HALF_LENGTH_5() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___CENTER_HALF_LENGTH_5)); }
	inline float get_CENTER_HALF_LENGTH_5() const { return ___CENTER_HALF_LENGTH_5; }
	inline float* get_address_of_CENTER_HALF_LENGTH_5() { return &___CENTER_HALF_LENGTH_5; }
	inline void set_CENTER_HALF_LENGTH_5(float value)
	{
		___CENTER_HALF_LENGTH_5 = value;
	}

	inline static int32_t get_offset_of_CENTER_SCALE_6() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___CENTER_SCALE_6)); }
	inline float get_CENTER_SCALE_6() const { return ___CENTER_SCALE_6; }
	inline float* get_address_of_CENTER_SCALE_6() { return &___CENTER_SCALE_6; }
	inline void set_CENTER_SCALE_6(float value)
	{
		___CENTER_SCALE_6 = value;
	}

	inline static int32_t get_offset_of_SCREEN_WIDTH_7() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___SCREEN_WIDTH_7)); }
	inline float get_SCREEN_WIDTH_7() const { return ___SCREEN_WIDTH_7; }
	inline float* get_address_of_SCREEN_WIDTH_7() { return &___SCREEN_WIDTH_7; }
	inline void set_SCREEN_WIDTH_7(float value)
	{
		___SCREEN_WIDTH_7 = value;
	}

	inline static int32_t get_offset_of_SCREEN_HEIGHT_8() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___SCREEN_HEIGHT_8)); }
	inline float get_SCREEN_HEIGHT_8() const { return ___SCREEN_HEIGHT_8; }
	inline float* get_address_of_SCREEN_HEIGHT_8() { return &___SCREEN_HEIGHT_8; }
	inline void set_SCREEN_HEIGHT_8(float value)
	{
		___SCREEN_HEIGHT_8 = value;
	}

	inline static int32_t get_offset_of_centerPrefab_9() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___centerPrefab_9)); }
	inline GameObject_t4012695102 * get_centerPrefab_9() const { return ___centerPrefab_9; }
	inline GameObject_t4012695102 ** get_address_of_centerPrefab_9() { return &___centerPrefab_9; }
	inline void set_centerPrefab_9(GameObject_t4012695102 * value)
	{
		___centerPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___centerPrefab_9, value);
	}

	inline static int32_t get_offset_of_leafPrefab_10() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___leafPrefab_10)); }
	inline GameObject_t4012695102 * get_leafPrefab_10() const { return ___leafPrefab_10; }
	inline GameObject_t4012695102 ** get_address_of_leafPrefab_10() { return &___leafPrefab_10; }
	inline void set_leafPrefab_10(GameObject_t4012695102 * value)
	{
		___leafPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___leafPrefab_10, value);
	}

	inline static int32_t get_offset_of_LEAF_WIDTH_11() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___LEAF_WIDTH_11)); }
	inline float get_LEAF_WIDTH_11() const { return ___LEAF_WIDTH_11; }
	inline float* get_address_of_LEAF_WIDTH_11() { return &___LEAF_WIDTH_11; }
	inline void set_LEAF_WIDTH_11(float value)
	{
		___LEAF_WIDTH_11 = value;
	}

	inline static int32_t get_offset_of_VERTICAL_ADJUST_12() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___VERTICAL_ADJUST_12)); }
	inline float get_VERTICAL_ADJUST_12() const { return ___VERTICAL_ADJUST_12; }
	inline float* get_address_of_VERTICAL_ADJUST_12() { return &___VERTICAL_ADJUST_12; }
	inline void set_VERTICAL_ADJUST_12(float value)
	{
		___VERTICAL_ADJUST_12 = value;
	}

	inline static int32_t get_offset_of_LEAF_SCALE_13() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___LEAF_SCALE_13)); }
	inline float get_LEAF_SCALE_13() const { return ___LEAF_SCALE_13; }
	inline float* get_address_of_LEAF_SCALE_13() { return &___LEAF_SCALE_13; }
	inline void set_LEAF_SCALE_13(float value)
	{
		___LEAF_SCALE_13 = value;
	}

	inline static int32_t get_offset_of_leaves_14() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___leaves_14)); }
	inline Array_t1209885965 * get_leaves_14() const { return ___leaves_14; }
	inline Array_t1209885965 ** get_address_of_leaves_14() { return &___leaves_14; }
	inline void set_leaves_14(Array_t1209885965 * value)
	{
		___leaves_14 = value;
		Il2CppCodeGenWriteBarrier(&___leaves_14, value);
	}

	inline static int32_t get_offset_of_colorDict_15() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___colorDict_15)); }
	inline Hashtable_t3875263730 * get_colorDict_15() const { return ___colorDict_15; }
	inline Hashtable_t3875263730 ** get_address_of_colorDict_15() { return &___colorDict_15; }
	inline void set_colorDict_15(Hashtable_t3875263730 * value)
	{
		___colorDict_15 = value;
		Il2CppCodeGenWriteBarrier(&___colorDict_15, value);
	}

	inline static int32_t get_offset_of_FIRST_COLOR_16() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___FIRST_COLOR_16)); }
	inline int32_t get_FIRST_COLOR_16() const { return ___FIRST_COLOR_16; }
	inline int32_t* get_address_of_FIRST_COLOR_16() { return &___FIRST_COLOR_16; }
	inline void set_FIRST_COLOR_16(int32_t value)
	{
		___FIRST_COLOR_16 = value;
	}

	inline static int32_t get_offset_of_SECOND_COLOR_17() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___SECOND_COLOR_17)); }
	inline int32_t get_SECOND_COLOR_17() const { return ___SECOND_COLOR_17; }
	inline int32_t* get_address_of_SECOND_COLOR_17() { return &___SECOND_COLOR_17; }
	inline void set_SECOND_COLOR_17(int32_t value)
	{
		___SECOND_COLOR_17 = value;
	}

	inline static int32_t get_offset_of_userRotation_18() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___userRotation_18)); }
	inline float get_userRotation_18() const { return ___userRotation_18; }
	inline float* get_address_of_userRotation_18() { return &___userRotation_18; }
	inline void set_userRotation_18(float value)
	{
		___userRotation_18 = value;
	}

	inline static int32_t get_offset_of_userRotateLeaves_19() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___userRotateLeaves_19)); }
	inline GameObjectU5BU5D_t3499186955* get_userRotateLeaves_19() const { return ___userRotateLeaves_19; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_userRotateLeaves_19() { return &___userRotateLeaves_19; }
	inline void set_userRotateLeaves_19(GameObjectU5BU5D_t3499186955* value)
	{
		___userRotateLeaves_19 = value;
		Il2CppCodeGenWriteBarrier(&___userRotateLeaves_19, value);
	}

	inline static int32_t get_offset_of_USER_ROTATE_SPEED_20() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___USER_ROTATE_SPEED_20)); }
	inline float get_USER_ROTATE_SPEED_20() const { return ___USER_ROTATE_SPEED_20; }
	inline float* get_address_of_USER_ROTATE_SPEED_20() { return &___USER_ROTATE_SPEED_20; }
	inline void set_USER_ROTATE_SPEED_20(float value)
	{
		___USER_ROTATE_SPEED_20 = value;
	}

	inline static int32_t get_offset_of_userRotateCenter_21() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___userRotateCenter_21)); }
	inline Vector3_t3525329789  get_userRotateCenter_21() const { return ___userRotateCenter_21; }
	inline Vector3_t3525329789 * get_address_of_userRotateCenter_21() { return &___userRotateCenter_21; }
	inline void set_userRotateCenter_21(Vector3_t3525329789  value)
	{
		___userRotateCenter_21 = value;
	}

	inline static int32_t get_offset_of_inUserRotation_22() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___inUserRotation_22)); }
	inline bool get_inUserRotation_22() const { return ___inUserRotation_22; }
	inline bool* get_address_of_inUserRotation_22() { return &___inUserRotation_22; }
	inline void set_inUserRotation_22(bool value)
	{
		___inUserRotation_22 = value;
	}

	inline static int32_t get_offset_of_inFlip_23() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___inFlip_23)); }
	inline bool get_inFlip_23() const { return ___inFlip_23; }
	inline bool* get_address_of_inFlip_23() { return &___inFlip_23; }
	inline void set_inFlip_23(bool value)
	{
		___inFlip_23 = value;
	}

	inline static int32_t get_offset_of_isScaling_24() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___isScaling_24)); }
	inline bool get_isScaling_24() const { return ___isScaling_24; }
	inline bool* get_address_of_isScaling_24() { return &___isScaling_24; }
	inline void set_isScaling_24(bool value)
	{
		___isScaling_24 = value;
	}

	inline static int32_t get_offset_of_isTilting_25() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___isTilting_25)); }
	inline bool get_isTilting_25() const { return ___isTilting_25; }
	inline bool* get_address_of_isTilting_25() { return &___isTilting_25; }
	inline void set_isTilting_25(bool value)
	{
		___isTilting_25 = value;
	}

	inline static int32_t get_offset_of_lastTouchCenter_26() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___lastTouchCenter_26)); }
	inline GameObject_t4012695102 * get_lastTouchCenter_26() const { return ___lastTouchCenter_26; }
	inline GameObject_t4012695102 ** get_address_of_lastTouchCenter_26() { return &___lastTouchCenter_26; }
	inline void set_lastTouchCenter_26(GameObject_t4012695102 * value)
	{
		___lastTouchCenter_26 = value;
		Il2CppCodeGenWriteBarrier(&___lastTouchCenter_26, value);
	}

	inline static int32_t get_offset_of_totalColorNum_27() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___totalColorNum_27)); }
	inline int32_t get_totalColorNum_27() const { return ___totalColorNum_27; }
	inline int32_t* get_address_of_totalColorNum_27() { return &___totalColorNum_27; }
	inline void set_totalColorNum_27(int32_t value)
	{
		___totalColorNum_27 = value;
	}

	inline static int32_t get_offset_of_CENTER_NUM_28() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___CENTER_NUM_28)); }
	inline int32_t get_CENTER_NUM_28() const { return ___CENTER_NUM_28; }
	inline int32_t* get_address_of_CENTER_NUM_28() { return &___CENTER_NUM_28; }
	inline void set_CENTER_NUM_28(int32_t value)
	{
		___CENTER_NUM_28 = value;
	}

	inline static int32_t get_offset_of_needCheckDeadlock_29() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___needCheckDeadlock_29)); }
	inline bool get_needCheckDeadlock_29() const { return ___needCheckDeadlock_29; }
	inline bool* get_address_of_needCheckDeadlock_29() { return &___needCheckDeadlock_29; }
	inline void set_needCheckDeadlock_29(bool value)
	{
		___needCheckDeadlock_29 = value;
	}

	inline static int32_t get_offset_of_lastSuccessfulRotationTime_30() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___lastSuccessfulRotationTime_30)); }
	inline float get_lastSuccessfulRotationTime_30() const { return ___lastSuccessfulRotationTime_30; }
	inline float* get_address_of_lastSuccessfulRotationTime_30() { return &___lastSuccessfulRotationTime_30; }
	inline void set_lastSuccessfulRotationTime_30(float value)
	{
		___lastSuccessfulRotationTime_30 = value;
	}

	inline static int32_t get_offset_of_hintTime_31() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___hintTime_31)); }
	inline float get_hintTime_31() const { return ___hintTime_31; }
	inline float* get_address_of_hintTime_31() { return &___hintTime_31; }
	inline void set_hintTime_31(float value)
	{
		___hintTime_31 = value;
	}

	inline static int32_t get_offset_of_colorForHint_32() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___colorForHint_32)); }
	inline int32_t get_colorForHint_32() const { return ___colorForHint_32; }
	inline int32_t* get_address_of_colorForHint_32() { return &___colorForHint_32; }
	inline void set_colorForHint_32(int32_t value)
	{
		___colorForHint_32 = value;
	}

	inline static int32_t get_offset_of_scoreCirclePrefab_33() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___scoreCirclePrefab_33)); }
	inline GameObject_t4012695102 * get_scoreCirclePrefab_33() const { return ___scoreCirclePrefab_33; }
	inline GameObject_t4012695102 ** get_address_of_scoreCirclePrefab_33() { return &___scoreCirclePrefab_33; }
	inline void set_scoreCirclePrefab_33(GameObject_t4012695102 * value)
	{
		___scoreCirclePrefab_33 = value;
		Il2CppCodeGenWriteBarrier(&___scoreCirclePrefab_33, value);
	}

	inline static int32_t get_offset_of_UIStartingPosition_34() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___UIStartingPosition_34)); }
	inline float get_UIStartingPosition_34() const { return ___UIStartingPosition_34; }
	inline float* get_address_of_UIStartingPosition_34() { return &___UIStartingPosition_34; }
	inline void set_UIStartingPosition_34(float value)
	{
		___UIStartingPosition_34 = value;
	}

	inline static int32_t get_offset_of_EMPTY_SPACE_35() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___EMPTY_SPACE_35)); }
	inline float get_EMPTY_SPACE_35() const { return ___EMPTY_SPACE_35; }
	inline float* get_address_of_EMPTY_SPACE_35() { return &___EMPTY_SPACE_35; }
	inline void set_EMPTY_SPACE_35(float value)
	{
		___EMPTY_SPACE_35 = value;
	}

	inline static int32_t get_offset_of_SCORE_CIRCLE_SCALE_36() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___SCORE_CIRCLE_SCALE_36)); }
	inline float get_SCORE_CIRCLE_SCALE_36() const { return ___SCORE_CIRCLE_SCALE_36; }
	inline float* get_address_of_SCORE_CIRCLE_SCALE_36() { return &___SCORE_CIRCLE_SCALE_36; }
	inline void set_SCORE_CIRCLE_SCALE_36(float value)
	{
		___SCORE_CIRCLE_SCALE_36 = value;
	}

	inline static int32_t get_offset_of_SCORE_CIRCLE_NUM_37() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___SCORE_CIRCLE_NUM_37)); }
	inline int32_t get_SCORE_CIRCLE_NUM_37() const { return ___SCORE_CIRCLE_NUM_37; }
	inline int32_t* get_address_of_SCORE_CIRCLE_NUM_37() { return &___SCORE_CIRCLE_NUM_37; }
	inline void set_SCORE_CIRCLE_NUM_37(int32_t value)
	{
		___SCORE_CIRCLE_NUM_37 = value;
	}

	inline static int32_t get_offset_of_hintArray_38() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___hintArray_38)); }
	inline Array_t1209885965 * get_hintArray_38() const { return ___hintArray_38; }
	inline Array_t1209885965 ** get_address_of_hintArray_38() { return &___hintArray_38; }
	inline void set_hintArray_38(Array_t1209885965 * value)
	{
		___hintArray_38 = value;
		Il2CppCodeGenWriteBarrier(&___hintArray_38, value);
	}

	inline static int32_t get_offset_of_scores_39() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___scores_39)); }
	inline int32_t get_scores_39() const { return ___scores_39; }
	inline int32_t* get_address_of_scores_39() { return &___scores_39; }
	inline void set_scores_39(int32_t value)
	{
		___scores_39 = value;
	}

	inline static int32_t get_offset_of_scoreBoard_40() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___scoreBoard_40)); }
	inline Array_t1209885965 * get_scoreBoard_40() const { return ___scoreBoard_40; }
	inline Array_t1209885965 ** get_address_of_scoreBoard_40() { return &___scoreBoard_40; }
	inline void set_scoreBoard_40(Array_t1209885965 * value)
	{
		___scoreBoard_40 = value;
		Il2CppCodeGenWriteBarrier(&___scoreBoard_40, value);
	}

	inline static int32_t get_offset_of_TIME_STAMP_LENGTH_41() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___TIME_STAMP_LENGTH_41)); }
	inline float get_TIME_STAMP_LENGTH_41() const { return ___TIME_STAMP_LENGTH_41; }
	inline float* get_address_of_TIME_STAMP_LENGTH_41() { return &___TIME_STAMP_LENGTH_41; }
	inline void set_TIME_STAMP_LENGTH_41(float value)
	{
		___TIME_STAMP_LENGTH_41 = value;
	}

	inline static int32_t get_offset_of_TIME_STAMP_SCALE_42() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___TIME_STAMP_SCALE_42)); }
	inline float get_TIME_STAMP_SCALE_42() const { return ___TIME_STAMP_SCALE_42; }
	inline float* get_address_of_TIME_STAMP_SCALE_42() { return &___TIME_STAMP_SCALE_42; }
	inline void set_TIME_STAMP_SCALE_42(float value)
	{
		___TIME_STAMP_SCALE_42 = value;
	}

	inline static int32_t get_offset_of_TIME_STAMP_NUM_43() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___TIME_STAMP_NUM_43)); }
	inline int32_t get_TIME_STAMP_NUM_43() const { return ___TIME_STAMP_NUM_43; }
	inline int32_t* get_address_of_TIME_STAMP_NUM_43() { return &___TIME_STAMP_NUM_43; }
	inline void set_TIME_STAMP_NUM_43(int32_t value)
	{
		___TIME_STAMP_NUM_43 = value;
	}

	inline static int32_t get_offset_of_timeStamps_44() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___timeStamps_44)); }
	inline Array_t1209885965 * get_timeStamps_44() const { return ___timeStamps_44; }
	inline Array_t1209885965 ** get_address_of_timeStamps_44() { return &___timeStamps_44; }
	inline void set_timeStamps_44(Array_t1209885965 * value)
	{
		___timeStamps_44 = value;
		Il2CppCodeGenWriteBarrier(&___timeStamps_44, value);
	}

	inline static int32_t get_offset_of_accuTime_45() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___accuTime_45)); }
	inline int32_t get_accuTime_45() const { return ___accuTime_45; }
	inline int32_t* get_address_of_accuTime_45() { return &___accuTime_45; }
	inline void set_accuTime_45(int32_t value)
	{
		___accuTime_45 = value;
	}

	inline static int32_t get_offset_of_canvas_46() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___canvas_46)); }
	inline Canvas_t3534013893 * get_canvas_46() const { return ___canvas_46; }
	inline Canvas_t3534013893 ** get_address_of_canvas_46() { return &___canvas_46; }
	inline void set_canvas_46(Canvas_t3534013893 * value)
	{
		___canvas_46 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_46, value);
	}

	inline static int32_t get_offset_of_isScoreAdded_47() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___isScoreAdded_47)); }
	inline bool get_isScoreAdded_47() const { return ___isScoreAdded_47; }
	inline bool* get_address_of_isScoreAdded_47() { return &___isScoreAdded_47; }
	inline void set_isScoreAdded_47(bool value)
	{
		___isScoreAdded_47 = value;
	}

	inline static int32_t get_offset_of_scoreToAdded_48() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___scoreToAdded_48)); }
	inline int32_t get_scoreToAdded_48() const { return ___scoreToAdded_48; }
	inline int32_t* get_address_of_scoreToAdded_48() { return &___scoreToAdded_48; }
	inline void set_scoreToAdded_48(int32_t value)
	{
		___scoreToAdded_48 = value;
	}

	inline static int32_t get_offset_of_gameStartTime_49() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___gameStartTime_49)); }
	inline float get_gameStartTime_49() const { return ___gameStartTime_49; }
	inline float* get_address_of_gameStartTime_49() { return &___gameStartTime_49; }
	inline void set_gameStartTime_49(float value)
	{
		___gameStartTime_49 = value;
	}

	inline static int32_t get_offset_of_centers_50() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___centers_50)); }
	inline Array_t1209885965 * get_centers_50() const { return ___centers_50; }
	inline Array_t1209885965 ** get_address_of_centers_50() { return &___centers_50; }
	inline void set_centers_50(Array_t1209885965 * value)
	{
		___centers_50 = value;
		Il2CppCodeGenWriteBarrier(&___centers_50, value);
	}

	inline static int32_t get_offset_of_isGameOverHandled_51() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___isGameOverHandled_51)); }
	inline bool get_isGameOverHandled_51() const { return ___isGameOverHandled_51; }
	inline bool* get_address_of_isGameOverHandled_51() { return &___isGameOverHandled_51; }
	inline void set_isGameOverHandled_51(bool value)
	{
		___isGameOverHandled_51 = value;
	}

	inline static int32_t get_offset_of_GAME_TIME_52() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___GAME_TIME_52)); }
	inline float get_GAME_TIME_52() const { return ___GAME_TIME_52; }
	inline float* get_address_of_GAME_TIME_52() { return &___GAME_TIME_52; }
	inline void set_GAME_TIME_52(float value)
	{
		___GAME_TIME_52 = value;
	}

	inline static int32_t get_offset_of_leavesAreOpen_53() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___leavesAreOpen_53)); }
	inline bool get_leavesAreOpen_53() const { return ___leavesAreOpen_53; }
	inline bool* get_address_of_leavesAreOpen_53() { return &___leavesAreOpen_53; }
	inline void set_leavesAreOpen_53(bool value)
	{
		___leavesAreOpen_53 = value;
	}

	inline static int32_t get_offset_of_collidersEnable_54() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___collidersEnable_54)); }
	inline bool get_collidersEnable_54() const { return ___collidersEnable_54; }
	inline bool* get_address_of_collidersEnable_54() { return &___collidersEnable_54; }
	inline void set_collidersEnable_54(bool value)
	{
		___collidersEnable_54 = value;
	}

	inline static int32_t get_offset_of_timeStampPrefab_55() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___timeStampPrefab_55)); }
	inline GameObject_t4012695102 * get_timeStampPrefab_55() const { return ___timeStampPrefab_55; }
	inline GameObject_t4012695102 ** get_address_of_timeStampPrefab_55() { return &___timeStampPrefab_55; }
	inline void set_timeStampPrefab_55(GameObject_t4012695102 * value)
	{
		___timeStampPrefab_55 = value;
		Il2CppCodeGenWriteBarrier(&___timeStampPrefab_55, value);
	}

	inline static int32_t get_offset_of_isPause_56() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___isPause_56)); }
	inline bool get_isPause_56() const { return ___isPause_56; }
	inline bool* get_address_of_isPause_56() { return &___isPause_56; }
	inline void set_isPause_56(bool value)
	{
		___isPause_56 = value;
	}

	inline static int32_t get_offset_of_scoreBoardInRotation_57() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___scoreBoardInRotation_57)); }
	inline bool get_scoreBoardInRotation_57() const { return ___scoreBoardInRotation_57; }
	inline bool* get_address_of_scoreBoardInRotation_57() { return &___scoreBoardInRotation_57; }
	inline void set_scoreBoardInRotation_57(bool value)
	{
		___scoreBoardInRotation_57 = value;
	}

	inline static int32_t get_offset_of_STAMP_INITTIME_58() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___STAMP_INITTIME_58)); }
	inline int32_t get_STAMP_INITTIME_58() const { return ___STAMP_INITTIME_58; }
	inline int32_t* get_address_of_STAMP_INITTIME_58() { return &___STAMP_INITTIME_58; }
	inline void set_STAMP_INITTIME_58(int32_t value)
	{
		___STAMP_INITTIME_58 = value;
	}

	inline static int32_t get_offset_of_canvasScaler_59() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___canvasScaler_59)); }
	inline CanvasScaler_t872225289 * get_canvasScaler_59() const { return ___canvasScaler_59; }
	inline CanvasScaler_t872225289 ** get_address_of_canvasScaler_59() { return &___canvasScaler_59; }
	inline void set_canvasScaler_59(CanvasScaler_t872225289 * value)
	{
		___canvasScaler_59 = value;
		Il2CppCodeGenWriteBarrier(&___canvasScaler_59, value);
	}

	inline static int32_t get_offset_of_UIScaleFactorX_60() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___UIScaleFactorX_60)); }
	inline float get_UIScaleFactorX_60() const { return ___UIScaleFactorX_60; }
	inline float* get_address_of_UIScaleFactorX_60() { return &___UIScaleFactorX_60; }
	inline void set_UIScaleFactorX_60(float value)
	{
		___UIScaleFactorX_60 = value;
	}

	inline static int32_t get_offset_of_UIScaleFactorY_61() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___UIScaleFactorY_61)); }
	inline float get_UIScaleFactorY_61() const { return ___UIScaleFactorY_61; }
	inline float* get_address_of_UIScaleFactorY_61() { return &___UIScaleFactorY_61; }
	inline void set_UIScaleFactorY_61(float value)
	{
		___UIScaleFactorY_61 = value;
	}

	inline static int32_t get_offset_of_tutorial_62() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___tutorial_62)); }
	inline Text_t3286458198 * get_tutorial_62() const { return ___tutorial_62; }
	inline Text_t3286458198 ** get_address_of_tutorial_62() { return &___tutorial_62; }
	inline void set_tutorial_62(Text_t3286458198 * value)
	{
		___tutorial_62 = value;
		Il2CppCodeGenWriteBarrier(&___tutorial_62, value);
	}

	inline static int32_t get_offset_of_addScoreText_63() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___addScoreText_63)); }
	inline Text_t3286458198 * get_addScoreText_63() const { return ___addScoreText_63; }
	inline Text_t3286458198 ** get_address_of_addScoreText_63() { return &___addScoreText_63; }
	inline void set_addScoreText_63(Text_t3286458198 * value)
	{
		___addScoreText_63 = value;
		Il2CppCodeGenWriteBarrier(&___addScoreText_63, value);
	}

	inline static int32_t get_offset_of_highestScoreText_64() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___highestScoreText_64)); }
	inline Text_t3286458198 * get_highestScoreText_64() const { return ___highestScoreText_64; }
	inline Text_t3286458198 ** get_address_of_highestScoreText_64() { return &___highestScoreText_64; }
	inline void set_highestScoreText_64(Text_t3286458198 * value)
	{
		___highestScoreText_64 = value;
		Il2CppCodeGenWriteBarrier(&___highestScoreText_64, value);
	}

	inline static int32_t get_offset_of_startButton_65() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___startButton_65)); }
	inline Button_t990034267 * get_startButton_65() const { return ___startButton_65; }
	inline Button_t990034267 ** get_address_of_startButton_65() { return &___startButton_65; }
	inline void set_startButton_65(Button_t990034267 * value)
	{
		___startButton_65 = value;
		Il2CppCodeGenWriteBarrier(&___startButton_65, value);
	}

	inline static int32_t get_offset_of_pauseButton_66() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___pauseButton_66)); }
	inline Button_t990034267 * get_pauseButton_66() const { return ___pauseButton_66; }
	inline Button_t990034267 ** get_address_of_pauseButton_66() { return &___pauseButton_66; }
	inline void set_pauseButton_66(Button_t990034267 * value)
	{
		___pauseButton_66 = value;
		Il2CppCodeGenWriteBarrier(&___pauseButton_66, value);
	}

	inline static int32_t get_offset_of_resumeButton_67() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___resumeButton_67)); }
	inline Button_t990034267 * get_resumeButton_67() const { return ___resumeButton_67; }
	inline Button_t990034267 ** get_address_of_resumeButton_67() { return &___resumeButton_67; }
	inline void set_resumeButton_67(Button_t990034267 * value)
	{
		___resumeButton_67 = value;
		Il2CppCodeGenWriteBarrier(&___resumeButton_67, value);
	}

	inline static int32_t get_offset_of_restartButton_68() { return static_cast<int32_t>(offsetof(SceneScript_t1382933591, ___restartButton_68)); }
	inline Button_t990034267 * get_restartButton_68() const { return ___restartButton_68; }
	inline Button_t990034267 ** get_address_of_restartButton_68() { return &___restartButton_68; }
	inline void set_restartButton_68(Button_t990034267 * value)
	{
		___restartButton_68 = value;
		Il2CppCodeGenWriteBarrier(&___restartButton_68, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
