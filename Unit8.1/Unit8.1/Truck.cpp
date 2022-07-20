// Brett
// CIS 1202 - 101
// July 20, 2022

#include "Truck.h"
#include <iostream>

using namespace std;

Truck::Truck() {
}
int Truck::getCap() {
	return this->towCap;
}
void Truck::setCap(int i) {
	towCap = i;
}
string Truck::displayInfo() {
	string out;
	out.append(Vehicle::displayInfo());
	out.append("Towing capacity: " + to_string(towCap));
	out.append("\n");
	return out;
}