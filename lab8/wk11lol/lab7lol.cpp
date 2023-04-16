#include <fstream>
using namespace std;
#include "lab7lol.h"
LoL::LoL(int n1, int n2, float aa, float bb, float xxo, float dxx, int mm) {
	N1 = n1;
	N2 = n2;
	a = aa;
	b = bb;
	xo = xxo;
	dx = dxx;
	m = mm;
	fn = new int[N2 - N1 + 1];
	fx = new float[m];
	calculate_fn();
	calculate_fx();
}
LoL::~LoL() {
	delete fn;
	delete fx;
}
void LoL::calculate_fn() {
	for (int n = N1; n <= N2; n++) fn[n - N1] = n * (n + 1) / 2;
}
void LoL::calculate_fx() {
	float x = xo;
	for (int n = 0; n < m; n++) {
		fx[n] = a*x + b;
		x += dx;
	}
}
void LoL::out(char* fname) {
	ofstream xx(fname, ios::binary | ios::out);
	xx.write((char*)&N1, sizeof(int));
	xx.write((char*)&N2, sizeof(int));
	xx.write((char*)&a, sizeof(int));
	xx.write((char*)&b, sizeof(float));
	xx.write((char*)&xo, sizeof(float));
	xx.write((char*)&dx, sizeof(float));
	xx.write((char*)&m, sizeof(int));
	xx.write((char*)fn, sizeof(int)*(N2 - N1 + 1));
	xx.write((char*)fx, sizeof(float)*m);
	xx.close();
}