#pragma once

namespace ManagedBridge {
	
	// anonymous pre-declaration of the adapter class that we'll instantiate
	// in the c++ code implmenetation of our class. It has to be anonymously pre-declared
	// as its a managed class 
	class MngdAdapter;

	class Bridge
	{
		private:
			MngdAdapter* adapter;

		public:
			Bridge();		
			~Bridge();

			void	setValue(int value);
			int		getValue();
			void	printMessage(const char* sMsg);
			int		findControllers();
	};
};

