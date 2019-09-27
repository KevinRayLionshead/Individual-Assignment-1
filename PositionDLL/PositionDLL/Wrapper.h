#pragma once
#include "PluginSettings.h"
#include "PositionClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	PLUGIN_API float* ReadPosition();
	PLUGIN_API void WritePosition(float x, float y, float z);
#ifdef __cplusplus
}
#endif