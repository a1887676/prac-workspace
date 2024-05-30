#include "GameSession.h"
#include <iostream>

int main(){

    GameSession game;

    game.initGameSession(3, 3, 20, 20);
    game.gameCycle(20,1);


    return 0;
}