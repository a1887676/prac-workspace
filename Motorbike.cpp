#include "Motorbike.h"

int Motorbike::getParkingDuration() const{
    return Vehicle::getParkingDuration() * 0.85;
}