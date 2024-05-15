#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	cout << " class size " << sizeof(CHealth) << endl;

	CHealth* students = new CHealth[5];

	for (int i = 0; i < 3; i++) {
		students[i].measure(20 + rand() % 4);
		(students + i)->run5min();
	}
	students[4].GetBMI();
	cout << students[1].beat5min[30] << endl;
	cout << students[5].weight << endl;

	delete[] students;  // delete objects
	return 123;
}
