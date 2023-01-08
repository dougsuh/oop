#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
void block(MatrixXd& A, const MatrixXd B, int n, int x, int y) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			A(x + j, y + i) = B(j, i);
	}
}
MatrixXd expand(const MatrixXd B, int n) {
	MatrixXd A;
	A.resize(n * 2, n * 2);
	block(A, B, n, 0, 0);
	block(A, B, n, n, 0);
	block(A, B, n, 0, n);
	block(A, -B, n, n,n);
	return A;
}
int main() {
	// method 1
	MatrixXd hh[3];
	hh[0].resize(2, 2);
	hh[0] << 1, 1, 1, -1;
	int n = 2;
	cout << "  H" << n << endl << hh[0] << endl;
	for (int i = 1; i < 3; i++, n *= 2) {
		hh[i] = expand(hh[i - 1],n);
		cout << "  H" << n*2 << endl<<hh[i] << endl;
	}
	// method 2
	// make H1
	Matrix2d H1(2, 2);
	H1 << 1, 1, 1, -1;
	// make H2
	MatrixXd H2(4, 4);
	H2.block<2, 2>(0, 0) = H1;
	H2.block<2, 2>(0, 2) = H1;
	H2.block<2, 2>(2, 0) = H1;
	H2.block<2, 2>(2, 2) = -H1;
	cout << "\n H2 \n" << H2 << endl;
	// make H3
	MatrixXd H3(8, 8);
	H3.block<4, 4>(0, 0) = H2;
	H3.block<4, 4>(0, 4) = H2;
	H3.block<4, 4>(4, 0) = H2;
	H3.block<4, 4>(4, 4) = -H2;
	cout << "\n H3 \n" << H3 << endl;
	return 123;
}
