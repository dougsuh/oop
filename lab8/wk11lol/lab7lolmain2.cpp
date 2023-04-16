// Author : Doug Young Suh
// Date  :  May 30, 2020
//
// Lab 7: class test
//
// Note : object로 만든 것은 destructor가 작동하지 않는다. 
//
#include <fstream>
#include "lab7lol.h"
using namespace std;
int main() {
	LoL akali, amumu, *annie, *ashe;
	// construction
	akali = LoL(5,10,2.,3.,-5.,0.1,10);
	amumu = LoL(7,100,-3.5,4.,100.,10.,15);
	annie = new LoL(12,17,0.01,0.2,1.5,0.08,20);
	ashe = new LoL(10,20,4.2,-5.3,2.1,0.2,5);
	// file out
	akali.out((char *)"akali.dat");
	amumu.out((char *)"amumu.dat");
	annie->out((char *)"annie.dat");
	ashe->out((char *)"ashe.dat");
	// destruction 
	delete annie;
	delete ashe;
	akali.~LoL();
	amumu.~LoL();

	return 1;
}