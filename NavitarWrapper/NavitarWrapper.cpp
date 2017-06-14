#include "stdafx.h"
#include "NavitarWrapper.h"
#include "ManagedBridge.h"
using namespace ManagedBridge;

NAVITARWRAPPER_API int* __stdcall getBridge()
{
	Bridge* ptr = new Bridge();
	return (int*) ptr;
}

NAVITARWRAPPER_API void __stdcall setValue(int* handle, int value)
{
	if (handle)
	{
		Bridge* b = (Bridge*)handle;
		b->setValue(value);
	}
}

NAVITARWRAPPER_API int __stdcall getValue(int* handle)
{
	if (handle)
	{
		Bridge* b = (Bridge*)handle;
		return b->getValue();
	}
	return -1;
}