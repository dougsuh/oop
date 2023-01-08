#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main() {
	MatrixXd mm(4,4);
	// orthonormal
	mm << 0.5, 0.5, 0.5, 0.5,
	      0.5, 0.5, -0.5, -0.5,
	      0.5, -0.5, -0.5, 0.5,
	      0.5, -0.5, 0.5, -0.5;
	MatrixXd nn = mm.inverse();
	cout << " original matrix mm " << endl << mm << endl;
	cout << " its inverse nn " << endl << nn << endl;
	cout << "  mm * nn " << endl << mm * nn << endl;
	return 123;
}
