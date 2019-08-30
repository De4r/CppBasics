#include <iostream>
using namespace std;


int main_two() {
	// 0XFF123456
	unsigned char alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char green = 0x34;
	unsigned char blue = 0x56;

	unsigned int color = alpha;

	cout << "Color: " << color << endl;
	return 0;
}