#include <iostream>
#include <sstream>

using namespace std;

int main() {

	string name = "Bob";
	int age = 32;
	stringstream info;
	info << "Name: ";
	info << name;
	info << "; age: ";
	info << age;
	
	string infoString = info.str();

	cout << infoString << endl;

	return 0;
}