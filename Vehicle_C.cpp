#include "Vehicle.h";
#include <iostream>
#include <string>

using namespace std;

Vehicle_C::Vehicle_C() {
	Vehicle_C::manufacturer = "";
	Vehicle_C::year = 0;
}

string Vehicle_C::getManufacturer() const {
	return Vehicle_C::manufacturer;
}

void Vehicle_C::setManufacturer(string newManufacturer) {
	Vehicle_C::manufacturer = newManufacturer;
}


int Vehicle_C::getYear() const {
	return Vehicle_C::year;
}

void Vehicle_C::setYear(int newYear) {
	Vehicle_C::year = newYear;
}