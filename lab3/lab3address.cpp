#include <iostream>
using namespace std;
void main() {
	int sum[10], N;
	short root[10];
	cout << hex << "sum 0x" << sum << endl;
	cout << "root 0x" << root << endl;
	for (int i = 0; i < 10; i++) {
		cout << " 0x" << sum + i <<
			" 0x" << root + i << endl;
	}
}