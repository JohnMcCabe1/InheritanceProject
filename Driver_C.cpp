/*
* John McCabe
* Inheritance, Polymorphism, and Virtual Functions Project
* April 25 2022
*/

#include "Vehicle_C.h";
#include "Car_C.h";
#include "SUV_C.h";
#include <iostream>
#include <string>

using namespace std;

int main() {
	string manufacturer;
	int year, doors, gasCapacity;

	cout << "Vehicle Program" << endl;
	cout << "\nVehicle:" << "\n" << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;

	Vehicle_C newVehicle(manufacturer, year);
	newVehicle.Display_Info();

	cin.ignore();

	cout << "\n\nCar:" << "\n" << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;

	Car_C newCar(doors, manufacturer, year);
	newCar.Display_Info();

	cin.ignore();

	cout << "\n\nSUV:" << "\n" << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doors;
	cout << "Enter the gas tank capacity: ";
	cin >> gasCapacity;

	SUV_C newSUV(gasCapacity, manufacturer, year, doors);
	newSUV.Display_Info();

}