#include "health.h"
#include <cmath>  // for rand( )

CHealth::CHealth(int a) {
	age = a;
}
void CHealth::faren2cel() {
	cel = (faren - 32) * 5.0 / 9.0;
}
void CHealth::measureCel() {
	cel = rand() % 10 + 30.0;
	cel2faren();
}
