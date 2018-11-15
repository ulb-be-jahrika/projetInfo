#ifndef AIRPORT_H
#define AIRPORT_H
#include "terrain.h"

class Airport : public Terrain{
private:
    //int capturePoints;
    static std::vector<TypeOfUnit> ableToBuild;
    Team team;
    TypeOfBuilding typeOfBuilding;
public:
    Airport(int x, int y, QImage img, Team tm);
    Unit* build(TypeOfUnit t);
};

#endif // AIRPORT_H
