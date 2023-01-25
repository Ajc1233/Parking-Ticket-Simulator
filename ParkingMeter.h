#pragma once
#ifndef PARKINGMETER_H_
#define PARKINGMETER_H_
class ParkingMeter
{
private:
	int minutesBought;

public:

	ParkingMeter()
		:minutesBought(0) {}


	ParkingMeter(int minutesBought)
		: minutesBought(minutesBought) {}

	int getMinBought()
	{return minutesBought;}

};
#endif
