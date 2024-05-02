#include <iostream>

#include "Car.h"
#include "Tesla.h"

int main() {

Tesla tesla1(x,50);

tesla1.chargeBattery(2);

std::cout << "The Tesla model: " << tesla1.get_model() << " Battery: " << tesla1.get_batteryPercentage() << " emissions: " << tesla1.drive(5) << std::endl; 

return 0;
}