#ifndef FIREELEMENT_H
#define FIREELEMENT_H

class FireElement : public Pokemon {
    private:
    char weakness;
    char immunity;

   public:
   FireElement();

   virtual void attack(Pokemon* enemy,Pokemon* player);
   double damageMultiplier(Pokemon* enemy, int damage);
   
   char getWeakness();
   char getImmunity();

       
};

#endif 