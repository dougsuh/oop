#include <iostream>
using namespace std;
struct student {
	short age;
	int height;
	float weight;
};
void main() {
	student doug, young;
	doug.age = 15;
	doug.height = 160;
	doug.weight = 48.5;
	young.age = doug.age + 50;
	young.height = doug.height + 14;
	young.weight = doug.weight + 30;
	cout << "  " << sizeof(student) << endl;
	cout << "  " << young.weight << endl;
}