// Author : Doug Suh
// Date   : June 11, 2020
//
// Binary file “mybin.dat”에 다음 내용을 순서대로 저장하라.
// int  1234
// int  1000부터 5000까지 숫자에 5를 곱한 수 5개
// float - 0.5에서 0.5씩 증가하면서 자승을 한 수 3개
#include <iostream>
#include <fstream>
using namespace std;
void mul5(int n,int *x) { 
	for (int i = 0; i < n; i++) x[i] = 5*(1000 * (i + 1));
}
void square(int n, float *x) { 
	for (int i = 0; i < 3; i++) {
		float y = -0.5 + 0.5*(float)i;
		x[i] = y*y;
	}
}
int main() {
	// 방법 2
	// Binary file “mybin1.dat”에 다음 내용을 순서대로 저장하라.
	ofstream xx("mybin2.dat", ios::binary | ios::out);
	// int  1234
	int ii = 1234;
	xx.write((char *)&ii, sizeof(int));
	// int  1000부터 5000까지 숫자에 5를 곱한 수 5개
	int *jj = new int[5];
	mul5(5, jj);
	xx.write((char *)jj, sizeof(int)*5);
	delete jj;
	// float - 0.5에서 0.5씩 증가하면서 자승을 한 수 3개
	float *ff = new float[3];
	square(3, ff);
	xx.write((char *)ff, sizeof(float) * 3);
	delete ff;
	xx.close();
	return 2;
}