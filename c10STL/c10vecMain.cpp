// DougFO Play   Jan. 16, 2022
#include <iostream>
#include <vector>
using namespace std; 
void coutall(vector <int>);
int main() {
	vector <int> v1;
	vector <int>::iterator it;
	// 1. default size, capacity
	cout << " default capacity " << v1.capacity() << endl;
	cout << " default size " << v1.size() << endl;
	// 2. reserve size
	v1.reserve(32);
	v1.resize(4);
	cout << " capacity " << v1.capacity() << endl;
	cout << " size " << v1.size() << endl;
	coutall(v1);
	// 3. put 2 integers
	v1.push_back(10);
	v1.push_back(20);
	coutall(v1);
	// 4. insert 4 integers at the front
	for (int i = 0; i < 4; i++) {
		v1.emplace(v1.begin() + i, (i + 1) * 5);
	}
	coutall(v1);
	// 5. set the follwing 4 integers
	for (int i = 0; i < 4; i++) {
		v1[4+i] =  (i+5) * 5;
	}
	coutall(v1);
	// 6. get the first 5 integers and erase
	cout << " erased ";
	for (int i = 0; i < 5; i++) {
		cout << v1[0] << " ";
		v1.erase(v1.begin());
	}
	cout << endl << " capacity " << v1.capacity() << endl;
	coutall(v1);

	return 123;
}
void coutall(vector <int> vv) {
	vector <int>::iterator it;
	// bug??? capacity is the same as size in this function. 
	cout << vv.capacity() << " " << vv.size() << " : ";
	for (it = vv.begin(); it != vv.end(); it++) {
		cout << "  " << *it;
	}
	cout << endl;
}
