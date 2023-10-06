#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream xx("Beatles-LetItBe-wav_30s.wav", ios::binary | ios::in);
	if (!xx) return 999;  // if the file is not found
	char header[44];
	// Sprint 1
	xx.read(header, 44);
	int* sampleRate = (int*)(header + 24);
	cout << "   sampleRate = " << *sampleRate << endl;
	short* n;   n = (short*)(header + 22);  cout << *n << endl; // numChannels
	int* fs;   fs = (int*)(header + 24);  cout << *fs << endl; // sampleRate
	int* b;   b = (int*)(header + 28);  cout << *b << endl;  //  byteRate
	// Sprint 2
	int N = fs[0] * 10; // samples for 10 seconds
	short* data;
	data = new short[N]; // allocate memory for 10 seconds mono
	*n = 1;   // stereo --> mono
	*b = n[0] * fs[0] * sizeof(short); // byte rate change

	xx.read((char*)data, N * sizeof(short)); // 헤더를 읽은 후 xx.close();하기 전에 10초 분량 데이터를 읽는다. 
	
	ofstream yy("my.wav", ios::binary | ios::out);
	if(!yy) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	yy.write(header, 44 * sizeof(char)); // 헤더를 쓴다. 
	yy.write((char *)data, N * sizeof(short));    // 헤더에 이어서 10초 분량 쓴다.
	yy.close();
	return 1;
}