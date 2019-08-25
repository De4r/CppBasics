#include <iostream>

using namespace std;
// Could declare variables here but they takes memory
string numbers[] = { "one", "two" ,"three" }; // global variable

void show(int const nElements, string texts[]) {
	// sizeof(texts); - return size of pointern not the array
	for (size_t i = 0; i < nElements; i++)
	{
		cout << texts[i] << endl;
	}

}

void showWithPointer(int const nElements, string *texts) {
	// sizeof(texts); - return size of pointern not the array
	for (size_t i = 0; i < nElements; i++)
	{
		cout << texts[i] << endl;
	}

}

void showWithPointer(string (&texts)[3]) {
	// sizeof(texts); - return size of pointern not the array
	for (size_t i = 0; i < sizeof(texts)/sizeof(string); i++)
	{
		cout << texts[i] << endl;
	}

}

string* getArray() {
	// dont return pointers to local variables // string texts[] = { "one", "two" ,"three" };
	return numbers;
}

char* getChar() {
	char* pChar = new char[100];
	return pChar;
}

void freeMemory(char* pMem) {
	delete[] pMem;
	cout << "Memory freed" << endl;
}

int main() {

	string texts[] = { "Apple", "Ornage","Bannana" };

	show(3, texts);
	showWithPointer(3, texts);
	showWithPointer(texts);

	getArray();

	char* pChars = getChar();

	freeMemory(pChars);

	return 0;
}