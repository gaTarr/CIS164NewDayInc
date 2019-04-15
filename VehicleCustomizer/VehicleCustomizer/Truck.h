#pragma once
#include "Vehicle.h"
class Truck :
	public Vehicle
{
public:
	Truck();
	~Truck();
	string bodyOptionsSelection();
	void setBodyType(bodyOptionsSelection());
};

