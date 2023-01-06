#include <iostream>
#include <fstream>
using namespace std;
void main() {
	unsigned char xx[1400];
	ifstream yy2;
	yy2.open("grim.bmp", ios::binary | ios::in);
	yy2.read((char*)xx, 1400); // 36 bytes
	yy2.close();
	for (int i = 0; i < 1400; i++) {
		cout << hex << (short)xx[i];
		if ((i % 16) == 0) cout << endl << "   ";
	}
	cout << endl;
	getchar();
}

