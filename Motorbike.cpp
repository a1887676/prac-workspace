#include "Motorbike.h"

int Car::getParkingDuration() const{
    return Vehicle::getParkingDuration * 0.85;
}