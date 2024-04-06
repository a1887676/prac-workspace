#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot() : maxCapacity(0), currentCount(0), vehicles(new Vehicle*[0]) {}

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), currentCount(0), vehicles(new Vehicle*[maxCapacity]) {}

void ParkingLot::parkVehicle(Vehicle* newVehicle) {
    if(currentCount<maxCapacity) {
        vehicles[currentCount++] = newVehicle;
    }else{
        std::cout << "The lot is full" << std::endl;
    }
}

int ParkingLot::getCount() const {return currentCount;}

void ParkingLot::unparkVehicle(int id) {
    for(int i=0;i<currentCount;i++) {
        if(vehicles[i]->getID() == id) {
            delete vehicles[i];
            for(int j=i;j<currentCount-1;j++) {
                vehicles[j]=vehicles[j+1];
            }
currentCount--;
vehicles[currentCount] = nullptr;
return;
        }
    }
std::cout << "Vehicle not in the lot" << std::endl;
}

ParkingLot::~ParkingLot() {
    for(int i=0;i<currentCount;i++) {
        delete vehicles[i];
    }
 delete[] vehicles;   
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
    int k=0;
    for(int i=0;i<currentCount;i++) {
        if(vehicles[i]->getParkingDuration>maxParkingDuration)
        k++;
    }
    return k;
}