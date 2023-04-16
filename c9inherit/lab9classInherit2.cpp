// Author: Doug Young Suh
// Date :  June 10, 2020
//
// inherit constructors?
//
#include <iostream>
using namespace std;
class mother {
public:
	mother() { N = 5; cout << N << " blank mother \n";}
	mother(int nn) {
		N = nn;
		cout << N << " int mother\n";
	}
	int N;
};
class child : public mother {
public:
	child() {  N = 6; cout << N << " blank child \n";	};
	child(int ii) {
		N = ii;
		cout << N << " int child\n";
	}
};

int main() {
	child *ch1, *ch2, ch3;
	cout << " 1. \n";
	ch1 = new child();
	cout << " 2. \n";
	ch2 = new child(10);
	cout << " 3. \n";
	ch3 = child();

	return 1;
}