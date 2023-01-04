#include <iostream>
using namespace std;
enum campus {SEOUL, INTER, KWANG}; // 0, 1, 2
enum college {WOE=1, CHE=2, JUN=3, GONG=4, KUK=5 };
enum department {SW, ME, EE, CE}; // 0, 1, 2, 3
void main() {
	short c;
	campus mycampus = INTER;
	college mycol = JUN;
	department mydep = EE;
	c = mycampus << 6;
	c |= mycol << 3;
	c |= mydep;
	cout << oct << c;
	getchar();
}

