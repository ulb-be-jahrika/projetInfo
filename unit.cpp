#include "unit.h"

using namespace std;

map<TypeOfUnit, map<TypeOfUnit,int>> Unit:: damagePoints = {{AntiAir, {{AntiAir, 45},
                                                                 {BCopter, 120},
                                                                 {Bomber, 75},
                                                                 {Fighter, 65},
                                                                 {Infantry, 105},
                                                                 {MdTank, 10},
                                                                 {Mech, 105},
                                                                 {MegaTank, 1},
                                                                 {Neotank, 5},
                                                                 {Recon, 60},
                                                                 {Tank, 25}}},
                                                      {BCopter,{{AntiAir, 20},
                                                                {BCopter, 65},
                                                                {Bomber, -1},
                                                                {Fighter, -1},
                                                                {Infantry, 75},
                                                                {MdTank, 25},
                                                                {Mech, 75},
                                                                {MegaTank, 10},
                                                                {Neotank, 20},
                                                                {Recon, 55},
                                                                {Tank, 55}}},
                                                      {Bomber, {{AntiAir, 95},
                                                                {BCopter, -1},
                                                                {Bomber, -1},
                                                                {Fighter, -1},
                                                                {Infantry, 110},
                                                                {MdTank, 95},
                                                                {Mech, 110},
                                                                {MegaTank, 35},
                                                                {Neotank, 90},
                                                                {Recon, 105},
                                                                {Tank, 105}}},
                                                      {Fighter, {{AntiAir, -1},
                                                                 {BCopter, 100},
                                                                 {Bomber, 100},
                                                                 {Fighter, 55},
                                                                 {Infantry, -1},
                                                                 {MdTank, -1},
                                                                 {Mech, -1},
                                                                 {MegaTank, -1},
                                                                 {Neotank, -1},
                                                                 {Recon, -1},
                                                                 {Tank, -1}}},
                                                      {Infantry, {{AntiAir, 5},
                                                                  {BCopter, 7},
                                                                  {Bomber, -1},
                                                                  {Fighter, -1},
                                                                  {Infantry, 55},
                                                                  {MdTank, 1},
                                                                  {Mech, 45},
                                                                  {MegaTank, 1},
                                                                  {Neotank, 1},
                                                                  {Recon, 12},
                                                                  {Tank, 5}}},
                                                      {MdTank, {{AntiAir, 105},
                                                                {BCopter, 12},
                                                                {Bomber, -1},
                                                                {Fighter, -1},
                                                                {Infantry, 105},
                                                                {MdTank, 55},
                                                                {Mech, 95},
                                                                {MegaTank, 25},
                                                                {Neotank, 45},
                                                                {Recon, 105},
                                                                {Tank, 85}}},
                                                      {Mech, {{AntiAir, 65},
                                                              {BCopter, 9},
                                                              {Bomber, -1},
                                                              {Fighter, -1},
                                                              {Infantry, 65},
                                                              {MdTank, 15},
                                                              {Mech, 55},
                                                              {MegaTank, 5},
                                                              {Neotank, 15},
                                                              {Recon, 85},
                                                              {Tank, 55}}},
                                                      {MegaTank, {{AntiAir, 195},
                                                                  {BCopter, 22},
                                                                  {Bomber, -1},
                                                                  {Fighter, -1},
                                                                  {Infantry, 135},
                                                                  {MdTank, 125},
                                                                  {Mech, 125},
                                                                  {MegaTank, 65},
                                                                  {Neotank, 115},
                                                                  {Recon, 195},
                                                                  {Tank, 180}}},
                                                      {Neotank, {{AntiAir, 115},
                                                                 {BCopter, 22},
                                                                 {Bomber, -1},
                                                                 {Fighter, -1},
                                                                 {Infantry, 125},
                                                                 {MdTank, 75},
                                                                 {Mech, 115},
                                                                 {MegaTank, 35},
                                                                 {Neotank, 55},
                                                                 {Recon, 125},
                                                                 {Tank, 105}}},
                                                      {Recon, {{AntiAir, 4},
                                                               {BCopter, 12},
                                                               {Bomber, -1},
                                                               {Fighter, -1},
                                                               {Infantry, 70},
                                                               {MdTank, 1},
                                                               {Mech, 65},
                                                               {MegaTank, 1},
                                                               {Neotank, 1},
                                                               {Recon, 35},
                                                               {Tank, 6}}},
                                                      {Tank, {{AntiAir, 65},
                                                              {BCopter, 10},
                                                              {Bomber, -1},
                                                              {Fighter, -1},
                                                              {Infantry, 75},
                                                              {MdTank, 15},
                                                              {Mech, 70},
                                                              {MegaTank, 10},
                                                              {Neotank, 15},
                                                              {Recon, 85},
                                                              {Tank, 55}}}};

Unit::Unit(TypeOfUnit t, int x, int y, Team tm) : type(t), posX(x), posY(y), team(tm), lifePoints(10), selectable(false)
{
    switch (type) {
    case AntiAir:
        mobilityPoints = 6;
        price = 8000;
        moveType = T;
        break;
    case BCopter:
        mobilityPoints = 6;
        price = 9000;
        moveType = A;
        break;
    case Bomber:
        mobilityPoints = 7;
        price = 22000;
        moveType = A;
        break;
    case Fighter:
        mobilityPoints = 9;
        price = 20000;
        moveType = A;
        break;
    case Infantry:
        mobilityPoints = 3;
        price = 1000;
        moveType = F;
        break;
    case MdTank:
        mobilityPoints = 5;
        price = 16000;
        moveType = T;
        break;
    case Mech:
        mobilityPoints = 2;
        price = 3000;
        moveType = B;
        break;
    case MegaTank:
        mobilityPoints = 4;
        price = 28000;
        moveType = T;
        break;
    case Neotank:
        mobilityPoints = 6;
        price = 22000;
        moveType = T;
        break;
     case Recon:
        mobilityPoints = 8;
        price = 4000;
        moveType = W;
        break;
     case Tank:
        mobilityPoints = 6;
        price = 7000;
        moveType = T;
        break;
    }
}

int Unit::getLifePoints() const
{
    return lifePoints;
}

int Unit::getDamagePoints(TypeOfUnit t) const
{
    return damagePoints[type][t];
}

int Unit::getPosX() const
{
    return posX;
}

int Unit::getPosY() const
{
    return posY;
}

bool Unit::isSelectable() const
{
    return selectable;
}
