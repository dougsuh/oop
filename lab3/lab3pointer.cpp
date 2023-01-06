#include <iostream>
using namespace std;
void main() {
	int sum[10], N, * xxx;

	for (int i = 0; i < 10; i++) {
		N = i + 1;
		sum[i] = N * (N + 1) / 2;
	}

	xxx = sum + 6;
	xxx[-1] = 1;

	for (int i = 0; i < 10; i++)
		cout << sum[i] << endl;
}
