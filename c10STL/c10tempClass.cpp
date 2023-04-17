#include <iostream>
using namespace std;

template <typename T>
class point {
public:
	T x, y;
	point() {}; // basic constructor
	point(T xx, T yy) { x = xx; y = yy; }
	//point(T xx, T yy) :x(xx), y(yy) {	} // Ok, too.
	void print() { cout << x << " " << y << "\n"; }
};
void main() {
	point <int> p1(10, 20);
	point <float> p3;
	p3 = point<float>(10.2, 20.3);
	p1.print();
	p3.print();
}
