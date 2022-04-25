#include "Car_C.h";
#include <iostream>
#include <string>

using namespace std;


void Car_C::Display_Info() {
	Vehicle_C::Display_Info();
	cout << "Doors: " << doors;
}

//															CONSTRUCTORS

Car_C::Car_C() {
	doors = 0;
}

Car_C::Car_C(int newDoors) {
	doors = newDoors;
}




//														GETTERS AND SETTERS

int Car_C::Get_Doors() const {
	return doors;
}

void Car_C::Set_Doors(int newDoors) {
	doors = newDoors;
}