#include "Menager.h"

Menager::Menager()
{
}

Menager::~Menager()
{
}

Bus* Menager::SearchBus(unsigned int no)
{
	if (bus_list.size() == 0)
		return NULL;
	vector <Bus>::iterator it = bus_list.begin();
	Bus* found = NULL;
	for (auto bus : bus_list) {
		
		if ((bus.get_bus_number()) == no)
		{
			/*found = &book;
			break;*/
			found = &(*it);

			return found;
			//return &(*book);
		}
		it++;
	}
	return found;	
}

void Menager::InstallBusInfo()
{
	unsigned int m_bus_number;//key
	string m_driver;
	string m_to, m_from;
	string m_arrival_time;
	string m_departure_time;

	cout << "Enter bus no: ";
	cin >> m_bus_number;

	cout << "\nEnter Driver's name: ";

	cin >> m_driver;

	cout << "\nArrival time: ";

	cin >> m_arrival_time;

	cout << "\nDeparture: ";

	cin >> m_departure_time;

	cout << "\nFrom: ";

	cin >> m_from;

	cout << "\nTo: ";

	cin >> m_to;

	Bus b = Bus(m_bus_number, m_driver, m_to, m_from, m_departure_time, m_arrival_time);
	this->bus_list.push_back(b);
}

void Menager::MakeReservation()
{
	unsigned int n;
	cout << "Enter the Bus number: ";
	cin >> n;
	Bus* b = SearchBus(n);
	if (b == NULL) {
		cout << "Sorry, There is no bus with that number\n";
	}
	else
	{
		int seat;
		cout << "\nChoose your Seat Number: ";
		cin >> seat;
		if (seat > 32)

		{

			cout << "\nThere are only 32 seats available in this bus.";

		}
		else {
			if ((*b).emptySeats[seat] == false) {
				cout << "Sorry, The seat no. is already reserved.\n";
			}
			else {
				cout << "The seat number " << seat << " of bus number " << n << " is yours!" << endl;
				(*b).emptySeats[seat] = false;
			}
		}
	}
}

void Menager::ShowReservations()
{
}

void Menager::DisplayAvailableBuses()
{
	if (bus_list.size() == 0) {
		cout << "Sorry, there is no bus available\n";
	}
	for (auto bus : this->bus_list) {
		cout << "\n*********************************************************\n";
		bus.PrintBusDetails();
	}
	cout << "\n*********************************************************\n";
	
}

void Menager::DisplayAvailableSeatsInBus()
{
	unsigned int n;
	cout << "Enter bus number: ";
	cin >> n;
	Bus* b = SearchBus(n);
	if (b == NULL) {
		cout << "Sorry, There is no bus with that number\n";
	}
	else
	{
		int count = 0;
		cout << "Empty seats in bus: \n";
		for (int i = 0; i < 32; ++i) {
			if (((*b).emptySeats)[i] == true) {
				cout << " " << i << ",";
			}
			else
				count++;
		}
		if (count == 31) {
			cout << "Sorry, the bus is full\n";
		}
	}
}
