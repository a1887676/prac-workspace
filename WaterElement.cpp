#include "Pokemon.h"
#include "WaterElement.h"

WaterElement::WaterElement(): weakness(E), immunity(F){}

double WaterElement::damageMultiplier() {
   if(this->weakness==W){
    return 1.5
   }
   return 1;
}
   
char WaterElement::getWeakness() {
    return weakness;
}
char WaterElement::getImmunity() {
    return immunity;
}

virtual void WaterElement::attack(Pokemon* enemy,Pokemon* player) {
    
    int remainingHealth = enemy->getHealth() - (player->getDamage())*(enemy->getDefence())*(enemy->damageMultiplier());
    
    enemy->setHealth(remainingHealth);
}

