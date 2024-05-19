#include "Trainer.h"
#include <iostream>

Trainer::Trainer(): currentPokemon(0),selectedPokemon(nullptr),Pokedex(new Pokemon*[3]){}

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

void Trainer::choosePokemon(){
   int chosen;
   int loop = 0;
    while (loop == 0) {
        std::cout << "Choose a Pokemon: 1 - " << Pokedex[0]->getName() << " 2 - " << Pokedex[1]->getName() << " 3 - " << Pokedex[2]->getName()<< ": ";
        std::cin >> chosen;

        if (chosen >= 1 && chosen <= 3) {
            selectedPokemon = Pokedex[chosen - 1];
            loop++; 
        } else {
            std::cout << "Invalid choice" << std::endl;
        }
    }
}










