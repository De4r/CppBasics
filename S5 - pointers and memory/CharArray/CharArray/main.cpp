#include <iostream>
using namespace std;

int main() {

	char text[] = {'h','e','l','l','o'};
	char text2[] = "hello";
	string text3 = "hello";

	for (size_t i = 0; i < sizeof(text2); i++)
	{
		cout << i << ":" << (int)text2[i] << endl; // 0 for string terminator
	}

	int k = 0;

	while (true)
	{
		if (text2[k] == 0) break;
		cout << text2[k] << flush;
		k++;

	}
	return 0;
}