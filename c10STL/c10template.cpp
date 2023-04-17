#include <iostream>
#include <string>
using namespace std; 

template <typename T>
bool less_than(T a, T b) {
	return a < b;
}
void main() {
	cout << less_than(2, 3) << "\n";
	cout << less_than(2.7, 3.2) << "\n";
	cout << less_than(3.2, 2.7) << "\n\n";

	string word1 = "ABC", word2 = "XY";
	cout << less_than(word1, word2) << "\n";
	cout << less_than(word2, word1) << "\n";
}