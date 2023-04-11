#include "wk6bin.h"
void c2ff(float c, float* cc) {
	cc[0] = c;
	cc[1] = c * 9 / 5 + 32;
}
void doall(char* fn, float* cc, int n) {
	ofstream xx(fn, ios::binary | ios::out);
	float* c2f = new float[n * 2];
	for (int i = 0; i < 5; i++) {
		c2ff(cc[i], c2f + i * 2);
	}
	xx.write((char*)c2f, 10 * sizeof(float));
	delete[] c2f;
	xx.close();
}