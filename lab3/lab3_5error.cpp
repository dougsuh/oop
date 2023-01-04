#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int data[16];
	for (int i = 0; i < 20; i++) {
		data[i] = i * 100;
		cout << "   " << data[i] << endl;
	}
	return 123;
}

