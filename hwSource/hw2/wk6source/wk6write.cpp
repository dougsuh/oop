#include <iostream>
#include <fstream>
using namespace std;
ofstream xx;  // global file pointer
void mul5() {
	for (int i = 0; i < 5; i++) {
		xx << i << " " << i * 5 << endl;
	}
}
void mul5(int i) {
	xx << i << " " << i * 50 << endl;
}
// local file pointer
void mul5(ofstream& yy, int i) {  // error if ofstream without &
	yy << i << " " << i * 100 << endl;
}
int main() {
	// 1
	xx.open("../data/a.txt");
	if (!xx) return 666;
	for (int i = 0; i < 5; i++) {
		xx << i << " " << i *10 << endl;
	}
	xx.close();
	// 2
	xx.open("../data/b.txt");
	if (!xx) return 666;
	mul5();
	xx.close();
	// 3
	xx.open("../data/c.txt");
	if (!xx) return 666;
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