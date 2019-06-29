#include "Bus.h"

Bus::Bus(unsigned int bus_no, string driver, string to_dest, string from_loc, string depart_time, string arrive_time)
{
	m_arrival_time = arrive_time;
	m_bus_number = bus_no;
	m_to = to_dest;
	m_from = from_loc;
	m_driver = driver;
	m_departure_time = depart_time;
	for (int i = 0; i < 32; ++i) {
		emptySeats.push_back(true);
	}
}

Bus::~Bus()
{
}

void Bus::PrintBusDetails()
{
	cout << "Bus no: \t" << this->m_bus_number

		<< "\nDriver: \t" << this->m_driver << "\t\tArrival time: \t"

		<< this->m_arrival_time << "\tDeparture time:" << this->m_departure_time

		<< "\nFrom: \t\t" << this->m_from << "\t\tTo: \t\t" <<

		this->m_to << "\n";
}

unsigned int Bus::get_bus_number()
{
	return m_bus_number;
}

string Bus::get_driver_name()
{
	return m_driver;
}

string Bus::get_to()
{
	return m_to;
}

string Bus::get_from()
{
	return m_from;
}

string Bus::get_departure_time()
{
	return m_departure_time;
}

string Bus::get_arrival_time()
{
	return m_arrival_time;
}
