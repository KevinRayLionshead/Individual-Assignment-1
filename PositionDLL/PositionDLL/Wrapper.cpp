#include "Wrapper.h"

PositionClass positionClass;

PLUGIN_API float* ReadPosition()
{
	return positionClass.ReadPosition();
}

PLUGIN_API void WritePosition(float x, float y, float z)
{
	return positionClass.WritePosition(x, y, z);
}
