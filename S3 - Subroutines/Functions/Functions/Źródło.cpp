#include <iostream>

using namespace std;

void showMenu() {
	cout << "1. Sreach" << endl;
	cout << "2. View Rec" << endl;
	cout << "3. Quit" << endl;

	cout << "Enter a selection: " << flush;
}

void pressSelection() {

	int choice;
	cin >> choice;
	cout << endl;
	switch (choice)
	{
	default:
		cout << "Please select a valid item from a menu." << endl;
		break;
	case 1:
		cout << "Sreaching..." << endl;
		break;
	case 2:
		cout << "Viewing a record" << endl;
		break;
	case 3:
		cout << "Quiting" << endl;
	}
}
int main() {

	showMenu();

	pressSelection();

	return 0;
}