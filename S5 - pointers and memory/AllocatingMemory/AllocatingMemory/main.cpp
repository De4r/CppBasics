#include <iostream>

using namespace std;

class Animal {
private:
	string name;
public:
	// Constructor
	Animal() {
		cout << "Animal created" << endl;
	}
	// Copy construtor
	Animal(const Animal& other) :name(other.name) {
		cout << "Animal copied form animal called " << other.name << endl;
	}
	// Destructor
	~Animal() {
		cout << "Animal destroyed" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() {
		cout << "My name is " << name << endl;
	}
};


int main() {

	int* pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;
	// creating memory for 10 Animal objects
	Animal* pAnimal = new Animal[10];


	// delete the animals created before
	delete []pAnimal;
	
	char* pMem = new char[1000];
	delete pMem;

	return 0;
}