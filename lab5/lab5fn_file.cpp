//  Author : Doug Young Suh
//  Date   : May 6, 2020
//  fstream as an argument
#include <iostream>
#include <fstream>
using namespace std;
void fileArg(int,short*,ofstream&);
int main() {
	ofstream xx("mytext.wav", ios::out | ios::binary);
	short data[100];
	fileArg(100, data, xx);
	fileArg(50, data, xx);
	xx.close();
}
// write N short data onto a binary file
void fileArg(int N,short *bin,ofstream& yy) {
	for (int i = 0; i < N; i++) {
		bin[i] = i * 10;
	}
	yy.write((char*)bin, N * sizeof(short));
}
/* text file
#include <iostream>
#include <fstream>
using namespace std;
void fileArg(ofstream&);
int main() {
	ofstream xx("mytext.txt");
	fileArg(xx);
	xx.close();
}

void fileArg(ofstream& yy) {
	yy << 10 << endl;
	yy << 20 << endl;
}
*/