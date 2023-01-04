#include <iostream>
#include <fstream>
using namespace std;
void main() {
	char header[44];
	unsigned int *sampleRate;
	// read binary file
	ifstream yyy;
	yyy.open("BTS.wav", ios::binary | ios::in);
	yyy.read(header, sizeof(header));
	yyy.close();
	sampleRate = (unsigned int *)(header + 24);
	cout << "  sampling rate " << *sampleRate << endl;
	getchar();
}

