#include "Car.h"

Car::Car() {

}
int Car::getDoors() {
	return doorNO;
}
void Car::setDoors(int i) {
	doorNO = i;
}
string Car::displayInfo() {
	string out;
	out.append(Vehicle::displayInfo());
	out.append("Doors: " + to_string(doorNO));
	out.append("\n");
	return out;
}
