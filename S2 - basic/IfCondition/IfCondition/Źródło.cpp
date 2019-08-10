#include <iostream>
using namespace std;

int main() {

	string password = "hello";

	cout << "Enter the passoword, please: " << flush;

	string input;
	cin >> input;

	cout << "'" << input << "'" << endl;

	if (input == password) {
		cout << "Password accepted." << endl;

	}

	if (input != password) {
		cout << "Password is wrong. Acess denied." << endl;

	}

	return 0;
}