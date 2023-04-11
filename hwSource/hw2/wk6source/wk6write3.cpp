#include <iostream>
#include <fstream>
using namespace std;
void c2ff(float c, float *cc) {
	cc[0] = c;
	cc[1] = c * 9 / 5 + 32;
}
int main() {
	float c[] = { -40,0,15,36.5,100 }, c2f[10];
	ofstream xx("aa4.bin", ios::binary | ios::out);
	for (int i = 0; i < 5; i++) {
		c2ff(c[i], c2f+i*2);
	}
	xx.write((char*)c2f, 10*sizeof(float));
	xx.close();
	return 123;
