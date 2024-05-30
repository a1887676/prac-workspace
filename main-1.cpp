#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include <iostream>

int main(){

    std::tuple<int, int> coords1 = Helper::generateRandomPos(10, 10);
    std::tuple<int, int> coords2 = Helper::generateRandomPos(10, 10);

    double distance = Helper::calculateDistance(coords1, coords2);
    std::cout << "Distance between 1 and 2: " << distance << std::endl;


    return 0;
}