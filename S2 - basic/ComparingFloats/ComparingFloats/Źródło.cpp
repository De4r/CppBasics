#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float value1 = 1.1;

	if (value1 == 1.1) {
		cout << "Equals" << endl;
	}
	else {
		cout << "Not equals" << endl;
	}

	if (value1 < 1.100001 && value1 > 1.000009) {
		cout << "Equals" << endl;
	}
	else {
		cout << "Not equals" << endl;
	}

	cout << setprecision(10) << value1 << endl;

	return 0;
}