#pragma once

#ifdef SIMPLEDLL_EXPORTS
#define PLUGIN_API __declspec(dllexport)
#elif SIMPLEDLL_IMPORTS
#define PLUGIN_API __declspec(dllimport)
#else
#define PLUGIN_API
#endif
