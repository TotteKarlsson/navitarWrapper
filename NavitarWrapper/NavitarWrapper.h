#ifdef NAVITARWRAPPER_EXPORTS
#define NAVITARWRAPPER_API __declspec(dllexport)
#else
#define NAVITARWRAPPER_API __declspec(dllimport)
#endif

#include "ManagedBridge.h"
using namespace ManagedBridge;

extern NAVITARWRAPPER_API int nNavitarWrapper;

NAVITARWRAPPER_API int fnNavitarWrapper(void);

NAVITARWRAPPER_API int* getBridge();

