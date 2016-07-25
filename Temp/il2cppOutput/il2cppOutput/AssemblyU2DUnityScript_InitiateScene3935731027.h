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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InitiateScene
struct  InitiateScene_t3935731027  : public MonoBehaviour_t3012272455
{
public:
	// System.Single InitiateScene::SCREEN_HEIGHT
	float ___SCREEN_HEIGHT_2;
	// System.Single InitiateScene::SCREEN_WIDTH
	float ___SCREEN_WIDTH_3;
	// UnityEngine.GameObject InitiateScene::prefab
	GameObject_t4012695102 * ___prefab_4;
	// UnityEngine.GameObject InitiateScene::circlePrefab
	GameObject_t4012695102 * ___circlePrefab_5;
	// System.Single InitiateScene::RING_SCALE
	float ___RING_SCALE_6;
	// System.Single InitiateScene::RING_R
	float ___RING_R_7;
	// System.Single InitiateScene::CIRCLE_SCALE
	float ___CIRCLE_SCALE_8;
	// System.Int32 InitiateScene::RING_ROWS
	int32_t ___RING_ROWS_9;
	// System.Int32 InitiateScene::RING_COLS
	int32_t ___RING_COLS_10;
	// System.Single InitiateScene::MARGIN
	float ___MARGIN_11;
	// UnityScript.Lang.Array InitiateScene::circles
	Array_t1209885965 * ___circles_12;
	// System.Int32 InitiateScene::RED
	int32_t ___RED_13;
	// System.Int32 InitiateScene::BLUE
	int32_t ___BLUE_14;
	// System.Int32 InitiateScene::YELLOW
	int32_t ___YELLOW_15;
	// System.Int32 InitiateScene::GREEN
	int32_t ___GREEN_16;
	// System.Int32 InitiateScene::TOTAL_COLOR
	int32_t ___TOTAL_COLOR_17;
	// System.Collections.Hashtable InitiateScene::colorDict
	Hashtable_t3875263730 * ___colorDict_18;

public:
	inline static int32_t get_offset_of_SCREEN_HEIGHT_2() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___SCREEN_HEIGHT_2)); }
	inline float get_SCREEN_HEIGHT_2() const { return ___SCREEN_HEIGHT_2; }
	inline float* get_address_of_SCREEN_HEIGHT_2() { return &___SCREEN_HEIGHT_2; }
	inline void set_SCREEN_HEIGHT_2(float value)
	{
		___SCREEN_HEIGHT_2 = value;
	}

	inline static int32_t get_offset_of_SCREEN_WIDTH_3() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___SCREEN_WIDTH_3)); }
	inline float get_SCREEN_WIDTH_3() const { return ___SCREEN_WIDTH_3; }
	inline float* get_address_of_SCREEN_WIDTH_3() { return &___SCREEN_WIDTH_3; }
	inline void set_SCREEN_WIDTH_3(float value)
	{
		___SCREEN_WIDTH_3 = value;
	}

	inline static int32_t get_offset_of_prefab_4() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___prefab_4)); }
	inline GameObject_t4012695102 * get_prefab_4() const { return ___prefab_4; }
	inline GameObject_t4012695102 ** get_address_of_prefab_4() { return &___prefab_4; }
	inline void set_prefab_4(GameObject_t4012695102 * value)
	{
		___prefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_4, value);
	}

	inline static int32_t get_offset_of_circlePrefab_5() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___circlePrefab_5)); }
	inline GameObject_t4012695102 * get_circlePrefab_5() const { return ___circlePrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_circlePrefab_5() { return &___circlePrefab_5; }
	inline void set_circlePrefab_5(GameObject_t4012695102 * value)
	{
		___circlePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___circlePrefab_5, value);
	}

	inline static int32_t get_offset_of_RING_SCALE_6() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___RING_SCALE_6)); }
	inline float get_RING_SCALE_6() const { return ___RING_SCALE_6; }
	inline float* get_address_of_RING_SCALE_6() { return &___RING_SCALE_6; }
	inline void set_RING_SCALE_6(float value)
	{
		___RING_SCALE_6 = value;
	}

	inline static int32_t get_offset_of_RING_R_7() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___RING_R_7)); }
	inline float get_RING_R_7() const { return ___RING_R_7; }
	inline float* get_address_of_RING_R_7() { return &___RING_R_7; }
	inline void set_RING_R_7(float value)
	{
		___RING_R_7 = value;
	}

	inline static int32_t get_offset_of_CIRCLE_SCALE_8() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___CIRCLE_SCALE_8)); }
	inline float get_CIRCLE_SCALE_8() const { return ___CIRCLE_SCALE_8; }
	inline float* get_address_of_CIRCLE_SCALE_8() { return &___CIRCLE_SCALE_8; }
	inline void set_CIRCLE_SCALE_8(float value)
	{
		___CIRCLE_SCALE_8 = value;
	}

	inline static int32_t get_offset_of_RING_ROWS_9() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___RING_ROWS_9)); }
	inline int32_t get_RING_ROWS_9() const { return ___RING_ROWS_9; }
	inline int32_t* get_address_of_RING_ROWS_9() { return &___RING_ROWS_9; }
	inline void set_RING_ROWS_9(int32_t value)
	{
		___RING_ROWS_9 = value;
	}

	inline static int32_t get_offset_of_RING_COLS_10() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___RING_COLS_10)); }
	inline int32_t get_RING_COLS_10() const { return ___RING_COLS_10; }
	inline int32_t* get_address_of_RING_COLS_10() { return &___RING_COLS_10; }
	inline void set_RING_COLS_10(int32_t value)
	{
		___RING_COLS_10 = value;
	}

	inline static int32_t get_offset_of_MARGIN_11() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___MARGIN_11)); }
	inline float get_MARGIN_11() const { return ___MARGIN_11; }
	inline float* get_address_of_MARGIN_11() { return &___MARGIN_11; }
	inline void set_MARGIN_11(float value)
	{
		___MARGIN_11 = value;
	}

	inline static int32_t get_offset_of_circles_12() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___circles_12)); }
	inline Array_t1209885965 * get_circles_12() const { return ___circles_12; }
	inline Array_t1209885965 ** get_address_of_circles_12() { return &___circles_12; }
	inline void set_circles_12(Array_t1209885965 * value)
	{
		___circles_12 = value;
		Il2CppCodeGenWriteBarrier(&___circles_12, value);
	}

	inline static int32_t get_offset_of_RED_13() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___RED_13)); }
	inline int32_t get_RED_13() const { return ___RED_13; }
	inline int32_t* get_address_of_RED_13() { return &___RED_13; }
	inline void set_RED_13(int32_t value)
	{
		___RED_13 = value;
	}

	inline static int32_t get_offset_of_BLUE_14() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___BLUE_14)); }
	inline int32_t get_BLUE_14() const { return ___BLUE_14; }
	inline int32_t* get_address_of_BLUE_14() { return &___BLUE_14; }
	inline void set_BLUE_14(int32_t value)
	{
		___BLUE_14 = value;
	}

	inline static int32_t get_offset_of_YELLOW_15() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___YELLOW_15)); }
	inline int32_t get_YELLOW_15() const { return ___YELLOW_15; }
	inline int32_t* get_address_of_YELLOW_15() { return &___YELLOW_15; }
	inline void set_YELLOW_15(int32_t value)
	{
		___YELLOW_15 = value;
	}

	inline static int32_t get_offset_of_GREEN_16() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___GREEN_16)); }
	inline int32_t get_GREEN_16() const { return ___GREEN_16; }
	inline int32_t* get_address_of_GREEN_16() { return &___GREEN_16; }
	inline void set_GREEN_16(int32_t value)
	{
		___GREEN_16 = value;
	}

	inline static int32_t get_offset_of_TOTAL_COLOR_17() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___TOTAL_COLOR_17)); }
	inline int32_t get_TOTAL_COLOR_17() const { return ___TOTAL_COLOR_17; }
	inline int32_t* get_address_of_TOTAL_COLOR_17() { return &___TOTAL_COLOR_17; }
	inline void set_TOTAL_COLOR_17(int32_t value)
	{
		___TOTAL_COLOR_17 = value;
	}

	inline static int32_t get_offset_of_colorDict_18() { return static_cast<int32_t>(offsetof(InitiateScene_t3935731027, ___colorDict_18)); }
	inline Hashtable_t3875263730 * get_colorDict_18() const { return ___colorDict_18; }
	inline Hashtable_t3875263730 ** get_address_of_colorDict_18() { return &___colorDict_18; }
	inline void set_colorDict_18(Hashtable_t3875263730 * value)
	{
		___colorDict_18 = value;
		Il2CppCodeGenWriteBarrier(&___colorDict_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
