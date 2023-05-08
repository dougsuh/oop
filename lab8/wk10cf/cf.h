#pragma once
#include <iostream>
using namespace std;
class cfk {
public:
	// constructor
	cfk() {
		c = 100;
		c2f();
	};
	cfk(float ff);
	// member data 
	float f, c, k;
	// member function	
	void c2f();
	void f2c();
	void cfout();
};