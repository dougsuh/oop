#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
class Hadamard {
public:
	Hadamard() {
		A.resize(2, 2);
		A << 1, 1, 1, -1;
		n = 2;
	}
	Hadamard(const MatrixXd B) {
		n = B.cols();
		expand(B);
	}
	int n;
	void expand(MatrixXd B);
	MatrixXd A;
};
void Hadamard::expand(const MatrixXd B) {
	A.resize(n * 2, n * 2);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			double x = B(j, i);
			A(j, i) = x;
			A(n + j,i) = x;
			A(j, n + i) = x;
			A(n + j, n + i) = -x;
		}
	}
}
int main() {
	// method 3
	Hadamard hh[3];
	cout << "  H2" << endl << hh[0].A << endl;
	int n = 2;
	for (int i = 1; i < 3; i++, n *= 2) {
		hh[i] = Hadamard(hh[i - 1].A);
		cout << "  H" << n*2 << endl<<hh[i].A << endl;
	}
	return 123;
}
