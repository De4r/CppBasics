#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// const makes the variable unchangable
	const string password = "Hello";

	cout << "Enter your passowrd: " << flush;
	string input;
	cin >> input;

	if (input == password) {
		cout << "Password accepted." << endl;
	}
	

	while (input != password)
	{
		cout << "Access denied." << endl;
		cout << "Enter your password: " << flush;
		// This string with the same name is existing only inside the loop
		
		cin >> input;
	}
	cout << "Password accepted. After While Loop." << endl;

	// Do this with do while loop.
	do	{
		cout << "Enter your passowrd: " << endl;
		cin >> input;

		if (input == password) {
			cout << "Password accepted. Inside Do while loop" << endl;
		}
		else
		{
			cout << "Access denied." << endl;
		}

	} while (input != password);
	

	return 0;
}