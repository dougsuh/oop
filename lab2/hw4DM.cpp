#include <iostream>
#include <fstream>
using namespace std;
// 1Mbps ASK and FSK with 4 symbols (2 bits per symbol)
// symbol rate = 0.5 M symbols/sec 
// send 8 bits of 00110110
const float PI = 3.141592;
int main() {
	// ASK
	float A[4] = { 5000,10000,15000,20000 }; // 00 01 11 10 respectively
	float f0 = 12.5e6, dt = 4e-9, T = 0.4e-6;
	ofstream xxx("ask.txt");
	if (!xxx) { cout << "no file\n"; return 666; }
	for (float t = 0; t < T; t += dt) {  // to send 00
		xxx << t << " " << A[0] * cos(2 * PI * f0 * t) << endl;
	}
	for (float t = T; t < 2*T; t += dt) {  // to send 11
		xxx << t << " " << A[2] * cos(2 * PI * f0 * t) << endl;
	}
	for (float t = 2*T; t < 3*T; t += dt) {  // to send 01
		xxx << t << " " << A[1] * cos(2 * PI * f0 * t) << endl;
	}
	for (float t = 3*T; t < 4*T; t += dt) {  // to send 10
		xxx << t << " " << A[3] * cos(2 * PI * f0 * t) << endl;
	}
	xxx.close();
	// FSK
	float AA=10000, f[4] = {4e6,8e6,12e6,16e6 }; // 00 01 11 10 respectively
	//float dt = 4e-9, T = 0.4e-6;
	xxx.open("fsk.txt");
	if (!xxx) { cout << "no file\n"; return 777; }
	for (float t = 0; t < T; t += dt) {  // to send 00
		xxx << t << " " << AA * cos(2 * PI * f[0] * t) << endl;
	}
	for (float t = T; t < 2 * T; t += dt) {  // to send 11
		xxx << t << " " << AA * cos(2 * PI * f[2] * t) << endl;
	}
	for (float t = 2 * T; t < 3 * T; t += dt) {  // to send 01
		xxx << t << " " << AA * cos(2 * PI * f[1] * t) << endl;
	}
	for (float t = 3 * T; t < 4 * T; t += dt) {  // to send 10
		xxx << t << " " << AA * cos(2 * PI * f[3] * t) << endl;
	}
	xxx.close();
	return 123;
}