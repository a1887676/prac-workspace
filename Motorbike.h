#ifndef MOTOTRBIKE_H
#define MOTORBIKE_H

class Motorbike : public Vehicle {
    public:
        using Vehicle::Vehicle;
        int getParkingDuration() const;
};

#endif