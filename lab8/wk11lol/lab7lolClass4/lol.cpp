#include "lol.h"
#include <fstream>
void LoL::init(int n1, int n2, float aa, float bb, float x0, float dxx, int mm) {
	N1 = n1;
	N2 = n2;
	a = aa;
	b = bb;
	xo = x0;
	dx = dxx;
	m = mm;
	fn = new int[N2 - N1 + 1];
	fx = new float[m];
	calculate_fn();
	calculate_fx();
}
LoL::LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm) {
	init(n1, n2, aa, bb, x0, dxx, mm);
};
LoL::LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm, char* fin) {
	init(n1, n2, aa, bb, x0, dxx, mm);
	out(fin);
};
void LoL::out(char *filename) {
	std::ofstream xx(filename, std::ios::binary | std::ios::out);
	xx.write((char*)&N1, sizeof(int));
	xx.write((char*)&N2, sizeof(int));
	xx.write((char*)&a, sizeof(float));
	xx.write((char*)&b, sizeof(float));
	xx.write((char*)&xo, sizeof(float));
	xx.write((char*)&dx, sizeof(float));
	xx.write((char*)&m, sizeof(int));
	xx.write((char*)fn, sizeof(int)*(N2 - N1 + 1));
	xx.write((char*)fx, sizeof(float)*m);
	xx.close();
};