#include <iostream>
using namespace std;
float cel2faren(float);

void main() {
	float cel, faren;
	cout << "  cel =  ?";
	cin >> cel;

	faren = cel2faren(cel);
	cout << "   faren = " << faren << endl;
	getchar();
	getchar();
	getchar();
}
float cel2faren(float cc) { return cc*9.0 / 5.0 + 32; }