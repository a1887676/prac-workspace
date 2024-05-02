#include "Tesla.h"

Tesla::Tesla() : model(0), batteryPercentage(0) {}
Tesla::Tesla(char model, float battery) : model(model) {
    if(battery>100) {
        batteryPercentage=100;
    }

    else if(battery<0) {
        batteryPercentage=0;
    }

    else if(batteryPercentage>0 && batteryPercentage<100) {
        batteryPercentage=battery;
    }
} 

void Tesla::chargeBattery(int mins) {
batteryPercentage = get_batteryPercentage()+mins*0.5;

if(batteryPercentage>100) {
    batteryPercentage=100;
 }
}

void Tesla::drive(int kms) {
emissions = 74*(get_batteryPercentage()*5);
}

void Tesla::set_model(char model) {
    this->model = model;
}

void Tesla::set_batteryPercentage(float batteryPercentage) {
    this->batteryPercentage=batteryPercentage;
}

char Tesla::get_model() {
    return model;
}

float Tesla::get_batteryPercentage() {
    return batteryPercentage;
}