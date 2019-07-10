#include "Singleton.h"
using namespace designPatterns;
int main()
{
	auto instanceA = Singleton::getInstance();
	auto _instanceB = Singleton::getInstance();

	instanceA->printTest();

	_instanceB->setValue(100);
	
	instanceA->printTest();

	system("pause");

}