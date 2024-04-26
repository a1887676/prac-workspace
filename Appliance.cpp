#include <iostream>

#include "Appliance.h" 

Appliance::Appliance() : powerRating(0) , isOn(false){}

Appliance::Appliance(int powerRating) : powerRating(powerRating) , isOn(false){}

void Appliance::turnOn() {
    isOn = true; 
}

void Appliance::turnOff() {
    isOn = false;
}

bool Appliance::get_isOn() {
    return isOn;
}

void Appliance::set_powerRating(int rating){
    powerRating = rating;
}

int Appliance::get_powerRating() {
    return powerRating;
}

double Appliance::getPowerConsumption() {
    return 0.0;
}

Appliance::~Appliance(){}
