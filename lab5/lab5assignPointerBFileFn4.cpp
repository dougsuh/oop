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
void All(char *ss) {
	// 방법 4
	int *jj = new int[9];
	// int  1234
	jj[0] = 1234;
	// int  1000부터 5000까지 숫자에 5를 곱한 수 5개
	mul5(5, jj + 1);
	// float - 0.5에서 0.5씩 증가하면서 자승을 한 수 3개
	float *ff = (float *)(jj + 6);
	square(3, ff);
	// Binary file “mybin1.dat”에 다음 내용을 순서대로 저장하라.
	ofstream xx(ss, ios::binary | ios::out);
	xx.write((char *)jj, sizeof(int) * 9);
	xx.close();
	delete jj;
}
int main() {
	All((char*)"mybin4-1.dat");
	return 41;
}