#ifndef CITY_H
#define CITY_H
#include "terrain.h"

class City : public Terrain{
private:
    int capturePoints;
    Team team;
    TypeOfBuilding typeOfBuilding;
public:
    City(int x, int y, QImage img, Team tm);
};



#endif // CITY_H
