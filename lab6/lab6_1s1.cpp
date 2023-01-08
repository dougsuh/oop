#include <iostream>
using namespace std;
void main() {
	int c = 2;

	cout << c << "\n";

	if (c == 0) { cout << " I do not know " << c << ".\n"; }
	else if (c == 1) { cout << " one " << ".\n"; }
	else if (c == 2) { cout << " two " << ".\n"; }
	else if (c == 3) { cout << " three .\n"; }
	else { cout << "   It's big.\n"; }

	getchar();
}