#include <iostream>
using namespace std;
int main() {
	int a[4] = { 100,200,300,400 };
	float b[3] = { 11.2, 0.5, 0.3 };
	for (auto c : a) { cout << c << endl; }
	for (auto d : b) { cout << d << endl; }
}