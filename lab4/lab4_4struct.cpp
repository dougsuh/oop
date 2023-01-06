#include <iostream>
#include <fstream>
using namespace std;
struct myS {
	int i, j, k;
};
void main() {
	myS s1,ss[2];
	cout << sizeof(myS) << endl;
	s1.i = 5;
	s1.j = 6;
	s1.k = 7;
	ss[0].i = -5;
	ss[0].j = -6;
	ss[0].k = -7;
	ss[1].i = 14;
	ss[1].j = 15;
	ss[1].k = 16;

	ofstream yy2;
	yy2.open("strout.dat", ios::binary | ios::out);
	yy2.write((char*)&s1, sizeof(myS)); // 12 bytes
	yy2.write((char*)ss, sizeof(myS)*2); // 24 bytes
	yy2.close();
	getchar();
}

