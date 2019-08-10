#include <iostream>

using namespace std;

int main() {

	string texts[] = { "one", "two", "three" };

	cout << sizeof(texts) / sizeof(string) << endl;

	string* pTexts = texts;

	for (size_t i = 0; i < sizeof(texts)/sizeof(string); i++)
	{
		cout << texts[i] << " "<< flush; // standard reference by indexing the array
	}
	cout << endl;

	for (size_t i = 0; i < sizeof(texts) / sizeof(string); i++)
	{
		cout << pTexts[i] << " " << flush; // referencing to objects with the pointer that points on whole array
	}
	cout << endl;

	for (size_t i = 0; i < sizeof(texts) / sizeof(string); i++)
	{
		cout << *pTexts << " " << flush;
		pTexts = pTexts + 1; // reference to objec by pointer to start of block memory and incrementing it by +1*(size of element in array)
	}
	cout << endl;

	pTexts = texts; // redefinioton
	for (size_t i = 0; i < sizeof(texts) / sizeof(string); i++, pTexts++)
	{
		cout << *pTexts << " " << flush;
		
	}
	cout << endl;


	string* pElement = &texts[0]; // point to first element
	string* pEnd = &(texts[2]); // adress of the last array's element

	while (true) {
		cout << *pElement << " " << endl;
		
		if (pElement == pEnd) break;

		pElement++;
	}

	return 0;
}