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
int main() {
	int ii[6]; // static
	float *ff = new float[3]; //dynamic
	ifstream yy("mybin1.dat", ios::binary | ios::in);
	cout << "mybin1.dat\n";
	yy.read((char*)ii, 6 * sizeof(int));
	for (int i = 0; i < 6; i++) cout << ii[i] << endl;
	yy.read((char*)ff, 3 * sizeof(float));
	for (int i = 0; i < 3; i++) cout << ff[i] << endl;
	yy.close();

	yy.open("mybin2.dat", ios::binary | ios::in);
	cout << "mybin2.dat\n";
	yy.read((char*)ii, 6 * sizeof(int));
	for (int i = 0; i < 6; i++) cout << ii[i] << endl;
	yy.read((char*)ff, 3 * sizeof(float));
	for (int i = 0; i < 3; i++) cout << ff[i] << endl;
	yy.close();

	yy.open("mybin3.dat", ios::binary | ios::in);
	cout << "mybin3.dat\n";
	yy.read((char*)ii, 6 * sizeof(int));
	for (int i = 0; i < 6; i++) cout << ii[i] << endl;
	yy.read((char*)ff, 3 * sizeof(float));
	for (int i = 0; i < 3; i++) cout << ff[i] << endl;
	yy.close();

	yy.open("mybin4.dat", ios::binary | ios::in);
	cout << "mybin4.dat\n";
	yy.read((char*)ii, 6 * sizeof(int));
	for (int i = 0; i < 6; i++) cout << ii[i] << endl;
	yy.read((char*)ff, 3 * sizeof(float));
	for (int i = 0; i < 3; i++) cout << ff[i] << endl;
	yy.close();

	delete ff;
	return 55;
}