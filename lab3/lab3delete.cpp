#include <iostream>
using namespace std;
void main() {
	int *data;
	data = new int[5];
	for (int i = 0; i < 5; i++) data[i] = i + 5;
	for (int i = 0; i < 5; i++) {
		cout << " 0x" << data+i << " " << data[i] << endl;
	}
	delete data;

	data = new int[5];
	for (int i = 0; i < 5; i++) data[i] = (i + 5)*100;
	for (int i = 0; i < 5; i++) {
		cout << " 0x" << data + i << " " << data[i] << endl;
	}
}