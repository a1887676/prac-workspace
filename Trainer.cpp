#include "Trainer.h"
#include <iostream>

Trainer::Trainer(): maxPokemon(3),currentPokemon(0),Pokedex(new Pokemon*[3]){}

void Trainer::addPokemon(Pokemon* newPokemon){
    if(currentPokemon<3){
        Pokedex[currentPokemon++] = newPokemon;
    }else{
        std::cout << "The Pokedex is full" << std::endl;
    }
}
   
void Trainer::removePokemon(std::string name) {
    for(int i=0;i<currentPokemon;i++) {
        if(Pokedex[i]->getName() == name) {
            delete Pokedex[i];
            for(int j=i;j<currentPokemon-1;j++) {
                Pokedex[j]=Pokedex[j+1];
            }
currentPokemon--;
Pokedex[currentPokemon] = nullptr;
return;
        }
    }
std::cout << "Pokemon not in the Pokedex" << std::endl;
}
   
Trainer::~Trainer(){
    for(int i=0;i<currentPokemon;i++){
        delete Pokedex[i];
    }
    delete[] Pokedex;
}
