#include <iostream>
#include <string>
using namespace std;
int main() {
	string A = " I am ";
	string B = " a boy ";
	string C = " a girl ";
	string D;
	D = A + B;
	cout << D << endl;
	D += C;
	cout << D << endl;
	return 123;
}