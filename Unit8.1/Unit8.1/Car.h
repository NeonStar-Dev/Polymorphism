#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"

class Car : public Vehicle
{
private:
	int doorNO = 0;

public:
	Car() {};
	void setDoors(int) {};

	string DisplayInfo(){};
};
#endif