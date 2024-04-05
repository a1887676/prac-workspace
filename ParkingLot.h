#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
    private:
        Vehicle** vehicles;
        int maxCapacity;
        int currentCount;

    public:
        ParkingLot();
        ParkingLot(int maxCapacity);
        int getCount() const;
        void parkVechicle(Vehicle* newVehicle);
        void unparkVehicle(int id);
        virtual ~ParkingLot();
};

#endif