#include <iostream>
using namespace std;
int aa(int i) { i *= 2; return i; }
int ab(int& i) { i *= 2; return i; }
int ac(int* i) { *i *= 2; return *i; }
int main() {
	// auto &
	int x[] = { 10,20,30 };
	for (auto n : x) { n *= 5; cout << n << " "; } cout << "\n";
	for (int i = 0; i < 3; i++) { cout << x[i] << " "; } cout << "\n";
	for (auto& n : x) { n *= 5; }
	for (int i = 0; i < 3; i++) { cout << x[i] << " "; } cout << "\n\n";
	// function &
	int j = 10;
	cout << aa(j);
	cout << " " << j << endl;
	cout << ab(j);
	cout << " " << j << endl;
	cout << ac(&j);
	cout << " " << j << endl;
	return 1;
}