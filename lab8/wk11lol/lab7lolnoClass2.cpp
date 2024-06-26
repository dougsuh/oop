// Author : Doug Young Suh
// Date  :  June 11, 2020
//
// Lab 7: class test 1    no class
//
// Note : object로 만든 것은 destructor가 작동하지 않는다. 
//
#include <fstream>
using namespace std;
void calculate_fn(int n1,int n2, int *fn) { 
	for (int i = n1; i <= n2; i++)
		fn[i - n1] = i * (i + 1) / 2;
}
void calculate_fx(float xo, float dx, int m, float a, float b,float *fx) {
	float x = xo;
	for (int i = 0; i < m; i++, x+=dx) fx[i] = a*x + b;
}
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
	calculate_fn(N1,N2,fn);
	fx = new float[m];
	calculate_fx(xo,dx,m,a,b,fx);
	ofstream xx("akali_noclass2.dat", ios::binary | ios::out);
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