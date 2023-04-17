#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class queue : public vector<int> {
public:
	queue(): Ni(10), No(20), NC(100) {
		this->reserve(NC);
		totalIN = totalOUT = 0;
	};
	queue(int ni, int no, int x) : Ni(ni), No(no), NC(x) {
		this->reserve(NC);
		totalIN = totalOUT = 0;
	};
	int Ni, No, NC;
	int totalIN, totalOUT;
	void newin() {
		int n = rand() % Ni;
		totalIN += n;
		cout << "   +" << n << "  ";
		for (int i = 0; i < n; i++) {
			this->push_back(rand() % 100);
		}
	}
	void newout() {

	}
};
int main() {
	queue mq(10, 20, 100);
	while (mq.size() < mq.NC) {
		mq.newin();
		cout << mq.size() << endl;
		Sleep(1000);
	}
	return 123;
}
