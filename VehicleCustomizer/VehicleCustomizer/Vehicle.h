#pragma once
#include <string>
using namespace std;

class Vehicle
{
protected:
	string bodyType;
	string suspension;
	string engine;
	string tires;

public:

	Vehicle();
	~Vehicle();
	void setBodyType(string bt) { bodyType = bt; }
	void setSuspension(string sus) { suspension = sus; }
	void setEngine(string e) { engine = e; }
	void setTires(string t) { tires = t; }
	string getBodyType() { return bodyType; }
	string getSuspension() { return suspension; }
	string getEngine() { return engine; }
	string getTires() { return tires; }

};

