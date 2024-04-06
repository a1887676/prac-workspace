#include <iostream>
#include "ParkingLot.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
ParkingLot lot1(10);

while(lot1.getCount()<10) {
 int enteredID;
    std::cout << "Enter ID: ";
    std::cin >> enteredID;

    char vehicleType;
    std::cout << "Enter type of vehicle C = Car, B = Bus, M = Motorbike : ";
    std::cin >> vehicleType;

    Vehicle* newVehicle;
    switch(vehicleType) {
        case 'C':
        newVehicle = new Car(enteredID);
        break;
        
        case 'B':
        newVehicle = new Bus(enteredID);
        break;

        case 'M':
        newVehicle = new Motorbike(enteredID);
        break;

        default: 
        std::cout << "Not a valid type" << std::endl;
        break;
    }
lot1.parkVehicle(newVehicle);
}


std::cout << "Num vehicles overstaying: " << lot1.countOverstayingVehicles(15) << std::endl;

return 0;
}


