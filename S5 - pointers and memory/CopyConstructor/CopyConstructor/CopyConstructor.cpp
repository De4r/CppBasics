#include <iostream>

using namespace std;

class Animal{
private:
	string name;
public:
	Animal() { cout << "Animal created." << endl; };
	// you may call only the const within the copy constructor because of its const
	Animal(const Animal& other) : name(other.name) { cout << "Animal copied" << endl; }; // overwrite the copy constructor
	void setName(string name) { this->name = name; };
	void speak() const { cout << "My name is: " << name << endl; };

};

int main() {
	
	Animal animal1;
	animal1.setName("Fredek");
	
	Animal animal2 = animal1; // cpoy the setting from 1 object to another
	animal2.speak();
	animal2.setName("Bobek");


	animal1.speak();
	animal2.speak();
	
	Animal animal3(animal1);
	animal3.speak();

	return 0;
}