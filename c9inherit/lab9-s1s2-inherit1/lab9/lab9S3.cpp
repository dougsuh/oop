#include <iostream>
using namespace std;
#include "CarS3.h"
#include "SUVS3.h"
int main() {
	SUV* newSUV = new SUV(); 
	newSUV->setPrice(5000);
	cout << " price " << newSUV->price << "\n";
	cout << " price " << newSUV->getPrice() << "\n";

	newSUV->setSparewheels(2); 
	std::cout << "Spare wheels are " << newSUV->getSparewheels() << std::endl; 

	delete newSUV; 
	return 0; 
}

