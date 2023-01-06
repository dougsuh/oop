// Author : DougnYoung Suh
// Date on April 6, 2020
#include <iostream>
#include <fstream>
#include <cmath> // sin( )
using namespace std;

class waveHeader {
public:
	waveHeader() {};
	int chunkID, chunkSize, Format, subChunkID, subChunk1size;
	short	audioFormat, numChannels;
	int sampleRate, byteRate;
	short blockAlign, bitsPerSample;
	int subChunk2ID, subChunk2size;
};

int main() {
	// Sprint 1
	ifstream xx("Beatles-LetItBe-wav_30s.wav", ios::binary | ios::in);
	//ifstream xx("..\\LetItBe-wav_30s.wav", ios::binary | ios::in);
	if (!xx) return 999;
	waveHeader myHeader;
	xx.read((char*)&myHeader, sizeof(waveHeader));
	cout << "   sampleRate = " << myHeader.sampleRate << endl;
	xx.close();
	// Sprint 2
	myHeader.sampleRate = 8000;
	myHeader.bitsPerSample =16;
	myHeader.byteRate = 2;
	ofstream mywave("EE312.wav", ios::binary | ios::out);
	mywave.write((char*)&myHeader, sizeof(waveHeader));
	short *data;
	data = new short[24000];
	float dt = 1. / 8000.;
	float f = 110.0,A = 10000.0;
	for (int n = 0; n < 24000; n++) {
		data[n] = (short)( A * sin(2.*3.141592*f*dt*n));
	}
	mywave.write((char*)data, sizeof(short)*24000);

	f = 440.0; A = 5000.0;
	for (int n = 0; n < 24000; n++) {
		data[n] = (short)(A * sin(2.*3.141592*f*dt*n));
	}
	mywave.write((char*)data, sizeof(short) * 24000);
	mywave.close();
	getchar();
	return 1;
}