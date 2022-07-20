#ifndef TRUCK_H
#define TRUCK_H

#include"Vehicle.h"

class Truck : public Vehicle
{
private:
	int towCap = 0;

public:
	Truck() {};
	void setCap(int) {};
	string displayInfo() {};

};

#endif
