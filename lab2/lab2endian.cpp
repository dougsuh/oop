#include <iostream> 
using namespace std;
void main() {
	int ii;
	ii = 0x12345678;
	cout << hex << "0x" <<  ii << endl;
	char* c;
	c = (char*)&ii;
	for (int i = 0; i < 4; i++) cout << (int)c[i] << " ";
	cout << endl;
}
