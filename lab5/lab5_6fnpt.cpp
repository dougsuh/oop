#include <iostream>
using namespace std;
float SK(int n) {
	float x = 1.2*n*n + 2*n;
	cout << "  SK " << x << endl;
	return  x;
}
float KT(int n) {
	float x = 1.4*n*n - 10*n;
	cout << "  KT " << x << endl;
	return  x;
}
float margin(int n, float (*fp)(int)) {
	float xx = (*fp)(n) * 1.1;
	return xx;
}
void main() {
	int nn = 10;
	cout << "  my price " << margin(nn, SK) << endl;
	cout << "  my price " << margin(nn, KT) << endl;
	getchar();
}
