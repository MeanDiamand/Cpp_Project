#pragma once
#include "event.h"

class Birthday : public Event
{
	int year;
	int month;
	int day;
public:
	//default constructor
	Birthday();

	//setter methods
	void set_year(int y);
	void set_month(int m);
	void set_day(int d);

	//getter methods
	int get_year() const;
	int get_month() const;
	int get_day() const;

	//print method to print the data of the attribute in Birthday class
	std::ostream& print_event(std::ostream& os) const;

	//input method to input the data into the attribute of Birthday class
	void input_event(std::istream& is);

	//save method for saving all the data of this derived class and its based class 
	void save_database(std::ostream& os);

	//load method for loading all the data of this derived class and its based class from the text file
	void load_database(std::istream& is);

	//operator overloading for comparing two objects of this derived class
	bool operator==(const Event* other);
};