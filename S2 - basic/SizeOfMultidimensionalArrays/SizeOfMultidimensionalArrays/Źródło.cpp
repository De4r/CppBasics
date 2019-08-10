#include <iostream>

using namespace std;

int main() {

	string animals[][3] = { {"fox", "dog", "cat"}, {"mouse", "parrot", "squirrel"} };

	cout << "String size: " << sizeof(string) << endl;
	cout << "Size of array of strings: " << sizeof(animals) << endl;
	cout << sizeof(animals[0]) << endl;

	for (size_t i = 0; i < sizeof(animals)/sizeof(animals[0]); i++)
	{

		for (size_t j = 0; j < sizeof(animals[0])/sizeof(animals[0][0]); j++)
		{
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	return 0;
}