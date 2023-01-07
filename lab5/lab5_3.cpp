#include <iostream>
using namespace std;
void PrintMe(int ii) {
	cout << "  I am " << ii << "  years old.\n";
}
void PrintMe(float xx) {
	cout << "  I am " << xx << "  cm tall.\n";
}

void PrintMe(int ii, float xx) {
	PrintMe(ii);
	PrintMe(xx);
}
void main() {
	float height = 180.0;
	int age = 22;
	PrintMe(age);
	PrintMe(height);
	PrintMe(age, height);
	getchar();
}
