#ifndef Car_C_
#define Car_C_

#include "Vehicle_C.h"

using namespace std;

class Car_C : public Vehicle_C {
private:
	int doors;
public:
	Car_C();
	Car_C(int newDoors);
	void Set_Doors(int);
	int Get_Doors() const;
	void Display_Info();
};


#endif