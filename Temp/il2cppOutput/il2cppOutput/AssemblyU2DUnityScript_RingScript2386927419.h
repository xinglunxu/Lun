#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RingScript
struct  RingScript_t2386927419  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean RingScript::isOuter
	bool ___isOuter_2;
	// System.Int32 RingScript::number
	int32_t ___number_3;

public:
	inline static int32_t get_offset_of_isOuter_2() { return static_cast<int32_t>(offsetof(RingScript_t2386927419, ___isOuter_2)); }
	inline bool get_isOuter_2() const { return ___isOuter_2; }
	inline bool* get_address_of_isOuter_2() { return &___isOuter_2; }
	inline void set_isOuter_2(bool value)
	{
		___isOuter_2 = value;
	}

	inline static int32_t get_offset_of_number_3() { return static_cast<int32_t>(offsetof(RingScript_t2386927419, ___number_3)); }
	inline int32_t get_number_3() const { return ___number_3; }
	inline int32_t* get_address_of_number_3() { return &___number_3; }
	inline void set_number_3(int32_t value)
	{
		___number_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
