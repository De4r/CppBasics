#include <iostream>

using namespace std;

int main() {
	// can also be animals[][3]
	string animals[2][3] = {
		{"fox","dog","cat"},
		{"mouse","squirrel","parrot"}
	};

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	int tableOfMultiplication[10][10];

	for (size_t i = 0; i < 10; i++)
	{

		for (size_t j = 0; j < 10; j++)
		{
			tableOfMultiplication[i][j] = (i+1) * (j+1);
			cout << tableOfMultiplication[i][j] << " " << flush;
		}
		cout << endl;
	}


	return 0;
}