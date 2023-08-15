// global variable
#include <iostream>
using namespace std;
float x=3;
float f(float x) {
	x *= 10;
	cout << x << "  D\n";
	return x;
}
int main() {
	float x=2,y;
	cout << x << "  A\n";
	y = f(x);
	cout << x << "  B\n";
	cout << y << "  C\n";
	return 123;
}
