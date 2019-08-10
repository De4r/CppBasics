#include <iostream>

using namespace std;

int main() {

	bool booleanValue = true;

	cout << "Value of Boolean Value: " << booleanValue << endl;
	// char type

	char charValueInt = 55;

	cout << "Char value (with interger definition): " << charValueInt << endl;

	char charValueQuotes = '7';

	cout << "Char value (with quote definition): " << charValueQuotes << " with integer definition as number: " << (int)charValueQuotes << endl;

	char charValueTry = 'g';

	cout << "Char value of 'g': " << charValueTry << " and as integer: " << (int)charValueTry << endl;

	cout << "Size of the char variable: " << sizeof(char) << endl;

	// the wchar_t
	wchar_t wchartValue = 'g';

	cout << "The wchar_t value: " << wchartValue << " with char value as: " << (char)wchartValue << endl;
	cout << "Size of the wchar_t variable: " << sizeof(wchar_t) << endl;


	return 0;
}