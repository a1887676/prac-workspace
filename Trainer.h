#ifndef TRAINER_H
#define TRAINER_H

#include "Pokemon.h"
#include <string>

class Trainer {
   private:
   Pokemon** Pokedex;
   int currentPokemon;
    
   public:
   Trainer();
   void addPokemon(Pokemon* newPokemon);
   void removePokemon(std::string name);
   virtual ~Trainer();
   
};

#endif 