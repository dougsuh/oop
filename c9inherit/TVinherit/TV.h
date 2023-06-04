#pragma once
#include <cmath>
class TV {
public:
	TV();  // constructor
	int nSwitch = 1;
	float voltage = 220;
	bool onoff; // true on false off
	int X, Y;   // size

	void turnOn();
	void brightControl();
	float const getBrightness();
private:
	float bright;
	void turnChannel(int);
	void volumeControl();
	int channel;
	float volume;
};
