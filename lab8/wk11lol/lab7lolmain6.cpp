// Author : Doug Young Suh
// Date  :  May 31, 2020
//
// Lab 7-6: class test, file pointer test
//
// Can't we write the fstream object as an argument in function calls in C++?
// Question : the fstream object as a member data in a class
#include <fstream>
#include <iostream>
using namespace std;
class LoL {
public:
	LoL(ofstream &output) : out(output) {};
	~LoL() { std::cout << " delete \n"; out.close(); }
	ofstream& out;
	int i, j;
	void sayHello() { out << "Hello\n"; }
};
using namespace std;
int main() {

	LoL *akali, *amumu, *annie, *ashe;
	// construction
	ofstream akalif("akali6.txt");
	akali = new LoL(akalif);
	akali->sayHello();
	akali->sayHello();
	akali->sayHello();
	/*amumu = new LoL(ofstream("amumu5.txt"));
	annie = new LoL( (char *)"annie5.dat");
	ashe = new LoL((char *)"ashe5.dat");*/
	// destruction : working for pointers, not for objects
	delete akali;
	/*delete amumu;
	delete annie;
	delete ashe;*/
	
	return 1;
}