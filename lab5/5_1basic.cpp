#include <iostream>
using namespace std;
int fn(int ii) {
	cout << " ii = " << ii << endl;
	ii = 10 * ii;
	return ii;
}
void main() {
	int i = 5, a;
	a = fn(i);
	cout << " i = " << i << endl;
	cout << " a = " << a << endl;
}