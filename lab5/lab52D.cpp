#include <iostream>
using namespace std;
void main() {
	int data[2][4] = { {1,2,3,4}, { 9,8,7,6 } };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) cout << data[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	data[1][2] = -3;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) cout << data[i][j] << " ";
		cout << endl;
	}
}
