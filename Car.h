#ifndef CAR_H
#define CAR_H

class Car {
 protected:
 int price;
 int emissions;

 public: 
 Car();
 Car(int price);
 virtual void drive(int kms); 
 int get_price();
 int get_emissions();
~Car();
};

#endif 