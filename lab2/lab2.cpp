#include <iostream>
using namespace std;
void main() {
	// 2. size
	cout <<  " int size " << sizeof(int) << endl;
	cout << " short size " << sizeof(short) << endl;
	cout << " unsigned short size " << sizeof(unsigned short) << endl;
	cout << " long size " << sizeof(long) << endl;
	// 1. hex
	for (short c = 0; c<16; c++)
		cout << dec << c << "  0x" << hex << c
		<< "  o" << oct << c  << endl;
	getchar();
}
