#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragAtom
struct  DragAtom_t1411294277  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 DragAtom::startingPosition
	Vector3_t2243707580  ___startingPosition_2;
	// System.Boolean DragAtom::tracker
	bool ___tracker_3;

public:
	inline static int32_t get_offset_of_startingPosition_2() { return static_cast<int32_t>(offsetof(DragAtom_t1411294277, ___startingPosition_2)); }
	inline Vector3_t2243707580  get_startingPosition_2() const { return ___startingPosition_2; }
	inline Vector3_t2243707580 * get_address_of_startingPosition_2() { return &___startingPosition_2; }
	inline void set_startingPosition_2(Vector3_t2243707580  value)
	{
		___startingPosition_2 = value;
	}

	inline static int32_t get_offset_of_tracker_3() { return static_cast<int32_t>(offsetof(DragAtom_t1411294277, ___tracker_3)); }
	inline bool get_tracker_3() const { return ___tracker_3; }
	inline bool* get_address_of_tracker_3() { return &___tracker_3; }
	inline void set_tracker_3(bool value)
	{
		___tracker_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
