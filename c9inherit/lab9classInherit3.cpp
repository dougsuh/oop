// Author: Doug Young Suh
// Date :  June 10, 2020
//
// virtual and member function of child?
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
	virtual void GoHome() { cout << " mother goes home\n"; };
};
class child : public mother {
public:
	child() {  N = 6; cout << N << " blank child \n";	};
	child(int ii) {
		N = ii;
		cout << N << " int child\n";
	}
	void GoHome() { cout << " child goes home\n"; };
	void childGoSchool() { cout << " child goes school\n"; };
};

int main() {
	mother * children[3];
	child cch;
	for (int i = 0; i < 2; i++) children[i] = new child;
	children[2] = &cch;
	for (int i = 0; i < 3; i++) children[i]->GoHome();
	//children[2]->childGoSchool();    // error
	cch.childGoSchool();

return 1;
}