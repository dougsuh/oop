#include <iostream>
#include <fstream>
using namespace std;
// alias test
// fmax = 400Hz sampling at 500Hz and 5000Hz
// T = 0.05sec
int main() {
	float t = 0, dt, T=0.05, ss, fmax = 400;
	dt = 1. / 5000;
	int i = 0;
	ofstream xx;
	xx.open("abc.txt");
	if (!xx) return 666;
	for (t = 0; t < T; t+=dt,i++) {
		ss = sin(2 * 3.141592 * fmax * t);
		if((i%10) != 0) xx << t << " " << ss << endl;
		else xx << t << " " << ss << " " << ss << endl;
	}
	xx.close();
	return 123;
}