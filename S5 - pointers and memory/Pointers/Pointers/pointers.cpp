#include <iostream>

using namespace std;

void manipulate(double *pointerValue) {
	cout << "Double vaule inside 1: " << *pointerValue << endl;
	*pointerValue = 10.0;
	cout << "Double vaule inside 2: " << *pointerValue << endl;

}
int main() {

	int nValue = 5;
	
	int *pnValue =  &nValue; // pointer = aderess( variable)


	cout << "Int Value: " << nValue << endl;
	cout << "Pointer to int adress: " << pnValue << endl;

	cout << "Int value via pointer: " << *pnValue << endl;
	cout << endl;
	
	double dValue = 123.23;
	cout << "Double value 1: " << dValue << endl;
	manipulate(&dValue);
	cout << "Double vaule 2: ( after mainupualte) " << dValue << endl;


	return 0;
}