#include <iostream>
#include "Cars2.h"
int main() {
	Car cars[5];  // blank constructor
	for (int i = 0; i < 5; i++) {
		std::cout << cars[i].speed << "  " << (cars + i)->getPrice() << "\n";
	}
	
	cars[2] =  Car(100.0, 4, 45000.0); // constructor withargument
	std::cout << cars[2].speed << "  " << (cars + 2)->getPrice() << "\n";

	getchar();
	return 111;
}
