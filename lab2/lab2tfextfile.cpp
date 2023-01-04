#include <iostream> // cout cin
#include <fstream>  // ifstream ofstream
using namespace std;
int main() {
	ofstream seoul("pusan.txt");
	if (!seoul) {
		cout << " cant open pusan.txt\n";
	}
	int age;
	float height, weight;
	age = 22;
	height = 172.0;
	weight = 70.5;
	seoul << age << " years old\n";
	seoul << height << " cm\n";
	seoul << weight << " kg\n";
	seoul.close();
	return 1;
}
