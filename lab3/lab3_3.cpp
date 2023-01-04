#include <iostream>
using namespace std;
void main() {
#include <iostream>
		int i;
		short *sa;

		i = 0x50007;
		cout << "   i = 0x" << hex << i << endl;

		sa = (short *)&i;
		*sa = 0xff;
		sa[1] = 0x503;

		cout << "   i = 0x" << hex << i << endl;
		cout << "   sa[0] = 0x" << hex << sa[0] << endl;
		cout << "   sa[1] = 0x" << hex << sa[1] << endl;

	/*
	int sum[10],N;
	short root[10];
	for (int i = 0; i < 10; i++) {
		cout << "   0x"<< hex <<sum+i <<
			"   0x" << hex << root+i << endl;
	}*/
 	getchar();
}

