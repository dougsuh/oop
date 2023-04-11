#include <iostream>
#include <fstream>
using namespace std;
void doall(char*, float*, int);
float c2f(float c) { return c * 9 / 5 + 32; }
int main() {
	float cc[] = { -40,0,15,36.5,100 };
	doall((char*)"c2f.bin", cc, 5);
	return 1;
}
void doall(char* fn, float* c, int n) {
	float *c2f5 = new float [n*2];
	for (int i = 0; i < n; i++) {
		c2f5[i * 2] = c[i];
		c2f5[i * 2+1] = c2f(c[i]);
	}
	ofstream xx(fn, ios::binary | ios::out);
	if (!xx) exit(666); // 
	xx.write((char*)c2f5, n * 2 * sizeof(float));
	xx.close();
}