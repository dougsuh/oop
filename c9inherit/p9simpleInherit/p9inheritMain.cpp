// DougFO Play Jan. 19, 2022
#include <iostream>
#include "ani.h"
#include "hum.h"
#include "bird.h"
using namespace std;
int main() {
	animal a;
	human b;
	bird c;
	a.eat();
	b.eat();
	c.eat();
	b.walk();
	c.fly();
	cout << " b " << b.nLegs << "\n";
	return 123;
}
