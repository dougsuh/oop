#include <iostream>
#include <string>
using namespace std;

template <typename T, typename V>
bool less_than(T a, V b) {
	return a < b;
}
void main() {
	cout << less_than(2, 3.2) << "\n"; // int float
	cout << less_than(2.7, 3) << "\n"; // float int
	cout << less_than(3, 2.7) << "\n"; // int float
}

