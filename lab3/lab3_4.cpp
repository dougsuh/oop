#include <iostream>
#include <fstream>
using namespace std;
void main() {
	unsigned short man[5];
	float area[5];
	// read binary file
	ifstream yyy;
	yyy.open("eed.bin", ios::binary | ios::in);
	yyy.read((char *)&man, sizeof(man));
	yyy.read((char *)area, sizeof(float)*5);
	for (int i = 0; i < 5; i++)
		cout << man[i] << "  " << area[i] << endl;
	yyy.close();
	/*man[0] = 50230; area[0] = 220000.0;
	man[1] = 10030; area[1] = 100100.0;
	man[2] = 6005 ; area[2] = 90232.0;
	man[3] = 18070; area[3] = 31111.0;
	man[4] = 9004;  area[4] = 150105.0;
	// out file
	ofstream khu;
	khu.open("eed.bin", ios::binary | ios::out);
	khu.write((char *)man, sizeof(short) * 5);
	khu.write((char *)&area, sizeof(area));
	khu.close();*/
}

