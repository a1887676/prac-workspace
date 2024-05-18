#ifndef WATERLEMENT_H
#define WATERLEMENT_H

class WaterElement : public Pokemon {
    private:
    char weakness;
    char immunity;

   public:
   WaterElement();

   virtual void attack(Pokemon* enemy,Pokemon* player);
   double damageMultiplier(Pokemon* enemy, int damage);
   
   char getWeakness();
   char getImmunity();

    
};

#endif 