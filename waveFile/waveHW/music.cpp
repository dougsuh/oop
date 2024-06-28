#include <iostream>
#include <fstream>
#include "note.h"
using namespace std;
void myMusicFile(short *header, cNote myNote, 
	int samplingRate, short monoStereo) {
	char pitch, semitone, octave;
	float duration, T;
	float amplitude;
	int nSamples;
	short* dat = new short[10 * samplingRate]; // enough memory for a note
	float dt = 1. / samplingRate;
	ofstream xx("myWave.wav", ios::out | ios::binary);
	if (!xx) { 	cout << " cannot open myWave.wav\n";	}
	xx.write((char*)header, 44);
	cout << samplingRate << " " << monoStereo << " " << myNote.TT << endl;
	char c = 'y';
	while (c == 'y') {
		cout << " pitch semitone octave duration amplitude: ";
		cin >> pitch >> semitone >> octave >> duration >> amplitude;
		myNote.setFrequency(pitch, semitone, octave);
		myNote.setDuration(duration);
		myNote.A = amplitude;
		nSamples = (int)(myNote.T / dt)* monoStereo;
		// check results : start
		cout << "nSamples: " << nSamples << endl;
		cout << "monoStereo: " << monoStereo << endl;
		cout << " f0: " << myNote.f0 << endl;
		cout << " T: " << myNote.T << endl;
		// check results : end
		myNote.calculateSamples(nSamples, monoStereo, dat, dt);
		xx.write((char*)dat, nSamples * sizeof(short));
		cout << " continue? (y/n):";
		cin >> c;
	}
	delete [] dat;
	xx.close();
}
