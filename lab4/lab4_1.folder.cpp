#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream xx("../Debug/a.txt");
	if (!xx) {
		cout << " no a.txt\n";
		return 6;
	}
	xx << "test a\n";
	xx.close();
	xx.open("Debug/b.txt");
	if (!xx) {
		cout << " no b.txt\n";
		return 7;
	}
	xx << "test b\n";
	xx.close();
	xx.open("C:/Users/suh/source/repos/folderTest/c/d.txt");
	if (!xx) {
		cout << " no d.txt\n";
		return 8;
	}
	xx << "test d\n";
	xx.close();
	return 1;
}

