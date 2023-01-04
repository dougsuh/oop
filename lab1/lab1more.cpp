#include <iostream>   
using namespace std;
void main() {
	int i, j, k;
	i = 10, j = 20;
	cout << "i++ " << i++ << " ++j " << ++j << endl;
	cout << "i " << i << " j " << j << endl;
	i += 5;   j /= 5;
	cout << " i += 5 " << j << "\n" << " j /= 5 " << j << endl;
	//
	i = 0xf; j = 0x3;  // i = 1111  j = 0011
	cout << " i = 0x" << hex << i;
	cout << " j = 0x" << j << endl;
	i &= j;  // 0011
	cout << "i &= j 0x" << i << endl;
	i = 0xf;   i ^= j;  // 1100
	cout << " i ^= j  0x" << i << endl;
}
