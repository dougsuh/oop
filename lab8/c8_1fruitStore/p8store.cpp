// DougFOplay : Jan. 13, 2022
#include <iostream>
#include "store.h"
using namespace std;
int main() {
	store A,B;
	B = store(3,4,5,100,200,300);
	cout << A.total() << endl;
	cout << B.total() << endl;
	cout << " A peach " << A.peach.price << endl;
	return 123;
}
