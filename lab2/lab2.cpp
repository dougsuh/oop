#include <iostream>
using namespace std;
void main() {
	int a = 2, b=6, c=5;
	int d = (a<<6) | (b<<3) | c;
	cout << oct << a << " " << b << " " << c << endl;
	cout << d << endl;
	a = b = c = 0;
	a = (d & 0300) >> 6;
	b = (d & 070) >> 3;
	c = d & 7;
	cout << oct << a << " " << b << " " << c << endl;
}
