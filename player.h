#ifndef PLAYER_H
#define PLAYER_H
#include <unit.h>
#include <vector>

class Player{
private:
    Team team;
    int money;
    std::vector<Unit*> units;
public:
    Player(Team t);
    void setMoney(int m);
    void addUnit(Unit* u);
    void deleteUnit(Unit* u);

};

#endif // PLAYER_H
