#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person personOne;
	Person personTwo("Bob");
	Person personThree("Nick", 2);

	cout << personOne.toString() << endl;
	cout << personTwo.toString() << endl;
	cout << personThree.toString() << endl;
	return 0;
}