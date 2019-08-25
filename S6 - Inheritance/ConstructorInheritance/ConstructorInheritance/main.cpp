#include <iostream>

using namespace std;

class Machine {
private:
	int id;
public:
	Machine(): id(0) {
		cout << "Machine no argument constructor called" << endl;
	}
	Machine(int id) : id(id) {
		cout << "Machine argument constructor called" << endl;
	}
	void info() {
		cout << "Machine id: " << id << endl;
	}
};

class Vehicle :public Machine {
public:
	Vehicle() {
		cout << "Vehicle no id created" << endl;
	}
	Vehicle(int id): Machine(id) {
		cout << "Vehicle id created" << endl;
	}
};

class Car : public Vehicle {
public:
	// we cant call Car: Machine(99), we must call the upper superclass, construtor are not inherited but can be called
	Car(): Vehicle(99) {
		cout << "Car created" << endl;
	}
	
};

int main() {

	Machine machine;
	machine.info();
	cout << endl;

	Vehicle vehicle;
	vehicle.info();

	cout << endl;
	Car car;
	car.info();

	cout << endl;
	
	Machine machine1(123);
	machine1.info();

	cout << endl;

	Vehicle vehicle1(1231);
	vehicle1.info();

	cout << endl;
	Car car1;
	car1.info();

	return 0;
}