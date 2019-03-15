#include "RE/PlayerControls.h"

#include "skse64/GameInput.h"  // PlayerControls


namespace RE
{
	PlayerControls* PlayerControls::GetSingleton()
	{
		using func_t = function_type_t<decltype(&PlayerControls::GetSingleton)>;
		func_t* func = function_cast<func_t*>(&::PlayerControls::GetSingleton);
		return func();
	}


	PlayerControls* PlayerControls::ctor_Hook()
	{
		using func_t = function_type_t<decltype(&PlayerControls::ctor_Hook)>;
		func_t* func = function_cast<func_t*>(&::PlayerControls::ctor_Hook);
		return func(this);
	}


	PlayerControls::PlayerControls()
	{
		Ctor_Internal();
	}


	PlayerControls* PlayerControls::Ctor_Internal()
	{
		using func_t = function_type_t<decltype(&PlayerControls::Ctor_Internal)>;
		func_t* func = EXTRACT_SKSE_MEMBER_FN_ADDR(::PlayerControls, ctor, func_t*);
		return func(this);
	}
}
