#pragma once 
#include <memory>
#include <iostream>

namespace designPatterns
{
	class Singleton
	{
	private:
	//public:
		int testValue;
		static std::shared_ptr<Singleton> _instance;
	public:
		Singleton(int v = 0);
		void setValue(int v);
		static std::shared_ptr<Singleton>& getInstance();
		void printTest();
	};

}