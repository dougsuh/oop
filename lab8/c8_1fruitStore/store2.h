#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(d, a);
		pear = fruit(e, b);
		peach = fruit(f, c);
	}
	fruit apple, pear, peach;
	float total();
	float total(float);
	store operator+(store&);
};
