#include <iostream>

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; };

};

int main() {
	const double PI = 3.141592; // constat, you cant change this value
	//PI = 10; // this will not work, compile etc
	cout << PI << endl;

	Animal animal;
	animal.setName("Freed");
	animal.speak();

	int value = 8;
	int* pValue = &value; // cant be changed
	// const int*  const pValue = &value; // -> this prevents from changing pointer and the value by the pointer
	cout << *pValue << endl;

	int number = 11;
	pValue = &number; // error with this: int* const pValue = &value; // cant be changed
	*pValue = 12; // errror with this: const int* pValue = &value; // cant be changed

	cout << *pValue << endl;

	return 0;
}