#pragma once
#include "Bus.h"
class Menager
{
private:
	vector <Bus> bus_list;

public:
	Menager();	
	~Menager(); 

	Bus* SearchBus(unsigned int no);

	void InstallBusInfo();
	void MakeReservation();
	void ShowReservations();
	void DisplayAvailableBuses();
	void DisplayAvailableSeatsInBus();
	
};



