#include "Person.h"
#include <iostream>
#include <sstream>

using namespace std;



string Person::toString() {
	stringstream ss;
	cout << "Name: ";
	cout << name;
	cout << " Age: ";
	cout << age;
	return ss.str();
}