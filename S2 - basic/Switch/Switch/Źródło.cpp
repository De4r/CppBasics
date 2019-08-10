#include <iostream>

using namespace std;

int main() {

	int choice = 4;
	const int four = 4;

	switch (choice)
	{
	default:
		cout << "Unrecognized value" << endl;
		break;

	case 3:
		cout << "The choice is: " << choice << endl;
		break;

	case four:
		cout << "The choice is: " << choice << endl;
		break;

	case 5:
		cout << "The choice is: " << choice << endl;
		break;

	}

	return 0;
}