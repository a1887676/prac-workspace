#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon() : health(0),defence(0),damage(0){}
Pokemon::Pokemon(int health, double defence, int damage) : health(health),defence(defence), damage(damage){}

int Pokemon::getHealth() {
    return health;
}

double Pokemon::getDefence(){
    return defence;
}
    
int Pokemon::getDamage(){
    return damage;
}

void Pokemon::setHealth(int health) {
    this->health=health;
}
    
void Pokemon::setDefence(double defence){
    this->defence=defence;
}
    
void Pokemon::setDamage(int damage){
    this->damage=damage;
}

Pokemon::~Pokemon(){}

