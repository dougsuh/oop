// Author: Doug Young Suh
// Date  : May 19, 2020
//  STL(Standard Template Library)
#include <iostream>
#include <iomanip>  // setw( )
#include <vector>   // vector, push, begin, end
#include <set>        // set, pair
#include <string>
#include <algorithm>  // sort, binary_search, upper/lower_bound
using namespace std;  // vector

void main() {
	vector<int> A = { 3, 91, 2, 4 };
	// algorithm
	sort(A.begin(), A.end());  // O(log N)
	for (int i = 0; i < A.size(); i++) {
		cout << i << setw(10) << A[i] << endl;
	}
	bool present = binary_search(A.begin(), A.end(), 91);
	cout << "exist 91? " << present << endl;

	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);  // max(x| x<= key)
	auto it2 = upper_bound(A.begin(), A.end(), 100);   // min(x| x > key)

	cout << *it << " " << *it2 << endl;
	cout << it2 - it << endl;  // 9(all) - 5(100 100 100 100 123)
	for (int i = 0; i < A.size(); i++) cout << setw(4) << A[i]; cout << endl;
	for (auto x : A) cout << setw(4) << x; cout << endl; // Here 'auto' == vector<int>::iterator
	for (it = A.begin(); it != A.end(); it++)cout << setw(4) << *it; cout << endl;

	////////  set /////////////////////
	// automatically sorted in ascending order
	set<string> S;
	S.insert("doug");
	S.insert("young");
	S.insert("suh");

	for (string xx : S) cout << " " << xx; cout << endl;

	////// pair /////////////////
	cout << "  pair" << endl;
	set <pair<int, char>> SS;
	SS.insert({ 22,'c' });
	SS.insert({ 22,'a' });
	SS.insert({ 2,'d' });
	SS.insert({ 5,'e' });

	//cout << " " << SS[2].first << " " << SS[2].second; cout << endl;
	for (pair<int, char> xx : SS) cout << " | " << xx.first << " " << xx.second; cout << endl;

	getchar();
}