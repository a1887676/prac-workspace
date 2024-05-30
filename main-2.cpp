#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
#include <iostream>

int main(){
   Helper helper;

    std::tuple<int, int> coords1 = Helper::generateRandomCoordinates(10, 10);
    std::tuple<int, int> coords2 = Helper::generateRandomCoordinates(10, 10);

    double distance = Helper::calculateDistance(coords1, coords2);
    std::cout << "Distance between coords: " << distance << std::endl;


    Obstacle ob(2, 2);
    Avatar ava(1,1);

    ob.apply(ava);

    return 0;
}