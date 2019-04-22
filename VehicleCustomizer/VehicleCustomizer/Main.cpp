//Gregory Tarr, John Claussen
#include <iostream>
#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"

using namespace std;

int main()
{
	//local variables
	int selection;
	Vehicle vehicle;

	cout << "***** Welcome to New Day Vehicle Customization *****" << endl;
	cout << "You select your vehicle part-by-part, and we'll handle all the rest!" << endl;

	cout << "Please select your base vehicle model." << endl;
	cout << "1. Truck" << endl;
	cout << "2. Car" << endl;
	cout << "3. SUV" << endl;
	cout << "4. Van" << endl;
	cin >> selection;

	switch (selection)
	{
	case 1: vehicle = Truck(); break;
	case 2: vehicle = Car(); break;
	case 3: break;
	}

	vehicle.displayBodyOptions();

	return 0;
}