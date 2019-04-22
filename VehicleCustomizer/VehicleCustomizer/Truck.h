#pragma once
#include "Vehicle.h"

class Truck : public Vehicle
{
protected:
	double basePrice = 20000;

public:
	Truck();
	~Truck();
	void displayBodyOptions();
	void displaySuspensionOptions();
	void displayEngineOptions();
	void displayTireOptions();
};

