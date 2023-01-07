#include <iostream>
using namespace std;

void CFout(int n, float *C, float *F) {
	cout << "   C   " << "    F  " << endl;
	for (int i = 0; i<n; i++)
		cout << "   " << C[i] << "   " << F[i] << endl;
	getchar();
}
void C2F(int n, float *C, float *F) {
	for (int i = 0; i < n; i++) F[i] = C[i] * 9 / 5.0 + 32.;
	CFout(n, C, F);
}
void F2C(int n, float *ff, float *cc) {
	for (int i = 0; i < n; i++) cc[i] = (ff[i] - 32.) * 5 / 9.0;
	CFout(n, cc, ff);
}
