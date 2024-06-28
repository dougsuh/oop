#include "note.h"
void cNote::setFrequency(char p, char s, char o) {
	if (p == 'c' && s == '_') f0 = 261.63;
	else if (p == 'c' && s == '#') f0 = 277.18;
	else if (p == 'd' && s == 'b') f0 = 277.18;
	else if (p == 'd' && s == '_') f0 = 293.66;
	else if (p == 'd' && s == '#') f0 = 311.13;
	else if (p == 'e' && s == 'b') f0 = 311.13; // #D = bE
	else if (p == 'e' && s == '_') f0 = 329.63;
	else if (p == 'f' && s == '_') f0 = 349.23;
	/*	#F bG  369.99
		G 392.00
		#G bA 415.30
		A 440.00
		#A bB 466.16
		B 493.88   */
	else f0 = 261.63; // error
	if (o == '3') f0 /= 2;
	else if (o == '5') f0 *= 2;
}
void cNote::setBeat(int n) {
	TT = 60.0 / (float)n;
}
void cNote::setDuration(float d) {
	if (d == 1) T = TT * 4;
	else if (d == 1.5) T = TT * 6;
	else if (d == 2) T = TT * 2;
	else if (d == 2.5) T = TT * 3;
	else if (d == 4) T = TT;
	else if (d == 4.5) T = TT * 1.5;
	else if (d == 8) T = TT / 2;
	else if (d == 8.5) T = TT * (0.5 + 0.25);
	// else if (d == 16) T = ????;         
	// else if (d == 16.5) T = ????;
	else T = TT;
}