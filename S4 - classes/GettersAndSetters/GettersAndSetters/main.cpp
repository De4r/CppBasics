#include <iostream>
#include "Person.h"

int main() {

	Person person;
	person.setName("Michal");
	cout << person.toString() << endl;
	cout << "Name of person with get method: " << person.getName() << endl;

	return 0;
}