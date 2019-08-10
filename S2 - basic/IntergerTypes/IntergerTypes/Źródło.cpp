#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	
	// Integer properties
	int value = 777777;

	cout << value << endl;
	cout << "Max integer value: " << INT_MAX << endl;
	cout << "Min integer value: " << INT_MIN << endl;

	cout << "Size of: " << sizeof(value) << endl;

	// Long integer properties
	long int lValue = 77777777777777777;

	cout << lValue << endl;
	cout << "Max long integer value: " << LONG_MAX << endl;
	cout << "Min long integer value: " << LONG_MIN << endl;

	cout << "Size of: " << sizeof(lValue) << endl;

	// short integer properties
	short int sValue = 77777777777777777;

	cout << sValue << endl;
	cout << "Max short integer value: " << SHRT_MAX << endl;
	cout << "Min short integer value: " << SHRT_MIN << endl;

	cout << "Size of: " << sizeof(sValue) << endl;
	// with sign

	unsigned int uValue = 21312;
	cout << "Unsigned int value: " << uValue << endl;

	// sometimes there is olny short/ long insted of short int/ long int and it is the same thing
	return 0;
}