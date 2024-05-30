#ifndef GRIDUNIT_H
#define GRIDUNIT_H

#include <tuple>

class GridUnit{
private:
std::tuple<int, int> coordinates_;
char entity_;

public:
GridUnit(int x, int y, char entity): coordinates_(x,y), entity_(entity){}
std::tuple<int, int> getCoordinates(){return coordinates_;}
void setCoordinates(int x, int y){coordinates_ = std::make_tuple(x, y);}
char getEntity(){return entity_;}
void setEntity(char e){entity_ = e;}

};

#endif

