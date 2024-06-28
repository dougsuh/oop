#include <iostream>
#include <fstream>
#include "note.h"
using namespace std;
void myMusicFile(short*, cNote, int, short);
int main() {
	short header[22];
	cNote myNote;
	myNote.setBeat(100);
	// 1. open a wave file
	ifstream xx("letitbe30s.wav", ios::in | ios::binary);
	if (!xx) return 666;
	// 2. read the header of 44bytes
	xx.read((char*)header, 22 * sizeof(short));
	xx.close();
	short monoStereo = header[11];
	int samplingRate = *((int*)(header + 12));
	cout << samplingRate << " " << monoStereo << endl;
	// write a wav file
	myMusicFile(header,myNote,samplingRate,monoStereo);
	return 123;
}