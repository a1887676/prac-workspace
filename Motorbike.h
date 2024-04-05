#ifndef MOTOTRBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
    public:
        using Vehicle::Vehicle;
        ~Motorbike();
        int getParkingDuration() const;
};

#endif