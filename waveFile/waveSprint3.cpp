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
	int N = fs[0]; // number of samples for 1 second
	short* data;
	data = new short[N]; // allocate memory for 10 seconds mono
	const float pi = 3.141592;
	float dt = 1. / fs[0], a = 10000.0, f;
	int i = 0;	
	ofstream yy("my3.wav", ios::binary | ios::out);
	if (!yy) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	yy.write(header, 44 * sizeof(char)); // 헤더를 쓴다. 
	for(int i=0; i<8; i++){	// 1초마다 한 음씩 올라간다.
		if (i == 0) f = 261; // C (도)
		else if (i == 1) f = 294; // D (레)
		else if (i == 2) f = 330; // E
		else if (i == 3) f = 349; // F
		else if (i == 4) f = 392; // G
		else if (i == 5) f = 440; // A
		else if (i == 6) f = 494; // B
		else  f = 523; // C
		float t = 0;
	    for (int j = 0; j < fs[0] ; j++, t+=dt) {  
		data[j] = (short)(a * sin(2.0 * pi * f * t));   // a 진폭, f 주파수, N 샘플수(1초는 fs[0] samples, 44100 또는 8000)
	    }		
	    yy.write((char*)data, fs[0] * sizeof(short));    // 1초 분량 쓴다.
	}
	yy.close();
	return 1;
}
