#include <iostream>

using namespace std;

int main() {
	/*
	for (int i = 0; i < 10; i++)
	{
		cout << "i is: " << i << endl;

		if (i == 3) break; // break stops the loop at this point, code below won't be executed
		cout << "Continue to loop through" << endl;

	}
	cout << "Quiting..." << endl;
	*/

	/*
	for (int i = 0; i < 10; i++)
	{
		cout << "i is: " << i << endl;

		if (i == 3) continue; // continue stops the execution of the code below and goes on to the next cycle of loop
		cout << "Continue to loop through" << endl;

	}
	cout << "Quiting..." << endl;
	*/

	const string passowrd = "Hello";
	string inputPassword;

	do
	{
		cout << "Enter your password: " << flush;
		cin >> inputPassword;

		if (inputPassword != passowrd) {
			cout << "Wrong. Wronh!" << endl;
		}
		else
		{
			break;
		}

	} while (true);

	cout << "Password accepted." << endl;

	while (true)
	{
		cout << "enter your password: " << flush;
		cin >> inputPassword;
		if (inputPassword != passowrd)
		{
			cout << "Access denied." << endl;
			continue;
		}
		else
		{
			break;
		}
	}
	cout << "Passowrd accepted." << endl;

	return 0;
}