#include <iostream>

#include "Appliance.h"

int main() {

Appliance Appliance1(1001);
Appliance Appliance2(1000);

Appliance1.set_powerRating(458);
Appliance1.turnOn();

std::cout << "Appliance 1 has power rating: " << Appliance1.get_powerRating() << " , isOn: " << Appliance1.get_isOn() << " , Power consumption: " << Appliance1.getPowerConsumption() << std::endl;
std::cout << "Appliance 2 has power rating: " << Appliance2.get_powerRating() << " , isOn: " << Appliance2.get_isOn() << " , Power consumption: " << Appliance2.getPowerConsumption() << std::endl;

return 0;
}