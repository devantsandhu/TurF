#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PopUpAnswer
struct  PopUpAnswer_t919826128  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text PopUpAnswer::answer
	Text_t356221433 * ___answer_2;
	// System.Boolean PopUpAnswer::answerShown
	bool ___answerShown_3;

public:
	inline static int32_t get_offset_of_answer_2() { return static_cast<int32_t>(offsetof(PopUpAnswer_t919826128, ___answer_2)); }
	inline Text_t356221433 * get_answer_2() const { return ___answer_2; }
	inline Text_t356221433 ** get_address_of_answer_2() { return &___answer_2; }
	inline void set_answer_2(Text_t356221433 * value)
	{
		___answer_2 = value;
		Il2CppCodeGenWriteBarrier(&___answer_2, value);
	}

	inline static int32_t get_offset_of_answerShown_3() { return static_cast<int32_t>(offsetof(PopUpAnswer_t919826128, ___answerShown_3)); }
	inline bool get_answerShown_3() const { return ___answerShown_3; }
	inline bool* get_address_of_answerShown_3() { return &___answerShown_3; }
	inline void set_answerShown_3(bool value)
	{
		___answerShown_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
