#include <iostream>      // for cout, cin
using namespace std;   
void main() {
	int a = 12, b = 15, c; // a = 1100 b = 1111
	cout << "a= " << a << " b= " << b << endl;
	cout << "a*b " << a * b << endl;
	cout << "a/b " << a / b << endl;
	c = a & b;
	cout << "a AND b 0x" << hex << c << endl;
	c = a | b;
	cout << "a OR b 0x" << hex << c << endl;
	c = a ^ b;
	cout << "a XOR b 0x" << hex << c << endl;
	c = a << 2;
	cout << "a*4  0x" << hex << c << endl;
	c = b >> 2;
	cout << "b/4 0x" << hex << c << endl;
}