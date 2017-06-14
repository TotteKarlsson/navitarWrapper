// NavitarWrapper.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "NavitarWrapper.h"
using namespace ManagedBridge;

// This is an example of an exported variable
NAVITARWRAPPER_API int nNavitarWrapper=0;

// This is an example of an exported function.
NAVITARWRAPPER_API int fnNavitarWrapper(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see NavitarWrapper.h for the class definition
CNavitarWrapper::CNavitarWrapper()
{
    return;
}

NAVITARWRAPPER_API int* getBridge()
{
	Bridge* ptr = new Bridge();
	ptr->PrintMessage("Hello");
	return (int*) ptr;
}
