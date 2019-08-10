#include <iostream>

using namespace std;

int main() {

	int values[] = { 4, 7, 3, 4 };
	// size in bytes of an object
	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	for (size_t i = 0; i < sizeof(values)/sizeof(int); i++)
	{
		cout << values[i] << " " << flush;
	}
	cout << endl;

	
	int values2[2][4] = { {4, 7, 3, 4}, {3, 6, 2, 3} };
	cout << "Size of 2D array: " << sizeof(values2) << endl;
	cout << "Sizeof(2D array) / sizeof(1D array) - number of rows: " << sizeof(values2)/sizeof(values2[0]) << endl;
	cout << "Sizeof(1D array - row) / sizeof(elem type) - number of elem in rows: " << sizeof(values2[0]) / sizeof(values2[0][0]) << endl;

	for (size_t i = 0; i < sizeof(values2)/sizeof(values2[0]); i++)
	{
		
		for (size_t j = 0; j < sizeof(values2[0])/sizeof(values2[0][0]); j++)
		{
			cout << values2[i][j] << " " << flush;
		}
		cout << endl;
	}
	return 0;
}