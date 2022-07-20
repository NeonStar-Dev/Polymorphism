// Brett
// CIS 1202 - 101
// July 20, 2022

#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() {

};
string Vehicle::getManu() {
	return manufacturer;
};
void Vehicle::setManu(string s) {
	this->manufacturer = s;
};
int Vehicle::getYear() {
	return year;
}
void Vehicle::setYear(int i) {
	year = i;
};
string Vehicle::displayInfo() {
	string out;
	out.append("Vehicle Information:\n");
	out.append("Manufacturer: " + getManu());
	out.append("\nYear Built: " + to_string(this->year));
	out.append("\n");
	return out;
};