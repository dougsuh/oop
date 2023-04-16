// Author : Doug Young Suh
// Date  :  June 11, 2020
//
// Lab 7: class test 1    class 3
//
// Note : object로 만든 것은 destructor가 작동하지 않는다. 
//
#include <fstream>
#include <iostream>
using namespace std;
class LoL {
public:
	LoL() {};
	LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm);
	LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm,char*);
	~LoL() { 
		cout << " LoL died\n";  
		delete fn;
		delete fx;
	};
private:
	int N1, N2;
	float a, b, xo, dx;
	int m;
	int *fn;
	float *fx;
	void calculate_fn() {
		for (int i = N1; i <= N2; i++)
			fn[i - N1] = i * (i + 1) / 2;
	}
	void calculate_fx() {
		float x = xo;
		for (int i = 0; i < m; i++, x += dx) fx[i] = a * x + b;
	}

	void init(int, int, float, float, float, float, int);
	void out(char *filename);
};

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
};
LoL::LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm,char *fin) {
	init(n1,n2,aa, bb, x0, dxx, mm);
	out(fin);
};
LoL::LoL(int n1, int n2, float aa, float bb, float x0, float dxx, int mm) {
	init(n1, n2, aa, bb, x0, dxx, mm);
};
void LoL::out(char *filename) {
	ofstream xx(filename, ios::binary | ios::out);
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
int main() {
	LoL *akali = new LoL(5,10,2.,3.,-5.,0.1,10, (char*)"alkali3.dat");	
	LoL *amumu = new LoL(7, 100, -3.5, 4., 100., 10., 15, (char*)"amumu3.dat");
	LoL *annie = new LoL(12, 17, 0.01, 0.2, 1.5, 0.08, 20, (char*)"annie3.dat");
	LoL *ashe = new LoL(10, 20, 4.2, -5.3, 2.1, 0.2, 5, (char*)"ashe3.dat");

	delete akali;
	delete amumu;
	delete annie;
	ashe->~LoL();

	return 2;
}