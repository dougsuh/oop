#include <iostream>
#include <fstream>
using namespace std; 
void c2f(float cc,ofstream &yy) {
	float f = cc * 9 / 5 + 32; 
	yy << cc << "C = " << f << "F\n";
}
int main() {
	ofstream xx;
	float c[] = { -40,0,15,36.5,100 }; // local variable
	xx.open("a2.txt");
	for (int i = 0; i < 5; i++) {
		c2f(c[i],xx);
	}
	xx.close();
	return 123;
}