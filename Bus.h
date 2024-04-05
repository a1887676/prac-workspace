#ifndef BUS_H
#define BUS_H

class Bus : public Vehicle {
    public:
        using Vehicle::Vehicle
        int getParkingDuration() const;
};

#endif