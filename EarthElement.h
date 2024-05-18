#ifndef EARTHLEMENT_H
#define EARTHLEMENT_H

class EarthElement : public Pokemon {
    private:
    char weakness;
    char immunity;

   public:
   EarthElement();

   virtual void attack(Pokemon* enemy, Pokemon* player);
   double damageMultiplier(Pokemon* enemy, int damage);
   
   char getWeakness();
   char getImmunity();

    
};

#endif 