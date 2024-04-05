#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(int id) : ID(id), timeOfEntry(std::time(0)) {}

Vehicle::Vehicle() : ID(0), timeOfEntry(std::time(0)) {}

int Vehicle::getID() const {return ID;}

int Vehicle::getParkingDuration() const {
     std::time_t currentTime = std::time(0);
     return currentTime - timeOfEntry;}

Vehicle::~Vehicle(){}     


