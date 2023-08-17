#pragma once


#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error HAZEL ONLY SUPPORT WINDOWS!!
#endif
#define BIT(x) (1 << x)