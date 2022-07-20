#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"

class Car : public Vehicle
{
private:
	int doorNO = 0;

public:
	Car();
	int getDoors();
	void setDoors(int);
	string displayInfo();
};
#endif