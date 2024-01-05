#include <iostream>
#include <fstream>
using namespace std;
void main() {
	unsigned short man[5];
	float area[] = { 220000.0,100100.0,90232.0,31111.0,181105.0 };
	// write the binary file
	man[0] = 50230; 
	man[1] = 10030; 
	man[2] = 6005 ; 
	man[3] = 18070; 
	man[4] = 16704; 
	// out file
	ofstream khu;
	khu.open("eed.bin", ios::binary | ios::out);
	khu.write((char *)man, sizeof(short) * 5);
	khu.write((char *)&area, sizeof(area));
	khu.close();
	// read binary file
	ifstream yyy;
	yyy.open("eed.bin", ios::binary | ios::in);
	yyy.read((char*)&man, sizeof(man));
	yyy.read((char*)area, sizeof(float) * 5);
	for (int i = 0; i < 5; i++)
		cout << man[i] << "  " << area[i] << endl;
	yyy.close();
}
