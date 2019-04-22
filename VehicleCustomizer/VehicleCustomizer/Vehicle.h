#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
protected:
	string bodyType;
	string suspension;
	string engine;
	string tires;
	double basePrice,
		bodyPrice,
		suspensionPrice,
		enginePrice,
		tiresPrice,
		totalPrice = basePrice + bodyPrice + enginePrice + suspensionPrice + tiresPrice;;

public:

	Vehicle();
	~Vehicle();
	void setBodyType(string bt, double bp) { bodyType = bt; bodyPrice = bp; }
	void setSuspension(string sus, double sp) { suspension = sus; suspensionPrice = sp; }
	void setEngine(string e, double ep) { engine = e; enginePrice = ep; }
	void setTires(string t, double tp) { tires = t; tiresPrice = tp; }
	void displayBodyOptions();
	void displaySuspensionOptions();
	void displayEngineOptions();
	void displayTireOptions();
	string getBodyType() { return bodyType; }
	string getSuspension() { return suspension; }
	string getEngine() { return engine; }
	string getTires() { return tires; }
	double getBodyPrice() { return bodyPrice; }
	double getEngingPrice() { return enginePrice; }
	double getSuspensionPrice() { return suspensionPrice; }
	double getTirePrice() { return tiresPrice; }
	double getTotal() { return totalPrice; }

};

