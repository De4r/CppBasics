#include <iostream>

using namespace std;

int main() {

	cout << "Array of integers: " << endl;
	int valueArray[3];

	valueArray[0] = 88;
	valueArray[1] = 77;
	valueArray[2] = 66;

	cout << valueArray[0] << endl;
	cout << valueArray[1] << endl;
	cout << valueArray[2] << endl;
	// mozna dostac sie do nie istniejacych elementow
	cout << valueArray[5] << endl;

	cout << "Array of doubles: " << endl;
	double numbersArray[4] = { 4.5, 2.3, 7.2, 8.1 };

	for (int i = 0; i < 4; i++) {
		cout << "Element at index " << i <<" : " << numbersArray[i] << endl;
	}

	cout << "Initializig with zeros" << endl;

	int zerosArray[8] = {};

	for (int i = 0; i < 8; i++) {
		cout << "Element at index " << i << " : " << zerosArray[i] << endl;
	}

	// Array of strings

	string texts[] = {"apple", "banana", "orange"};
	for (int i = 0; i < 3; i++) {
		cout << "Element at index " << i << " : " << texts[i] << endl;
	}

	
	return 0;
}