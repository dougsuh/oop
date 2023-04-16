#include <iostream>
#include "Car.h"
int main() {
	Car *car1;
	car1 = new Car();
	// public member data
	car1->wheels = 4;
	std::cout << " car1->wheels " << car1->wheels << "\n";	
	car1->setWheels(3);
	std::cout << " car1->wheels " << car1->wheels << "\n";
	// private member data
	car1->price = 4500.0;    
	std::cout << " car1->price " << car1->price << "\n";
	car1->setPrice(45000);
	std::cout << " car1->price " << car1->getPrice() << "\n";
	// private member function
	car1->speed = 0.0;
	car1->speedUp(40.0);
	car1->speedChange(100.0);
	std::cout << " car1->speed " << car1->speed << "\n";

	getchar();
	return 111;
}