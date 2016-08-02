#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// SceneScript
struct SceneScript_t1382933591;
// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CenterScript
struct  CenterScript_t99715488  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 CenterScript::number
	int32_t ___number_2;
	// UnityEngine.Sprite CenterScript::circleSprite
	Sprite_t4006040370 * ___circleSprite_3;
	// UnityEngine.Sprite CenterScript::squareSprite
	Sprite_t4006040370 * ___squareSprite_4;
	// UnityEngine.Color CenterScript::ORIGINAL_COLOR
	Color_t1588175760  ___ORIGINAL_COLOR_5;
	// UnityEngine.Color CenterScript::HOLDDOWN_COLOR
	Color_t1588175760  ___HOLDDOWN_COLOR_6;
	// System.Single CenterScript::ORIGINAL_SCALE
	float ___ORIGINAL_SCALE_7;
	// SceneScript CenterScript::sceneScript
	SceneScript_t1382933591 * ___sceneScript_8;
	// System.Boolean CenterScript::touchDown
	bool ___touchDown_9;
	// UnityEngine.Animator CenterScript::anim
	Animator_t792326996 * ___anim_10;

public:
	inline static int32_t get_offset_of_number_2() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___number_2)); }
	inline int32_t get_number_2() const { return ___number_2; }
	inline int32_t* get_address_of_number_2() { return &___number_2; }
	inline void set_number_2(int32_t value)
	{
		___number_2 = value;
	}

	inline static int32_t get_offset_of_circleSprite_3() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___circleSprite_3)); }
	inline Sprite_t4006040370 * get_circleSprite_3() const { return ___circleSprite_3; }
	inline Sprite_t4006040370 ** get_address_of_circleSprite_3() { return &___circleSprite_3; }
	inline void set_circleSprite_3(Sprite_t4006040370 * value)
	{
		___circleSprite_3 = value;
		Il2CppCodeGenWriteBarrier(&___circleSprite_3, value);
	}

	inline static int32_t get_offset_of_squareSprite_4() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___squareSprite_4)); }
	inline Sprite_t4006040370 * get_squareSprite_4() const { return ___squareSprite_4; }
	inline Sprite_t4006040370 ** get_address_of_squareSprite_4() { return &___squareSprite_4; }
	inline void set_squareSprite_4(Sprite_t4006040370 * value)
	{
		___squareSprite_4 = value;
		Il2CppCodeGenWriteBarrier(&___squareSprite_4, value);
	}

	inline static int32_t get_offset_of_ORIGINAL_COLOR_5() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___ORIGINAL_COLOR_5)); }
	inline Color_t1588175760  get_ORIGINAL_COLOR_5() const { return ___ORIGINAL_COLOR_5; }
	inline Color_t1588175760 * get_address_of_ORIGINAL_COLOR_5() { return &___ORIGINAL_COLOR_5; }
	inline void set_ORIGINAL_COLOR_5(Color_t1588175760  value)
	{
		___ORIGINAL_COLOR_5 = value;
	}

	inline static int32_t get_offset_of_HOLDDOWN_COLOR_6() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___HOLDDOWN_COLOR_6)); }
	inline Color_t1588175760  get_HOLDDOWN_COLOR_6() const { return ___HOLDDOWN_COLOR_6; }
	inline Color_t1588175760 * get_address_of_HOLDDOWN_COLOR_6() { return &___HOLDDOWN_COLOR_6; }
	inline void set_HOLDDOWN_COLOR_6(Color_t1588175760  value)
	{
		___HOLDDOWN_COLOR_6 = value;
	}

	inline static int32_t get_offset_of_ORIGINAL_SCALE_7() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___ORIGINAL_SCALE_7)); }
	inline float get_ORIGINAL_SCALE_7() const { return ___ORIGINAL_SCALE_7; }
	inline float* get_address_of_ORIGINAL_SCALE_7() { return &___ORIGINAL_SCALE_7; }
	inline void set_ORIGINAL_SCALE_7(float value)
	{
		___ORIGINAL_SCALE_7 = value;
	}

	inline static int32_t get_offset_of_sceneScript_8() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___sceneScript_8)); }
	inline SceneScript_t1382933591 * get_sceneScript_8() const { return ___sceneScript_8; }
	inline SceneScript_t1382933591 ** get_address_of_sceneScript_8() { return &___sceneScript_8; }
	inline void set_sceneScript_8(SceneScript_t1382933591 * value)
	{
		___sceneScript_8 = value;
		Il2CppCodeGenWriteBarrier(&___sceneScript_8, value);
	}

	inline static int32_t get_offset_of_touchDown_9() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___touchDown_9)); }
	inline bool get_touchDown_9() const { return ___touchDown_9; }
	inline bool* get_address_of_touchDown_9() { return &___touchDown_9; }
	inline void set_touchDown_9(bool value)
	{
		___touchDown_9 = value;
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(CenterScript_t99715488, ___anim_10)); }
	inline Animator_t792326996 * get_anim_10() const { return ___anim_10; }
	inline Animator_t792326996 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t792326996 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier(&___anim_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
