#pragma once
#ifndef PARKINGTICKET_H_
#define PARKINGTICKET_H_

#include "ParkedCar.h"

class ParkingTicket
{

private:
	ParkedCar car;
	int fineAmount = 25;
	int parkedTimeOver;


public:
	
	//Constructor
	ParkingTicket(ParkedCar car, int parkedTimeOver)
		: car(car), parkedTimeOver(parkedTimeOver) {}


	//report car info
	void getCarInfo()
	{car.getInfo();}

	//Calc and return fine amount depending on time 
	int FineAmount();

};
#endif
