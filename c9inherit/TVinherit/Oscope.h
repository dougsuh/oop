#pragma once
#include "TV.h"
class Oscope : public TV {
public:
	Oscope();
	float getVoltage();
	float getCurrent();
};