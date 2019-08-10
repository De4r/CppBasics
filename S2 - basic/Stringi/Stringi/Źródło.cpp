#include <iostream>

using namespace std;

int main() {

	int value = 6;

	cout << value << endl;

	string valueString = "Hello there, ";
	string textTwo = "Fred";

	cout << valueString << endl;
	cout << textTwo << endl;
	cout << valueString << textTwo << endl;

	string textSummedUp = valueString + textTwo;

	cout << textSummedUp << endl;

	return 0;
}