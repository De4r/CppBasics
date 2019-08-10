#include <iostream>

using namespace std;

int main() {

	string hello = "Hello";
	string userName;

	cout << hello << endl;

	cout << "Enter your name: " << flush;
	cin >> userName; // extraction operator
	cout << "You entered: " << userName << endl;

	int value;

	cout << "Enter a number: " << flush;
	cin >> value;
	cout << "You entered a number: " << value << endl;

	return 0;
}