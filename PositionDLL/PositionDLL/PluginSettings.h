#pragma once

#ifdef POSITIONDLL_EXPORTS
#define PLUGIN_API __declspec(dllexport)
#elif POSITIONDLL_IMPORTS 
#define PLUGIN_API __declspec(dllimport)
#else
#define PLUGIN_API
#endif
