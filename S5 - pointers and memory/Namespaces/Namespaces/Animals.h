#pragma once
#include <iostream>
using namespace std;

namespace jwp {
	const string CATNAME = "Luna";
	class Cat
	{
	public:
		Cat();
		virtual ~Cat();
		void speak();
	};

}