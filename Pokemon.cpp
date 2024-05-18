#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon() : health(0),defence(0),damage(0){}
Pokemon::Pokemon(int health, int defence, int damage, char element) : health(health),defence(defence){}

int Pokemon::getHealth() {
    return health;
}

int Pokemon::getDefence(){
    return defence;
}
    
int Pokemon::getDamage(){
    return damage;
}

void Pokemon::setHealth(int health) {
    this->health=health;
}
    
void Pokemon::setDefence(int defence){
    this->defence=defence;
}
    
void Pokemon::setDamage(int damage){
    this->damage=damage;
}

Pokemon::~Pokemon(){}

