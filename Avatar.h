#ifndef AVATAR_H
#define AVATAR_H

#include "GridUnit.h"

class Avatar : public GridUnit{
    public:
    Avatar(int x, int y): GridUnit(x, y, 'A'){}
    
    void shift(int dx, int dy) {
        int x = std::get<0>(getCoordinates());
        int y = std::get<1>(getCoordinates());
        setCoordinates(x+dx, y+dy);
    }


};


#endif