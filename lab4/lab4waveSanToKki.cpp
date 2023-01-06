#include <iostream>
#include <fstream>
using namespace std;
int main() {
	char header[44];
	// read binary file
	ifstream yyy;
	yyy.open("Beatles-LetItBe-wav_30s.wav", ios::binary | ios::in);
	if (!yyy) return 666;
	yyy.read(header, sizeof(header));
	yyy.close();
	//  write san to ggi
	unsigned short* nc, * bs;
	unsigned int* sampleRate;
	nc = (unsigned short*)(header + 22);
	sampleRate = (unsigned int*)(header + 24);
	bs = (unsigned short*)(header + 34);
	nc[0] = 1;
	sampleRate[0] = 8000;
	bs[0] = 16;
	ofstream xx("mywave.wav", ios::binary | ios::out);
	if (!xx) return 777;
	xx.write(header, 44);
	const float pi = 3.141592;
	short akbo[8000], A = 10000;
	float f, t, dt = 1. / 8000.;
	// san
	f = 392.0; // G sol
	for (int i = 0; i < 8000; i++) {
		akbo[i] = (short)(A * sin(2 * pi * f * i * dt));
	}
	xx.write((char*)akbo, 8000 * sizeof(short));
	// to
	f = 329.6; // E mi
	for (int i = 0; i < 4000; i++) {
		akbo[i] = (short)(A * sin(2 * pi * f * i * dt));
	}
	xx.write((char*)akbo, 4000 * sizeof(short));
	// ggi
	f = 329.6; // E mi
	for (int i = 0; i < 4000; i++) {
		akbo[i] = (short)(A * sin(2 * pi * f * i * dt));
	}
	xx.write((char*)akbo, 4000 * sizeof(short));
	// to
	f = 392.0; // G sol
	for (int i = 0; i < 4000; i++) {
		akbo[i] = (short)(A * sin(2 * pi * f * i * dt));
	}
	xx.write((char*)akbo, 4000 * sizeof(short));
	// ggi
	f = 329.6; // E mi
	for (int i = 0; i < 4000; i++) {
		akbo[i] = (short)(A * sin(2 * pi * f * i * dt));
	}
	xx.write((char*)akbo, 4000 * sizeof(short));
	// ya
	f = 261.6; // C  do
	for (int i = 0; i < 8000; i++) {
		akbo[i] = (short)(A * sin(2 * pi * f * i * dt));
	}
	xx.write((char*)akbo, 8000 * sizeof(short));
	xx.close();
	return 1;
}
