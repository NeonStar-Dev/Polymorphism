#include "Vehicle.h"
#include <iostream>

using namespace std;

Vehicle::Vehicle() {

};
void Vehicle::setManu(string s) {
	this->manufacturer = s;
};
void Vehicle::setYear(int i) {
	this->year = i;
};
string Vehicle::displayInfo() {
	cout << "Vehicle Information:\n";
	cout << "Manufacturer: " << this->manufacturer << endl;
	cout << "Year Built: " << this->year << endl;
};