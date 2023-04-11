#include <iostream>
using namespace std;
int fn(int ii) {
	cout << " ii = " << ii << endl;
	ii = 10 * ii;
	return ii;
}
int fn(int* ii) { // poly-morphysm
	cout << " ii = " << ii[0] << endl;
	ii[0] = 10 * ii[0];
	return ii[0];
}
int fn1(int& ii) {
	cout << " ii = " << ii << endl;
	ii = 20 * ii;
	return ii;
}
void main() {
	int i = 5, a;
	a = fn(i);
	cout << " i = " << i << endl;
	cout << " a = " << a << endl << endl;
	a = fn(&i);
	cout << " i = " << i << endl;
	cout << " a = " << a << endl << endl;
	a = fn1(i);
	cout << " i = " << i << endl;
	cout << " a = " << a << endl << endl;
	//  return 1;   //  no error, even if no return
}