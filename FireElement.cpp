#include "Pokemon.h"
#include "FireElement.h"

FireElement::FireElement(): Pokemon(), weakness(W), immunity(E){}

double FireElement::damageMultiplier() {
   if(this->weakness==F){
    return 1.5
   }
   return 1;
}
   
char FireElement::getWeakness() {
    return weakness;
}
char FireElement::getImmunity() {
    return immunity;
}

virtual void FireElement::attack(Pokemon* enemy,Pokemon* player) {
    player->setDamage(player->getDamage()*1.1);
    
    int remainingHealth = enemy->getHealth() - (player->getDamage())*(enemy->getDefence())*(enemy->damageMultiplier());
    
    enemy->setHealth(remainingHealth);
}

