// Author : Doug Suh
// Date   : May 29, 2020
//
// Binary file “mybin.dat”에 다음 내용을 순서대로 저장하라.
// int  1234
// int  1000부터 5000까지 숫자에 5를 곱한 수 5개
// float - 0.5에서 0.5씩 증가하면서 자승을 한 수 3개
#include <iostream>
#include <fstream>
using namespace std;
int mul5(int x) { return 5 * x; }
float square(float x) { return x * x; }
int main() {
	// 방법 1
	int aa=1234,*xx;
	float *yy;
	// Binary file “mybin.dat”에 다음 내용을 순서대로 저장하라.
	ofstream ff("mybin.dat", ios::binary | ios::out);
	// int  1234
	ff.write((char*)&aa, sizeof(int));
	// int  1000부터 5000까지 숫자에 5를 곱한 수 5개
	xx = new int[5];
	for (int i = 0; i < 5; i++) xx[i] = mul5(1000 * (i + 1));
	ff.write((char*)xx, sizeof(int)*5);
	delete xx;
	// float - 0.5에서 0.5씩 증가하면서 자승을 한 수 3개
	yy = new float[3];
	for (int i = 0; i < 3; i++) yy[i] = square(-0.5 + 0.5 * (float)i);
	ff.write((char*)yy, sizeof(float) * 3);
	delete yy;
	ff.close();
	return 1;
}