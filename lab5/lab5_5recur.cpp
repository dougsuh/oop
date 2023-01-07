#include <iostream>
using namespace std;
int factorial(int n) {
	if (n < 2) return 1;
	else return n*factorial(n-1);
}
void main() {
	cout << "\n";
	cout << "   4! = " << factorial(4) << "\n";
	cout << "   6! = " << factorial(6) << "\n";
	cout << "   10! = " << factorial(10) << "\n";

	getchar();
}
