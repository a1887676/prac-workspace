#ifndef HELPER_H
#define HELPER_H

#include <tuple>
#include "GridUnit.h"
#include <random>

class Helper{
    public:
    static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight){
        int randW = rand()%(gridWidth);
        int randH = rand()%(gridHeight);
        std::tuple<int, int> randCord = std::make_tuple(randW, randH);
        return randCord;
    }
    static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
        int x1 = std::get<0>(coords1);
        int y1 = std::get<1>(coords1);
        int x2 = std::get<0>(coords2);
        int y2 = std::get<1>(coords2);
        double distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        return distance;
    }

};
#endif