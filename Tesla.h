#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
 private:
 char model;
 float batteryPercentage;

 public: 
 Tesla();
 Tesla(char model, float batteryPercentage);
 void chargeBattery(int mins);
 void drive(int kms);
 
 void set_model(char model);
 void set_batteryPercentage(float batteryPercentage);
 
 char get_model();
 float get_batteryPercentage();

};

#endif 