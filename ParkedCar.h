#pragma once
#ifndef PARKEDCAR_H_
#define PARKEDCAR_H_

#include <iostream>	

using namespace std;

class ParkedCar
{
	private:
		string make;
		string model;
		string color;
		string plateNumber;
		int minutesParked;


	public:

		ParkedCar(string make, string model, string color, string plateNumber, int minutesParked)
			: make(make), model(model), color(color), plateNumber(plateNumber), minutesParked(minutesParked) {}

		int getTimeParked()
		{return minutesParked;}

		void getInfo();


};
#endif
