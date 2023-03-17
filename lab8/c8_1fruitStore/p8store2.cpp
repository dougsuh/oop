// DougFOplay : Jan. 14, 2022
#include <iostream>
#include "store2.h"
using namespace std;
int main() {
	store A, B, C;
	A = store(4, 3, 3, 800, 1000, 800);
	B = store(3, 3, 4, 1000, 1200, 1000);
	C = A + B;
	cout << A.total() << " " << B.total() << endl;
	cout << C.total() << endl;
	cout << C.apple.many << endl;
	cout << C.apple.price << endl;
	cout << C.pear.many << endl;
	cout << C.pear.price << endl;
	cout << C.peach.many << endl;
	cout << C.peach.price << endl;
	return 123;
}

/* polymorphism
store A;
cout << A.total() << " won\n";
cout << A.total(1000) << " dollar\n";*/

/* array, pointer
store A[5],*B;
cout << "  " << sizeof(A) << endl;
for (int i = 0; i < 5; i++) {
	A[i] = store(i + 2, 3, 4, 1000 + 100 * i, 500, 600);
}
cout << A[2].apple.many << "  " << A[2].apple.price << endl;
cout << (A + 4)->apple.many << "  " << (A + 4)->apple.price << endl;
B = A + 2;
cout << B[0].apple.many << "  " << B[0].apple.price << endl;
cout << (B + 2)->apple.many << "  " << (B + 2)->apple.price << endl; */