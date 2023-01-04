#include <iostream>
using namespace std;
const int INTER = 1, SEOUL = 2, KWANG = 3;
const int WOE = 1, CHE = 2, JUN = 3, GONG = 4, KUK = 5;
const int SW = 1, EE = 2,  CE = 3, ME = 5;

void main() {
	// 국제켐퍼스 전자정보대 전자과이면...
	short c =  0;
	c = INTER<<6;
	c |= JUN<<3;
	c |= EE;

	cout << "  o"<< oct << c << endl;
}
