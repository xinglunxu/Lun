#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SceneScript
struct SceneScript_t1382933591;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreCircleScript
struct  ScoreCircleScript_t2158634317  : public MonoBehaviour_t3012272455
{
public:
	// SceneScript ScoreCircleScript::sceneScript
	SceneScript_t1382933591 * ___sceneScript_2;
	// System.Single ScoreCircleScript::degreeToTurn
	float ___degreeToTurn_3;
	// System.Single ScoreCircleScript::FLIP_SPEED
	float ___FLIP_SPEED_4;
	// System.Single ScoreCircleScript::totalScaleAmount
	float ___totalScaleAmount_5;
	// System.Single ScoreCircleScript::totalEnlargeAmount
	float ___totalEnlargeAmount_6;
	// System.Single ScoreCircleScript::SCALE_SPEED
	float ___SCALE_SPEED_7;
	// System.Single ScoreCircleScript::SCALE_TARGET_AMOUNT
	float ___SCALE_TARGET_AMOUNT_8;
	// System.Single ScoreCircleScript::MATCH_AMOUNT
	float ___MATCH_AMOUNT_9;
	// UnityEngine.Vector3 ScoreCircleScript::flippingDirection
	Vector3_t3525329789  ___flippingDirection_10;
	// System.Int32 ScoreCircleScript::CANVAS_CHILD
	int32_t ___CANVAS_CHILD_11;
	// System.Int32 ScoreCircleScript::TEXT_CHILD
	int32_t ___TEXT_CHILD_12;
	// System.Int32 ScoreCircleScript::position
	int32_t ___position_13;
	// System.Boolean ScoreCircleScript::textChanged
	bool ___textChanged_14;
	// UnityEngine.UI.Text ScoreCircleScript::textObject
	Text_t3286458198 * ___textObject_15;
	// System.Int32 ScoreCircleScript::number
	int32_t ___number_16;
	// System.Single ScoreCircleScript::TIME_UP_SCALE_AMOUNT
	float ___TIME_UP_SCALE_AMOUNT_17;
	// System.Single ScoreCircleScript::totalScaleAmountForTime
	float ___totalScaleAmountForTime_18;

public:
	inline static int32_t get_offset_of_sceneScript_2() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___sceneScript_2)); }
	inline SceneScript_t1382933591 * get_sceneScript_2() const { return ___sceneScript_2; }
	inline SceneScript_t1382933591 ** get_address_of_sceneScript_2() { return &___sceneScript_2; }
	inline void set_sceneScript_2(SceneScript_t1382933591 * value)
	{
		___sceneScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneScript_2, value);
	}

	inline static int32_t get_offset_of_degreeToTurn_3() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___degreeToTurn_3)); }
	inline float get_degreeToTurn_3() const { return ___degreeToTurn_3; }
	inline float* get_address_of_degreeToTurn_3() { return &___degreeToTurn_3; }
	inline void set_degreeToTurn_3(float value)
	{
		___degreeToTurn_3 = value;
	}

	inline static int32_t get_offset_of_FLIP_SPEED_4() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___FLIP_SPEED_4)); }
	inline float get_FLIP_SPEED_4() const { return ___FLIP_SPEED_4; }
	inline float* get_address_of_FLIP_SPEED_4() { return &___FLIP_SPEED_4; }
	inline void set_FLIP_SPEED_4(float value)
	{
		___FLIP_SPEED_4 = value;
	}

	inline static int32_t get_offset_of_totalScaleAmount_5() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___totalScaleAmount_5)); }
	inline float get_totalScaleAmount_5() const { return ___totalScaleAmount_5; }
	inline float* get_address_of_totalScaleAmount_5() { return &___totalScaleAmount_5; }
	inline void set_totalScaleAmount_5(float value)
	{
		___totalScaleAmount_5 = value;
	}

	inline static int32_t get_offset_of_totalEnlargeAmount_6() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___totalEnlargeAmount_6)); }
	inline float get_totalEnlargeAmount_6() const { return ___totalEnlargeAmount_6; }
	inline float* get_address_of_totalEnlargeAmount_6() { return &___totalEnlargeAmount_6; }
	inline void set_totalEnlargeAmount_6(float value)
	{
		___totalEnlargeAmount_6 = value;
	}

	inline static int32_t get_offset_of_SCALE_SPEED_7() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___SCALE_SPEED_7)); }
	inline float get_SCALE_SPEED_7() const { return ___SCALE_SPEED_7; }
	inline float* get_address_of_SCALE_SPEED_7() { return &___SCALE_SPEED_7; }
	inline void set_SCALE_SPEED_7(float value)
	{
		___SCALE_SPEED_7 = value;
	}

	inline static int32_t get_offset_of_SCALE_TARGET_AMOUNT_8() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___SCALE_TARGET_AMOUNT_8)); }
	inline float get_SCALE_TARGET_AMOUNT_8() const { return ___SCALE_TARGET_AMOUNT_8; }
	inline float* get_address_of_SCALE_TARGET_AMOUNT_8() { return &___SCALE_TARGET_AMOUNT_8; }
	inline void set_SCALE_TARGET_AMOUNT_8(float value)
	{
		___SCALE_TARGET_AMOUNT_8 = value;
	}

	inline static int32_t get_offset_of_MATCH_AMOUNT_9() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___MATCH_AMOUNT_9)); }
	inline float get_MATCH_AMOUNT_9() const { return ___MATCH_AMOUNT_9; }
	inline float* get_address_of_MATCH_AMOUNT_9() { return &___MATCH_AMOUNT_9; }
	inline void set_MATCH_AMOUNT_9(float value)
	{
		___MATCH_AMOUNT_9 = value;
	}

	inline static int32_t get_offset_of_flippingDirection_10() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___flippingDirection_10)); }
	inline Vector3_t3525329789  get_flippingDirection_10() const { return ___flippingDirection_10; }
	inline Vector3_t3525329789 * get_address_of_flippingDirection_10() { return &___flippingDirection_10; }
	inline void set_flippingDirection_10(Vector3_t3525329789  value)
	{
		___flippingDirection_10 = value;
	}

	inline static int32_t get_offset_of_CANVAS_CHILD_11() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___CANVAS_CHILD_11)); }
	inline int32_t get_CANVAS_CHILD_11() const { return ___CANVAS_CHILD_11; }
	inline int32_t* get_address_of_CANVAS_CHILD_11() { return &___CANVAS_CHILD_11; }
	inline void set_CANVAS_CHILD_11(int32_t value)
	{
		___CANVAS_CHILD_11 = value;
	}

	inline static int32_t get_offset_of_TEXT_CHILD_12() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___TEXT_CHILD_12)); }
	inline int32_t get_TEXT_CHILD_12() const { return ___TEXT_CHILD_12; }
	inline int32_t* get_address_of_TEXT_CHILD_12() { return &___TEXT_CHILD_12; }
	inline void set_TEXT_CHILD_12(int32_t value)
	{
		___TEXT_CHILD_12 = value;
	}

	inline static int32_t get_offset_of_position_13() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___position_13)); }
	inline int32_t get_position_13() const { return ___position_13; }
	inline int32_t* get_address_of_position_13() { return &___position_13; }
	inline void set_position_13(int32_t value)
	{
		___position_13 = value;
	}

	inline static int32_t get_offset_of_textChanged_14() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___textChanged_14)); }
	inline bool get_textChanged_14() const { return ___textChanged_14; }
	inline bool* get_address_of_textChanged_14() { return &___textChanged_14; }
	inline void set_textChanged_14(bool value)
	{
		___textChanged_14 = value;
	}

	inline static int32_t get_offset_of_textObject_15() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___textObject_15)); }
	inline Text_t3286458198 * get_textObject_15() const { return ___textObject_15; }
	inline Text_t3286458198 ** get_address_of_textObject_15() { return &___textObject_15; }
	inline void set_textObject_15(Text_t3286458198 * value)
	{
		___textObject_15 = value;
		Il2CppCodeGenWriteBarrier(&___textObject_15, value);
	}

	inline static int32_t get_offset_of_number_16() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___number_16)); }
	inline int32_t get_number_16() const { return ___number_16; }
	inline int32_t* get_address_of_number_16() { return &___number_16; }
	inline void set_number_16(int32_t value)
	{
		___number_16 = value;
	}

	inline static int32_t get_offset_of_TIME_UP_SCALE_AMOUNT_17() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___TIME_UP_SCALE_AMOUNT_17)); }
	inline float get_TIME_UP_SCALE_AMOUNT_17() const { return ___TIME_UP_SCALE_AMOUNT_17; }
	inline float* get_address_of_TIME_UP_SCALE_AMOUNT_17() { return &___TIME_UP_SCALE_AMOUNT_17; }
	inline void set_TIME_UP_SCALE_AMOUNT_17(float value)
	{
		___TIME_UP_SCALE_AMOUNT_17 = value;
	}

	inline static int32_t get_offset_of_totalScaleAmountForTime_18() { return static_cast<int32_t>(offsetof(ScoreCircleScript_t2158634317, ___totalScaleAmountForTime_18)); }
	inline float get_totalScaleAmountForTime_18() const { return ___totalScaleAmountForTime_18; }
	inline float* get_address_of_totalScaleAmountForTime_18() { return &___totalScaleAmountForTime_18; }
	inline void set_totalScaleAmountForTime_18(float value)
	{
		___totalScaleAmountForTime_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
