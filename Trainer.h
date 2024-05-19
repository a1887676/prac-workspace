#ifndef TRAINER_H
#define TRAINER_H

#include "Pokemon.h"
#include <string>

class Trainer {
   protected:
   Pokemon** Pokedex;
   Pokemon* selectedPokemon;
   int currentPokemon; 
    
   public:
   Trainer();
   void addPokemon(Pokemon* newPokemon);
   void removePokemon(std::string name);
   virtual ~Trainer();
   void choosePokemon()
   
};

#endif 