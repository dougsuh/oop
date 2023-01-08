#include <iostream>
using namespace std;
void main() {
	int N=11,n,sum;
	cout << "   n(n+1)/2 sum\n";	
	for (int n = 1,sum=0; n < N; n++,sum+=n) {
		cout << "   " << n * (n + 1) / 2;
		cout << "       " << sum << endl;
	}
	/*
	for (int n = 1; n < N; n++) {
		sum += n;
		cout << "   " << n * (n + 1) / 2;
		cout << "       " << sum << endl;
	}*/
}
