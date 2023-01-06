#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int* a;
	a = new int[10];
	cout << sizeof(a) << endl;
	char filename[20];
	strcpy_s(filename, "pa.txt");
	ofstream xx(filename);
	if (!xx) {
		cout << " no " << filename << "\n";
		return 6;
	}
	xx << "test pa\n";
	xx.close();
	for (int i = 1; i < 15; i++) {
		filename[1]++; // a, b, c, d,…
		xx.open(filename);
		if (!xx) {
			cout << " no " << filename << "\n";
			return 60 + i;
		}
		xx << i << "  " << filename << " \n";
		xx.close();
	}
	return 1;
}
