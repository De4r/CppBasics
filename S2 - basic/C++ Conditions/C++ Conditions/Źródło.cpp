#include <iostream>
#include <iomanip>

using namespace std;
/*

== equality test operator
!= not equal
< less than
> greater than
<= less than or equal
>= greater than or equal
*/
int main() {

	cout << "Hello world" << endl;

	int value1 = 7;
	int value2 = 4;

	if (value1 < 8) {
		cout << "Condtion 1: True" << endl;
	}
	else {
		cout << "Condtion 1: False" << endl;
	}

	// and && operator
	if (value1 == 7 && value2 == 4) {
		cout << "Condtion 2: True" << endl;
	}
	else {
		cout << "Condtion 2: False" << endl;
	}

	// or || operator
	if (value1 == 7 || value2 < 3) {
		cout << "Condtion 3: True" << endl;
	}
	else {
		cout << "Condtion 3: False" << endl;
	}

	if ((value2 != 8 && value1 == 10) || value1 < 10) {
		cout << "Condtion 4: True" << endl;
	}
	else {
		cout << "Condtion 4: False" << endl;
	}


	// step by step
	bool condition1 = (value2 != 8) && (value1 == 10);
	bool condition2 = value1 < 10;
	
	if (condition1 || condition2) {
		cout << "Condtion 5: True" << endl;
	}
	else {
		cout << "Condtion 5: False" << endl;
	}


	return 0;
}