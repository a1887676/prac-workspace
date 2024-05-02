#include "Car.h"

Car::Car() : price(0) , emissions(0) {}

Car::Car(int price) : price(price) , emissions(0) {}

void Car::drive(int kms) {
    emissions = 20*kms;
}

int Car::get_price() {
    return price;
}

int Car::get_emissions() {
    return emissions;
}

Car::~Car() {}