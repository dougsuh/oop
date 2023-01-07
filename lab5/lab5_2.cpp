#include <iostream>
using namespace std;
void C2F(int, float *, float *);
void F2C(int, float *, float *);
void main() {
	float cel[] = { 20.0,30.,100. }, faren[3];
	C2F(3, cel, faren);
	faren[0] = -40.0;
	faren[1] = 70.0;
	faren[2] = 95.0;
	F2C(3, faren, cel);
}
void CFout(int n, float *C, float *F) {
	cout << "   C   " << "    F  " << endl;
	for(int i=0;i<n;i++)
		cout << "   " << C[i] <<"   " <<  F[i] << endl;
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
