#include "Bus.h"

int Car::getParkingDuration() const{
    return Vehicle::getParkingDuration * 0.75;
}