#include <iostream>
#include <fstream>
using namespace std;
int main() {
	float c[] = { -40,0,15,36.5,100 }, f[5];
	ofstream xx("aa.bin",ios::binary | ios::out);
	for (int i = 0; i < 5; i++) {
		f[i] = c[i] * 9 / 5 + 32;
		xx.write((char*)(c+i), sizeof(float));
		xx.write((char*)&f[i], sizeof(float));
	}
	xx.close();
	return 123;
}