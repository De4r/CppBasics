#include <iostream>

using namespace std;

int main() {

	const int NSTRINGS = 5;
	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string* pTexts = texts;
	cout << *pTexts << endl;

	pTexts += 3; // = pTexts + 1; ++;
	cout << *pTexts << endl;

	pTexts -= 2;
	cout << *pTexts << endl;

	string* pEnd = &texts[NSTRINGS]; // you can point to adress over the array, bbut dont try to read this addres

	pTexts = &texts[0];

	while (pTexts != pEnd)
	{
		cout << *pTexts << endl;
		pTexts++;
	}

	pTexts = &texts[0];

	long elements = (long)(pEnd - pTexts);
	cout << elements << " " << sizeof(elements) << endl;


	pTexts = &texts[0];
	pTexts += NSTRINGS / 2;
	cout << *pTexts << endl;

	return 0;
}