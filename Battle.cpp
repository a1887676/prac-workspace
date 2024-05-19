#include <iostream> 
#include <string>

#include "Battle.h"


Battle::Battle(): player(),enemy(nullptr){}


Battle::Battle(Trainer player, Pokemon* enemy): player(player), enemy(enemy);

void Battle::playerTurn(){
    std::cout << "Choose to switch Pokemon or attack:  1 - Switch, 2 - attack: " << std::endl;
    int choice;
    std::cin >> choice;

    int loop = 0;
    while(loop==0;) {
    if(choice==1){
        player.choosePokemon();
        loop++;
    }
    
    if(choice==2){
        player.selectedPokemon->attack(enemy,player.selectedPokemon);
        loop++;
    }

    if(choice!=1 || choice!=2){
        std::cout << "Invalid choice" << std::endl;
     }
    }
}

void Battle::computerTurn(){
enemy->attack(player.selectedPokemon,enemy);
}

void Battle::commenceBattle(Trainer player, Pokemon* enemy){
    
    player.choosePokemon();

    while(player.selectedPokemon->getHealth()>0 || enemy->getHealth()>0){
        
        Battle.playerTurn()
        Battle.computerTurn()

        if(selectedPokemon->getHealth()<=0){
            std::cout << "Pokemon has fainted" << std::endl;
            player.choosePokemon();
        }
    }
    if(enemy->getHealth()<=0){
        std::cout << "Player has won!" << std::endl;
    }

    if(player.selected->getHealth()<=0){
        std::cout << "Computer has won!" << std::endl;
    }
}
