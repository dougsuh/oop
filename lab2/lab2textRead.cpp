#include <iostream> // cout cin
#include <fstream>  // ifstream ofstream
using namespace std;
int main() {
	ifstream suwon("pusan.txt");
	if (!suwon) {
		cout << " cant open pusan.txt\n";
		return 666;
	}
	char alpha[10];
	int age;
	float height, weight;
	suwon >> age >> alpha;
	cout << age << " " << alpha;
	suwon >> alpha;
	cout << " " << alpha << "\n";
	suwon >> height >> alpha;
	cout << height << alpha << endl;
	suwon >> weight >> alpha;
	cout << weight << alpha << endl;
	suwon.close();
	return 1;
}

