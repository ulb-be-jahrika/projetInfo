#include "player.h"
#include <algorithm>

using namespace std;

Player::Player(Team t) : team(t), money(5000)
{

}

void Player::setMoney(int m)
{
    if (money >= m){
        money += m;
    }
}

void Player::addUnit(Unit* u)
{
    units.push_back(u);
}

void Player::deleteUnit(Unit* u)
{
    vector<Unit*>::iterator it = find(units.begin(), units.end(), u);
    units.erase(it);
    delete u;
}
