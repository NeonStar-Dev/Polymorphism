#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year = 0;

public:
	Vehicle();
	string getManu();
	void setManu(string s);
	int getYear();
	void setYear (int i);
	string displayInfo();
};
#endif