#ifndef GAME_H
#define GAME_H
#include <vector>
#include "terrain.h"
#include "unit.h"
#include "base.h"
#include "airport.h"
#include "city.h"
#include <string.h>
#include "cursor.h"

class Game{
private:
    //std::vector<Unit> BlueMoon;
    //std::vector<Unit> OrangeStar;
    std::vector<std::vector<Terrain*>> mapMatrix;
    void mapDesign(const std::string str);
    Cursor* cursor;


public:
    Game(const std::string str);
    std::vector<std::vector<Terrain*>> getMapMatrix() const;
    Cursor* getCursor() const;
};

#endif // GAME_H
