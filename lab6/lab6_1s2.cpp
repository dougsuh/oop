#include <iostream>
using namespace std;
void main() {
	int c;

	while (true) {   // infinite while
		cout << "   Give me 0, 1, 2, 3, ....\n";
		cin >> c;
		switch (c) {
		case  0:
			cout << " I do not know " << c << ".\n";
			break;
		case  1:
			cout << " one " << ".\n";;
			break;
		case  2:
			cout << " two " << ".\n";
			break;
		case  3:
			cout << " three .\n";
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << "   It's big.\n";
			break;
		default:
			break;
		}
		if (c > 9) break;
	}

	/*do {
		cout << "   Give me 0, 1, 2, 3, ....\n";
		cin >> c;
		if (c == 0) { cout << " I do not know " << c << ".\n"; }
		else if (c == 1) { cout << " one " << ".\n"; }
		else if (c == 2) { cout << " two " << ".\n"; }
		else if (c == 3) { cout << " three .\n"; }
		else { cout << "   It's big.\n"; }
	} while (c < 10);*/

	/*cout << "   Give me 0, 1, 2, 3, ....\n";
	cin >> c;
	while (c < 10) {
		if (c == 0) { cout << " I do not know " << c << ".\n"; }
		else if (c == 1) { cout << " one " << ".\n"; }
		else if (c == 2) { cout << " two " << ".\n"; }
		else if (c == 3) { cout << " three .\n"; }
		else { cout << "   It's big.\n"; }
		cout << "   Give me 0, 1, 2, 3, ....\n";
		cin >> c;
	}*/

	getchar();
}
