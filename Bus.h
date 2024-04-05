#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle {
    public:
        using Vehicle::Vehicle;
         ~Bus();
        int getParkingDuration() const;
};

#endif