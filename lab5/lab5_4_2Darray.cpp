#include <iostream>
using namespace std;
int sum(int ar2[][4],int rows) {
	int ss = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < 4; j++)
			ss += ar2[i][j];
	return ss;
}
void main() {
	int data[5][4] = { {1,2,3,4},
	{ 9,8,7,6 },{ 2,3,6,8 },
	{ -9,-8,-7,-6 },{-2,-3,-6,-8 } };

	cout << sum(data, 5) << "\n";
	cout << sum(data + 1, 4) << "\n";
	cout << sum(data + 2, 2) << "\n";
}
