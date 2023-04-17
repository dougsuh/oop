#include <iostream>
#include <complex>
using namespace std;
int main() {
complex<float>a(2, -1), b(0, 4), c(10, 1), d(3, 2), e(-1, 1), f(2, 3);
complex<float> x, y;
x = (c * e - b * f) / (a * e - b * d);
y = (a * f - c * d) / (a * e - b * d);
cout << " x = " << x << endl;
cout << " y = " << y << endl;
cout << " c = " << a * x + b * y << endl;
cout << " f = " << d * x + e * y << endl;
return 10;
}
