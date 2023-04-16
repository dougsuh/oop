#include <iostream>
#include "health.h"
using namespace std;
int main() {
	CHealth VIP(65), *mario;  // need for CHealth() to be public 
	mario = new CHealth(70);

	cout << "  " << VIP.age << "  " << mario->age << endl;

	VIP.measureCel();
	mario->measureCel();

	cout << "  " << VIP.cel << "C  " << mario->faren << "F \n";
	cout << "  size " << sizeof(CHealth) << "\n";
	getchar();
	return 1;
}
