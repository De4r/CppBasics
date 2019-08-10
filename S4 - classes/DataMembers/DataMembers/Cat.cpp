#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if (happy) {
		cout << "MEoW!" << endl;
	}
	else
	{
		cout << "..." << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}