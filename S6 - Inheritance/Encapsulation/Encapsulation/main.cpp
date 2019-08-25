#include <iostream>

using namespace std;

class Frog {
private:
	string name;
	string getName() { return name; };
public:
	Frog(string name) : name(name) {};
	void info() {
		cout << "Frog names is: " << getName() << endl;
	}
};

int main() {

	Frog forg("Freddy");
	//cout << forg.getName() << endl;
	forg.info();

	return 0;
}