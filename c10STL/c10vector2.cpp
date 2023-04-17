#include <iostream>
#include <vector>   // vector, push, begin, end
using namespace std;  // vector
void main() {
	vector <int> v1, v2, v3;
	vector <int>::iterator Iter;
	for (int i = 0; i < 5; i++) {
		v1.push_back(10 * (i + 1));
		if(i<3) v2.push_back(i + 1);
		else v2.push_back(3);
	}
	// v3 = v1 + v2;  // no + operator
	cout << " v1[2] = " << v1[2] << endl;
	cout << " The size of v1 is " << v1.size() << endl;
	cout << " v1 = ";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << endl << endl;
	// erase
	v1.erase(v1.begin() + 1, v1.begin() + 3);
	cout << " The size of v1 is " << v1.size() << endl;
	cout << " v1 = ";
	for (Iter = v1.begin(); Iter != v1.end(); Iter++)
		cout << " " << *Iter;
	cout << " after eraze\n";
	v1.clear();
	cout << " The size of v1 after clearing is " << v1.size() << endl;
}