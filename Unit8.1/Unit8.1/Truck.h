// Brett
// CIS 1202 - 101
// July 20, 2022

#ifndef TRUCK_H
#define TRUCK_H

#include"Vehicle.h"

class Truck : public Vehicle
{
private:
	int towCap = 0;

public:
	Truck();
	int getCap();
	void setCap(int);
	string displayInfo();

};

#endif
