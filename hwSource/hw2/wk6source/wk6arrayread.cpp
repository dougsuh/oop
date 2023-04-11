#include <iostream>
#include <fstream>
using namespace std;
int main() {// test
	ifstream yy("aa4.bin", ios::binary | ios::in);
	float dd[10];
	yy.read((char*)dd, 10 * sizeof(float));
	if (!yy) return 13;
	for (int i = 0; i < 10; i++) cout << dd[i] << " ";
	cout << endl;
	yy.close();
	return 1;
}