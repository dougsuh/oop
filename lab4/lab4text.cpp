#include <fstream>
using namespace std;
void main() {
	ofstream xxx("ab.txt");
	xxx << " a = " << 3 << endl;
	xxx << " b = " << 5 << endl;
	xxx.close();
}