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
	Vehicle_C(string, int);
	void Set_Year(int newYear);
	int Get_Year() const;
	void Set_Manufacturer(string newManufacturer);
	string Get_Manufacturer() const;
	virtual void Display_Info() const;
	
};


#endif