#pragma once
#include "CarS3.h"
class SUV : public Car {
private:
	int spareWheels;
public:
	void klaxon(int);
	void setSparewheels(int);
	int getSparewheels();
	float getTotalPrice();
};

