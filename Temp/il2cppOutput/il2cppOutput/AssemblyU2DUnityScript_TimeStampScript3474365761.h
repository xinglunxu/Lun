#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeStampScript
struct  TimeStampScript_t3474365761  : public MonoBehaviour_t3012272455
{
public:
	// System.Single TimeStampScript::ORIGINAL_SCALE
	float ___ORIGINAL_SCALE_2;
	// System.Single TimeStampScript::SHRINK_AMOUNT
	float ___SHRINK_AMOUNT_3;
	// System.Single TimeStampScript::curveValue
	float ___curveValue_4;
	// UnityEngine.UI.Text TimeStampScript::textObject
	Text_t3286458198 * ___textObject_5;
	// System.Int32 TimeStampScript::number
	int32_t ___number_6;
	// UnityEngine.Animator TimeStampScript::anim
	Animator_t792326996 * ___anim_7;

public:
	inline static int32_t get_offset_of_ORIGINAL_SCALE_2() { return static_cast<int32_t>(offsetof(TimeStampScript_t3474365761, ___ORIGINAL_SCALE_2)); }
	inline float get_ORIGINAL_SCALE_2() const { return ___ORIGINAL_SCALE_2; }
	inline float* get_address_of_ORIGINAL_SCALE_2() { return &___ORIGINAL_SCALE_2; }
	inline void set_ORIGINAL_SCALE_2(float value)
	{
		___ORIGINAL_SCALE_2 = value;
	}

	inline static int32_t get_offset_of_SHRINK_AMOUNT_3() { return static_cast<int32_t>(offsetof(TimeStampScript_t3474365761, ___SHRINK_AMOUNT_3)); }
	inline float get_SHRINK_AMOUNT_3() const { return ___SHRINK_AMOUNT_3; }
	inline float* get_address_of_SHRINK_AMOUNT_3() { return &___SHRINK_AMOUNT_3; }
	inline void set_SHRINK_AMOUNT_3(float value)
	{
		___SHRINK_AMOUNT_3 = value;
	}

	inline static int32_t get_offset_of_curveValue_4() { return static_cast<int32_t>(offsetof(TimeStampScript_t3474365761, ___curveValue_4)); }
	inline float get_curveValue_4() const { return ___curveValue_4; }
	inline float* get_address_of_curveValue_4() { return &___curveValue_4; }
	inline void set_curveValue_4(float value)
	{
		___curveValue_4 = value;
	}

	inline static int32_t get_offset_of_textObject_5() { return static_cast<int32_t>(offsetof(TimeStampScript_t3474365761, ___textObject_5)); }
	inline Text_t3286458198 * get_textObject_5() const { return ___textObject_5; }
	inline Text_t3286458198 ** get_address_of_textObject_5() { return &___textObject_5; }
	inline void set_textObject_5(Text_t3286458198 * value)
	{
		___textObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___textObject_5, value);
	}

	inline static int32_t get_offset_of_number_6() { return static_cast<int32_t>(offsetof(TimeStampScript_t3474365761, ___number_6)); }
	inline int32_t get_number_6() const { return ___number_6; }
	inline int32_t* get_address_of_number_6() { return &___number_6; }
	inline void set_number_6(int32_t value)
	{
		___number_6 = value;
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(TimeStampScript_t3474365761, ___anim_7)); }
	inline Animator_t792326996 * get_anim_7() const { return ___anim_7; }
	inline Animator_t792326996 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t792326996 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
