#include <iostream> 
using namespace std;
void main() {
	unsigned int ii;
	ii = 0x1234abcd;
	cout << hex << "0x" << ii << endl;
	unsigned char* c;
	c = (unsigned char*)&ii;
	for (int i = 0; i < 4; i++) {
		int jj = (int)c[i];
		cout << jj << " ";
	}
	cout << endl;
}
