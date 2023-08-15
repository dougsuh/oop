// global variable
#include <iostream>
using namespace std;
float x=3;
float f() {
	x *= 10;
	return x;
}
void main() {
	float y;
	cout << x << "  A\n";
	y = f();
	cout << x << "  B\n";
	cout << y << "  C\n";
}
