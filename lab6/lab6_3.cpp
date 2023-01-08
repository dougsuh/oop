#include <iostream> // cout
#include <cmath>  //  sin( ), exp( )
using namespace std;
void main() {
	float f1, f2;
	for (float x = 0.0; x < 10.0; x += 0.1){
		f1 = sin(x);
		f2 = (exp(x) - 1.0) / 2.0;
		cout << x << "  " << f1 << "  " << f2 << endl;
		if (f1 < f2) break;
	}
}
