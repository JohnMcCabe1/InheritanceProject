#include "Car_C.h";
#include <iostream>
#include <string>

using namespace std;


void Car_C::Display_Info() const {
	Vehicle_C::Display_Info();
	cout << "\n" << "Doors: " << doors;
}

//															CONSTRUCTORS

Car_C::Car_C() {
	doors = 0;
}

Car_C::Car_C(int newDoors, string newManufacturer, int newYear) {
	doors = newDoors;
	Set_Manufacturer(newManufacturer);
	Set_Year(newYear);
}




//														GETTERS AND SETTERS

int Car_C::Get_Doors() const {
	return doors;
}

void Car_C::Set_Doors(int newDoors) {
	doors = newDoors;
}