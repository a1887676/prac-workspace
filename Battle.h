#ifndef BATTLE_H
#define BATTLE_H

#include "Pokemon.h"
#include "Trainer.h"
#include <string>

class Battle {
   private:
   Trainer player;
   Pokemon* enemy;

   public:
   Battle();
   Battle(Trainer player, Pokemon* enemy);
   void playerTurn();
   void computerTurn();
   void commenceBattle(Trainer player, Pokemon* enemy);
   std::string findWinner();
   

};

#endif 