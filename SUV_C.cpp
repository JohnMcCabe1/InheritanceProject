#include "SUV_C.h";
#include <iostream>
#include <string>

using namespace std;

void SUV_C::Display_Info() const {
	Car_C::Display_Info();
	cout << "\n" << "Gas Tank Capacity: " << gasCapacity;
}

//															CONSTRUCTORS

SUV_C::SUV_C() {
	gasCapacity = 0;
}

SUV_C::SUV_C(int newCapacity, string newManufacturer, int newYear, int newDoors) {
	gasCapacity = newCapacity;
	Set_Manufacturer(newManufacturer);
	Set_Year(newYear);
	Set_Doors(newDoors);
}

//														GETTERS AND SETTERS

void SUV_C::Set_Gas_Capacity(int newCapacity) {
	gasCapacity = newCapacity;
}

int SUV_C::Get_Gas_Capacity() const {
	return gasCapacity;
}