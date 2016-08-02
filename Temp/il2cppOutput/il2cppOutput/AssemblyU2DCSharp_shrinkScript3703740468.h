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

#include "UnityEngine_UnityEngine_StateMachineBehaviour1035456276.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// shrinkScript
struct  shrinkScript_t3703740468  : public StateMachineBehaviour_t1035456276
{
public:
	// UnityEngine.Sprite shrinkScript::newSprite
	Sprite_t4006040370 * ___newSprite_2;

public:
	inline static int32_t get_offset_of_newSprite_2() { return static_cast<int32_t>(offsetof(shrinkScript_t3703740468, ___newSprite_2)); }
	inline Sprite_t4006040370 * get_newSprite_2() const { return ___newSprite_2; }
	inline Sprite_t4006040370 ** get_address_of_newSprite_2() { return &___newSprite_2; }
	inline void set_newSprite_2(Sprite_t4006040370 * value)
	{
		___newSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___newSprite_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
