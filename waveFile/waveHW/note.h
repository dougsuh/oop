#pragma once
#include <cmath>
using namespace std;
class cNote {
public:
	cNote() { TT = 100;  };
	cNote(char p, char s, char o, float d) {
		setFrequency(p, s, o);
		setDuration(d);
	}
	float f0, TT, T, A;
	void setFrequency(char, char, char);
	void setBeat(int);
	void setDuration(float);
	// hw4_1
	void setPara(char p, char s, char o, float d) {
		setFrequency(p, s, o);
		setDuration(d);
	}
	// n : number of samples
	// ms : mono(1) or stereo(2)
	// dt : 1./samplingRate
	void calculateSamples(int n, short ms, short* dat, float dt) {
		float pi2f0dt = 2 * 3.141592 * f0 * dt;
		for (int i = 0; i < n; i += ms) {
			if (ms == 1) dat[i] = A * sin(pi2f0dt * i);
			else if (ms == 2) {
				dat[i] = dat[i + 1] = A * sin(pi2f0dt * i / 2);
			}
		}
	}
};