#pragma once

#include <memory>
#include <iostream>
#include <cstdio>
namespace designPatterns
{
	struct Data
	{
		int value;
		Data(int value = 0) :value(value){}
	}; 

	class Prototype
	{
	private:
		std::shared_ptr<Data> data;
	public:
		Prototype(int value = 0)
		{
			data = std::make_shared<Data>(value);
			puts("构造完成");
		}
		~Prototype() = default;
		Prototype(const Prototype& obj)
		{
			puts("拷贝构造函数被调用");

			data = std::make_shared<Data>(obj.data->value);
		}
		Prototype& operator = (const Prototype& obj)
		{
			puts("拷贝赋值运算符被调用");
			data = std::make_shared<Data>(obj.data->value);
			return *this;
		}

		void setValue(int value)
		{
			data->value = value;
		}

		void printTest()
		{
			printf("当前value值为： %d \n", data->value);
		}
	};
}