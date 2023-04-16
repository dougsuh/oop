#include <iostream>
#include "health2.h"
using namespace std;
int main() {
	/*CHealth VIP(65), *trump;  // need for CHealth() to be public 
	trump = new CHealth(70);

	cout << "  " << VIP.age << "  " << trump->age << endl;

	VIP.measureCel();
	trump->measureCel();

	cout << "  " << VIP.cel << "C  " << trump->faren << "F \n";
	cout << "  size " << sizeof(CHealth) << "\n"; */
	cout << " class size " << sizeof(CHealth) << endl;
	
	CHealth *students = new CHealth[5];

	for (int i = 0; i < 3; i++) {
		students[i].measure(20 + rand()%4);
		(students + i)->run5min();
	}
	students[4].GetBMI();   
	cout << students[1].beat5min[30] << endl;
	cout << students[5].weight << end;;
	
	delete [] students;  // delete objects
	getchar();
	return 123;
}

