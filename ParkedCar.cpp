#include "ParkedCar.h"


void ParkedCar::getInfo() {
	cout << "Car Information: " << "\n\tMake: " << make << "\n\tModel: " << model
		<< "\n\tColor: " << color << "\n\tPlate number: " << plateNumber
		<< "\n\tMinutes parked: " << minutesParked << endl;
}
