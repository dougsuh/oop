#include <iostream>
#include <fstream>
using namespace std;
void main() {
	int i3[] = { 14, 1025,-1025 };
	float f3[] = { 14., 1.e2, 1.4e-3, 0.0015, -1.0, -1025. };
	//float f3[] = { 14., 100.0, 0.0014, 0.0015, -1.0, -1025. };
	ofstream yyy;
	yyy.open("ab.bin", ios::binary | ios::out);
	yyy.write((char *)i3, 3 * sizeof(int));
	yyy.write((char *)f3, 6 * sizeof(float));
	yyy.close();
	//////////////////////////////////////////////
	unsigned short xx[18];
	ifstream yy2;
	yy2.open("ab.bin", ios::binary | ios::in);
	yy2.read((char *)xx, 36); // 36 bytes
	for (int i = 0; i < 18; i+=2)
		cout << "  " << i <<  "   " << hex << xx[i] << " " << hex << xx[i+1] << endl;
	yy2.close();
	getchar();
}

