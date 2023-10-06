#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream xx("my.wav", ios::binary | ios::in);
	if (!xx) return 999;  // if the file is not found
	char header[44];
	// Sprint 1
	xx.read(header, 44);
	int* sampleRate = (int*)(header + 24);
	cout << "   sampleRate = " << *sampleRate << endl;
	short* n;   n = (short*)(header + 22);  cout << *n << endl; // numChannels
	int* fs;   fs = (int*)(header + 24);  cout << *fs << endl; // sampleRate
	int* b;   b = (int*)(header + 28);  cout << *b << endl;  //  byteRate
	// Sprint 3
	int N = fs[0] * 10; // samples for 10 seconds
	short* data;
	data = new short[N]; // allocate memory for 10 seconds mono
	const float pi = 3.141592;
	float dt = 1. / fs[0], a = 10000.0, f = 440.0;
	int i = 0;
	for (float t = 0.0; t<10.0; t+=dt, i++) {  
		if (t < 1.0) f = 261; // C (도)
		else if (t < 2.0) f = 294; // D
		else if (t < 3.0) f = 330; // E
		else if (t < 4.0) f = 349; // F
		else if (t < 5.0) f = 392; // G
		else if (t < 6.0) f = 440; // A
		else if (t < 7.0) f = 494; // B
		else  f = 523; // C
		data[i] = (short)(a * sin(2.0 * pi * f * t));   // a 진폭, f 주파수, N 샘플수(1초는 fs[0] samples, 44100 또는 8000)
	}
	ofstream yy("my3.wav", ios::binary | ios::out);
	if (!yy) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	yy.write(header, 44 * sizeof(char)); // 헤더를 쓴다. 
	yy.write((char*)data, N * sizeof(short));    // 헤더에 이어서 10초 분량 쓴다.
	yy.close();
	return 1;
}