#include <iostream>
using namespace std;

class Animal {
public:
	void speak() { cout << "Adasda" << endl; }
};

class Cat : public Animal {
public:
	void jump() {
		cout << "Cat jumpin" << endl;
	}
};

class Tiger : public Cat {
public:
	void eatAnimals() {
		cout << "Mniam" << endl;
	}
};

int main() {

	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.eatAnimals();

	return 0;
}