#include <iostream> // cout cin
#include <fstream>  // ifstream ofstream
using namespace std;
void main() {
	ofstream sing("song.txt");
	for (int i = 1; i < 10; i++) {
		sing << "9 X " << i << " = " << i * 9 << endl;
	}
	sing.close();
}
