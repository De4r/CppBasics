#include <iostream>
#include "Person.h"

using namespace std;

Person::Person() {
	name = "George";
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}

string Person::toString() {
	return "Person's name is: " + name;
}