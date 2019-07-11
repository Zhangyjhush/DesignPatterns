#include "Prototype.h"
using namespace designPatterns;

int main()
{
	Prototype protoType_a(10);
	auto protoType_b = protoType_a;
	protoType_b.setValue(20);

	protoType_a.printTest();
	protoType_b.printTest();
	system("pause");
}