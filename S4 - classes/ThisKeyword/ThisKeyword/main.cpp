#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	
	Person person;
	Person person2("Bob", 40);
	Person person3("Sue", 121);

	cout << person.toString() << " memory location: " << &person << endl;
	cout << person2.toString() << " memory location: " << &person2 << endl;
	cout << person3.toString() << " memory location: " << &person3 << endl;

	return 0;
}