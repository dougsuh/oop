#include <iostream>
using namespace std;
class ff {
public:
	ff() { cout << " ( )\n"; };
	ff(int a, int b, float c, float d) :i(a), j(b), x(c), y(d) {
		cout << " (iiff)\n";
	}
	ff(int a, float b, int c, float d) :i(a), x(b), j(c), y(d) {
		cout << " (ifif)\n";
	}
	int i, j;
	float x, y;
	void pall() { cout << i << " " << j << " " << x << " " << y << "\n"; }
};
void main() {
	ff f1(1.1, 2.1, 3.1, 4.1),f2;
	f2 = ff(5.1, 6.1, 7.1, 8.1);
	f1.pall();
	f2.pall();
}

