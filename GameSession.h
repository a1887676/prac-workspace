#ifndef GAME_H
#define GAME_H

#include <tuple>
#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
#include <iostream>
#include <vector>

class GameSession{
std::vector<GridUnit*> grid_;

public:
std::vector<GridUnit*>& getGrid(){return grid_;}
//void set_grid(std::vector<GridUnit*> entities){grid_=entities;}

std::vector<GridUnit*> initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){
    for(int i = 0; i < numAvatars;i++){
        std::tuple<int, int> coords = Helper::generateRandomCoordinates(gridWidth, gridHeight);
        int x = std::get<0>(coords);
        int y = std::get<1>(coords);
        grid_.push_back(new Avatar(x,y));
    }
    for(int i = 0; i < numObstacles;i++){
        std::tuple<int, int> coords = Helper::generateRandomCoordinates(gridWidth, gridHeight);
        int x = std::get<0>(coords);
        int y = std::get<1>(coords);
        grid_.push_back(new Obstacle(x,y));
    }
    return grid_;
}

void gameCycle(int maxCycles, double obsatcleActivationDistance){
    int numAvatars=0;
    for(GridUnit* grid:grid_){
        if(grid->getEntity()=='A'){
            numAvatars++;
        }
    }

    bool loop=true;
    int i = 0;
    while(loop==true){
        for(GridUnit* grid:grid_){
        
            if(grid->getEntity()=='A'){
                grid->shift(1,0);

               
                for(GridUnit* grid2:grid_){
                    if(grid2->getEntity()=='O'){
                        if Helper::calculateDistance(grid->getCoordinates(), grid2->getCoordinates())<=obsatcleActivationDistance){
                            std::tuple<int, int> coords= grid->getCoordinates();
                            int x = std::get<0>(coords);
                            int y = std::get<1>(coords);
                            grid2->apply(grid1)
                
                            numAvatars--;
                        }
                    }
                }
            }

        
        if(numAvatars == 0){
            loop=false;
        }
        //Break while loop for max i
        i++;
        if(i == maxCycles){
            loop=false;
        }
    }
    }
}


};

#endif