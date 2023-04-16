#pragma once
class Car {
private:
	float price;
	void speedUp(float);
	void speedDown(float);
public:
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);
};
