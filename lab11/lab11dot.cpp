#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main() {
	VectorXd* xX = new VectorXd[4];
	for (int i = 0; i < 4; i++) xX[i].resize(4);
	MatrixXd xx(4, 4);
	// orthonormal
	xX[0] << 0.5, 0.5, 0.5, 0.5;
	xX[1] << 0.5, 0.5, -0.5, -0.5;
	xX[2] << 0.5, -0.5, -0.5, 0.5;
	xX[3] << 0.5, -0.5, 0.5, -0.5;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			xx(i, j) = xX[i].dot(xX[j]);
		}
	}
	cout << xx << endl;
	return 123;
}

