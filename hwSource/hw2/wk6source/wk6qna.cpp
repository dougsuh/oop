#include <iostream>
using namespace std;
int main() {
	char *header;
	int i;
	header = (char*)&i;
	cout << hex << &i << endl;
	cout << hex << header << endl;
	cout << header+1 << endl;
	return 123;
}
