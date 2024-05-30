#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GridUnit.h"
#include "Modifier.h"

class Obstacle : public GridUnit, public Modifier{
    public:
    Obstacle(int x, int y): GridUnit(x, y, 'O'){}
    
    bool active;

    bool isActive(){return active;}

    void apply(GridUnit& unit){
        unit.setEntity('O');
    }
    

};


#endif