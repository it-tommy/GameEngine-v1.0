#pragma once

#ifdef EGN_PLATFORM_WINDOWS

	#ifdef EGN_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
	#else
		#error GameEngine only supports Windows!

#endif
