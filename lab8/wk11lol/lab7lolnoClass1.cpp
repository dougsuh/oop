// Author : Doug Young Suh
// Date  :  June 11, 2020
//
// Lab 7: class test 1    no class
//
// Note : object로 만든 것은 destructor가 작동하지 않는다. 
//
#include <fstream>
using namespace std;
int calculate_fn(int n) { return n * (n + 1) / 2; }
float calculate_fx(float x, float a, float b) { return a*x+b; }
int main() {
	// akali = LoL(5,10,2.,3.,-5.,0.1,10);
	int N1, N2;
	float a, b, xo, dx;
	int m;
	int *fn;
	float *fx;
	N1 = 5;
	N2 = 10;
	a = 2;
	b = 3;
	xo = -5;
	dx = 0.1;
	m = 10;
	fn = new int[N2 - N1 + 1];
	for (int i = 0; i < N2 - N1 + 1; i++) fn[i] = calculate_fn(N1 + i);
	fx = new float[m];
	for (int i = 0; i < m; i++) fx[i] = calculate_fx(xo+dx*i,a,b);
	ofstream xx("akali_noclass1.dat", ios::binary | ios::out);
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

	return 1;
}