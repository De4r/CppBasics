#include <iostream>

using namespace std;

int main() {

	cout << "Hello" << endl;

	int numberCats = 5;
	int numberDogs = 4;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Total number of animalas: " << numberCats + numberDogs << endl;
	cout << "Adding a new dog" << endl;

	numberDogs = numberDogs + 1;

	cout << "New number of dogs: " << numberDogs << endl;



	return 0;
}