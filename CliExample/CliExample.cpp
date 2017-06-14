// CliExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ManagedBridge.h"
#include "../NavitarWrapper/NavitarWrapper.h"

using namespace ManagedBridge;

//Bridge* ptr = NULL;
	
int _tmain(int argc, _TCHAR* argv[])
{
	Bridge* bridge = (Bridge*) getBridge();

	bridge->PrintMessage("Hello");
	//delete ptr;
	return 0;
}

