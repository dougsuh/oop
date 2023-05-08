#include <iostream>
#include "cf.h"
using namespace std;
void main() {
	cfk cf1, cf2,C;  // 2 objects
	cout << sizeof(cfk) << endl;
	cout << sizeof(cf1) << endl;
	cf1.cfout();
	cf2.cfout();
	cf2 = cfk(32);
	cf2.cfout();
	// oprator overloading
	C = cf1 + cf2;
	C.cfout();
}