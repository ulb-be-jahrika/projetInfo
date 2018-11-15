#include "airport.h"

using namespace std;

vector<TypeOfUnit> Airport::ableToBuild = {BCopter, Bomber, Fighter};

Airport::Airport(int x, int y, QImage img, Team tm) : Terrain (Building, x, y, img), typeOfBuilding(AirportBuilding), team(tm)
{

}
