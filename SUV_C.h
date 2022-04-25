#ifndef  SUV_C_
#define SUV_C_

#include "Car_C.h";
#include <iostream>
#include <string>

using namespace std;

class SUV_C : public Car_C {
private:
	int gasCapacity;
public:
	SUV_C();
	SUV_C(int);
	void Set_Gas_Capacity(int);
	int Get_Gas_Capacity() const;
	void Display_Info();
};

#endif 
