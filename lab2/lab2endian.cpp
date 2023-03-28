#include <iostream> 
using namespace std;
void main() {
	int ii;
	ii = 0x12345678;
	cout << hex << "0x" <<  ii << endl;
	char* c;
	c = (char*)&ii;
	for (int i = 0; i < 4; i++) {
		int jj = (int)c[i]; 
		if (jj < 0) jj += 0x100;  // 2's complement
		cout << jj << " ";
	}
	cout << endl;
}
