// CliExample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ManagedBridge.h"

using namespace ManagedBridge;

Bridge* ptr = NULL;
	
int _tmain(int argc, _TCHAR* argv[])
{
	ptr = new Bridge();

	ptr->PrintMessage("Call 1 to managed component through CLI boundary. Value should display as 0");
	ptr->SetValue(15);
	ptr->PrintMessage("Call 2 to managed component through CLI boundary. Value should display as 15.");
	
	delete ptr;
	return 0;
}

