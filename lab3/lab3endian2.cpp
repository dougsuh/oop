#include <iostream> 
using namespace std;
void main() {
	unsigned int ii;
	ii = 'a' * (1 << 24) + 'b' * (1 << 16) + 'c' * (1 << 8) + 'd';
	cout << hex << "0x" << ii << endl;
	unsigned char* c;
	c = (unsigned char*)&ii;
	for (int i = 0; i < 4; i++) {
		int jj = (int)c[i];
		cout << jj << " " << c[i] << " ";
	}
	cout << endl;
}
