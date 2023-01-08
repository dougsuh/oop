#include "lab5_2.h"
void main() {
	float cel[] = { 20.0,30.,100. }, faren[3];
	C2F(3, cel, faren);
	faren[0] = -40.0;
	faren[1] = 70.0;
	faren[2] = 95.0;
	F2C(3, faren, cel);
}
