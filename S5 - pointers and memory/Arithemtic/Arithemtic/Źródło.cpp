#include <iostream>

using namespace std;

/*
	+ add
	- minus
	= equals
	/ division
	+= sum
	-= substarct
	/= 
	*_
	%
	%=
	precedence
*/
int main() {
	double value1 = (double)7 / 2;
	double value2 = 7 / 2.0;

	cout << value1 << endl;
	cout << value2 << endl;
	
	int value3 = 8;
	value3 += 1; // value3 = value3 + 1 or value3++
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; // value4 = value4 / 5
	cout << value4 << endl;


	// mod operator
	int value5 = 12 % 5; // remaind of division
	cout << value5 << endl;
	

	double quation = ((5 / 4)%2) + (2.8 * 6);
	cout << quation << endl;

	int numOfseconds = 3600*24*366+3661;
	int seconds = numOfseconds % 60;
	int minutes = (numOfseconds / 60) % 60;
	int hours = (numOfseconds / 3600) % 24;
	int day = (numOfseconds / 3600 / 24) % 365;
	int year = (numOfseconds / 3600 / 24) / 365;
	int every = numOfseconds / 100;
	for (size_t i = 0; i < numOfseconds; i++)
	{
		
		if (i%every == 0) cout << "." << flush;
	}
	cout << endl;
	cout <<"Years: " << year << "Day: " << day << "Time: " << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}