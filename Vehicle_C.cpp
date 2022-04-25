#include "Vehicle_C.h";
#include <iostream>
#include <string>

using namespace std;

void Vehicle_C::Display_Info() {
	cout << "Manufacturer: " << manufacturer;
	cout << "Year: " << year;
}

//															CONSTRUCTORS

Vehicle_C::Vehicle_C() {
	manufacturer = "";
	year = 0;
}

Vehicle_C::Vehicle_C(string newManufacturer, int newYear) {
	manufacturer = newManufacturer;
	year = newYear;
}





//														GETTERS AND SETTERS

string Vehicle_C::Get_Manufacturer() const {
	return Vehicle_C::manufacturer;
}

void Vehicle_C::Set_Manufacturer(string newManufacturer) {
	Vehicle_C::manufacturer = newManufacturer;
}


int Vehicle_C::Get_Year() const {
	return Vehicle_C::year;
}

void Vehicle_C::Set_Year(int newYear) {
	Vehicle_C::year = newYear;
}