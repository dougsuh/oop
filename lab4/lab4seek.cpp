#include <fstream>
#include <iostream>
using namespace std;
int main() {
	// seek, size
	int ii[5];
	float ff[5], gg[5];
	for (int i = 0; i < 5; i++) {
		ii[i] = i + 3; ff[i] = i * 5;
	}
	ofstream xx("aa.bin", ios::binary | ios::out);
	xx.write((char*)ii, 5 * sizeof(int));
	xx.write((char*)ff, 5 * sizeof(float));
	xx.close();
	ifstream yy("aa.bin", ios::binary | ios::in);
	if (!yy) return 321;
	// get length of file
	yy.seekg(0, yy.end); // go to the file end
	int length = yy.tellg(); // get position
	yy.seekg(0, yy.beg); // go back to the beginning
	cout << " file size " << length << endl;
	// move to specific position and read
	yy.seekg(20); // skip 20 bytes
	yy.read((char*)gg, 5 * sizeof(float));
	for (int i = 0; i < 5; i++) cout << " " << gg[i];
	cout << endl;
	return 1;
}