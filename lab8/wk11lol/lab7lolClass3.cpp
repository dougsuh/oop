// Author : Doug Young Suh
// Date  :  June 11, 2020
//
// Lab 7: class test 1    class 3
//
//
#include <fstream>
#include <iostream>
using namespace std;
#include "lol.h"
int main() {
	LoL *akali = new LoL(5,10,2.,3.,-5.,0.1,10, (char*)"alkali4.dat");	
	LoL *amumu = new LoL(7, 100, -3.5, 4., 100., 10., 15, (char*)"amumu4.dat");
	LoL *annie = new LoL(12, 17, 0.01, 0.2, 1.5, 0.08, 20, (char*)"annie4.dat");
	LoL *ashe = new LoL(10, 20, 4.2, -5.3, 2.1, 0.2, 5, (char*)"ashe4.dat");

	delete akali;
	delete amumu;
	delete annie;
	ashe->~LoL();

	return 2;
}