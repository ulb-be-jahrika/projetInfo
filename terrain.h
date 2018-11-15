#ifndef TERRAIN_H
#define TERRAIN_H
#include "unit.h"
#include <QImage>

enum TypeOfTerrain {Plain, Mountain, Wood, River, Road, Bridge, Sea, Shoal, Reef, Pipe, Building};
enum TypeOfBuilding {CityBuilding, AirportBuilding, BaseBuilding};
class Terrain
{
private :
    int defense;
    std::map <MoveType, int> mobilityCost;
    TypeOfTerrain type;
    int posX;
    int posY;
    Unit* unitOnTerrain;
    QImage image;

public:
    Terrain(TypeOfTerrain t, int x, int y, QImage img);
    int getPosX() const;
    int getPosY() const;
    int getDefense() const;
    int getMobilityCost(MoveType m) const;
    Unit* unitOnIt() const;
    QImage getImage() const;





};


#endif // TERRAIN_H
