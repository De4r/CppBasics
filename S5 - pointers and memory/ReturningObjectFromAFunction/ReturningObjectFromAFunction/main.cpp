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

Animal* createAnimal() {
	Animal* pAnimal = new Animal();
	pAnimal->setName("Kuba");
	return pAnimal;
}

int main() {

	Animal* pCat1 = new Animal();
	pCat1->setName("Luna");
	pCat1->speak();
	delete pCat1;

	Animal* pFrog = createAnimal();
	pFrog->speak();

	delete pFrog;
	return 0;
}