#include <iostream>
using namespace std;

int main() {

	cout << "1. \tAdd new record" << endl;
	cout << "2. \tDelete new record" << endl;
	cout << "3. \tView record" << endl;
	cout << "4. \tSreach new record" << endl;
	cout << "5. \tQuit" << endl;

	cout << "Enter your selection: " << flush;

	int choice;
	cin >> choice;

	if (choice == 1) {
		cout << "Adding new record." << endl;
	}
	else if (choice == 2) {
		cout << "Deleting record." << endl;
	}
	else if (choice == 3) {
		cout << "Viewing record" << endl;
	}
	else if (choice == 4) {
		cout << "Sreaching for a record" << endl;
	}
	else if (choice == 5) {
		cout << "Quiting..." << endl;
	}
	else {
		cout << "Invalid input." << endl;
	}

	return 0;
}