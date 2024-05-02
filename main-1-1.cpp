#include <iostream>

#include "Car.h"

int main() {

Car car1(5000);
car1.drive(10);

std::cout << "The price of car is:" << car1.get_price() << "The emissions after 10km: " << car1.get_emissions() << std::endl;
return 0;    
}