#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(a, d);
		pear = fruit(a, d);
		peach = fruit(a, d);
	}
	fruit apple, pear, peach;
	float total();
};
