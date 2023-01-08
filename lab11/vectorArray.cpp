#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main() {
	VectorXd* xX = new VectorXd[10];
	for (int i = 0; i < 10; i++) {
		xX[i] = VectorXd(4);
		for (int j = 0; j < 4; j++) { xX[i](j) = i + j; }
		cout << endl << endl << xX[i] << endl;
	}
	xX[3].resize(5);
	for (int j = 0; j < 5; j++) { xX[3](j) = 3 + j; }
	cout << endl << endl << xX[3] << endl;
	xX[2] << 'a', 4, 5, 6;

	cout << endl << endl << xX[2] << endl;
	return 123;
}