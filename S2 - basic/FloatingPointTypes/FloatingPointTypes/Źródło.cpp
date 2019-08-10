#include <iostream>
#include <iomanip>


using namespace std;

int main() {

	float fValue = 123.456789;
	// fixed from iomanip, setprecision - setting floating numbers
	cout << fixed << fValue << endl;
	cout << setprecision(20) << scientific << fValue << endl;
	cout << "Size of float: " << sizeof(float) << endl;

	// more precision than the float
	double dValue = 123.456789;

	cout << fixed << dValue << endl;
	cout << setprecision(20) << scientific << dValue << endl;
	cout << "Size of double: " << sizeof(double) << endl;

	// more precision than the double
	long double dlValue = 123.4567890123456789;

	cout << fixed << dlValue << endl;
	cout << setprecision(20) << scientific << dlValue << endl;
	cout << "Size of long double: " << sizeof(dlValue) << endl;
	return 0;
}