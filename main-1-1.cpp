#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h" 
#include "Bus.h"

int main() {

int numMB, numCar, numBus;

std::cout << "Number of Motorbikes: ";
std:: >> numMB;
std::cout << "Number of Cars: ";
std:: >> numCar;
std::cout << "Number of Buses: ";
std:: >> numBus;

int totalVehicles = numBus + numCar + numMB;
Vehicle* VehicleArr[totalVehicles];

for(int i=0;i<totalVehicles;i++) {
    int enteredID;
    std::cout << "Enter ID: ";
    std::cin >> enteredID;

    char vehicleType;
    std::cout << "Enter type of vehicle C = Car, B = Bus, M = Motorbike : ";
    std::cint >> vehicleType;

    switch(vehicleType) {
        
        case 'C':
        VehicleArr[i] = new Car(enteredID);
        break;
        
        case 'B':
        VehicleArr[i] = new Bus(enteredID);
        break;

        case 'M':
        VehicleArr[i] = new Motorbike(enteredID);
        break;

        default: 
        std::cout << "Not a valid type" << std::endl;
        i--;
        break;
    }
}


for(int i=0;i<totalVehicles;i++) {
    std::cout << "Vehicle ID: " << VehicleArr[i]->getID();
    std::cout << ", Parked for: " << VehicleArr[i]->getParkingDuration();
    std::cout << " seconds" << std::endl;
}

for(int i=0;i<totalVehicles;i++) {
    delete VehicleArr[i];
}

return 0;
}