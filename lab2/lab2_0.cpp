// 1 int = 2 shorts
#include <iostream>
using namespace std;
void main() {
	unsigned short a = 0x23a, b = 0x6b0, d = 0xf001;
	unsigned int c;
	c = a << 16 | b;
	cout << hex << " 0x" << a << " 0x" << b << endl;
	cout << " 0x" << c << endl << endl;

	c = a << 16 | d;  // + is OK instead of | in this case
	cout << " 0x" << a << " 0x" << d << endl;
	cout << " 0x" << c << dec << "  " << d << endl;
}
