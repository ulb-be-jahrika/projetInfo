#ifndef BASE_H
#define BASE_H
#include "terrain.h"

class Base : public Terrain{
private:
    //int capturePoints;
    static std::vector<TypeOfUnit> ableToBuild;
    Team team;
    TypeOfBuilding typeOfBuilding;
public:
    Base(int x, int y, QImage img, Team tm);
    Unit* build(TypeOfUnit t);
};

#endif // BASE_H
