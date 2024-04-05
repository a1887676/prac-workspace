#ifndef CAR_H
#define CAR_H

class Car : public Vehicle {
    public:
        using Vehicle::Vehicle;
        int getParkingDuration() const;
};

#endif
