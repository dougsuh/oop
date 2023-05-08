#include "cf.h"
cfk::cfk(float ff) {
	f = ff;
	f2c();
};
void cfk::c2f() {  // inline
	f = c * 9 / 5 + 32;
}
void cfk::f2c() {
	c = (f - 32) * 5 / 9;
}
void cfk::cfout() {
	cout << c << " C = " << f << "F" << endl;
}
