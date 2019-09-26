#include "Wrapper.h"

SimpleClass simpleClass;

PLUGIN_API int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}
