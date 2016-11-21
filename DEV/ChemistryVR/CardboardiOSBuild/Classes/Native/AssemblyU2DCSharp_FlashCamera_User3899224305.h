#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlashCamera/User
struct  User_t3899224305  : public Il2CppObject
{
public:
	// System.String FlashCamera/User::v1
	String_t* ___v1_0;
	// System.String FlashCamera/User::v2
	String_t* ___v2_1;

public:
	inline static int32_t get_offset_of_v1_0() { return static_cast<int32_t>(offsetof(User_t3899224305, ___v1_0)); }
	inline String_t* get_v1_0() const { return ___v1_0; }
	inline String_t** get_address_of_v1_0() { return &___v1_0; }
	inline void set_v1_0(String_t* value)
	{
		___v1_0 = value;
		Il2CppCodeGenWriteBarrier(&___v1_0, value);
	}

	inline static int32_t get_offset_of_v2_1() { return static_cast<int32_t>(offsetof(User_t3899224305, ___v2_1)); }
	inline String_t* get_v2_1() const { return ___v2_1; }
	inline String_t** get_address_of_v2_1() { return &___v2_1; }
	inline void set_v2_1(String_t* value)
	{
		___v2_1 = value;
		Il2CppCodeGenWriteBarrier(&___v2_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
