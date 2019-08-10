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

	if (choice < 3) {
		cout << "Insufficient previlages to use these menu option" << endl;
	}
	else {
		cout << "Privilege level sufficient." << endl;
	}

	if (choice == 5) {
		cout << "Quiting" << endl;
	}
	else {
		cout << "No quiting" << endl;
	}
	return 0;
}