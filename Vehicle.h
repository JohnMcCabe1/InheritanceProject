#ifndef Vehicle_C_
#define Vehicle_C_

#include <iostream>
#include <string>

using namespace std;

class Vehicle_C {
private:
	int year;
	string manufacturer;
public:
	Vehicle_C();
	void setYear(int newYear);
	int getYear() const;
	void setManufacturer(string newManufacturer);
	string getManufacturer() const;
	
};


#endif