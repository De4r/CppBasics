#include <iostream>

using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) : name(other.name) {
		cout << "Animal created by copying.";
	}

	~Animal() {
		cout << "Animal destructed." << endl;
	}

	void setName(string name) {
		this->name = name;
	}
	void speak() const {
		cout << " My name is: " << name << endl;
	}

};

int main() {
	// when calling with NEW remember to call destructor by delete
	Animal *pCat1 = new Animal();
	pCat1->setName("Luna");
	pCat1->speak();

	Animal* pCat2 = NULL;


	delete pCat1;

}