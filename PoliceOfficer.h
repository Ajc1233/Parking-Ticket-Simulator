#pragma once
#ifndef POLICEOFFICER_H_
#define POLICEOFFICER_H_

#include <iostream>
#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"


using namespace std;

class PoliceOfficer
{

private:
	string name;
	string badgeNumber;
	ParkedCar car;

public:

	PoliceOfficer(ParkedCar car, string name, string badgeNumber)
		: car(car), name(name), badgeNumber(badgeNumber) {}

	//observe ParkedCar object and ParkingMeter object and determine if car has passed purchased time
	void deserveParkingTicket();

	void getOfficerInfo();

	//If the car has passed purchased time, issue a ticket
	void issueTicket(int parkedTimeOver);

};
#endif

