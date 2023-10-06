#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream xx("Beatles-LetItBe-wav_30s.wav", ios::binary | ios::in);
	if (!xx) return 999;  // if the file is not found
	char header[44];

	xx.read(header, 44);
	int* sampleRate = (int*)(header + 24);
	cout << "   sampleRate = " << *sampleRate << endl;
	short* n;   n = (short*)(header + 22);  cout << *n << endl; // numChannels
	int* fs;   fs = (int*)(header + 24);  cout << *fs << endl; // sampleRate
	int* b;   b = (int*)(header + 28);  cout << *b << endl;  //  byteRate

	return 1;
}