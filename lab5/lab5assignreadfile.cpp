// Author : Doug Suh
// Date   : June 4, 2020
//
// Binary file “mybin.dat”에 다음 내용을 읽는다.
// int  1234
// int  1000부터 5000까지 숫자에 5를 곱한 수 5개
// float - 0.5에서 0.5씩 증가하면서 자승을 한 수 3개
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream xx("mybin.dat", ios::binary | ios::in);
	if (!xx) {
		cout << " File not found : " << "mybin.dat\n";
		return 666;
	}
	int ii[6];
	float ff[3];
	xx.read((char*)ii, sizeof(int) * 6);
	xx.read((char*)ff, sizeof(float) * 3);
	xx.close();
	for (int i = 0; i < 6; i++) cout << i << "  " << ii[i] << endl;
	for (int i = 0; i < 3; i++) cout << i << "  " << ff[i] << endl;

	return 1;
}
