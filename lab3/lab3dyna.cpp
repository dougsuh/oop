#include <iostream>
using namespace std;
void main() {
	int data[10], * d1, * d2;
	// static memory
	cout << data << " " << &data << endl;
	// dynamic memory
	d1 = new int[5];
	cout << d1 << " " << &d1 << endl;
	for (int i = 0; i < 5; i++) d1[i] = (i + 1) * 10;
	d2 = d1 + 2;
	cout << d2[-2] << " " << d1[0] << endl;
	cout << d2[2] << " " << d1[4] << endl;
}