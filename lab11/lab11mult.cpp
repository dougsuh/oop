#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main() {
	MatrixXd d34(3, 4);
	d34 << 2, 3, 4, 5,
		0, -1, 1, 1,
		1, 4, 0, 0;
	cout << " d " << endl << d34 << endl;
	cout << " 2d " << endl << 2*d34 << endl;
	MatrixXd e43(4, 3);
	e43 << 2, 3, 4,
		5, 0, -1,
		1, 1, 1,
		4, 0, 0;
	MatrixXd f = d34 * e43;
	cout << "e43\n" << e43 << endl;
	cout << "f\n" << f << endl;
	return 123;
}