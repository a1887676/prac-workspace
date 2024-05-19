#ifndef BATTLE_H
#define BATTLE_H

#include "Pokemon.h"
#include "Trainer.h"
#include <string>

class Battle {
   private:
   Pokemon** Pokedex;
   Pokemon* enemy;

   public:
   Battle();
   Battle(Pokemon** Pokedex, Pokemon* enemy);
   void playerTurn();
   void computerTurn();
   std::string findWinner();

};

#endif 