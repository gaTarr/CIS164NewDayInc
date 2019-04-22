#include "Truck.h"



Truck::Truck()
{

}


Truck::~Truck()
{
}

void Truck::displayBodyOptions()
{
	int selection;
	string result;
	double additionalCost = 0;

	cout << "Please select desired truck body type." << endl;
	cout << "1. Standard" << endl;
	cout << "2. Extended Cab" << endl;
	cout << "3. Crew Cab" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1: result = "Standard Cab"; break;
	case 2: result = "Extended Cab"; additionalCost = 5000; break;
	case 3: result = "Crew Cab"; additionalCost = 10000; break;
	}

	Truck::setBodyType(result, additionalCost);
}

void Truck::displayEngineOptions()
{
	int selection;
	string result;
	double additionalCost = 0;

	cout << "Please select desired truck engine." << endl;
	cout << "1. Standard V6" << endl;
	cout << "2. V8" << endl;
	cout << "3. Diesel" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1: result = "V6"; break;
	case 2: result = "V8"; additionalCost = 4000; break;
	case 3: result = "Diesel"; additionalCost = 7000; break;
	}

	Truck::setEngine(result, additionalCost);
}

void Truck::displaySuspensionOptions()
{
	int selection;
	string result;
	double additionalCost = 0;

	cout << "Please select desired truck suspension." << endl;
	cout << "1. Standard" << endl;
	cout << "2. Off Road" << endl;
	cout << "3. Sport" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1: result = "Standard"; break;
	case 2: result = "Off Road"; additionalCost = 3000; break;
	case 3: result = "Sport"; additionalCost = 2000; break;
	}

	Truck::setSuspension(result, additionalCost);
}

void Truck::displayTireOptions()
{
	int selection;
	string result;
	double additionalCost = 0;

	cout << "Please select desired truck tires." << endl;
	cout << "1. Standard" << endl;
	cout << "2. Street" << endl;
	cout << "3. Off Road" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1: result = "Standard"; break;
	case 2: result = "Street"; additionalCost = 1000; break;
	case 3: result = "Off Road"; additionalCost = 1200; break;
	}

	Truck::setTires(result, additionalCost);
}
