#pragma once

#include "PluginSettings.h"
#include <iostream>
#include <fstream>
using namespace std;

class PLUGIN_API PositionClass
{
public:
	void WritePosition(float x, float y, float z);

	float* ReadPosition();
};