// Brett
// CIS 1202 - 101
// July 20, 2022

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

int main() {
	string manu;
	int year, doors, towCap;
	Vehicle v;
	Car c;
	Truck t;

	cout << "Vehicle Program\n\n";
	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manu);
	v.setManu(manu);
	cout << "Enter the year built: ";
	cin >> year;
	v.setYear(year);
	cout << v.displayInfo();
	cout << endl;

	cout << "Car:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manu);
	c.setManu(manu);
	cout << "Enter the year built: ";
	cin >> year;
	c.setYear(year);
	cout << "Enter the number of doors: ";
	cin >> doors;
	c.setDoors(doors);
	cout << c.displayInfo();
	cout << endl;

	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manu);
	t.setManu(manu);
	cout << "Enter the year built: ";
	cin >> year;
	t.setYear(year);
	cout << "Enter the towing capacity: ";
	cin >> towCap;
	t.setCap(towCap);
	cout << t.displayInfo();
	cout << endl;
}