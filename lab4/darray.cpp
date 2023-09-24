#include <iostream>
using namespace std;
void main() {
	int** sum;
	sum = new int* [3];
	sum[0] = new int[4];
	sum[1] = new int[6];
	sum[2] = new int[3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (i == 0 && j < 4) sum[i][j] = i * 10 + j;
			else if (i == 1 && j < 6) sum[i][j] = i * 10 + j;
			else if (j < 3) sum[i][j] = i * 10 + j;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (i == 0 && j < 4) cout << sum[i][j] << " ";
			else if (i == 1 && j < 6) cout << sum[i][j] << " ";
			else if (j < 3) cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) delete[] sum[i];
	delete[] sum;
}