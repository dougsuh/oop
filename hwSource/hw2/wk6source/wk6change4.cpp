#include <iostream>
#include <fstream>
using namespace std; 
void c2f(float* cc,float *ff,int n) {
	for(int i=0;i<n;i++){ ff[i] = cc[i] * 9 / 5 + 32; }
}
int main() {
	float c[] = { -40,0,15,36.5,100 }, f[5]; // local variable
	c2f(c, f, 5);
	for (int i = 0; i < 5; i++)cout << c[i] << "C = " << f[i] << "F\n";
	return 123;
}