#ifdef NAVITARWRAPPER_EXPORTS
#define NAVITARWRAPPER_API __declspec(dllexport)
#else
#define NAVITARWRAPPER_API __declspec(dllimport)
#endif

#ifdef __cplusplus  
extern "C" {  // only need to export C interface if  
			  // used by C++ source code  
#endif  

NAVITARWRAPPER_API int* __stdcall getBridge();
NAVITARWRAPPER_API void __stdcall setValue(int* handle, int value);
NAVITARWRAPPER_API int  __stdcall getValue(int* handle);

NAVITARWRAPPER_API int  __stdcall findControllers(int* handle);


#ifdef __cplusplus  
}
#endif  