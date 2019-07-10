#include "Singleton.h"
using namespace designPatterns;

Singleton::Singleton(int v) :testValue(v){}

void Singleton::printTest()
{
	std::cout << "µ±Ç°Test Value = " << testValue << std::endl;
}


std::shared_ptr<Singleton> Singleton::_instance = std::make_shared<Singleton>();
std::shared_ptr<Singleton>& Singleton::getInstance()
{
	return _instance;
}

void Singleton::setValue(int v)
{
	testValue = v;
}