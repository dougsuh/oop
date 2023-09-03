#include <iostream>
using namespace std;
struct student {
	short age;
	int height;
	float weight;
	student() {};
	student(short a, int h, float w): age(a),height(h), weight(w){};
	student(int h, float w) {
		age = 20; height = h; weight = w;
	}
};
void main() {
	student doug, young;
	doug = student(15,160,48.5);
	young = student(170, 55);
	young.height = doug.height + 30;
	cout << "  " << young.age << endl;
	cout << "  " << young.height << endl;
}
