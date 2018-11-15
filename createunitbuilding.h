#ifndef CREATEUNITBUILDING_H
#define CREATEUNITBUILDING_H
#include "terrain.h"




class CreateUnitBuilding : public Terrain{
private:
    //int capturePoints;
    Team team;
    TypeOfBuilding typeOfBuilding;
public:
    CreateUnitBuilding(TypeOfBuilding t, int x, int y, QImage img, Team tm);
    Unit* build(TypeOfUnit t);
};

#endif // CREATEUNITBUILDING_H
