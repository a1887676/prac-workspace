#include "Pokemon.h"
#include "EarthElement.h"

EarthElement::EarthElement(): weakness(F), immunity(W){}

double EarthElement::damageMultiplier() {
   if(this->weakness==E){
    return 1.5
   }
   return 1;
}
   
char EarthElement::getWeakness() {
    return weakness;
}
char EarthElement::getImmunity() {
    return immunity;
}

virtual void EarthElement::attack(Pokemon* enemy,Pokemon* player) {
    player->setDefence(player->getDefence()*1.2);
    
    int remainingHealth = enemy->getHealth() - (player->getDamage())*(enemy->getDefence())*(enemy->damageMultiplier());
    
    enemy->setHealth(remainingHealth);
}

