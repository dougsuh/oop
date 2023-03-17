#include <iostream>
#include "fruit.h"
using namespace std;
int main() {
	fruit apple, pear, peach;
	pear = fruit(300, 5);
	peach = fruit(1000, 5);
	cout << apple.show() << endl;
	cout << pear.show() << endl;
	cout << peach.show() << endl;
	cout << " peach " << peach.price << endl;
	return 123;
}
