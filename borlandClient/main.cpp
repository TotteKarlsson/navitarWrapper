#include "../NavitarWrapper/NavitarWrapper.h"
int main()
{
	int* bridge = getBridge();

	//bridge->PrintMessage("Hello");
	//delete ptr;
	setValue(bridge, 14);
	int value = getValue(bridge);
    return 0;
}

#pragma comment(lib, "../Debug/NavitarWrapperB.lib")

