#include "PoliceOfficer.h"





//observe ParkedCar object and ParkingMeter object and determine if car has passed purchased time
void PoliceOfficer::deserveParkingTicket() {
	int timeBought;
	cout << "How much time was purchased? ";
	cin >> timeBought;
	ParkingMeter timePurchased(timeBought);
	if (car.getTimeParked() > timePurchased.getMinBought()) {
		int parkedTimeOver = car.getTimeParked() - timePurchased.getMinBought();
		issueTicket(parkedTimeOver);
	}
	else
		cout << "No ticket needs to be issued for this car." << endl;
}

void PoliceOfficer::getOfficerInfo() {
	cout << "\nPolice Officer Information:" <<
		"\n\tName: " << name << "\n\tBadge Number: " << badgeNumber << endl;
}

//If the car has passed purchased time, issue a ticket
void PoliceOfficer::issueTicket(int parkedTimeOver) {
	
	//pass car object and time over to the ParkingTicket class to get the fine amount
	ParkingTicket ticket(car, parkedTimeOver);
	getOfficerInfo();
	ticket.getCarInfo();
	cout << "Ticket Information:" << "\n\tMinutes in violation: " << parkedTimeOver
		<< "\n\tFine: $" << ticket.FineAmount();

}