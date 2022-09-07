#pragma once

#ifdef BOPL_PLATFORM_WINDOWS
	#ifdef BOPL_BUILD_DLL
		#define BOPL_API _declspec(dllexport)
	#else
		#define BOPL_API _declspec(dllimport)
	#endif //BOPL_BUILD_DLL
#else
	#error Bopl is windows only :( sorry
#endif // BOPL_PLATFORM_WINDOWS
