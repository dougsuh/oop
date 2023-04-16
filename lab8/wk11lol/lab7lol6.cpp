#include <fstream>
#include <iostream>
using namespace std;
#include "lab7lol5.h"
LoL::LoL(int n1, int n2, float aa, float bb, float xxo, float dxx, int mm,char* fname) {
	N1 = n1;
	N2 = n2;
	a = aa;
	b = bb;
	xo = xxo;
	dx = dxx;
	m = mm;
	fn = new int[N2 - N1 + 1];
	fx = new float[m];
	ofstream myout(fname, ios::binary | ios::out);

	headerout(myout);
	calculate_fn(myout);
	calculate_fx(myout);
	myout.close();
}
LoL::~LoL() {
	cout << "destructor\n";
	//myout.close();
	delete fn;
	delete fx;
}
void LoL::calculate_fn(ofstream &myout) {
	for (int n = N1; n <= N2; n++) fn[n - N1] = n * (n + 1) / 2;
	myout.write((char*)fn, sizeof(int)*(N2 - N1 + 1));
}
void LoL::calculate_fx(ofstream &myout) {
	float x = xo;
	for (int n = 0; n < m; n++) {
		fx[n] = a*x + b;
		x += dx;
	}
	myout.write((char*)fx, sizeof(float)*m);
}
void LoL::headerout(ofstream &myout) {
	myout.write((char*)&N1, sizeof(int));
	myout.write((char*)&N2, sizeof(int));
	myout.write((char*)&a, sizeof(int));
	myout.write((char*)&b, sizeof(float));
	myout.write((char*)&xo, sizeof(float));
	myout.write((char*)&dx, sizeof(float));
	myout.write((char*)&m, sizeof(int));
}