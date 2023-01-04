#include <fstream>
using namespace std;
void main() {
		ofstream moon("jaein.txt");
		for (int i = 1; i < 10; i++) {
			moon << "9 X " << i << " = " << i * 9 << endl;
		}
		moon.close();

	/*int i, j, k;
	i = 10, j = 20;
	cout << " i++ " << i++ << " ++j " << ++j << endl;
	cout << " i " << i << " j " << j << endl;
	i += 5;      j /= 5;
	cout << " i +=5  " << i << endl;
	cout << " j /= 5 " << j << endl;
	//
	i = 0xf;  j = 0x3;  //  i = 1111   j = 0011
	cout << "  i = 0x" << hex << i;
	cout << "  j = 0x" << hex << j << endl;
	i &= j;     // 0011
	cout << "i &= j 0x" << hex << i << endl; 
	i = 0xf;    i ^= j;    //   1100
	cout << "i ^= j 0x" << hex << i << endl; */

	getchar();
}

