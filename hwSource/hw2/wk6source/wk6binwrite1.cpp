#include <iostream>
#include <fstream>
using namespace std;
int main() {
	float c, f;
	ofstream xx("aa.bin",ios::binary | ios::out);
	c = -40;
	f = c * 9 / 5 + 32;
	xx.write((char*)&c, sizeof(float));
	xx.write((char*)&f, sizeof(float));

	c = 0;
	f = c * 9 / 5 + 32;
	xx.write((char*)&c, sizeof(float));
	xx.write((char*)&f, sizeof(float));

	c = 15;
	f = c * 9 / 5 + 32;
	xx.write((char*)&c, sizeof(float));
	xx.write((char*)&f, sizeof(float));

	c = 36.5;
	f = c * 9 / 5 + 32;
	xx.write((char*)&c, sizeof(float));
	xx.write((char*)&f, sizeof(float));

	c = 100;
	f = c * 9 / 5 + 32;
	xx.write((char*)&c, sizeof(float));
	xx.write((char*)&f, sizeof(float));
	xx.close();
	return 123;
}