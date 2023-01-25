#include <iostream>
#include <string>
#include "ParkedCar.h"
#include "PoliceOfficer.h"

using namespace std;

int main()
{

	string make, model, color, plateNumber, officerName, badgeNumber; 
	char answer;
	int minutesParked;
	bool runAgain = true;

	cout << "Hello! You are able to enter in car information,\nhow much time was purchased" <<
		" on the parking meter\nand an officer's information to simulate a parking ticket.\n" << endl;

	do {
		//Enter the information for the object 'car'
		cout << "Enter car make: ";
		cin >> make;
		cout << "Enter car model: ";
		cin >> model;
		cout << "Enter car color: ";
		cin >> color;
		cout << "Enter the car's plate number: ";
		cin >> plateNumber;
		cout << "Enter the minutes parked: ";
		cin >> minutesParked;
		cin.ignore();
		//Enter info for police officer
		cout << "Enter the officer's name: ";
		getline(cin, officerName);
		cout << "Enter the officer's badge number: ";
		cin >> badgeNumber;

		//Create ParkedCar object to pass to the police officer class
		ParkedCar car(make, model, color, plateNumber, minutesParked);

		PoliceOfficer officer(car, officerName, badgeNumber);



		//Check the parked time vs the purchased time and issue a ticket if purchased time has been exceeded
		officer.deserveParkingTicket();
		
		
		//Ask the user if they want to run the program again
		cout << "\n\n\nWould you like to run again? (Y/N)" << endl;
		cin >> answer;
		answer = toupper(answer);
		if (answer != 'Y')
			runAgain = false;
	} while (runAgain);
}
