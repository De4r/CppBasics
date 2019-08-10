//#include <iostream>
#include <sstream>

#include "Person.h"

Person::Person() {
	name = "Undefined";
	age = 0;
}

string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;
	return ss.str();
}

Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}