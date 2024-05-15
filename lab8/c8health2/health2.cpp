#include <iostream>
#include <cmath>  // for rand( )
#include "health2.h"
CHealth::CHealth(int a) { age = a; }
CHealth::~CHealth() {
	nCHealth--;
	cout << "  count " << nCHealth << endl;
	if (beat5min != nullptr) delete beat5min;
	if (temp5min != nullptr) delete temp5min;
	else cout << " no allocated memory \n";
}
int CHealth::nCHealth = 0;
void CHealth::GetBMI() { BMIvalue = weight / height / height; }
void CHealth::faren2cel() { cel = (faren - 32) * 5.0 / 9.0; }

void CHealth::measure(int a) { age = a;   measure(); }
void CHealth::measure() {
	cel = rand() % 10 + 30.0; 	cel2faren();  // private function
	height = 1.6 + (rand() % 30) / 10.0;
	weight = 50. + rand() % 30;
	beat = 70 + rand() % 15;
	pressure = 90. + rand() % 30;
	GetBMI();      	GetHealthAge();
}
int CHealth::run5min() {
	int nn = 5 * 60;  // every seconds for 5minutes
	if (beat5min == nullptr) beat5min = new float[nn];
	if (temp5min == nullptr) temp5min = new float[nn];;
	for (int n = 0; n < nn; n++) {
		beat5min[n] = 80 + rand() % 20;
		temp5min[n] = 35 + rand() % 5;
		if (temp5min[n] > 41 || beat5min[n] > 101)  return -1;
	}
	return 1;
}
