#include <iostream>

using namespace std;

int main() {

	char text[] = "hello";
	
	int nChars = sizeof(text) - 1; // num of bytes -1 for 0 string terminaotr

	
	char* pStart = text; // pointer to the 'h'
	char* pEnd = text + nChars - 1; // pointer to the last character

	cout << *pEnd << endl;

	while (pStart < pEnd) {
		char save = *pStart;

		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}
	
	for (size_t i = 0; i < nChars; i++)
	{
		cout << text[i] << flush;
	}


	cout << endl;
	cout << text << endl;
	return 0;
}