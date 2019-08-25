#include <iostream>

using namespace std;

class Test {
private:
	int id;
	
	static int count;

public:
	// Construtor
	Test() {
		id = ++count;
	}
	// you can declare static iwth const right there
	static int const MAX = 90;
	// static func can olny access static variables
	static void showInfo() {
		cout << "Count: " << count << endl;
	}
	void getId() {
		cout << "ID: " << id << endl;
	}
};

// asociated with class, not an object
int Test::count = 0;

int main() {
	Test::showInfo();
	Test test;
	//cout << Test::count << endl;
	test.showInfo();
	Test::showInfo();
	cout << Test::MAX << endl;
	test.getId();
	Test test2;
	test.showInfo();
	test2.getId();
	return 0;
}