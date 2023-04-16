// Author : Doug Young Suh
// Date  :  May 31, 2020
//
// Lab 7-7: class test, file pointer test
//
// Can't we write the fstream object as an argument in function calls in C++?
// Question : the fstream object as a member data in a class
#include <fstream>
#include <iostream>
using namespace std;
class LoL {
public:
	LoL(char *ff) { out = ofstream(ff); };
	~LoL() { std::cout << " delete \n"; out.close(); }
	ofstream out;
	void sayHello();
	void sayBye();
};
void LoL::sayHello() { out << "Hello 7-2\n"; }
void LoL::sayBye() { out << "Bye Bye 7-2\n"; }
int main() {

	LoL *akali, *amumu, *annie, *ashe;
	// construction
	akali = new LoL((char *)"akali7.txt");
	akali->sayHello();
	akali->sayHello();
	akali->sayBye();
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