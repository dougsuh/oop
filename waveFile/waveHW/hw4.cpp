// Sprint 1
#include <iostream>
#include "note.h"
using namespace std;
int main(){
	char pitch, semitone, octave;
	float duration, T;
	float amplitude;
	cNote myNote;
	myNote.setBeat(100);     // quater note = 60/100 sec 
	char c = 'y';
	while (c == 'y') {
		cout << " pitch semitone octave duration amplitude: ";
		cin >> pitch >> semitone >> octave >> duration >> amplitude;
		myNote.setFrequency(pitch, semitone, octave);
		myNote.setDuration(duration);
		myNote.A = amplitude;
		// check results : start
		cout << " A: " << myNote.A << endl;
		cout << " f0: " << myNote.f0 << endl;
		cout << " T: " << myNote.T << endl;
		// check results : end
		cout << " continue? (y/n):";
		cin >> c;
	}
}
