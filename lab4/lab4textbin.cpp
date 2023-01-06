#include <fstream>
#include <iostream>
using namespace std;
void main() {
	char textfile[16];
	ifstream yyy;
	yyy.open("ab.txt", ios::binary | ios::in);
	yyy.read(textfile, 16);
	for (int i = 0; i < 16; i++)
		cout << textfile[i] << " " << (int)textfile[i] << endl;
}