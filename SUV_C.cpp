#include "SUV_C.h";
#include <iostream>
#include <string>

using namespace std;

void SUV_C::Display_Info() {
	Car_C::Display_Info();
	cout << "Gas Tank Capacity: " << gasCapacity;
}

//															CONSTRUCTORS

SUV_C::SUV_C() {
	gasCapacity = 0;
}

SUV_C::SUV_C(int newCapacity) {
	gasCapacity = newCapacity;
}

//														GETTERS AND SETTERS

void SUV_C::Set_Gas_Capacity(int newCapacity) {
	gasCapacity = newCapacity;
}

int SUV_C::Get_Gas_Capacity() const {
	return gasCapacity;
}