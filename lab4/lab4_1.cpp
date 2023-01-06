#include <iostream>
#include <fstream>
using namespace std;
void main() {
	char textfile[16];
	ifstream yyy;
	yyy.open("ab.txt", ios::binary | ios::in);
	yyy.read(textfile, 16);
	for (int i = 0; i < 16; i++)
		cout << "   " << textfile[i] << "   " << (int)textfile[i] << endl;
	getchar();
	/*
	ofstream xxx("ab.txt");
	xxx << " a = " << 3 << endl;
	xxx << " b = " << 5 << endl;
	xxx.close();*/
}

