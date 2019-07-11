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
			puts("�������");
		}
		~Prototype() = default;
		Prototype(const Prototype& obj)
		{
			puts("�������캯��������");

			data = std::make_shared<Data>(obj.data->value);
		}
		Prototype& operator = (const Prototype& obj)
		{
			puts("������ֵ�����������");
			data = std::make_shared<Data>(obj.data->value);
			return *this;
		}

		void setValue(int value)
		{
			data->value = value;
		}

		void printTest()
		{
			printf("��ǰvalueֵΪ�� %d \n", data->value);
		}
	};
}