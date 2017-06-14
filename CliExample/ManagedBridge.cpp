// This is the main DLL file.

#include "stdafx.h"

#include "ManagedBridge.h"


#include <msclr/auto_gcroot.h>
using msclr::auto_gcroot;

#using <System.dll>
using namespace System;
using namespace ManagedComponent;

namespace ManagedBridge {

	///
	// adapter needed to hide clr stuff from our main .h file so client app 
	// code can compile cleanly; Provides adapter to the CSharp component
	// that we wish to interact with
	///
	public class MngdAdapter
	{
	private:
		auto_gcroot<MngdComponent^> adapter;

	public:
		MngdAdapter() : adapter(gcnew MngdComponent()) {}

		int GetValue()
		{
			return adapter->Value;
		}

		void SetValue(int value)
		{
			adapter->Value = value;
		}

		void PrintMessage(const char* sMsg)
		{
			adapter->PrintMessage(gcnew String(sMsg));
		}
	};
	
	///
	// Bridges Unmanaged to managed code - uses a adapter to thunk the gap
	///
	Bridge::Bridge() 
	{
		adapter = new MngdAdapter();
	}
		
	Bridge::~Bridge() 
	{
		delete adapter;
	}

	int Bridge::GetValue()
	{
		return adapter->GetValue();
	}

	void Bridge::SetValue(int value)
	{
		adapter->SetValue(value);
	}

	void Bridge::PrintMessage(const char* sMsg)
	{
		adapter->PrintMessage(sMsg);
	}

}