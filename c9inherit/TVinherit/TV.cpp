#include <iostream>
#include "TV.h"
TV::TV() {
	X = 1000;
	Y = 500;
	nSwitch = 1;
	voltage = 220;
	onoff = false; // true on false off
	bright = 50;
}
// toggle switch
void TV::turnOn() {
	if (this->onoff) onoff = false;
	else onoff = true;
}
void TV::brightControl() {
	bright = float(rand() % 100);
};
float const TV::getBrightness() {
	return bright;
};
void TV::turnChannel(int n) {
	channel = n;
}
void TV::volumeControl() {
	volume = float(rand() % 10);
}