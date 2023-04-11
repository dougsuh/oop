#include <iostream>
#include <fstream>
using namespace std;
ifstream xx;  // global file pointer
void mul5() {
	int i, ii;
	for (int i = 0; i < 5; i++) {
		xx >> i >> ii;
		cout << i << " " << ii << endl;
	}
}
void mul5(int i) {
	int ii;
	xx >> i >> ii;
	cout << i << " " << ii << endl;
}
// local file pointer
void mul5(ifstream& yy, int i) {  // error if ifstream without &
	int ii;
	xx >> i >> ii;
	cout << i << " " << ii << endl;
}
int main() {
	int ii;
	// 1
	xx.open("../data/a.txt");
	if (!xx) return 667;
	for (int i = 0; i < 5; i++) {
		xx >> i >> ii;
		cout << i << " " << ii << endl;
	}
	xx.close();
	// 2
	xx.open("../data/b.txt");
	if (!xx) return 668;
	mul5();
	xx.close();
	// 3
	xx.open("../data/c.txt");
	if (!xx) return 669;
	for (int i = 0; i < 5; i++) {
		mul5(i);
	}
	xx.close();
	// 3
	xx.open("../data/d.txt");
	if (!xx) return 666;
	for (int i = 0; i < 5; i++) {
		mul5(xx,i);
	}
	xx.close();
	return 1;   //  no error, even if no return
}