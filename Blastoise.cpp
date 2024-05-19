#include "Pokemon.h"
#include "WaterElement.h"
#include "Blastoise.h"

Blastoise::Blastoise(): name(Blastoise),health(800),defence(0.8),damage(60),weakness(E),immunity(F){}

Blastoise::Blastoise(std::string name): name(name),health(800),defence(0.8),damage(60),weakness(E),immunity(F){}

Blastoise::~Blastoise(){}

std::string Blastoise::getName(){
    return name;
}