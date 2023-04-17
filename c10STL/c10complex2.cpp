#include <iostream>
#include <fstream>
#include <complex>
using namespace std;
const double pi = 3.141592;
void main() {
	ofstream out("xx.txt");
	for (int i = 0; i < 16; i++) {
		double theta = 2 * pi * i / 16.0;
		complex<double>z(cos(theta), sin(theta));
		out << "\t" << z.real() << "\t" << z.imag() << endl;
	}
	out.close();
}