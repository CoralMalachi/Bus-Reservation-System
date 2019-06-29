#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Bus
{
private:
	unsigned int m_bus_number;//key
	string m_driver;
	string m_to, m_from;
	string m_arrival_time;
	string m_departure_time;
	


	/*
	No need to initialize it, as it gets automatically initialized in the constructor of your class
	and deallocated when your class is destroyed.
	but we cant do fixed size:
	https://stackoverflow.com/questions/28968226/defining-a-vector-with-fixed-size-inside-a-class-in-c
	

		"It's a limitation wrt. defining class members. If you want a fixed-size vector,
		just use std::array instead, which will allow you to do exactly that."
	*/
	//vector <bool> emptySeats(32);
	//No, std::array has no specialization for bool type
	//array<bool, 32> emptySeats;
	
	//std::vector manages its own memory
	
	
/*
it's not possible that way with a declaration inline initialization for complex classes.
we are not allowed to initialize static non-const members in a class
https://stackoverflow.com/questions/28260380/vector-definition-in-h-and-cpp-file
*/
public:
	vector<bool> emptySeats;
	Bus(unsigned int bus_no,
		string driver, string to_dest,
		string from_loc,
		string depart_time,
		string arrive_time);

	~Bus();

	void PrintBusDetails();
	
	//GETS
	unsigned int get_bus_number();
	string get_driver_name();
	string get_to();
	string get_from();
	string get_departure_time();
	string get_arrival_time();

};

