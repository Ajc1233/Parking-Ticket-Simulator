#include "ParkingTicket.h"


int  ParkingTicket::FineAmount() { 
	
	//if the time purchased minus the time parked is less than 0
	//then the parked car will get a ticket
	for (int i = 0; i < parkedTimeOver; i += 60)
		fineAmount += 10;

	return fineAmount;
};
