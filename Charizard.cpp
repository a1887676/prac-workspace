#include "Pokemon.h"
#include "FireElement.h"
#include "Charizard.h"

Charizard::Charizard(): name(Charizard),health(250),defence(0.9),damage(150),weakness(W),immunity(E){}

Charizard::Charizard(std::string name): name(name),health(250),defence(0.9),damage(150),weakness(W),immunity(E){}

Charizard::~Charizard(){}

std::string Charizard::getName(){
    return name;
}