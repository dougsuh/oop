// stire.h
#pragma once
#include <iostream>
#include <string>	
#include "fruit.h"
using namespace std;
class store {
public:
	// constructor
	store() {
		apple = fruit(3, 300, "apple");
		pear = fruit(5, 400, "pear");
		peach = fruit(7, 1000, "peach");
	};
	// member data
	fruit apple, pear, peach;
	// member function
	void total_price();
};
