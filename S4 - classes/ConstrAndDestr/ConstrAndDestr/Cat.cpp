#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed" << endl;
	
}
void Cat::speak() {
	if (happy) {
		cout << "Happy" << endl;
	}
	else	{
		cout << "Not happy" << endl;
	}
}
